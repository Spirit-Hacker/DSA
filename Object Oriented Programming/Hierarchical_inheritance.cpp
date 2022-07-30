#include<iostream>
using namespace std;

class A{
    public:
        void func1(){
            cout<<"inside function 1\n";
        }
};

class B: public A{
    public:
        void func2(){
            cout<<"inside function 2\n";
        }
};

class C: public A{
    public:
        void func3(){
            cout<<"inside function 3\n";
        }
};

int main()
{
    A object1;
    object1.func1();
    cout<<"\n";

    B object2;
    object2.func1();
    object2.func2();
    cout<<"\n";

    C object3;
    object3.func1();
    object3.func3();

    return 0;
}