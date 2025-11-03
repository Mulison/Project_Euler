#include <iostream>

using namespace std;

int main()
{
  // long long sumSqr = 0;
  // long long sum = 0;
  // for (int i=1; i<=100; i++)
  // {
  //   sumSqr += i*i;
  //   sum += i;
  // }
  int n = 100;
  long long sumSqr = n * (n+1) * (2*n+1) / 6;
  long long sum = (1 + n) * n / 2;

  long long sqrSum = sum*sum;

  cout << "Difference = "<< sqrSum - sumSqr;
}