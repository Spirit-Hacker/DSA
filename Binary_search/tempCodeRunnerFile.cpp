/*
book allocation problem:

    given an array of books in which a[i] represent no. of pages in a book;
    our task is to allocate every book to every student such that each student 
    has atleast one book.

    and also print minimum no of pages allocated to a student

    m is no. of students.
    Eg:-

    a[n] = 10 20 30 40;
    m = 2;

    output = 60

    explanation:
        case 1: 1st student = 10
                2nd student = 20+30+40 = 90

        case 2: 1st student = 10+20 = 30
                2nd student = 30+40 = 70

        case 3: 1st student = 10+20+30 = 60
                2nd student = 40

            so,maximum no. pages of all cases are 90,70,60 resp.

            and minimum 90,70,60 is   60
            therefore 60 is the answer.
*/
#include<iostream>
using namespace std;

bool is_posible(int a[],int n,int m,int mid){

    int page_count = 0;
    int stud_count = 1;

    for(int i=0;i<n;i++){
        if(page_count + a[i] <= mid){
            page_count = page_count+a[i];
        }
        else{
            stud_count++;
            if(stud_count > m || a[i] > mid){
                return false;
            }
            page_count = a[i];
        }
    }
    return true;
}

int allocate_books(int a[],int n,int m,int sum){
    int s = 0;
    int e = sum;

    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if(is_posible(a,n,m,mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int n,m;
    cin>>n>>m;

    int sum = 0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum = sum+a[i];
    }

    int min_no_of_pages = allocate_books(a,n,m,sum);

    cout<<min_no_of_pages<<endl;

    return 0;
}