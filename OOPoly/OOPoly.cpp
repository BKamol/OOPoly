#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;



int main()
{
    /*Circle c1(0, 0, 3);
    c1.print();
    cout << c1.square() << endl;
    cout << c1.perimeter() << endl;*/
    
    /*Rectangle r1({ 0, 0 }, { 3, 3 });
    r1.print();
    cout << r1.square() << endl;
    cout << r1.perimeter() << endl;*/

    /*Triangle t1({ 0, 0 }, { 4, 0 }, { 2, 5 });
    t1.print();
    cout << t1.square() << endl;
    cout << t1.perimeter() << endl;*/


    int size;
    cin >> size;
    Figure** figures = new Figure*[size];
    double x1, y1, x2, y2, x3, y3, radius;
    Point p1, p2, p3;
    for (int i = 0; i < size; i++)
    {
        cout << "Input figure type: C for Circle, R for Rectangle and T for Triangle:" << endl;
        char c;
        cin >> c;
        switch (c)
        {
        case 'C':
            cout << "Input point(x, y) and radius: " << endl;
            cin >> x1 >> y1 >> radius;
            figures[i] = new Circle{x1, y1, radius};

            break;

        case 'R':
            cout << "Input two points(pairs of x, y): " << endl;
            cin >> x1 >> y1 >> x2 >> y2;
            p1 = { x1, y1 }; 
            p2 = { x2, y2 };
            figures[i] = new Rectangle{p1, p2};

            break;

        case 'T':
            cout << "Input three points(pairs of x, y): " << endl;
            cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
            p1 = { x1, y1 };
            p2 = { x2, y2 };
            p3 = { x3, y3 };
            figures[i] = new Triangle{ p1, p2, p3 };

            break;

        default:
            cout << "Wrong type" << endl;
        }
    }

    double max_sq = figures[0]->square();
    double min_per = figures[0]->perimeter();
    Figure* max_obj = figures[0];
    Figure* min_obj = figures[0];
    double sq, per;
    for (int i = 0; i < size; i++)
    {
        Figure* obj = figures[i];
        //obj->print();

        sq = obj->square();
        per = obj->perimeter();
        cout << sq << ' ' << per << endl;
        if (sq > max_sq)
        {
            max_sq = sq;
            max_obj = obj;
        }
        if (per < min_per)
        {
            min_per = per;
            min_obj = obj;
        }
    }

    max_obj->print();
    cout << max_sq << endl;
    min_obj->print();
    cout << min_per << endl;

    for (int i = 0; i < size; i++)
    {
        delete figures[i];
    }
    delete[] figures;
}
