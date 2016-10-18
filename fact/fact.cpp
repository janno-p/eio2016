#include <fstream>
#include <stdint.h>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int64_t a, b;

    ifstream fin;
    fin.open("factsis.txt", ifstream::in);
    fin >> a >> b;
    fin.close();

    vector<int64_t> knownPrimes;
    knownPrimes.push_back(2);

    auto isPrime = [&](int64_t x) -> bool {
        int64_t m = (int64_t)sqrtl(x);
        for (auto it = knownPrimes.begin(); it != knownPrimes.end(); it++)
        {
            if ((*it) > m) break;
            if (x % (*it) == 0) return false;
        }
        if (x > (*(knownPrimes.rbegin()))) knownPrimes.push_back(x);
        return true;
    };

    auto initPrimeGen = [&]() {
        int64_t current = 1;
        return [=, &knownPrimes, &isPrime]() mutable -> int64_t {
            while (current <= 1000000)
            {
                current += 1;
                if (!isPrime(current)) continue;
                return current;
            }
            return 0;
        };
    };

    auto s = [&](int64_t x) -> int64_t {
        if (x == 1) return 1;

        vector<int64_t> factors;

        auto nextPrime = initPrimeGen();

        auto rem = x;
        while (rem > 1)
        {
            auto p = nextPrime();
            while (p > 0 && rem % p == 0)
            {
                factors.push_back(p);
                rem /= p;
            }
        }

        int64_t fact = 0, extra = 0, num = 0, maxNum = 0;

        for (auto it = factors.begin(); it != factors.end(); it++)
        {
            auto newFact = *it;

            if (newFact != fact)
            {
                maxNum = max(maxNum, num);
                extra = num = 0;
                fact = newFact;
            }

            if (extra > 0)
            {
                extra--;
                continue;
            }

            num += fact;

            auto d = num / fact;
            while (d % fact == 0)
            {
                d /= fact;
                extra++;
            }
        }

        return max(maxNum, num);
    };

    int64_t score = 0;

    for (int64_t x = a; x <= b; x++)
        score += s(x);

    ofstream fout;
    fout.open("factval.txt", ofstream::out);
    fout << score << endl;
    fout.close();

    return 0;
}
