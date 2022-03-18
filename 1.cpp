#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

int main()
{
int num;
int num1;
cin >> num ;
cin >> num1;
while (num && num1)
{
    cout << num << " " << num1 << "\n";
    num -= num;
    num1 -= num1;
    cin >> num;
    cin >> num1;
    }




keep_window_open();
return 0;

}