#include<iostream>
#include<vector>
using namespace std ;

void insertionsort(vector<int> &v)
{
    int j;
    for(int i=0 ; i<v.size() ; i++)
    {
        int t=v[i];
        j=i-1;
        while(j>=0 && v[j]>t)
        {
            v[j+1]=v[j];
            j-- ;
        }
        v[j+1]=t ;
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
    insertionsort(v);
    for(int i=0 ; i<v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
}