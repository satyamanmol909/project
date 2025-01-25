#include<iostream>
using namespace std;

int main()
{
    string a;
    cout << "Enter the application exe name: " << endl;
    cin >> a;
    string application = a + ".exe";
    system(application.c_str()); 
}
