#include<iostream>
#include<vector>
using namespace std ;

void merge(vector<int> &v,int s,int m1,int m2,int e)
{
    int n1=m1-s+1 ;
    int n2=e-m2+1 ;
    int l1[n1],l2[n2];
    for(int y=0 ; y<n1 ; y++)  l1[y]=v[s+y];
    for(int y=0 ; y<n2 ; y++)  l2[y]=v[m2+y];
    
    int i=0,j=0,k=s ;
    while(i<n1 && j<n2)
    {
        if(l1[i]>l2[j])
        {
            v[k++]=l2[j++];
        }
        else
        {
            v[k++]=l1[i++];
        }       
    }
    while(i<n1)
    {
        v[k++]=l1[i++];
    }
    while(j<n2)
    {
        v[k++]=l2[j++];
    }
}

void mergesort(vector<int> &v,int start,int end)
{
    if(start<end)
    {   
        int mid=(start+end)/2 ;
        mergesort(v,start,mid);
        mergesort(v,mid+1,end);
        merge(v,start,mid,mid+1,end);
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
    mergesort(v,0,v.size()-1);
    for(int i=0 ; i<v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
}