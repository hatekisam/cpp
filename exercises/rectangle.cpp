#include<iostream>
using namespace std;

class Rectangle
{
private:
    int width,length;
public:
    Rectangle(int width,int length);
    int getWidth();
    int getLength();
    void setWidth(int w);
    void setLength(int h);
    int getArea();
    int getPerimeter();
};

Rectangle::Rectangle(int w,int h)
{
    this->width  = w;
    this->length = h;
}
int Rectangle::getWidth(){
    return width;
}

int Rectangle::getLength(){
    return length;
}
void Rectangle::setWidth(int w){
    this->width = w;
}

void Rectangle::setLength(int h){
    this->length = h;
}

int Rectangle::getArea(){
    return width * length;
}

int Rectangle::getPerimeter(){
    return (width * 2) + (length *2);
}



int main(){
    cout << "================Rectangle================" << endl;
    cout << "Enter the sides of your rectangle" << endl;
    cout << "Enter the length of your rectangle" << endl;
    int length;
    cin >> length;
    cout << "Enter the width of your rectangle" << endl;
    int width;
    cin >> width;
    Rectangle rect(width,length);
    cout << "What do you want to do?" <<endl;
    cout << "1.Get Length" << endl;
    cout << "2.Get Width" << endl;
    cout << "3.Change Length" << endl;
    cout << "4.Change Height" << endl;
    cout << "5.Get Area" << endl;
    cout << "6.Get Perimeter" << endl;
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << rect.getLength() << endl;
        break;
    case 2:
        cout << rect.getWidth() << endl;
        break;
    case 3:
        int w;
        cin >> w;
        rect.setWidth(w);
        cout <<rect.getWidth()<< endl;
        break;
    case 4:
        int h;
        cin >> h;
         rect.setLength(h);
        cout <<rect.getLength()<< endl;
        break;
    case 5:
        cout << rect.getArea() << endl;
        break;
    case 6:
        cout << rect.getPerimeter() << endl;
        break;
    
    default:
        break;
    }
    return 0;
}