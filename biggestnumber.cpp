//Author: Logen Thornton
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{
  int a = 0;
  int b = 0;
  int big = 0;
  cout<<"Please enter a whole number:\n";
  cin>> a;
  cout<<"Please enter another whole number:\n";
  cin>> b;
  cout<<"Of those two numbers, the biggest is: ";
  if (a<b){
    big = b;
  }
  else {
    big = a;
  }

  cout << big << endl;
  cout<<endl<<"Thank you for playing.\n";

  return 0;
}
