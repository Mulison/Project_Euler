#include <iostream>
#include <vector>

using namespace std;

bool Palindrome(int number)
{
  // vector<int> pali;
  // while(number > 0)
  // {
  //   pali.push_back(number%10);
  //   number = number/10;
  // }
  // pali.push_back(number);

  // if ()
  if (number < 0) return false;  // negative not palindrome
  int original = number, reversed = 0;
  while (number != 0) {
      int digit = number % 10;
      reversed = reversed * 10 + digit;
      number /= 10;
  }
  return original == reversed;
  
}

int main()
{
  int max_pali = 0;
  for (int a = 999 ; a >= 100 ; a--)
  {
    for (int b = 999; b >= 100; b--)
    {
      int pali = a*b;
      if (Palindrome(pali))
      {
        if (pali > max_pali)
          max_pali = pali;
      }
    }
  }

  cout << "The largest palidrome number = " << max_pali;
}