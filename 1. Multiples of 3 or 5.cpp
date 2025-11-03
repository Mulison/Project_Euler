# include <iostream>
# include <cstdint>

using namespace std;

int main()
{
  int64_t sum = 0;
  for (int i; i<1000; i++)
  {
    if ((i%3 == 0) || (i%5 == 0))
    {
      sum += i;
    }
  }

  cout << "sum = "<< sum;

}