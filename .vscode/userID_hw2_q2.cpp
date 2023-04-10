/*
Author: Edmund Gunn Jr
Device: Baby Mac 
Date: 4/5/2023
Purpose:
*/

#include <iostream>
using namespace std;

int main(){

    int userDollars,userCoins, totCoins, totQuater, totDimes, totNickles, totPennies ;


    cout<<"Please enter your amount in the format of dollars and cents separated by a space: ";

    cin>>userDollars>>userCoins;

    totCoins = (userDollars*100) + userCoins;
    totQuater= totCoins/25;
    totCoins=totCoins- (totQuater*25);
    totDimes=totCoins/10;
    totCoins=totCoins-(totDimes*10);
    totNickles=totCoins/5;
    totCoins=totCoins-(totNickles*5);
    totPennies=totCoins;


    cout<<totQuater<<" quarters, "<<totDimes<<" dimes "<<totNickles<< " nickels and " <<totPennies<<"pennies";

    return 0;
}