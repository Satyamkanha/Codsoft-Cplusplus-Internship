// Develop a calculator program that performs basic arithmetic
//  operations such as addition, subtraction, multiplication, and
//  division. Allow the user to input two numbers and choose an
//  operation to perform.
#include<iostream>
using namespace std;
void add(int num1,int num2){
    int add;
    add=(num1+num2);
    cout<<"Addition is=" << add<<endl;
}
void subtraction(int num1,int num2){
    int sub;
    sub=(num1-num2);
    cout<<"Subtraction is=" << sub<<endl;
}
void multiplication(int num1,int num2){
    int multiply;
    multiply=(num1*num2);
    cout<<"Multiplication is=" << multiply <<endl;
}
void division(int num1,int num2){
    int divide;
    divide=(num1/num2);
    cout<<"Division is=" << divide<<endl;
}
int main(){
    int num1;
    int num2;
    cout<<"Enter 1st number:-";
    cin>>num1;
    cout<<"Enter 2nd number:-";
    cin>>num2;
    int choice;
    while(1){
        cout<<endl;
        cout<<endl;
        cout<<"********WELCOME TO CALCULATOR*********"<<endl;
        cout<<"Menu"<<endl;
        cout<<"1-Addition"<<endl;
        cout<<"2-Subtraction"<<endl;
        cout<<"3-Multiplication"<<endl;
        cout<<"4-Division"<<endl;
        cout<<"5-For exiting the menu"<<endl;
        cout<<"6-Enter your choice:"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
        add(num1,num2);
        break;
        
        case 2:
        subtraction(num1,num2);
        break;

        case 3:
        multiplication(num1,num2);
        break;

        case 4:
        division(num1,num2);
        break;

        case 5:
        break;

        default:
        cout<<"Please enter correct choice:(";
        break;
        }
    }
}