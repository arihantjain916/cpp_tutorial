#include<iostream>
using namespace std;

int main(){
   int a = 5;
   int b = 10;

   cout << "The initial value of a and b is: "<< a << " and " << b << endl;
   a = a+b;
   b = a-b;
   a = a-b;


   cout << "The swaped value of a and b is: "<< a << " and " << b;

   return 0;
}