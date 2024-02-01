// Conversion program
// Extra credit
// Kristina Hobby

#include <iostream>
#include <iomanip>

using namespace std;

//menu function
void displayMenu()
{
    cout << "\t\t\tWelcome to the Conversion Program\n";
    cout << "\t\t\t ===============================\n";
    cout << "1. Fahrenheit to Celsius\n";
    cout << "2. Miles to kilometers\n";
    cout << "3. Liters to Gallons\n";
    cout << "4. Exit from the program\n";
}

//F to C degree function
double farenheitToCelsius(double fTemp)
{
    return ((fTemp - 32.0) * (5.0 / 9.0));
}
//miles to km function
double milesToKilometers(double miles)
{
    return (miles / 1.609);
}
//liters to gal function
double litersToGallons(double liters)
{
    return (liters / 3.785);
}

int main()
{   //local variables
    int choice;
    double fTemp;
    double miles;
    double liters;

    //displays menu
    displayMenu();

    //enter choice for loop
    cin >> choice;

    //loop through options until quit
    while (choice != 4)
    {   //invalid choice
        if (choice > 4 || choice < 1)
        {
            cout << "Enter a valid option.\n";
        }//Temp conversion
        if (choice == 1)
        {
            cout << "Enter degrees in Fahrenheit: ";
            cin >> fTemp;
            cout << "Temerature in Celsius: " <<fixed << setprecision(2) << farenheitToCelsius(fTemp) << " degrees\n\n";
        }//miles to km
        if (choice == 2)
        {
            cout << "Enter miles: ";
            cin >> miles;
            cout << miles << " miles is: " << fixed << setprecision(2) << milesToKilometers(miles) << " kilometers\n\n";
        }//liters to gallons
        if (choice == 3)
        {
            cout << "Enter liters: ";
            cin >> liters;
            cout << liters << " liters in gallons is: " << fixed << setprecision(2) << litersToGallons(liters) << " gallons\n\n";
        }

        //clear buffer
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        //repeat menu
        displayMenu();
        cin >> choice;
 
    }
    
    return 0;
}


