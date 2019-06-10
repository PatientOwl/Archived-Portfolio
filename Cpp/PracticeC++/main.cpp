#include <iostream>
using namespace std;

/*class = Object*/
class Shape
{
    protected:
        int width, height;
    public:
        /*Shape is the method*/
        Shape (int a = 0, int b = 0)
        {
            width = a;
            height = b;
        }
        int area ()
        {
            cout << "Parent class area :" << endl;
            return 0;
        }

};
