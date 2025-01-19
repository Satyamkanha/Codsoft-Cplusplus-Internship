// /Create a program that generates a random number and asks the
//  user to guess it. Provide feedback on whether the guess is too
//  high or too low until the user guesses the correct number.
#include<iostream>
#include<time.h>
using namespace std;
int main(){
    cout<<"\t\t\t\tWelcome to Number Guessing Game\t\t\t\t"<<endl<<endl;
    cout<<"A game in which you have to guess a number where between 1-100"<<endl;
    int number;
    srand(time(0));
    number = (rand()%100);
    int guess;
    do{
        cout<<"Enter your choice=";
        cin>>guess;
        if(guess<number){
            cout<<"Too Low"<<endl;
        } else if(guess > number){
            cout<<"Too High"<<endl;
        }else{
            cout<<"Correct Guess,Congrats.....!";
        }
    }while(guess!=number);
}