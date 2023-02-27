#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int linear_search(vector<int>&v,int key)
{
    for(int i=0;i<v.size();i++)
    {
        if(key==v[i])
        {
            return i;
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
    
    int key;
    cout<<"Enter the value to search : ";
    cin>>key;
    int l=linear_search(v,key);
    if(l>=0)
    {
        cout<<"Element found at index : "<<l<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
    
    
}