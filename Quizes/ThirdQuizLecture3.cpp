/*
Q1
Print this sentence - Hello Mr\"Samy Samir" -
*/
#include<iostream>
using namespace std;
int main(){
  cout<<"Hello Mr\\\"Samy Samir\"";
  return 0;
}

/*
Q2
Make a Program that Calculate the parameter and the area of rectangle by make user enter the length (L, B).
*/
#include<iostream>
using namespace std;
int main(){
  int l,b;
  cin>>l>>b;
  cout<<(b+l)*2<<" "<<b*l;
  return 0;
}

/*
Q3
Make a program that take from user a number consists of 4 digits then print each digit in new line.
*/
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  cout<<n/1000<<(n%1000)/100<<"\n"<<(n/10)%10<<"\n"<<n%10;
  //Another answer
  // cout<<n/1000<<(n/100)%10<<"\n"<<(n%100)/10<<"\n"<<n%10;
  return 0;
}
