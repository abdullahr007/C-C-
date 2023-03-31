/*
MB-213-A
a13 p2.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/
#include <fstream>
#include "Complex.h"

using namespace std;
int main()
{
    Complex a, b;

    // Ouput and input streams
    ifstream in1("in1.txt");
    ifstream in2("in2.txt");
    ofstream out("output.txt");

    // Get the numbers from the files
    in1 >> a;
    in2 >> b;
    
    //calculations
    Complex sum, dif, prod;
    sum = a + b;
    dif = a - b;
    prod = a * b;

    // Output
    cout << "Sum: " << sum << endl;
    out << "Sum: " << sum << endl;

    cout << "Dif: " << dif << endl;
    out << "Dif: " << dif << endl;

    cout << "Prod: " << prod << endl;
    out << "Prod: " << prod << endl;

    return 0;
}