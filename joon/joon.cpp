#include <fstream>
#include <cmath>
#include <stdint.h>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("joonsis.txt", ifstream::in);

    int64_t num;
    fin >> num;
    fin.close();

    int64_t size = (int64_t)sqrtl(num);
    int64_t base = 1 + size;
    int64_t origin = base * base - 1;
    int64_t rem = origin - num;

    int64_t n1 = 1;
    int64_t n2 = size + 1;
    int64_t diff = rem - size;
    if (diff >= 0) {
        n1 = n2;
        n2 -= diff;
    } else {
        n1 += (size + diff);
    }

    int64_t x = size % 2 == 0 ? n2 : n1;
    int64_t y = size % 2 == 0 ? n1 : n2;

    ofstream fout;
    fout.open("joonval.txt", ofstream::out);
    fout << x << " " << y << endl;
    fout.close();

    return 0;
}
