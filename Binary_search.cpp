#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int binary_search(vector<int>&v,int key)
{
    int s=0;
    int mid;
    int e=v.size()-1;
    while(s<=e)
    {
        mid=s+((e-s)/2);
        if(v[mid]==key)
        {
            return mid;
        }
        else if(key>v[mid])
        {
            s=mid+1;
        }
        else if(key<v[mid])
        {
            e=mid-1;
        }
    }
    return -1;
}
int main()
{
    vector<int>v;
    int n;
    cout<<"Enter number of elements : ";
    cin>>n;
    v.resize(n);
    for(int i=0;i<n;i++)
    {
        cout<<"Enter : ";
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int key;
    cout<<"Enter the value to search : ";
    cin>>key;
    int l=binary_search(v,key);
    if(l>=0)
    {
        cout<<"Element found at index : "<<l<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
    
    
}