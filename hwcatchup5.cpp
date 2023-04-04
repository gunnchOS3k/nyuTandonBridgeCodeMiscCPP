/*
Author: Edmund Gunn Jr 
Device: G-Phone 
Date: 4/3/2023
Module: 4.2 
Purpose: Intro to floats and doubles Area of a circle
*/

#include <iostream>
using namespace std;

int main(){

    double userInput;
    double area , pi; 

    cout<<"Please enter radius: "<<endl;
    cin>>userInput;
    pi=3.14;
    area = (userInput * userInput) * pi;

    cout<<"The area is "<< area;



    return 0;
}