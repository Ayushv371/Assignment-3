// Write a program to calculate marks to grades . Follow the 
// conversion rule as given below :
// A+ 100 - 90
// A  90 - 80
// B+ 80 - 70
// B  70 - 60
// C  60 - 50
// D  50 - 40
// E  40 - 30
// F  30 - 0


#include<iostream>
#include<cstring>
using namespace std;
int main(){

char grade[3];
int marks;
cout<<"Enter your marks to get your grade: ";
cin>>marks;

if(marks<=100 && marks>=0){
    if(marks>=0 && marks<30){
    strcpy(grade,"F");
    }
    else if(marks>=30 && marks<40){
    strcpy(grade, "E");
    }
    else if(marks>=40 && marks<50){
    strcpy(grade, "D");
    }
    else if(marks>=50 && marks<60){
    strcpy(grade, "C");
    }
    else if(marks>=60 && marks<70){
    strcpy(grade, "B");
    }
    else if(marks>=70 && marks<80){
    strcpy(grade, "B+");
    }
    else if(marks>=80 && marks<90){
    strcpy(grade, "A");
    }
    else if(marks>=90 && marks<=100){
    strcpy(grade, "A+");
    }
    cout<<"Your grade is: "<<grade;
    }
else{
    cout<<"Enter valid marks!!";
}

return 0;
}