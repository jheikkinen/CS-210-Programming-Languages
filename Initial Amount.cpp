#include "Initial Amount.h"

#include <iostream>
#include <string>
#include "Initial Amount.h"
#include <stdio.h>
#include <stdlib.h>
#include<bits/stdc++.h>
#include <time.h>
using namespace std;


void InitialAmount::SetInitAmount(double amount) {  //sets initial amount
  initialAmount = amount;
}

int InitialAmount::GetInitAmount() {                //gets initial amount
    return initialAmount;
   }

void InitialAmount::SetDeposit(double deposit) {    //sets deposit
  monthlyDeposit = deposit;
}

int InitialAmount::GetDeposit(){                    //gets deposit
    return monthlyDeposit;
   }

void InitialAmount::SetInterest(double interest) {  //sets interest
  annualInterest = interest;
}

int InitialAmount::GetInterest() {                  //gets interest
    return annualInterest;
   }

void InitialAmount::SetYears(int years) {           //sets years
  numYears = years;
}

int InitialAmount::GetYears() {                     //gets years
    return numYears;
   }


void InitialAmount::PrintDataInput() {              //prints data input

cout << "========================================" << endl;
cout << "=============== Data Input =============" << endl;
cout << "Initial Investment Amount:     $" << GetInitAmount() << "        " << endl;
cout << "Monthly Deposit:               $" << GetDeposit() << "       " << endl;
cout << "Annual Interest:                " << GetInterest() << "%     " << endl;
cout << "Number of years:                " << GetYears() << "      " << endl;
cout << endl;



}

int InitialAmount::InterestEarned() {               //calculates interest earned
//declared variables
int i;
double annualInterest1;
double initialAmount1;
double annualInt;


annualInt = annualInterest/100; // named it a different variable to prevent problems for the functions below
initialAmount1 = initialAmount; // named it a different variable to prevent problems for the functions below

for (i = 1; i <= numYears; ++i ){  // for loop allows to print the number of years the user inputs
    annualInterest1 = initialAmount1 * (annualInt);
    initialAmount1 = initialAmount1 + annualInterest1;

//prints the result of the calculation
cout << "    "  << i << setfill(' ') << setw(20) << "$" << showpoint << setprecision(2) << initialAmount1 << setfill(' ') << setw(20) << "$";
cout << fixed << showpoint << setprecision(2) <<  annualInterest1  << endl;

}
return 0;
}


int InitialAmount::InterestEarnedPerMonth() {       //calculates interest earned with monthly deposits

//declared variables
int i;
int j;
double annualInterest2;
double interestTotal;

annualInterest2 = annualInterest/100/12; // named it a different variable to make the calculation to function properly

for (i = 1; i <= numYears; ++i ){    //loops the number of years user inputs
 interestTotal = 0;
    for (j = 1; j <= 12; ++j){       //allows the interest to be calculated based on a 12-month basis

         annualInterest = (initialAmount + monthlyDeposit) * annualInterest2;
         initialAmount = initialAmount + monthlyDeposit + annualInterest;
         interestTotal = interestTotal + annualInterest;
    }
//prints the results of the calculations
cout << "    "  << i << setfill(' ') << setw(20) << "$" << fixed << showpoint << setprecision(2) << initialAmount;
cout <<  setfill(' ') << setw(20) <<  "$" << fixed << showpoint << setprecision(2)  << interestTotal << endl;

}
return 0;
}


void InitialAmount::PrintInterestNoDeposit() {      //prints Interest with no deposit chart heading


cout << "     Balance and Interest Without Additional Monthly Deposits    " << endl;
cout << "=================================================================" << endl;
cout << "  Year         Year End Balance      Year End Earned Interest    " << endl;
cout << "-----------------------------------------------------------------" << endl;



}

void InitialAmount::PrintInterestWithDeposit() {    //prints Interest with monthly deposit chart heading

cout << endl;
cout << "      Balance and Interest With Additional Monthly Deposits      " << endl;
cout << "=================================================================" << endl;
cout << "  Year         Year End Balance      Year End Earned Interest    " << endl;
cout << "-----------------------------------------------------------------" << endl;



}
