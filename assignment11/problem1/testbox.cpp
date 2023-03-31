#include <iostream>
#include "Box.h"

/*
MB-213-A
a11 p1.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

using namespace std;
int main()
{
    // Get n
    int n;
    cin >> n;

    // Create array of boxes
    Box *boxes = new Box[2 * n];

    // Read the first n boxes
    for (int i = 0; i < n; ++i)
    {
        cout << "enter data for box number " << i + 1 << "."<< endl ;
        int height, width, depth;

        cout << "height" << ": ";
        cin >> height;

        cout << "width" << ": ";
        cin  >> width;

        cout << "depth" << ": ";
        cin >> depth;

        boxes[i] = *new Box(height, width, depth);

        cout << endl;
    }

    cout << "\n\n";

    // Copy the n boxes to the next n positions
    for (int i = n; i < 2 * n; ++i)
    {
        cout << "Creating box number " << i + 1 << " using box number ";
        cout << i - n + 1 << ".\n";
        boxes[i] = *new Box(boxes[i - n]);
    }

    cout << "\n\n";

    // Print the volume 
    for (int i = 0; i < 2 * n; ++i)
    {
        cout << "The volume of box number " << i + 1 << " is: ";
        cout << boxes[i].getVolume() << ".\n";
    }

    // delete 
    delete boxes;

    return 0;
}