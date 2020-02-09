<h2 align="center">Value Added Tax !</h2>
VAT (Value Added Tax, or Yellow Cow Tax) is a tax burden on consumption, i.e. financed by the consumer as a regressive tax,1 applied in many countries and widespread in the European Union.

The following example shows the simplified mechanics, with a generalised VAT of 18 %.

```cpp
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
```

### Stay in touch
- Author: Yoni calsin
   - Twitter - [@yonicalsin](https://twitter.com/yonicalsin)
   - Github - [@yonicb](https://github.com/yonicb)
   - Email - <helloyonicb@gmail.com>

### License
This is [MIT licensed.](LICENSE)