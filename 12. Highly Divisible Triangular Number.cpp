# include <iostream>

using namespace std;

long long triangleNumberFunc(int layer)
{
  // O(n)
  // long long number = 0;
  // for (int i = 1; i <= layer; i++)
  // {
  //   number += i;
  // }
  return layer*(layer + 1) / 2;
}

int numberOfFactorFunc(long long triNumber, int N)
{
  int numberOfFactor = 0;
  for (long long i=1; i <= triNumber; i++)
  {
    if (triNumber%i == 0)
    {
      numberOfFactor ++;
      if (numberOfFactor > N)
        return numberOfFactor;
    }      
  }
  return numberOfFactor;
}

int main()
{
  int layer = 100000;
  long long triangleNumber = 0;
  int N = 500;
  while (1)
  {
    triangleNumber = triangleNumberFunc(layer);
    if (numberOfFactorFunc(triangleNumber, N) > N )
    {
      break;
    }
    else
      layer++;
  }
  cout << "Triangle Number = " << triangleNumber;
}