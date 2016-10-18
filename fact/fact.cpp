#include <fstream>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("factsis.txt", ifstream::in);

    fin.close();

    ofstream fout;
    fout.open("factval.txt", ofstream::out);

    fout.close();

    return 0;
}
