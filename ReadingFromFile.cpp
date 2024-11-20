#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <windows.h>
#include "ReadingFromFile.h"
#include "Printing.h"
#include "WritingToFile.h"

using namespace std;

void ReadingFromFile()
{
    setlocale(LC_ALL, "Rus");

    vector<string> text;
    ifstream in("file.txt");
    string row;
    while(!in.eof())
    {
        getline(in, row);
        text.push_back(row);
    }
    in.close();
}
