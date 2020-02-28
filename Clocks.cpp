/*
 * Clocks.cpp
 *
 *  Date: [24JAN2020]
 *  Author: [James Heikkinen]
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include<bits/stdc++.h>
#include <time.h>

using namespace std;




void addHour(int* hh, int* mm, int* ss){    //function that adds an hour

*hh = *hh + 1;
if (*hh > 12){       //when hours hits 13 it will subtract 12
    *hh = *hh - 12;

}

}

void addMinute(int* hh, int* mm, int* ss){  //function that adds a minute

*mm = *mm + 1;
if (*mm > 59){        // subtracts 60 when minutes reach 60 and adds an hour to time clock
    *mm = *mm - 60;
    addHour(&*hh, &*mm , &*ss);
}

}

void addSecond(int* hh, int* mm, int* ss){ //function that adds a second



*ss = *ss + 1;

if (*ss > 59){        // subtracts 60 when seconds reach 60 and adds a minute to time clock
    *ss = *ss - 60;
addMinute(&*hh, &*mm , &*ss);
}

}



int clockTime(int hh,int mm,int ss) {    //function for displaying both 12 and 24 hour clock
int h = hh;
int m = mm;
int s = ss;
int hr24;
string amOrPm;


hr24 = h + 12;
if (hr24 > 23){        // changes 24 to 00
 hr24 = 00;
}

if ((hr24 > 12) && (hr24 < 24)){ //determines if time is am or pm for 12 hour clock
    amOrPm = "PM";
}
else {
    amOrPm = "AM";
}



//Time clock display for 12 hour and 24 hour
system("cls");   //clears screen as time values change
cout << "**************************" << endl;
cout << "*      12-Hour Clock     *" << endl;
cout << setfill('0') <<  "*        " << setw(2) << h << ":" << setw(2) << m << ":" << setw(2) << s << " " << amOrPm << "     *" << endl;
cout << "**************************" << endl;
cout << "**************************" << endl;
cout << "*      24-Hour Clock     *" << endl;
cout << setfill('0') << "*        " << setw(2) << hr24 << ":" << setw(2) << m << ":" << setw(2) << s << "        *" << endl;
cout << "**************************" << endl;

return 0;
}

int printMenu() {               //print menu function


cout << "**************************" << endl;
cout << "* 1 - Add One Hour       *" << endl;
cout << "* 2 - Add One Minute     *" << endl;
cout << "* 3 - Add One Second     *" << endl;
cout << "* 4 - Exit Program       *" << endl;
cout << "**************************" << endl;


return 0;
}



int main(){

int h, m, s;                    //declarations for hours, minutes, and seconds
int userMenuInput;              //declaration for user input

h = 04;                         //initializations for h , m , s values
m = 30;
s = 10;

do {                            //Loops menu until program exits
clockTime(h, m, s);             //calls time
printMenu();                    //prints menu options
cin >> userMenuInput;           //user input for menu options


 switch (userMenuInput){        //switch used to select menu options
      case 1:
         addHour(&h, &m , &s);
         break;
      case 2:
          addMinute(&h, &m , &s);
         break;
      case 3:
         addSecond(&h, &m , &s);
         break;
      case 4:
         cout << "Exiting program. Nap time!!!";
         exit(0);
         break;
  }
}
while (userMenuInput != 4);


return 0;
}

