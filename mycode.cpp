#include <iostream>

using namespace std;

class Box {
   public:
      double length_1;         // Length of a box
      double breadth;        // Breadth of a box
      double height;         // Height of a box

      // Member functions declaration
      double getVolume_1(void);
      void setLength_1( double len );
      void setBreadth_1( double bre );
<<<<<<< HEAD
      void setHeight_1( double hei );
=======
      void setHeight_2( double hei );
>>>>>>> dev_5
};

// Member functions definitions
double Box::getVolume_1(void) {
   return length_1 * breadth * height;
}

void Box::setLength_1( double len ) {
   length_1 = len;
}
void Box::setBreadth( double bre ) {
   breadth = bre;
}
<<<<<<< HEAD
void Box::setHeight_1( double hei ) {
=======
void Box::setHeight_2( double hei ) {
>>>>>>> dev_5
   height = hei;
}

// Main function for the program
int main() {
   Box Box1;                // Declare Box1 of type Box
   Box Box2;                // Declare Box2 of type Box
   double volume = 0.0;     // Store the volume of a box here
 
   // box 1 specification
   Box1.setLength_1(6.0); 
   Box1.setBreadth_1(7.0); 
   Box1.setHeight_2(5.0);

   // box 2 specification
   Box2.setLength_1(12.0); 
   Box2.setBreadth_1(13.0); 
<<<<<<< HEAD
   Box2.setHeight_1(10.0);
=======
   Box2.setHeigh_2(10.0);
>>>>>>> dev_5

   // volume of box 1
   volume = Box1.getVolume_1();
   cout << "Volume of Box1 : " << volume <<endl;

   // volume of box 2
   volume = Box2.getVolume_1();
   cout << "Volume of Box2 : " << volume <<endl;
   return 0;
}
