#include <iostream>
using namespace std;
    int main()
{
    int sum=0,no,i;
    cout<<"enter a num which you have to perform the addition";
    cin>>no;
    for (i=0;i<=no;i++)
    {
        sum=i+sum;
    }
    cout<<"enter asum of the no"<<sum;
}