//
//  main.cpp
//  SwitchProg2
//
//  Created by Jackie on 4/18/21.
//

//Create a program that Prints out a menu of options
//1.Single player
//2.Two player –You verse computer generated player
//3.Two player –You verse another person player
//4.Multiplayer –Internet connection –Real persons
//5.Exit

//Prompt the user for the option they want. Check that they entered a valid option.
//Use a switch statement to implement the user menu choice.
//Use the following statements to implement/simulate the options/cases:


#include <iostream>
using namespace std;

int main() {
    cout << "Name: Jackie Ocaña - Prog1 - April 18, 2021" << endl;
    int choice;
    
    cout << "1. Single player" << endl;
    cout << "2. Two player –You verse computer generated player"<< endl;
    cout << "3. Two player –You verse another person player" << endl;
    cout << "4. Multiplayer – Internet connection – Real persons" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter the corresponding number to select a statement: ";
    cin >> choice;
    
    if (choice < 1 || choice > 5){
        cout << "You entered an invalid option." << endl;
    }
    
    switch(choice){
        case 1:
            cout << "You choose Single Player " << endl;
            break;
        case 2:
            cout << "You choose Multiple Player - Computer " << endl;
            break;
        case 3:
            cout << "You choose Multiple Player - Player " << endl;
            break;
        case 4:
            cout << "You choose Multiple Player - Internet " << endl;
            break;
        case 5:
            cout << "You choose to exit. " << endl;
            break;
        default:
            cout << "You chose an invalid choice " << endl;
            break;
    }
    return 0;
}
