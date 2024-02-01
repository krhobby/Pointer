//CSE 100 Midterm Exam 1 - Sept. 19, 2022
//This program generates a bill for the cell company "Phony System" for business and regular customers 
//for customers various amounts of minutes used on within the contracted amounts.
//Kristina Hobby

#include <limits>
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char choice;                    //menu options
    bool isExit = false;            //sentry
    string number;                  //phone number
    int minutes = 0;                //minutes used
    double stage1 = 0.0;            //stores stage 1 charges
    double stage2 = 0.0;            //stores stage 2 charges
    double subtotal = 0.0;          //Subtotal
    double total = 0.0;             //final total
    double tax = 0.0;               //calculated tax value
    const double busBase = 99.99;   //base charge for business
    const double regBase = 29.99;   //base charge for regular

    //run until input 3
    while(!isExit)
    {
        //prompt input for billing menu
        cout << "Welcome to Phony System 1.0\n";
        cout << "-------------------------------------\n";
        cout << "1. Compute Bill for Business Customer\n";
        cout << "2. Compute Bill for Regular Customer\n";
        cout << "3. Exit\n";
        cout << "Choice?\n";
        cin >> choice;

        //choice options
        switch (choice)
        {
            //business bill
            case '1':

                //business menu: output and request for phone number and minutes
                cout << "\n";
                cout << "Compute Bill for Business Customer\n";
                cout << "----------------------------------\n";
                cout << "Enter Phone Number?\n";
                cin >> number;
                cout << "\n";
                cout << "Enter Minutes Used?\n";
                cin >> minutes;
                cout << "\n";
                cout << "------------------------------\n";
                cout << "Bill for " << number << "\n";
                cout << "------------------------------\n";
                cout << "Total Minutes Used " << minutes << "\n\n";
                cout << "Monthly Base Payment $" << right << setw (8) << busBase << "\n";

                //base bill amount, under 600 minutes
                if (minutes < 600)
                {
                    cout << fixed << setprecision(2) << left << setw(21) << "Stage 1 Charge" << "$" << right << setw(8) << 0.00 << "\n";
                    cout << fixed << setprecision(2) << left << setw(21) << "Stage 2 Charge" << "$" << right << setw(8) << 0.00 << "\n";
                }
                //stage 1 bill amount for minutes between 600 and 700
                if (minutes > 600 && minutes <= 700)
                {
                    stage1 = (minutes - 600) * 0.45;
                    cout << fixed << setprecision(2) << left << setw(21) << "Stage 1 Charge" << "$";
                    cout << fixed << setprecision(2) << right << setw (8) << stage1 << "\n";
                    cout << fixed << setprecision(2) << left << setw(21) << "Stage 2 Charge" << "$" << right << setw(8) << 0.00 << "\n";
                    
                }
                //stage 2 bill amount for minutes over 700
                if (minutes > 700)
                {
                    stage1 = 45.00;
                    stage2 = (minutes - 700) * 0.99;
                    cout << fixed << setprecision(2) << left << setw(21) << "Stage 1 Charge" << "$" << right << setw(8) << stage1 << "\n";
                    cout << fixed << setprecision(2) << left << setw(21) << "Stage 2 Charge " << "$";
                    cout << fixed << setprecision(2) << right << setw(8) << stage2 << "\n";
                }

                //calculations: subtotal, tax, and final total
                subtotal = busBase + stage1 + stage2;
                tax = subtotal * 0.0735;
                total = subtotal + tax;

                //output totals for business bill
                cout << fixed << setprecision(2) << left << setw(21) << "Subtotal" << "$" << fixed << setprecision(2) << right << setw(8) << subtotal <<"\n";
                cout << right << setw(31) << "---------\n";
                cout << fixed << setprecision(2) << left << setw(21) << "Tax (7.35%)" << "$" << right << setw(8) << tax << "\n";
                cout << fixed << setprecision(2) << left << setw(21) << "Total Charges" << "$" << right << setw(8) << total;
                cout << "\n\n";

                break;

            //regular bill
            case '2':
                
                //regular menu: output and request for phone number and minutes
                cout << "\n";
                cout << "Compute Bill for Regular Customer\n";
                cout << "----------------------------------\n";
                cout << "Enter Phone Number?\n";
                cin >> number;
                cout << "\n";
                cout << "Enter Minutes Used?\n";
                cin >> minutes;
                cout << "\n";
                cout << "------------------------------\n";
                cout << "Bill for " << number << "\n";
                cout << "------------------------------\n";
                cout << "Total Minutes Used " << minutes << "\n\n";
                cout << "Monthly Base Payment $" << right << setw(8) << regBase << "\n";

                //base bill amount, minutes under 200
                if (minutes < 200)
                {
                    cout << fixed << setprecision(2) << left << setw(21) << "Stage 1 Charge" << "$" << right << setw(8) << 0.00 << "\n";
                    cout << fixed << setprecision(2) << left << setw(21) << "Stage 2 Charge" << "$" << right << setw(8) << 0.00 << "\n";
                }
                //stage 1 bill amount for minutes between 200 and 450
                if (minutes > 200 && minutes <= 450)
                {
                    stage1 = (minutes - 200) * 0.55;
                    cout << fixed << setprecision(2) << left << setw(21) << "Stage 1 Charge" << "$";
                    cout << fixed << setprecision(2) << right << setw(8) << stage1 << "\n";
                    cout << fixed << setprecision(2) << left << setw(21) << "Stage 2 Charge" << "$" << right << setw(8) << 0.00 << "\n";

                }
                //stage 2 bill amount for minutes over 450
                if (minutes > 450)
                {
                    stage1 = 45.00;
                    stage2 = (minutes - 450) * 0.88;
                    cout << fixed << setprecision(2) << left << setw(21) << "Stage 1 Charge" << "$" << right << setw(8) << stage1 << "\n";
                    cout << fixed << setprecision(2) << left << setw(21) << "Stage 2 Charge " << "$";
                    cout << fixed << setprecision(2) << right << setw(8) << stage2 << "\n";
                }

                //calculations: subtotal, tax, and final total
                subtotal = regBase + stage1 + stage2;
                tax = subtotal * 0.0735;
                total = subtotal + tax;

                //output totals for regular bill
                cout << fixed << setprecision(2) << left << setw(21) << "Subtotal" << "$" << fixed << setprecision(2) << right << setw(8) << subtotal << "\n";
                cout << right << setw(31) << "---------\n";
                cout << fixed << setprecision(2) << left << setw(21) << "Tax (7.35%)" << "$" << right << setw(8) << tax << "\n";
                cout << fixed << setprecision(2) << left << setw(21) << "Total Charges" << "$" << right << setw(8) << total;
                cout << "\n\n";

                break;

            //exits program
            case '3':
                return 0;
            
            //any input other than 1, 2, or 3: repeats program
            default: 
                cout << "This is an illegal choice. Please retry.\n\n";
                isExit = false;
                
        }
        //clears input buffer to not skip next iteration of cin
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

}

