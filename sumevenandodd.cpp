#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the size if array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum =0;
    int sum1 =0;
    int diff;
    for(int i=0;i<n;i++){
        if(i%2==0)
    sum+=arr[i]; 
    }
     for(int i=0;i<n;i++){
        if(i%2==1)
    sum1+=arr[i]; 
    }
    diff=sum-sum1;

    cout<<diff;
}