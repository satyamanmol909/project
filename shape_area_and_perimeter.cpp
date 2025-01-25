#include <iostream>
using namespace std;

class Square {
    private:
    double side;

    public:
    
    Square() {
        cout << "Enter Side : ";
        cin >> side;
    }

    double calculateArea(){
        return (side * side);
    }

    double calculatePerimeter(){
        return 4 * side;
    }
    
    void showOutput(){
        cout << "Area : " << calculateArea() << endl;
        cout << "Perimeter : " << calculatePerimeter() << endl;
    }
};

class Rectangle {
    private:
    double length;
    double width;

    public:
    
    Rectangle() {
        cout << "Enter Length : ";
        cin >> length;

        cout<< "Enter Width : ";
        cin >> width;
    }

    double calculateArea(){
        return (length * width);
    }

    double calculatePerimeter(){
        return (2 * (length + width));
    }
    
    void showOutput(){
        cout << "Area : " << calculateArea() << endl;
        cout << "Perimeter : " << calculatePerimeter() << endl;
    }
};
class circle {
    private:
    double radius;

    public:
    
    circle() {
        cout << "Enter radius : ";
        cin >> radius;
    }

    double calculateArea(){
        return (3.14*radius*radius);
    }

    double calculatePerimeter(){
        return 2*3.14*radius;
    }
    
    void showOutput(){
        cout << "Area : " << calculateArea() << endl;
        cout << "Perimeter : " << calculatePerimeter() << endl;
    }
};
class triangle {
    private:
    double length,width,hight;

    public:
    
    triangle() {
        cout << "Enter length: ";
        cin >> length;
         cout << "Enter width: ";
        cin >> width;
        cout << "Enter hight: ";
        cin >> hight;
    }

    double calculateArea(){
        return ((length*width)/2);
    }

    double calculatePerimeter(){
        return(length+width+hight);
    }
    
    void showOutput(){
        cout << "Area : " << calculateArea() << endl;
        cout << "Perimeter : " << calculatePerimeter() << endl;
    }
};
class cube {
    private:
    double side;

    public:
    
    cube() {
        cout << "Enter side : ";
        cin >> side;
    }

    double calculateArea(){
        return (6*side*side);
    }

    double calculatePerimeter(){
        return (12*side);
    }
    
    void showOutput(){
        cout << "Area : " << calculateArea() << endl;
        cout << "Perimeter : " << calculatePerimeter() << endl;
    }
};
class sphere {
    private:
    double radius;

    public:
    
    sphere() {
        cout << "Enter radius : ";
        cin >> radius;
    }

    double calculateArea(){
        return (4*3.14*radius*radius);
    }

    double calculatevoloume(){
        return ((4*3.14*radius*radius*radius)/3);
    }
    
    void showOutput(){
        cout << "Area : " << calculateArea() << endl;
        cout << "voloume : " << calculatevoloume() << endl;
    }
};
class cuboid{
    private:
    double length,width,hight;

    public:
    
   cuboid() {
        cout << "Enter length : ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter hight : ";
        cin >> hight;
    }

    double calculateArea(){
        return (2*(length*width+width*hight+length*hight));
    }

    double calculatevoloume(){
        return (length*width*hight);
    }
    
    void showOutput(){
        cout << "Area : " << calculateArea() << endl;
        cout << "voloume : " << calculatevoloume() << endl;
    }

};
class cylinder{
    private:
    double radius,hight;

    public:
    
   cylinder() {
        cout << "Enter radius : ";
        cin >>radius;
        
        cout << "Enter hight : ";
        cin >> hight;
    }

    double calculateArea(){
        return (2*3.14*radius*(radius+hight));
    }

    double calculatevoloume(){
        return (3.14*radius*radius*hight);
    }
    
    void showOutput(){
        cout << "Area : " << calculateArea() << endl;
        cout << "voloume : " << calculatevoloume() << endl;
    }

};
class cone{
    private:
    double radius,hight,length;

    public:
    
   cone() {
        cout << "Enter radius : ";
        cin >>radius;
        
        cout << "Enter hight : ";
        cin >> hight;
        cout << "Enter length : ";
        cin >> length;
    }

    double calculateArea(){
        return (3.14*radius*(radius+length));
    }

    double calculatevoloume(){
        return ((3.14*radius*radius*hight)/3);
    }
    
    void showOutput(){
        cout << "Area : " << calculateArea() << endl;
        cout << "voloume : " << calculatevoloume() << endl;
    }

};


int main(){

    int choice;
    cout << "Enter Choice" << endl;
    cout << "1). Square" << endl;
    cout << "2). Rectangle" << endl;
    cout << "3). circle" << endl;
    cout << "4). triangle" << endl;
    cout << "5). cube" << endl;
    cout << "6). sphere" << endl;
    cout << "7). cuboid" << endl;
    cout << "8). cylinder" << endl;
     cout << "9). cone" << endl;
    cout << "Enter Here : ";
    cin >> choice;

    switch (choice){
    case 1: {
        cout << "SQUARE CALCULATOR" << endl;
        Square sq;
        sq.showOutput();
        break;
    }

    case 2: {
        cout << "RECTANGLE CALCULATOR" << endl;
        Rectangle rect;
        rect.showOutput();
        break;
    }
    
    case 3: {
        cout << "CIRCLE CALCULATOR" << endl;
        circle cir;
        cir.showOutput();
        break;
    }
    case 4: {
        cout << "TRIANGLE CALCULATOR" << endl;
        triangle tri;
        tri.showOutput();
        break;
    }
    case 5: {
        cout << "CUBE CALCULATOR" << endl;
        cube cu;
        cu.showOutput();
        break;
    }
    case 6: {
        cout << "SPHARE CALCULATOR" << endl;
        sphere sp;
        sp.showOutput();
        break;
    }
    case 7: {
        cout << "CUBOID CALCULATOR" << endl;
       cuboid cuboi;
       cuboi.showOutput();
        break;
    }
    
    case 8: {
        cout << "cone CALCULATOR" << endl;
       cone co;
       co.showOutput();
        break;
    }
    case 9: {
        cout << "cylinderCALCULATOR" << endl;
       cylinder cyl;
       cyl.showOutput();
        break;
    }


    default:
        cout << "Enter Valid Number!";
        break;
    }

    return 0;
}