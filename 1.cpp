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
double small = 0 ;
double large = 0;
cin >> num ;
cout << num << "\n";
while (num)
{
    if (num <= small)
    {
   cout << "the smallest so far\n";
   small = num;
    }else if(num >= large){
cout << "the largest so far\n";
large = num;
    }
    
   
    
    num -= num;
    
    cin >> num;
    
    }




keep_window_open();
return 0;

}