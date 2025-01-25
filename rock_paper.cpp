#include <iostream>
using namespace std;
int main() {
    int playerchoice, computerchoice;
    char a;
    cout << "Rock, Paper, Scissors Game!" << endl;
    cout << "Enter \n0 for Rock\n 1 for Paper\n 2 for Scissors: "<<endl;
    cout<<"enter the player choice";
    cin >> playerchoice;
    cout<<"enter the computer choice :";
    cin>>computerchoice;
    cout << "You chose: " << playerchoice << endl;
    if (playerchoice == computerchoice) {
        cout << "draw" << endl;
    } else if ((playerchoice == 0 && computerchoice == 2) ||(playerchoice == 1 && computerchoice == 0) ||(playerchoice == 2 && computerchoice == 1)) 
    {
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }
    cout<<"if you want to play again press [s]";
    cin>>a;
    if(a=='s'){
        cout<<system("cls");
        return main();
    }
    return 0;
}
