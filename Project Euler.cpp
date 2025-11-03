#include <iostream>

using namespace std;

int main()
{
  long long sum = 0;
  for (int i = 1; i <= 570000;)
  {
    sum += i*i;
    i+=2;
  }

  cout << "sum = "<< sum << endl ;

}