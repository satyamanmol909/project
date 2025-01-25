#include<iostream>
#include<windows.h> 
using namespace std;

int main()
{
    int s = 0, m = 0, h = 0;
    cout << "\t\tWelcome to the Timer" << endl;
    cout << "SET YOUR TIME FOR TIMER" << endl;
    cout << "Enter the hours: ";
    cin >> h;
    cout << "Enter the minutes: ";
    cin >> m;
    cout << "Enter the seconds: ";
    cin >> s;
    cout<<system("cls");
     cout << "\t\tWelcome to the Timer" << endl;
    cout << h << ":" << m << ":" << s << endl;
    while(h > 0 || m > 0 || s > 0) 
    {
        Sleep(1000); 
        s--; 

        if (s < 0)
        {
            s = 59;
            m--;
        }

        if (m < 0)
        {
            m = 59;
            h--;
        }

        if (h < 0)
        {
            h = 0;
        }

        cout << h << ":" << m << ":" << s << endl;
    }

    cout << "Time's up!" << endl;
    return 0;
}

