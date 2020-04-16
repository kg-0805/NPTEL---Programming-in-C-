#include <iostream>
using namespace std;

class Rectangle {
    int *hp;
    int *wp;

public:
    Rectangle(int _h, int _w);
    ~Rectangle();
    int area();
};
// LINE-1: define parametrized constructor 
Rectangle::Rectangle(int _h, int _w)
{
  hp=&_h;
  wp=&_w;
}

// LINE-2: define destructor
Rectangle::~Rectangle()
{
}

// LINE-3 define function area()
int Rectangle::area()
{
  int a;
  a=(*hp)*(*wp);
  return a;
}

int main() {
    int x, y;
    cin >> x >> y;

    Rectangle r1(x, y);
    cout << r1.area();

    return 0;
}
