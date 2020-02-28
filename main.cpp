#include <iostream>
#include "Initial Amount.h"
#include <stdio.h>
#include <stdlib.h>
#include<bits/stdc++.h>
#include <time.h>
using namespace std;

int main(){
   InitialAmount initDollar; //created object that will set and get information

   //declarations for variables
   double dollarInit;
   double depositMonthly;
   double annualInterest;
   int years;
   char userInput = 'h'; //initialized for main while loop below

while ((userInput != 'q') && (userInput != 'Q')) { //loop allows user to continue as desired

//initialized to enter while loops below
dollarInit = 0;
depositMonthly = 0;
annualInterest = 0;
years = 0;


initDollar.PrintDataInput();

    while (dollarInit <= 0){ //inputs initial investment data
        cout << "Enter initial investment amount:" << endl;
        try {
            cin >> dollarInit;
            if (dollarInit < .01) {
                throw dollarInit;
            }

        }
        catch (double dollarInit) { //rejects bad input
            cout << "Enter a number above zero" << endl;
            dollarInit = 0;
        }
    }

initDollar.SetInitAmount(dollarInit);

    while (depositMonthly <= 0){ //input deposit data
        cout << "Enter monthly deposit amount:" << endl;

        try {
            cin >> depositMonthly;

            if (depositMonthly < .01) {
                throw depositMonthly;
            }

        }
        catch (double depositMonthly) { //rejects bad input
            cout << "Enter a number above zero" << endl;
            depositMonthly = 0;
        }
    }
initDollar.SetDeposit(depositMonthly);

    while (annualInterest <= 0) { //inputs interest
        cout << "Enter annual interest:" << endl;
        try{
            cin >> annualInterest;

            if (annualInterest < .01) {
                throw annualInterest;
            }

        }
        catch (double annualInterest) { //rejects bad input
            cout << "Enter a number above zero" << endl;
            annualInterest = 0;
        }
    }

initDollar.SetInterest(annualInterest);

    while (years <= 0) { //enter data for years
        cout << "Enter number of years to calculate compounded interest:" << endl;
        try {
            cin >> years;

            if (years < 1) {
                throw years;
            }

        }
        catch (int years) { //rejects bad input
            cout << "Enter a number above zero" << endl;
            years = 0;
        }
    }

initDollar.SetYears(years); //inputting years data


system("cls");    //Clear system to update data inputs

initDollar.PrintDataInput();   //print data input chart with new data

initDollar.PrintInterestNoDeposit();     //print annual interest with no deposits chart heading
initDollar.InterestEarned();             //print calculation of interest with no deposits
initDollar.PrintInterestWithDeposit();   //print annual interest with deposits chart heading
initDollar.InterestEarnedPerMonth();     //print calculation of interest with monthly deposits

//Allow user to do another calculation or quit
cout << "Enter Q or q to quit. Otherwise enter any other character to do another calculation." << endl;
cin >> userInput;

system("cls");   //Clear system and reset values to zero
initDollar.SetInitAmount(0);
initDollar.SetDeposit(0);
initDollar.SetInterest(0);
initDollar.SetYears(0);
}

    return 0;
}
