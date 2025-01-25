#include <iostream>
using namespace std;

class Time {
public:
    int hours, minutes, seconds;
    int hour, minut, second;
    int resulth, resultm, results;

    void inputtime() 
    {
        cout << "Enter 1st time in hours, minutes, and seconds: ";
        cin >> hours >> minutes >> seconds;
    }

    void secondinput()
    {
        cout << "Enter 2nd time in hours, minutes, and seconds: ";
        cin >> hour >> minut >> second;
    }

    void result()
    {
        resulth = hours + hour;
        resultm = minutes + minut;
        results = seconds + second;

        if (results >= 60)
        {
            resultm =resultm+ results / 60;
            results = results % 60;
        }

        if (resultm >= 60)
        {
            resulth =resulth+ resultm / 60;
            resultm = resultm % 60;
        }

        cout << "The result is: " << resulth << " hours " << resultm << " minutes " << results << " seconds" << endl;
    }
};

int main()
{
    Time y;
    y.inputtime();
    y.secondinput();
    y.result();

    return 0;
}
