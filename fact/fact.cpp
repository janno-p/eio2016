#include <fstream>
#include <stdint.h>
#include <cstring>

using namespace std;

int numPrimes = 168;
int primes[] = {
    2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97,
    101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199,
    211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293,
    307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397,
    401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499,
    503, 509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 587, 593, 599,
    601, 607, 613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683, 691,
    701, 709, 719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797,
    809, 811, 821, 823, 827, 829, 839, 853, 857, 859, 863, 877, 881, 883, 887,
    907, 911, 919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997
};

int twos[] = { 2, 4, 4, 6, 8, 8, 8, 10, 12, 12, 14, 16, 16, 16, 16, 18, 20, 20, 22 };
int threes[] = { 3, 6, 9, 9, 12, 15, 18, 18, 21, 24, 27, 27 };
int fives[] = { 5, 10, 15, 20, 25, 25, 30, 35 };

int getValue(int n, int pow)
{
    if (n == 2) return twos[pow - 1];
    if (n == 3) return threes[pow - 1];
    if (n == 5) return fives[pow - 1];
    return n * pow;
}

int calcS(int* table, int n)
{
    if (table[n] != 0) return table[n];

    int f = 0;
    for (int pi = 0; pi < numPrimes; pi++) {
        int p = primes[pi];
        if (n % p == 0) { f = p; break; }
        if ((n / p) < p) break;
    }

    if (f == 0) {
        table[n] = n;
        return n;
    }

    int c = 0;
    int v = n;
    while (v % f == 0) { c++; v /= f; }

    int s = getValue(f, c);

    table[n] = v == 1 ? s : max(s, calcS(table, v));

    return table[n];
}

int main()
{
    int a, b;

    ifstream fin;
    fin.open("factsis.txt", ifstream::in);
    fin >> a >> b;
    fin.close();

    int tableSize = b + 1;
    int* table = new int[tableSize];
    memset(table, 0, tableSize * sizeof(int));

    for (int i = 0; i < numPrimes; i++) {
        int p = primes[i];
        if (p >= tableSize) break;
        table[p] = p;
    }

    int64_t score = 0;
    for (int n = a; n <= b; n++)
        score += (int64_t)calcS(table, n);

    ofstream fout;
    fout.open("factval.txt", ofstream::out);
    fout << score << endl;
    fout.close();

    delete [] table;

    return 0;
}
