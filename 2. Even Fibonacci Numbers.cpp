# include <iostream>
# include <cstdint>

using namespace std;

int main()
{
  int64_t sum=0;
  int first = 2;
  int second = 3;
  int third = 5;

  while(first < 4000000)
  {
    sum += first;

    first = second + third;
    second = third + first;
    third = first + second;    
  }

  cout << "sum =" << sum;
  
}