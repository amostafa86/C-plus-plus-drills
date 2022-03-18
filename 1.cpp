#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
inline void keep_window_open() { char ch; cin>>ch; }

int main()
{


cout << "Enter the name of the person you want to write to\n";
string first_name;
string friend_name;
char friend_sex;
int age;
cin >> first_name;
cout << "Dear " << first_name << ",\n" << "How are you? I am fine. I miss you.\n";
cout << "Enter another friend\n";
cin >> friend_name;
cout << "Have you seen " << friend_name << " lately?\nEnter sex\n";
cin >> friend_sex;
if (friend_sex == 'm')  
cout << "If you see " << friend_name << " please ask him to call me\n";
if (friend_sex == 'f')  
cout << "If you see " << friend_name << " please ask her to call me";
cout << "\nEnter Age ";
           
cin >> age;
cout << "I hear you just had a birthday and you are " << age << " years old\n";
cout << "\n\nYours Sincerely\nAhmed";



keep_window_open();
return 0;

}