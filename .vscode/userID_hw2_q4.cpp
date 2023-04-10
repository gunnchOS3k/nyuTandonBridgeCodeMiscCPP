/*
Author: Edmund Gunn Jr
Device: Baby Mac 
Date: 4/5/2023
Purpose:
*/

#include <iostream>
using namespace std;

int main(){


    int userInput1, userInput2, add, subtract, multiplication, div, mod;
    double divide ;

    cout<<"Please enter two positive integers, separated by a space: "<<endl;
    cin>>userInput1>>userInput2;

    add= userInput1 + userInput2;
    cout<<userInput1<<" + "<<userInput2<<" = "<<add<<endl;
    subtract= userInput1 - userInput2;
    cout<<userInput1<<" - "<<userInput2<<" = "<<subtract<<endl;
    multiplication= userInput1 * userInput2;
    cout<<userInput1<<" * "<<userInput2<<" = "<<multiplication<<endl;
    divide= (double)userInput1 / (double)userInput2;
    cout<<userInput1<<" / "<<userInput2<<" = "<<divide<<endl;
    div= userInput1 / userInput2;
    cout<<userInput1<<" div "<<userInput2<<" = "<<div<<endl;
    mod= userInput1 % userInput2;
    cout<<userInput1<<" mod "<<userInput2<<" = "<<mod<<endl;



    return 0;
}