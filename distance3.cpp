#include <iostream>
using namespace std;
int count = 0;

class Distance {
    public:
        int km;
        int m;
        int cm;
    
        int id;
        Distance (){
            id = ++count;
        }

        Distance operator + (Distance &d){
            Distance dx;
            dx.km = this->km + d.km;
            dx.m = this->m + d.m;
            dx.cm = this->cm + d.cm;

            dx.m = dx.m + (dx.cm / 100);
            dx.cm = dx.cm % 100;

            dx.km = dx.km + (dx.m / 1000);
            dx.m = dx.m % 1000;

            return dx;
        }

        void input(){
            cout << id << " Enter Km: ";
            cin >> km;
            cout << id << " Enter m: ";
            cin >> m;
            cout << id << " Enter cm: ";
            cin >> cm;
        }

        void show(){
            cout << "\nDistance " << id << ": ";
            cout << km << "km " << m << "m " << cm << "cm\n";
        }
};

int main (){
    Distance d1, d2;

    d1.input();
    d2.input();

    d1.show();
    d2.show();

    Distance d3 = d1 + d2;
    d3.show();
    return 0;
}
