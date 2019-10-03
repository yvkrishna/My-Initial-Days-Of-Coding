#include <iostream>

using namespace std;

// https://www.hackerrank.com/challenges/rectangle-area/problem

class Rectangle
{ 
    public:
        int width, height ;
        void display();
         
};
void Rectangle::display()
{
    cout<<width<<" "<<height<<endl;
}
class RectangleArea:public virtual Rectangle
{
           
    public:
            int area;
        int read_input()
        {
            cin >> width >> height;
          return 0;
        }
       
       void display()
       {
            area=width*height;
         cout<<area;   
        }
};




int main()
{
    RectangleArea r_area;
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}
