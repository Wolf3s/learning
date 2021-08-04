#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
   int ax, bx, c;
   double x1, x2, delta;

   cout << "Digite o coeficiente de a: ";
   cin >> ax;

   cout << "Digite o coeficente de b: ";
   cin >> bx;
   
   cout << "Digite o coeficente de c: ";
   cin >> c;
   delta = bx*bx - 4*ax*c;

   if (ax != 0) {
        x1 = (-bx+sqrt(delta))/(2*ax);
        x2 = (-bx-sqrt(delta))/(2*ax);
   }
 
   cout << "As raizes da equacao sao: " << x1 << " e " << x2 << endl;

   return 0;

}
