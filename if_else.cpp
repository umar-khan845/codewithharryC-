#include<iostream>
using namespace std;
int main(){
    int savings;
    cin>>savings;
    if(savings>5000)
    {
        if(savings>10000)
        {
          cout<<"Road trip";
        }
        cout<<"KFC";
    }  
    else if(savings>2000)
    {
        cout<<"Cheezious";
    }
    else
    {
        cout<<"ghr bethooo";
    }
return 0;
}