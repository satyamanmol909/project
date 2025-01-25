#include <iostream>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
    int day;
};

void displayTime(struct Time &t){
    cout << "Time => " <<t.day<<":"<< t.hours << " : " << t.minutes << " : " << t.seconds<< endl;
}

void inputTime(struct Time &t){
    cout<<"enter the day:";
    cin>>t.day;
    cout << "1: Enter the hours: ";
    cin >> t.hours;
    cout << "1: Enter the minutes: ";
    cin >> t.minutes;
    cout << "1: Enter the seconds: ";
    cin >> t.seconds;
}

int main (){
    struct Time t1, t2, t3;
    inputTime(t1);
    inputTime(t2);

    t3.day=t1.day+t2.day;
    t3.hours = t1.hours + t2.hours;
    t3.minutes = t1.minutes + t2.minutes;
    t3.seconds = t1.seconds + t2.seconds;

    t3.minutes += (t3.seconds / 60);
    t3.seconds %= 60;

    t3.hours += (t3.minutes/60);
    t3.minutes %= 60;

    t3.day += (t3.hours/24);
    t3.hours %= 24;


    cout << "\n--------------------------\n";
    displayTime(t1);
    displayTime(t2);
    cout << "--------------------------\n";
    displayTime(t3);

    return 0;
}
