// Write a program which takes the values of length and breadth from user and 
// check if it is a square or not.

#include<iostream>
using namespace std;
int main(){

int l, b;

cout<<"Enter Length: ";
cin>>l;
cout<<"Enter Breadth: ";
cin>>b;

if(l==b){
    cout<<"It is a square";
}
else{
    cout<<"It is not a square";
}

return 0;
}