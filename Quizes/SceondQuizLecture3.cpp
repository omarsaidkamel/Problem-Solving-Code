/*
Q1
1- Make a Program that Calculate the parameter and the area of square by make user enter the length (L).
*/
#include<iostream>
using namespace std;
int main(){
  int l;
  cin>>l;
  cout<<l*4<<" "<<l*l;
  return 0;
}

/*
Q2
2- Make a program that take from user a number consists of 3 digits then print each digit in new line.
*/
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  cout<<n/100<<"\n"<<(n/10)%10<<"\n"<<n%10;
  //Another answer
  //cout<<n/100<<"\n"<<(n%100)/10<<"\n"<<n%10;
  return 0;
}
