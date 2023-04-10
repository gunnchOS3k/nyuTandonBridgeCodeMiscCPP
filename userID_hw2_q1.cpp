/*
Author: Edmund Gunn Jr
Device: G-Phone 
Date: 4/5/2023
Purpose:
*/
#include <iostream>
using namespace std;

int main(){
    //declare varibles 
    int userQuaters, userDimes, userNickles, userPennies, totMoney, totDollars,totCents;


    cout<<"Please enter number of coins: "<<endl;
    cout<< "# of quarters: ";
    cin>>userQuaters;
    cout<< "# of dimes: ";
    cin>>userDimes;
    cout<< "# of nickels: ";
    cin>>userNickles;
    cout<< "# of pennies: ";
    cin>>userPennies;
    totMoney = (userQuaters*25)+(userDimes*10)+(userNickles*5)+(userPennies);
    totDollars=totMoney/100;
    totCents=totMoney%100;
    cout<< "The total is "<<totDollars<<" dollars and "<<totCents<<" cents";

    return 0;
}