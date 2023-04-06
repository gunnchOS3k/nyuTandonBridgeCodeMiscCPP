/*
Author: Edmund Gunn Jr 
Device: G-Phone 
Date: 4/4/2023
Module: 4.3
Purpose: Convert to upper case  
*/

#include <iostream>
using namespace std;

int main(){
    char userInput, result;
    int lowerCaseBound, upperCaseBound, offset;

    lowerCaseBound = (int)'a';
    upperCaseBound = (int)'A';
    offset = lowerCaseBound  - upperCaseBound ;

    cout<< "Please enter a upper case letter "<<endl;
    cin >> userInput; 
    result = (char)((int)userInput - offset); 
    cout << "The upper case version of "<< userInput << " is "<< result;




    return 0;
}