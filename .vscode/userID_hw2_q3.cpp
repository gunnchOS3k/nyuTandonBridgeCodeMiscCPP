/*
Author: Edmund Gunn Jr
Device: Baby Mac 
Date: 4/5/2023
Purpose:
*/

#include <iostream>
using namespace std;


int main(){


    int dayJ, hourJ, minJ, dayB, hourB, minB, totDay, totHour, totMin;

    cout<<"Please enter the number of days John has worked: ";
    cin>>dayJ;

    cout<<"Please enter the number of hours John has worked: ";
    cin>>hourJ;

    cout<<"Please enter the number of mins John has worked: ";
    cin>>minJ;

    cout<<endl<<endl<<endl;

    cout<<"Please enter the number of days Bill has worked: ";
    cin>>dayB;

    cout<<"Please enter the number of hours Bill has worked: ";
    cin>>hourB;

    cout<<"Please enter the number of mins Bill has worked: ";
    cin>>minB;

    
    totHour= (minJ + minB)/60;
    totMin= (minJ + minB)-(totHour*60); 

    totDay= ((hourJ + hourB)/24);
    totHour+= ((hourJ + hourB)-(totDay*24)); 


    totDay+= (dayJ + dayB);

    cout<<"The total time both of them worked together is: "<<totDay<<" days, "<<totHour<<" hours and "<<totMin<<" minutes. ";
    return 0;
}