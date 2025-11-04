# include <iostream>
# include <cmath>

using namespace std;

bool isPrime(int number)
{
  for (int i=3; i <= sqrt(number) ;)
  {
    if (number%i == 0)
      return false;
    else
      i += 2;
  } 
  return true;
}

int main()
{
  long long sum = 2;
  for (int i=3; i < 2000000 ;)
  {
    if (isPrime(i))
      sum += i;
    i += 2;
  }
  cout << "sum = " << sum; 
}