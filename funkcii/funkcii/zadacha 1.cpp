#include <iostream>
using namespace std;
 void printHello()
 {
	 cout << "hello"<<endl;
 }

 double sumDoubleNumbers(double n, double m)
 {
	 double sum=n+m;
	 return sum;

 }
 
 int factoriel(int n)
 {
	 int fact = 1;
	 for (int i=1 ; i<=n ; i++)
	 {
		 fact = fact * i;
	 }
	 return fact;
 }


 bool isEven(int n)
 {
	 return n % 2==0;
 }



 int main()
 {
	 /*
	 printHello();

	 cout << sumDoubleNumbers(5.6,10.1)<<endl;

	 int num;
	 cin>>num; 
	 cout <<factoriel(num)<<endl;

	 */
	 int a;
	 cin >>a;
	 cout<<isEven(a)<<endl;


 }
