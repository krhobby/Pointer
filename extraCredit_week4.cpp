// extraCredit_week4.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Kristina Hobby

#include <iostream>

using namespace std;

int main()
{
    int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
    int b;
    int first;
    int second;
    bool hit = false;
    
    cout << "Enter 10 unique integers: ";

    cin >> a1 >> a2 >> a3 >> a4 >> a5 >> a6 >> a7 >> a8 >> a9 >> a10;

    //cout << a1 << a2 << a3 << a4 << a5 << a6 << a7 << a8 << a9 << a10;

    cout << "Enter an integer: ";
    cin >> b;

    for (int i = 0; i < 10; ++i)
    {
        for (int j = i + 1; j < 10; ++j)
        {
            switch (i)
            {

                case 0:
                    first = a1;
                    break;
                case 1:
                    first = a2;
                    break;
                case 2:
                    first = a3;
                    break;
                case 3:
                    first = a4;
                    break;
                case 4:
                    first = a5;
                    break;
                case 5:
                    first = a6;
                    break;
                case 6:
                    first = a7;
                    break;
                case 7:
                    first = a8;
                    break;
                case 8:
                    first = a9;
                    break;
                case 9:
                    first = a10;
                    break;
            }
            switch (j)
            {
                case 0:
                    second = a1;
                    break;
                case 1:
                    second = a2;
                    break;
                case 2:
                    second = a3;
                    break;
                case 3:
                    second = a4;
                    break;
                case 4:
                    second = a5;
                    break;
                case 5:
                    second = a6;
                    break;
                case 6:
                    second = a7;
                    break;
                case 7:
                    second = a8;
                    break;
                case 8:
                    second = a9;
                    break;
                case 9:
                    second = a10;
                    break;
            }
            if (first + second == b)
            {
                hit = true;
                cout << "(" << first << ", " << second << ")\n";
            }
        }
    }
    if (hit == false)
    {
        cout << "not found.\n";
    }

    return 0;
}


