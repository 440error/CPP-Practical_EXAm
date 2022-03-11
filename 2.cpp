#include <bits/stdc++.h>
using namespace std;

class Triangle
{
private:
    float side1;
    float side2;
    float side3;
    float base;
    float height;

public:
    Triangle() {}

    Triangle(float a, float b, float c)
    {
        side1 = a;
        side2 = b;
        side3 = c;
    }

    Triangle(float b, float h)
    {
        base = b;
        height = h;
    }

    float area(float a, float b, float c)
    {
        float p = (a + b + c) / 2;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }

    float area()
    {
        return area(side1, side2, side3);
    }

    float area(float b, float h)
    {
        return (b * h) / 2;
    }

    Triangle operator=(const Triangle &triangle)
    {
        side1 = triangle.side1;
        side2 = triangle.side2;
        side3 = triangle.side3;
    }

    friend bool operator==(const Triangle &t1, const Triangle &t2)
    {
        return (t1.side1 == t2.side1 && t1.side2 == t2.side2 && t1.side3 == t2.side3);
    }
};

int main()
{
    int x, y , z;
    cout <<"Enter first side: " ;
    cin >> x ;

    cout <<"Enter second side: " ;
    cin >> y ;

    cout <<"Enter third side: " ;
    cin >> z ;

    Triangle t1(x, y, z);
    cout << "Area of the tringle ABC : " << t1.area(x,y,z) << "\n";

    Triangle t2;
    cout << "Area of the tringle PQR : " << t2.area(x,y) << "\n";
    ;

    Triangle t3;
    t3 = t1;

    cout << "Area of triangle MNO " << t3.area() << "\n";

    if (t1 == t3)
    {
        cout << endl
             << "The triangles are equal.\n";
    }
    else
    {
        cout << endl
             << "The triangles are not equal.\n";
    }

    return 0;
}
