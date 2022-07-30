#include<iostream>
using namespace std;

//private: // accessed only in same class

class hero{
    public: // acccesed anywhere
        int health;
        char level;

        void print(){
            cout<<level<<endl;
        }
};

int main()
{
    hero pranil;
    pranil.health = 100;
    pranil.level = 'A';

    cout<<"health is : "<<pranil.health<<endl;
    cout<<"level is : "<<pranil.level<<endl;

    pranil.print();
    return 0;
}