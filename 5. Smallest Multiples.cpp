#include <iostream>
#include <vector>

using namespace std;

long long greatestCommonDivisor(long long a, long long b)
{
  return b == 0 ? a : greatestCommonDivisor(b, a % b);
}

long long leastCommonMultiple(long long a, long long b)
{
  return a * b / greatestCommonDivisor(a, b);
}

int main()
{
  long long result = 1;
  for (int i = 2; i <= 20; i++)
  {
    result = leastCommonMultiple(result, i);
  }
  cout << "least Common Multiple = " << result ;

}