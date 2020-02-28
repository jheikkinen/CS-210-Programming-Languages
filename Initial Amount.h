#ifndef INITIALAMOUNT_H
#define INITIALAMOUNT_H

#include <string>
using namespace std;

class InitialAmount {
    public: //setters, getter, print charts, and interest calculation functions
        void PrintDataInput();
        void SetInitAmount(double amount);
        int GetInitAmount();
        void SetDeposit(double deposit);
        int GetDeposit();
        void SetInterest(double interest);
        int GetInterest();
        void SetYears(int years);
        int GetYears();
        void PrintInterestNoDeposit();
        int InterestEarned();
        void PrintInterestWithDeposit();
        int InterestEarnedPerMonth();
    private: //declarations of variables that are initialized
        double initialAmount = 0;
        double monthlyDeposit = 0;
        double annualInterest = 0;
        int numYears = 0;

};

#endif // INITIAL AMOUNT_H
