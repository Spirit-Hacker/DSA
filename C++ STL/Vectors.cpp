#include <bits/stdc++.h>
using namespace std;

int main()
{
    

    vector<int> a(5, 2);
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> copyy(a);

    for (int i : copyy)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> v;

    cout << "Capacity-> " << v.capacity() << endl;

    v.push_back(1);
    cout << "Capacity-> " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity-> " << v.capacity() << endl;

    v.push_back(3);
    cout << "Capacity-> " << v.capacity() << endl;

    cout << "Size-> " << v.size() << endl;

    cout << "Element at 2nd index-> " << v.at(2) << endl;

    cout << "First-> " << v.front() << endl;
    cout << "Last-> " << v.back() << endl;

    cout << "Elements before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();
    cout << "Elements after pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "size before clear-> " << v.size() << endl;
    v.clear();
    cout << "size After clear-> " << v.size() << endl;

    // New Arena mfs

    cout<<"Enter size of vector pranil-> ";

     int n;
     cin>>n;
     vector<int> pranil(n);
     for(int i=0;i<n;i++){
         cin>>pranil[i];

     }
     cout<<"Elements in vector are-> ";
     for(int i=0;i<n;i++){
         cout<<pranil[i]<<" ";

     } cout<<endl;

     cout<<"Capacity of pranil->"<<pranil.capacity()<<endl; // capacity is space given to vector
     cout<<"Size of pranil->"<<pranil.size()<<endl;         // size is no. of elements in vector
     cout<<"First in pranil-> "<<pranil.front()<<endl;
     cout<<"Last in pranil-> "<<pranil.back()<<endl; 

    return 0;
}