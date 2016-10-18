#include <fstream>
#include <string>
#include <limits>
#include <iostream>
#include <cctype>

using namespace std;

void getParagraph(ifstream& fin, string& buffer)
{
    buffer.clear();

    string line;
    do
    {
        getline(fin, line);
        for (auto it = line.begin(); it != line.end(); it++)
        {
            char c = *it;
            if (c == ' ' || c == '\r' || c == '\n') continue;
            buffer += tolower(c);
        }
    } while (line.length() > 0);
}

int analyse(string& str)
{
    int length = str.length();
    if (length < 4)
        return 0;

    auto normA = [=](int a) -> int { return a < 0 ? length - 1 : a; };
    auto normB = [=](int b) -> int { return b >= length ? 0 : b; };

    auto g = [=, &str](int a, int b) -> int
    {
        int score = 0;
        int a_ = a;
        int b_ = b;
        while (str[a_] == str[b_] && a != b_ && b != a_)
        {
            score += 2;
            a_ = normA(a_ - 1);
            b_ = normB(b_ + 1);
        }
        return score;
    };

    int value = 0;

    for (int origin = 0; origin < length; origin++)
    {
        int a = normA(origin - 1);
        int b = normB(origin + 1);
        value = max(value, g(a, b) + 1);
        if (str[origin] == str[b])
            value = max(value, g(a, normB(b + 1)) + 2);
    }

    return value;
}

int main()
{
    ifstream fin;
    fin.open("milsis.txt", ifstream::in);

    int score = 1;
    string buf;

    for (int i = 0; i < 20; i++)
    {
        getParagraph(fin, buf);

        int value = analyse(buf);
        if (value >= 4)
            score = 2 * score + value;
    }

    fin.close();

    ofstream fout;
    fout.open("milval.txt", ofstream::out);
    fout << score << endl;
    fout.close();

    return 0;
}
