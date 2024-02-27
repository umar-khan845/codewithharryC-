#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int sum=0;
    for(int counter=1; counter<=n; counter++)

    // we can intializie and assingn the value to the counter i.e; which is a variable , inside the for loop and as well as outside the loop

    {
        sum=sum+counter;
    }
    cout<<sum<<endl;
return 0;
}