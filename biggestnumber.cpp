//Author: Joseluis Zamora 
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{
  int Number1;
  int Number2;
  int biggest;
  cout<<"Please enter a whole number:\n";
  std::cin >> Number1; 
  cout<<"Please enter another whole number:\n";
  std::cin >> Number2;
  if( Number1 > Number2 )
  { biggest=Number1;}
  else { biggest=Number2;} 
  cout<<"Of those two numbers, the biggest is: " << biggest;
  cout<<endl<<"Thank you for playing.\n";

  return 0;
}
