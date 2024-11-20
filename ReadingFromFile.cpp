#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "ReadingFromFile.h"


using namespace std;

void ReadingFromFile(vector<string> &text)
{
    setlocale(LC_ALL, "Rus");

    ifstream in("file.txt");
    string row;
    while(!in.eof())
    {
        getline(in, row);
        if(!in.good()) break;
        text.push_back(row);
    }
    in.close();
    for(auto x: text)
    {
        cout << x << endl;
    }
}

