#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    int HH = 0, MM = 0, SS = 0, n;
    cout << "MY STOPWATCH" << endl;
    cout << "Enter 5 to start the stopwatch,9 to resume 7 to stop it" << endl;
    cin >> n;
    cout << "\n\t\t" << "HH" << ":" << "MM" << ":" << "SS";
    if (n == 5)
    {
        while (true)
        {
            Sleep(1000);
            SS++;

            if (SS > 59)
            {
                MM++;
                SS = 0;
            }

            if (MM > 59)
            {
                HH++;
                MM = 0;
            }
            cout << "\n\t\t" << HH << " : " << MM << " : " << SS;
            
            if (GetAsyncKeyState('7')){
                cout << "\nStopwatch stopped." << endl;
                break;
            }

            else if (GetAsyncKeyState('9')){
                cout << "\n\nCurrent Time: " << HH << " : " << MM << " : " << SS << endl;
                cout << "\nStopwatch Paused. Press 9 to resume: " << endl;
                while (true){
                    if(GetAsyncKeyState('9')){
                        break;
                    }
                }
            }
        }
    }
    else
    {
        cout << "Invalid input. Exiting." << endl;
    }
    cout << "\nFinal Time: " << HH << " : " << MM << " : " << SS << endl;
    return 0;
}