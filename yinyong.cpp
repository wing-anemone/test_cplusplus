#include <iostream>
using namespace std;

int b[20];
class A {
public:
    A(int a[]):a(k){}
    long long int &a;
};

int main(){
    long long int b = 20;
    A a(b);
    cout << sizeof(a) <<endl;
    return 0;
}
