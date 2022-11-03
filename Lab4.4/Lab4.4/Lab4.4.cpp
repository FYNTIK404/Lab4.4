// Lab4.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

    int a[20];
    int i, n;


    cout << "Enter the number of elements\n ";
    cin >> n;


    cout << "Entering elements\n";
    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 0; i < n; i++)
        cout << "a[" << i << "]=" << a[i] << endl;

    int multiple2 = 0;
    for (i = 0; i < n; i++)
    {
        multiple2 = a[i] * 2;
        cout << "Array [" << i << "] multiplied by two:" << multiple2 << endl;
    }

    cin;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
