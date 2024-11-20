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

    vector<std::string> text;
    ReadingFromFile(text);
    Printing();
    WritingToFile();

}
