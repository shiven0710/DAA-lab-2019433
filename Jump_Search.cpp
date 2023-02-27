#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int jump(vector<int>&v,int key)
{
    int start=0;
    int end=sqrt(v.size());
    while(v[end]<=key & end<v.size())
    {
        start=end;
        end+=sqrt(v.size());
        if(end>v.size()-1)
        {
            end=v.size();
        }
    }
    for(int i=start;i<end;i++)
    {
        if(v[i]==key)
        {
            return i+1;
        }
    }
    return 0;
}
int main()
{
    vector <int> v;
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    v.resize(n);
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element : ";
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int key;
    cout<<"Enter the key : ";
    cin>>key;
    int ind=jump(v,key);
    if(ind>0)
    {
        cout<<"Element found at location/position : "<<ind<<endl;
    }
    else
    {
        cout<<"Element not in list"<<endl;
    }
}