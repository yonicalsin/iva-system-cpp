#include <iostream>;

using namespace std;

int main()
{
   // Entered value
   int value;

   // https://en.wikipedia.org/wiki/Value-added_tax
   // Tax for PERU = 18%
   int iva = 18;

   // (value * iva) / 100
   int ivaResult;

   // value - ivaResult
   int result;

   cout << "Enter the value: ";
   cin >> value;

   ivaResult = (value * iva) / 100;
   result = value - ivaResult;

   cout << "The VAT charged is: " << ivaResult << endl;
   cout << "Value applied with VAT: " << result << endl;

   return 0;
}