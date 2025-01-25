#include<iostream>
using namespace std;
struct Date
{
    int day;
    int month;
    int year;
};

class electric
{
   private:
    string name;
    string consumer_id,adress;
    int meter_number,n;
   double bill,units,ammount;
    struct Date sub;
     
    public:
    void pay()
    {
        abc:
        cout<<"enter the date of billing:"<<endl;
			cout << "Day: ";
			cin >> sub.day;
			cout << "Month: ";
			cin >> sub.month;
			cout << "Year: ";
			cin >> sub.year;
            
        cout<<"enter the consumer name:";
        cin>>name;
        cout<<"enter the consmer id :";
        cin>>consumer_id;
        cout<<"enter the meter number:";
        cin>>meter_number;
   
    
    double bill = 0.0;
    cout<<"enter the units";
    cin>>units;
    if (units <= 100) {
        bill = units * 7;
        cout<<"bill:"<<bill;
    } else if (units <= 200) {
        bill = units*9;
         cout<<"bill:"<<bill;
    } else if (units <= 300) {
        bill = units*10;
         cout<<"bill:"<<bill;
    } else {
        bill = units*12;
         cout<<"bill:"<<bill<<endl;
    }
    cout<<endl;
    cout<<"to enter data again press 1"<<endl;
    cin>>n;
    if(n)
    goto abc;
    }
};
int main()
{
    electric e;
    e.pay();
    return 0;
}