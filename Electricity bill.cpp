#include <iostream>
using namespace std;

class bill {
    int x, y,z;

public:
    void getData() {
        cout << "Enter a bill  ";
        cin >> x ;
    }
    void calculate()
    {
        y=0.02*x;
        z=x-y;
        cout<<"after discount amount will be"<<z;
    }

    
};

int main() {
    bill obj;

    obj.getData();
    obj.calculate();

    return 0;
}