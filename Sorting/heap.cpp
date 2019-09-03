#include<iostream>
#include<algorithm>
#include<vector>

using namespace std ;
void heapsort(vector<int> &v)
{   
    int arr[v.size()];
    int size=v.size();
    make_heap(v.begin(),v.end());
    for(int i=0 ; i<size ; i++)
    {
        arr[i]=v.front();
        pop_heap(v.begin(),v.end());
        v.pop_back();
    }
    for(int i=size-1 ; i>=0 ; i--)
    {
        v.push_back(arr[i]);
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
    int s=v.size();
    heapsort(v);
    for(int i=0 ; i<v.size() ; i++)
    {
        cout<<v[i]<<" ";
    }
       
}