#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "ReadingFromFile.h"
#include "Printing.h"


using namespace std;


void Printing(vector<string> &text)
{
    setlocale(LC_ALL, "Rus");

    ReadingFromFile(text);
    for (auto x : text)
    {
        cout << x << endl;
    }
}


