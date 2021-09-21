#include <iostream>
using namespace std;
class CIRCLE
{
protected:
    float radius;

public:
    CIRCLE() {}
    CIRCLE(float r)
    {
        radius = r;
    }
    float area_circle()
    {
        return (3.14 * radius * radius);
    }
};
class RECTANGLE : public CIRCLE
{
private:
    float breadth;

public:
    RECTANGLE() {}
    RECTANGLE(float a, float b) : CIRCLE(a)
    {

        breadth = b;
    }
    float area_rec()
    {
        return (breadth * radius);
    }
};
class CYLINDER : public CIRCLE
{
private:
    float height;

public:
    CYLINDER(float r, float h) : CIRCLE(r)
    {

        height = h;
    }
    float get_volume()
    {
        return area_circle() * height;
    }
};
int main()
{

    RECTANGLE c(25.4, 41.1);
    cout << "AREA OF CIRCLE IS =" << c.area_circle() << endl;
    cout << "AREA OF RECTANGLE IS = " << c.area_rec() << endl;

    CYLINDER a(10, 2);
    cout << "AREA OF CIRCLE IS =" << a.area_circle() << endl;
    cout << "VOLUME OF CYLINDER IS = " << a.get_volume() << endl;
}