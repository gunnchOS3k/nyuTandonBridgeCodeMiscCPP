/*
Author: Edmund Gunn Jr
Device: G-phone 
Date: 4/3/2023
Module: 4.3
Purpose: Introduce Char Ascii value 
*/

#include <iostream>
using namespace std;

int main(){

    char userInput;
    int asciiVal;

    cout<<"Please enter a charcater:"<<endl;
    cin>>userInput;

    asciiVal = (int) userInput;

    cout<<"The ascii value of T is "<<asciiVal;



    return 0;

}