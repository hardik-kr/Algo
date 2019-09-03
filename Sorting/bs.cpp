#include<iostream>
#include<vector>
using namespace std ;

int binary(vector<int> arr,int data,int start,int end)
{
    if(start==end)
    {
        if(arr[start]==data)
        return start+1 ;
        else
        {
            return -1 ;
        }      
    }
    else
    {
        int mid=start/2+end/2 ;
        if(arr[mid]==data) return mid+1 ;
        else if(arr[mid]>data) return binary(arr,data,start,mid-1);
        else return binary(arr,data,mid+1,end);
    }
    
    
}
int main()
{
    vector<int> arr ;
    int data ;
    while(cin>>data)
    {
        arr.push_back(data);
    }
    cout<<binary(arr,20,0,arr.size()-1);
    return 0 ;


}