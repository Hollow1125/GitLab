#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "ReadingFromFile.h"
#include "Printing.h"
#include "WritingToFile.h"

using namespace std;



int main()
{
    setlocale(LC_ALL, "Rus");

    vector<string> text;
    ReadingFromFile(text);
    Printing();
    WritingToFile();

}
