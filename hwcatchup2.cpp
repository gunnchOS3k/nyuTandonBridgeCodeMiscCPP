/*
Author: Edmund Gunn Jr
Device: G-Phone google pixel via codespaces
Date: 4/2/2023
Module: 3
Purpose: Add two integers from user input then adds them together
*/

#include <iostream>
using namespace std;

int main(){
    int numOne, numTwo, sum;

    cout<<"Please enter two numbers separated by a space"<<endl;
    cin>>numOne>>numTwo;
    sum = numOne + numTwo;
    cout<<numOne<<" + "<<numTwo<<" = "<<sum<<endl;
    return 0;
}
