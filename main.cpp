#include <iostream>

#include "header.h"
using namespace std;

int main()
{
   double x[] = {1., 2., 1., 10., 1.};
   double rez = suma(x, 5);
   cout << "Suma val. din sirul x este : " << rez << endl;
   double mx = maxim(x, 5);
   cout << "Max. val. din sirul x este : " << mx << endl;
   return 0;
}
