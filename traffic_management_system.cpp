#include <iostream>
#include <windows.h>  
using namespace std;
void setColor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

int main() {
    cout << "_Welcome to the Traffic Management System with Color_" << endl;

    while(true) 
    {
        
        setColor(4);  
        for(int red = 1; red <= 15; red++) 
        {
            system("cls");
            cout << "\tTraffic signal is RED, wait for 15 seconds" << endl;
            cout << "\t\t\t" << red << " : seconds passed" << endl;
            Sleep(1000);  
        }

        setColor(6);  
        for(int yellow = 1; yellow <= 5; yellow++) 
        {
            system("cls");
            cout << "\tTraffic signal is YELLOW, get ready" << endl;
            cout << "\t\t\t" << yellow << " : seconds passed" << endl;
            Sleep(1000);  
        }
        setColor(2);  
        for(int green = 1; green <= 15; green++) 
        {
            system("cls");
            cout << "\tTraffic signal is GREEN, you can GO" << endl;
            cout << "\t\t\t" << green << " : seconds passed" << endl;
            Sleep(1000);  
        }
    }

    return 0;
}
