#include <iostream>
#include <fstream>
#include <iterator>
#include <string>
#include "ReadingFromFile.h"
#include "Printing.h"
#include "WritingToFile.h"

using namespace std;

void WritingToFile(vector<string> &text)
{
    setlocale(LC_ALL, "Rus");

    ofstream out(L"outfile.txt");
    ostream_iterator<string> out_iterator(out, "\n");
    copy(text.begin(), text.end(), out_iterator);
    out.close();
}
