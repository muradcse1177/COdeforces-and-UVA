
#include <iostream>
using namespace std;

class Shape   //class
{
private:
    int width, height; // hidden data from outside world(ABStaction)

public: //encapsulation
    Shape( int a = 0, int b = 0)
    {
        width = a;
        height = b;
    }

    int area()
    {
        cout << "Parent class area :" <<endl;
        return 0;
    }
    virtual void ok() {};
};

class Rectangle: public Shape   //inheritence
{
public:
    int width, height;
    void ok()
    {
        cout<<"....."<<"OK"<<endl;
    }
    void Rectangl( int a , int b )
    {
        width=a;
        height=b;

    }
    int area ()
    {
        cout << "Rectangle class area :";
        cout<< (width * height);
        ok();
    }

};

class Triangle: public Shape
{
public:
    int width,height,a1,b1,c1,d1;
    void Triangl( int a , int b )
    {
        width=a;
        height=b;
    }
     void ok()
    {
        cout<<"......."<<"OK"<<endl;
    }
     void Triangl( int a , int b,int c,int d )
    {
        if(a+b+c+d==360)
        {
            cout<<"coturvuj"<<endl;
        }
        else
        cout<<"Not coturvuj";
        ok();
    }

    int area ()
    {
        cout << "Triangle class area :" ;
        cout<< (width * height / 2);
        ok();

    }
};

// Main function for the program
int main( )
{
    Shape shape; //object
    shape.area();
    Rectangle reca;
    reca.Rectangl(5,10);
    reca.area();
    Triangle Tria;
    Tria.Triangl(10,15);
    Tria.area();
    Tria.Triangl(70,80,90,100);
    return 0;
}

