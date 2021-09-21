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
protected:
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
class BOX : public RECTANGLE
{
private:
    float height;

public:
    BOX() {}
    BOX(float r, float b, float h) : RECTANGLE(r, b)
    {
        height = h;
    }
    float get_volume()
    {
        return radius * breadth * height;
    }
};
int main()
{

    BOX c(2, 2, 2);
    cout << "AREA OF CIRCLE IS =" << c.area_circle() << endl;
    cout << "AREA OF RECTANGLE IS = " << c.area_rec() << endl;
    cout << "VOLUME OF BOX = " << c.get_volume() << endl;
}