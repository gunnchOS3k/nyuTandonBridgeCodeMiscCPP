/*
Author: Edmund Gunn Jr
Device: G-Phone
Date: 4/2/20230
Module: 4.1 - intro to ints 
Purpose: Write a program  that read the user the number of days they traveled. The program will then print their traveling time in the format of full weeks and additional days. 
*/

#include <iostream>
using namespace std;

int main(){
    int daysEntered, weeks, days;

    cout<<"Please enter number of days you traveled"<<endl;
    cin>>daysEntered;

    weeks = daysEntered / 7;
    days = daysEntered % 7;
 
    cout<<weeks<<" weeks and " << days<< " days "<< endl;


    return 0;
}