#include<iostream>
using namespace std;
int main()
{
    int pocketmoney=3000;
    int date;

    for( date=1; date<=30; date++)
    {
        if(date%2==0)
        {
            continue;
             // continue statement is used to skip to the next iteration of the loop
        }
        if(pocketmoney==0)
        {
           break;
           // break statement is used to terminate a loop
        }
        cout<<" u can go out today "<<endl;
        pocketmoney=pocketmoney-300;
         
    }
   
return 0;
}