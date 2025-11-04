# include <iostream>

using namespace std;

bool isPythagorean(int a, int b, int c)
{
  if (a*a + b*b == c*c)
    return true;
  else
    return false;
}

int main()
{
  int product = 1;
  for (int a = 1; a <= 1000; a++)
  {
    for (int b = 1; b <= 1000-a; b++)
    {
      if (isPythagorean(a, b, 1000 - a - b))
      {
        product = a*b*(1000 - a - b);
        break;
      }
    }
  }
  cout << "Pythagorean = " << product;

}