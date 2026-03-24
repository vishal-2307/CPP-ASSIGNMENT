#include <iostream>
using namespace std;

class Swap {
    int x, y;

public:
    void getData() {
        cout << "Enter two numbers: ";
        cin >> x >> y;
    }

    void swapValues() {
        int temp = x;
        x = y;
        y = temp;
    }

    void display() {
        cout << "After swapping:" << endl;
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
    }
};

int main() {
    Swap obj;

    obj.getData();
    obj.swapValues();
    obj.display();

    return 0;
}