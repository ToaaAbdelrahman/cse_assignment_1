#include<iostream>
#include<math.h>
#include <string>

using namespace std;

class Move
{
  private:
    double x;
    double y;
  public:
    Move(double a = 0, double b = 0)
    {
    	x=a;
    	y=b;
    }; // sets x, y to a, b
    void showmove()
    {cout<<x<<" "<<y;} // shows current x, y values
    Move add(const Move & m) 
    {
    	x=x+m;
    	y=y+m;
    }
    // this function adds x of m to x of invoking object to get new x,
    // adds y of m to y of invoking object to get new y, creates a new
    // move object initialized to new x, y values and returns it
}
