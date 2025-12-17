/*
//The Fibonacci sequence shows the numbers up to the number entered on the keyboard.
#include <iostream>
using namespace std;
int main(){
 int n;
  int a=0,b=1,c;
   cout<<"Please enter a number="; cin>>n;
    cout<<"The Fibonacci sequence shows the numbers up to the entered number."<<endl;
       while(a<=n){
       cout<<a<<endl;
       c = a+b;
       a = b;
       b = c;
        }
  system ("pause");
return 0;
}
*/
