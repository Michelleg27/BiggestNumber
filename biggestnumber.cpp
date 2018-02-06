//Author:Michelle Gomez
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{
int wholeNum1;
int wholeNum2;
int biggest; 

  cout<<"Please enter a whole number:\n";
  cin>>wholeNum1;   
  cout<<"Please enter another whole number:\n";
  cin>>wholeNum2;
  if ( wholeNum1 > wholeNum2)
  { 
    biggest = wholeNum1; 
  }
  else 
  {
    biggest = wholeNum2;
  }
  cout<<"Of those two numbers, the biggest is: "<<biggest<<endl;
  cout<<endl<<"Thank you for playing.\n";

  return 0;
}
