#include<iostream>
using namespace std;
int main()
{
   int a; //decleration
   a=12;  //intialization
   cout<<"size of the int= "<<sizeof(a)<<endl;
   float b;
   cout<<"size of the float= "<<sizeof(b)<<endl;
   char c;
   cout<<"size of the char= "<<sizeof(c)<<endl;
   bool d;
   cout<<"size of the bool= "<<sizeof(d)<<endl;
   /* 
   the given are the two examples of the type modifiers, int long occupies the space of 8 bytes in the memory while the short int occupies the space of 2 bytes in the memory. int long has significantlly more memory thne that of the int short
       */  
   short int si;
   long int li;
   cout<<"size of the short int= "<<sizeof(si)<<endl;
   cout<<"size of the long int= "<<sizeof(li)<<endl;
   return 0;
}