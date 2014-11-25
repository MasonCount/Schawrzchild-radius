#include <iostream>
#include <cmath>

using namespace std;

int sRadius(int x){
   /* This takes the input x, which equals the solar mass, and calculates
   the Schawrzchildchild radius (SCR) */

   /* scr = 2GM/c^2
   G = Gravitational Constant
   M = Mass
   c^2 = Speed of light in a vacuum
   */

   long double scr, G, M, C;

   G = 6.67e-11;
   M = x * 1.988435e30;
   C = 6.706e16;

   return 2 * G * M / C;
}

int stellarTest(int x){

  cout << "This star will become a ";

  if(x < 10)
  {
    cout << "White dwarf" << endl << endl;

    cout << "If this star were to be black hole the Schwarzchild Radius would be: " << sRadius(x)/1000
    << " Km." << endl;
  };

  if(x >= 10 && x < 20)
  {
    cout << "Neutron star" << endl << endl;

    cout << "If this star were to be black hole the Schwarzchild Radius would be: " << sRadius(x)/1000
    << " Km." << endl;
  };

  if(x >= 20)
  {
    cout << "Black hole" << endl << endl;

    cout << "If this star were to be black hole the Schwarzchild Radius would be: " << sRadius(x)/1000
    << " Km." << endl;

  };
}

int main()
{
  int rank, size;

  long double star;

  cout << "Input mass of star in solar masses" << endl << "~: ";

  cin >> star;

  stellarTest(star);

  return 0;
}
