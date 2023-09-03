// Create a calculator using switch statement to perform addition, subtraction, 
// multiplication and division.

#include<iostream>
using namespace std;
int main(){

char op; 
cout<<"Enter an operator (*,/,+,-,%): ";
cin>>op;

int num1, num2;
cout<<"Enter two number: ";
cin>>num1>>num2;

switch (op){

case '*':
cout<<num1*num2;
break;

case '/':
cout<<num1/num2;
break;

case '+':
cout<<num1+num2;
break;

case '-':
cout<<num1-num2;
break;

case '%':
cout<<num1%num2;
break;

}
return 0;
}