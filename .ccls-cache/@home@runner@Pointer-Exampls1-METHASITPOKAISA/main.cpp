#include <iostream>
#define SIZE 10
#include <string.h>
#include <iomanip>
using namespace std;

//int main() {
/*
  int a;
      double d;
      cout << &a << " size " << sizeof(a) << endl;
      cout << &d << " size " << sizeof(d) << endl;

  int x, *p;
  p = &x;
  x = 5;

  cout << x << " " << *p << endl;
  cout << &x << " " << p << endl;
  cout << &p << endl;

  int b = 6;
  cout << x << " " << b << " " << *p << endl;
  x++;
  cout << x << " " << b << " " << *p << endl;
  p = &b;
  *p = 2;
  cout << x << " " << b << " " << *p << endl;
  cout << &p << endl;

  /*Example Array*/
  /*
int *ip;
int a[ ] = {31415, 21828};
ip = a;
// alternative:	ip = &a[0];

cout<<a<<endl;
cout<<ip<<" "<<*ip<<endl;

(*ip)++;
cout<<a<<" "<<a[0]<<endl;
cout<<ip<<" "<<*ip<<endl;

ip++;
cout<<a<<endl;
cout<<ip<<" "<<*ip<<endl; 	// print
*/
  /*the address is 4324, not 4321
  because the pointer is incremented
  by the size of an integer (4 bytes) */

int main(){
  char *pa, *pb, temp;
  char a[SIZE];
  cout<<"Input String:";
  cin>>a;
  pa = &a[0];
  cout<< "Original: ";
  for (int i = 0; i < SIZE - 1; i++,pa++)
  cout<<setw(3)<<*pa<<" ";
  cout<<*pa<<endl;
  pa = &a[0]; pb = &a[SIZE - 1];

  int i;
  cout<<"Reverse: ";
for (i = 0; i < SIZE / 2; i++) {
temp = *pa;
*pa = *pb;
*pb = temp;
pa++; pb--;
}
pa = &a[0];
for (i = 0; i < SIZE - 1; i++,pa++)
cout<<setw(3)<<*pa<<" ";
cout<<*pa<<endl;
return 0;
}

  

