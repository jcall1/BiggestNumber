//Author: Justin Call
#include<iostream>

int main()
{
  //declare variables here
  int number1;
  int number2;

  std::cout<<"Please enter a whole number:\n";
  //get first input using std::cin>>
  std::cin>>number1;

  std::cout<<"Please enter another whole number:\n";
  //get second input using std::cin>> again with a second variable
  std::cin>>number2;
  //determine if first or second is bigger and store that in a third variable


  std::cout<<"Of those two numbers, the biggest is: ";
  //print out the variable representing the biggest number

  std::cout<<std::endl<<"Thank you for playing.\n";
  
  return 0;
}
