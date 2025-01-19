#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <limits>
using namespace std;
vector<string> str;

void waitForEnter() {
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    cout << "Press Enter to Continue...";
    cin.get();
}

void clearScreen() {
    #ifdef _WIN32
        system("cls"); 
    #else
        system("clear"); 
    #endif
}

void input(){
    while(1){
        clearScreen();
        string s;
        cin.ignore();
        cout << endl <<"Enter Task:- ";
        getline(cin, s);
        str.push_back(s);
        char ch;
        cout << "ADD MORE (Y/N):- ";
        cin >> ch;
        if(ch == 'N' || ch == 'n'){
            clearScreen();
            break;
        }
    }
}

void display(){
    int cnt = 1;
    
    for (const string& s : str) {
        cout << cnt++ <<". ";
        cout << s << endl;
    }
    cout << endl ;
    
}

void drop(){
    clearScreen();
    int choice;
    cout << "------ DELETE TASK ------" << endl << endl;
    display();
    cout << "Enter Number to Delete:- ";
    cin >> choice;
    cout << "Task " << choice <<" is Deleted!!!" << endl;
    str.erase(str.begin()+choice-1);
    
    waitForEnter();
}

int main() {
    clearScreen();
    int ch;
    cout << "\t\t\t WELCOME" << endl;
    while(true){
        cout << "---------- TO-DO-LIST ----------" << endl;
        cout << endl;
        cout << "1. ADD TASK"<< endl;
        cout << "2. DISPLAY TASK"<< endl;
        cout << "3. DELETE TASK"<< endl;
        cout << "4. EXIT"<< endl;
        cout << "Select Choice:- ";
        cin >> ch;
        switch(ch){
            case 1: input();
                    break;
            case 2: clearScreen();
                    cout << endl << "------ DISPLAY TASK ------" <<endl << endl;
                    display();
                    waitForEnter();
                    break;
            case 3: drop();
                    break;
            case 4: return 0;
            default: "Select Proper Choice!!!";        
        }
    }   
}