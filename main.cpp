#include <iostream>
#include <cmath>
#include<algorithm>


using namespace std;

int main()
{
  int a ;
  cin >> a ;
  if(a<10||a>99)
  {
      cout << "error" ;
  }
  int b = a /10;
  int c = a%10;
  if (c==0)
  {
      cout << "YES" ;
  }
  else if(b%c==0||c%b==0)
  {
      cout << "YES" ;
  }
  else
  {
      cout << "NO" ;
  }
    return 0;
}
