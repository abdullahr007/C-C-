/*
MB-213-A
a13 p1.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

#include <fstream>
#include <iostream>
#include <string>

int main()
{
    // Get the file name 
    std::string fileName;
    std::cin >> fileName;

    // Open the file to be read and copy file
    std::ifstream in(fileName);
    // Check if the file name was valid
    if (!in.is_open()) return 1;

    fileName.resize(fileName.size() - 4); // Get rid of '.txt' to add '_copy'
    std::ofstream out(fileName + "_copy.txt");

    // Read the file line by line
    std::string line;
    while (std::getline(in, line))
    {
        // Put the line in the copy file
        out << line;
        if (!in.eof()) // If it is not the end of file put a new line
            out << "\n";
    }

    in.close();
    out.close();

    return 0;
}