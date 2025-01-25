#include <iostream>
using namespace std;

struct distance {
    int cm;
    int m;
    int km;
    
};
void displaydistance(struct distance &d){
    cout << "distance => " <<d.km<<":"<< d.m << " : " << d.cm << endl;
}
void inputdistance(struct distance &d){
    cout<<"enter the kilometer:";
    cin>>d.km;
    cout << " Enter the meter: ";
    cin >> d.m;
    cout << " Enter the centimeter: ";
    cin >> d.cm;
    
}
int main (){
    struct distance d1,d2,d3;
    inputdistance(d1);
    inputdistance(d2);
    d3.km=d1.km+d2.km;
    d3.m=d1.m+d2.m;
    d3.cm=d1.cm+d2.cm;

    d3.m+=d3.cm/100;
    d3.cm=d3.cm%100;

    d3.km+=d3.m/1000;
    d3.m=d3.m%1000;
     
    cout << "\n--------------------------\n";
    displaydistance(d1);
    displaydistance(d2);
    cout << "--------------------------\n";
    displaydistance(d3);

    return 0;
}
