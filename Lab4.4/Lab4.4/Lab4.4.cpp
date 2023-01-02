// Lab4.4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

    int a[10];
    int i, n;


    cout << "Enter the number of elements\n ";
    cin >> n;


    cout << "Entering elements\n";
    for (i = 0; i < n; i++)
        cin >> a[i];

    for (i = 0; i < n; i++)
        cout << "a[" << i << "]=" << a[i] << endl;

    int Division2 = 0;
    for (i = 0; i < n; i++)
    {
        Division2 = a[i] * 2;
        cout << "Array [" << i << "] Multiplied by two:" << Division2 << endl;
    }
   int Sum = 0;
    int Sum1 = 0;
   for (i = 0; i < n; i++) 
   {
       if (a[i] > 0)
       {
           Sum = a[i] + Sum;
       }
       if (a[i] > 0)
       { 
           cout << "Array [" << i << "]Dilyatsia na 2:" << a[i] << endl; 
    
       }
       if (a[i] < 0)
       {
           cout << "Array [" << i << "] Chucla menshe nylia:" << a[i] << endl;

       }    
       Sum1 = Sum1 = a[i];
   }
   cout << Sum1 << endl;
   cout << "Syma elementiv sho bilshe nylia:" << Sum << endl;
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


