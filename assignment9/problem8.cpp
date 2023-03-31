#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
/*
MB-213-A
a9 p8.[c or cpp or h]
Abdullah Rafqiue
arafique@jacobs-university.de
*/

using namespace std ;

void subtract_max(int *array, int n)
{
    // maximum value
    int max = array[0];
    for (int i = 0; i < n; ++i)
     {
        if (max < array[i])
            max = array[i];
     }

    // Subtracting
    for (int i = 0; i < n; ++i)
     {
        array[i] -= max;
     }
}

void deallocate(int *array)
{
    delete[] array;
}

int main()
{
    //Input
    int n;
    cin >> n;

    int *array = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> array[i];
    }

    //  before the effect
    cout << "Before\n";
    for (int i = 0; i < n; ++i)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    // Apply the effects
    subtract_max(array, n);

    // After the effect
    cout << "After\n";
    for (int i = 0; i < n; ++i)
    {
        cout << array[i] << " ";
    }
    cout << endl;

    deallocate(array);

    return 0;
}
