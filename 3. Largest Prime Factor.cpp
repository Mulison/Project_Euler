# include <iostream>
# include <cstdint>
# include <vector>

using namespace std;

int main()
{
  // long long n = 600851475143;
  long long n = 10002;
  int factor = 2;

  while (factor*factor <= n)
  {
    if (n%factor != 0)
    {
      factor ++;
    }
    else
    {
      n = n/factor;
      factor = 2;
    }
  }

  cout << "The largest prime factor =" << n;
}