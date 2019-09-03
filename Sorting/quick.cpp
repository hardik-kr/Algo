#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;


int partition(vector<int> &v,int s,int e)
{
    int rand=v[e];
    int i=s-1 ;
    for(int j=s ; j<e ; j++)
    {
        if(v[j]<rand)
        {
            i++ ;
            swap(v[i],v[j]);
        }
    }
    swap(v[i+1],v[e]);
    return i+1 ;
}

void quicksort(vector<int> &v,int start,int end)
{
    if(start<end)
    {   
        int k=partition(v,start,end) ;
        quicksort(v,start,k-1);
        quicksort(v,k+1,end);
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
    quicksort(v,0,v.size()-1);
    for(int i=0 ; i<v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
}