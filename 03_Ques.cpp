// Write a program to take input from user for Cost Price (C.P.) and Selling Price
// (S.P.) and calculate Profit or Loss.

#include<iostream>
using namespace std;
int main(){

int cp, sp;
cout<<"Enter Cost Price of the item: ";
cin>>cp;
cout<<"Enter Selling Price of the item: ";
cin>>sp;

if(sp>cp){
    cout<<"Profit = "<<sp-cp;
}
else if(cp>sp){
    cout<<"Loss = "<<cp-sp;
}
else{
    cout<<"No Profit No Loss";
}
return 0;
}