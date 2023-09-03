// Write a program to print positive number entered by the user, if user 
// enters a negative number, it is skipped.

#include<iostream>
using namespace std;
int main(){

int num;
cout<<"Enter a number: ";
cin>>num;

if(num>=0){
    cout<<num<<endl;
}

return 0;
}