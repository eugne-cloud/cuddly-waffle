/*Eu-Gne Loh 20001346 
Lab 1 Question 5*/

#include <iostream>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main(){// open main

  //declare the variables
  float area; 
  float length=0, width=0; 
  float timeS= area/ 2;
  float timeM= timeS/ 60;
  float timeH= timeM/ 60;
  float price= 0.15*area + 60* timeM;

  cout<< "How Much Does It Costs? Let us know your yard area?\n";
  cout<< "\n Please Enter the length of your yard:";
  cin>> length;

  cout<< "\n Please Enter the width of your yard:";
  cin>> width;

  area= length * width;
  cout<<"\n Your Yard Area Is:"<< area;
  //cin>> area;

  timeS= area/ 2;
  cout<<"\n The time needed to cut the grass in seconds is:"<< timeS; 

  timeM= timeS/60;
  cout<<"\n The time needed to cut the grass in minutes is:"<<
  timeM;

  timeH= timeM/60;
  cout<<"\n The time needed to cut the grass in Hours is:"<<
  timeH;

  price= 0.15*area + 60*timeH;
  cout<<"\n Therefore the total price for cleaning your lawn is RM:"<<price;
  cout<<"\n Price included and stated is after the further discount of 10% which is RM:"<<price;
  
  //getch();
  return (0);

}// close main
