#include <iostream>

using namespace std;

class Rectangle

{

      private:

            double length, width;

      public:

            Rectangle (double, double);

            void Perimeter ();

            void Area ();

};

Rectangle::Rectangle (double length_var, double width_var)

          :length (length_var), width (width_var)

{

      cout << "Constructor executed" << endl;

}

void Rectangle::Perimeter ()

{

      cout << "Perimeter=" << ((length * 2) + (width * 2)) << endl;

}

void Rectangle::Area ()

{

      cout << "Area=" << (length * width) << endl;

}

 

int main() {

      Rectangle rec1 (1,1);

      rec1.Perimeter();

   

      rec1.Area();

     

return 0;

}
