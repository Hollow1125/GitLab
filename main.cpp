#include <iostream>
#include <fstream>
#include <string>
#include "ReadingFromFile.h"
#include "Printing.h"
#include "WritingToFile.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");


    ReadingFromFile();
    Printing(text);
    WritingToFile(text);

}
