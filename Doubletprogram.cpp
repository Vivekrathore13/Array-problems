#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    int x;
    cout<<"enter a number you want to doublet ";
    cin>>x;
    int n;
    cout<<"enter a size of vector ";
    cin>>n;
    
    cout<<"enter a array elements";
    for(int i =0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    for(int i=0;i<v.size()-2;i++){
        for(int j=0;j<v.size()-1 ;j++)
        if (v[i]+v[j]==x){
        cout<<"("<<i<<","<<j<<")";
        }
    }
    
}