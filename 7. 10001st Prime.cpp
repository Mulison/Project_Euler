# include <iostream>
# include <cmath>

using namespace std;

bool isPrime(long long number)
{
  for (int i = 2; i <= sqrt(number); i++)
  {
    if (number%i == 0)
      return false;
  }
  return true;
}

int main()
{
  int n = 10001;
  long long number = 2;
  int i = 0;

  while (i <= n)
  {
    if (isPrime(number))
    {
      i++;
      if (i == n)
        break;
    }
    number++;
  }

  cout << "the "<< n <<"st Prime is = " << number;
}