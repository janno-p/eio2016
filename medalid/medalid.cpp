#include <cstring>
#include <fstream>
#include <limits>
#include <tuple>
#include <vector>

using namespace std;

const int MAX_NUM = 1000;

void getNumberCounts(int* numberCounts)
{
    ifstream fin;
    fin.open("medalidsis.txt", ifstream::in);

    int numCases;
    fin >> numCases;
    fin.ignore(numeric_limits<streamsize>::max(), '\n');

    int current;
    memset(numberCounts, 0, MAX_NUM * sizeof(int));

    for (int i = 0; i < numCases; i++)
    {
        fin >> current;
        numberCounts[current - 1]++;
    }

    fin.close();
}

void getSeries(int* numberCounts, vector<tuple<int, int>>& series)
{
    for (int startNum = 0; startNum < MAX_NUM; startNum++)
    {
        if (numberCounts[startNum] == 0)
            continue;

        int serieStart = startNum;
        numberCounts[serieStart]--;

        int serieEnd;
        for (serieEnd = serieStart + 1; serieEnd < MAX_NUM; serieEnd++)
        {
            if (numberCounts[serieEnd] == 0) break;
            numberCounts[serieEnd]--;
        }

        series.push_back(make_tuple(serieStart, serieEnd));
    }
}

void writeResult(vector<tuple<int, int>>& series)
{
    ofstream fout;
    fout.open("medalidval.txt", ofstream::out);

    fout << series.size() << endl;
    for (auto it = series.begin(); it != series.end(); it++)
    {
        int serieStart = get<0>((*it));
        int serieEnd = get<1>((*it));

        fout << (serieEnd - serieStart);

        for (int i = serieStart; i < serieEnd; i++)
            fout << " " << (i + 1);

        fout << endl;
    }
}

int main()
{
    int numberCounts[MAX_NUM];
    getNumberCounts(numberCounts);

    vector<tuple<int, int>> series;
    getSeries(numberCounts, series);

    writeResult(series);

    return 0;
}
