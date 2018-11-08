#include <iostream>

using namespace std;
class triangle
{ private: int base;
           int hight;
  public:
      triangle ()
      {
          base=0;
          hight=0;
      }
      void setbase_hight(int a,int b)
      {
          base=a;
          hight=b;

      }
      float area()
      {
          return 0.5*base*hight;

      }
      void print ()
      {
          area();
          cout<<area();

      }
};
int main()
{
    triangle ob;
    ob.setbase_hight(5,10);
    ob.print();
    return 0;
}
