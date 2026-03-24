#include <iostream>
using namespace std;
class year
{
    public:
    int no;
    public:
    int leap()
    {
    if(no/3==0)
    
    cout<<"the year is leap year";
    else
    cout<<"the year is not leap year";
    }
};
int main()
{
    year no;
    no.no=2016;
    no.leap();
}