#include<iostream>
#include<vector>
using namespace std ;

void swap(int *d1,int *d2)
{
    int temp ;
    temp=*d1 ;
    *d1=*d2 ;
    *d2=temp ;
}

void bubblesort(vector<int> &v)
{
    for(int i=0 ; i<v.size() ; i++)
    {
        for(int j=0 ; j<v.size()-i-1 ; j++)
        {
            if(v[j]>v[j+1])
            swap(&v[j],&v[j+1]);
        }
    }
}

int main()
{
    vector<int> v ;
    int data ;
    while(cin>>data)
    {
        v.push_back(data);
    }
    bubblesort(v);
    for(int i=0 ; i<v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
}