#include <iostream>
#include<string>
#include<vector>
#include <cstdlib>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

int main()
{
double num;
double num1;
cin >> num ;
cin >> num1;
while (num && num1)
{
    if (num > num1 && num != num1) cout << "the larger value is " << num << "\nthe smaller value is " << num1 <<"\n";
    else if (num < num1 && num != num1) cout << "the larger value is " << num1 << "\nthe smaller value is " << num <<"\n";
   else cout << "The numbers are equal.\n";
   if ( (fabs(num - num1) <= (1.0/100)) || (fabs(num1 - num) <= (1.0/100)) )
   cout << "the numbers are almost equal\n";
    
    num -= num;
    num1 -= num1;
    cin >> num;
    cin >> num1;
    }




keep_window_open();
return 0;

}