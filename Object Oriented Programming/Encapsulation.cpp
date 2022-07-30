#include<bits/stdc++.h>
using namespace std;

// Enacapsulation :-  wrapping of data member and function

class student{
    private :
        string name;
        int age;
        int height;

    public :
        int get_age(){
            return this->age;
        }
};  

int main()
{
    student first;
    cout<<"sab sahi chal raha hai"<<endl;
    return 0;
}