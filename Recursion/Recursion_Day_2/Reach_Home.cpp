#include<iostream>
using namespace std;

void reach_home(int src,int dest){
    cout<<"  Source  "<<src<<"  Destination  "<<dest<<endl;
    // base case
    if(src==dest){
        cout<<"Pahoch gaye"<<endl;
        return;
    }

    
    reach_home(src + 1,dest);
}

int main()
{

    int src=1,dest=10;

    cout<<endl;
    reach_home(src,dest);

    return 0;
}