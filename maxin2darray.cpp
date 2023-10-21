#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m;
    cout<<"enter row matrix :";
    cin>>m;
     int n;
    cout<<"enter colums matrix :";
    cin>>n;
    int arr[m][n];
    for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
        cin>>arr[i][j];
    }
    }
    //maxsecond
    int max =INT_MIN;
     for(int i=0;i<=m-1;i++){
        for(int j=0;j<=n-1;j++){
        if (max<arr[i][j]) max =arr[i][j];
    }
    }
    cout<<"maximum element is "<<endl;
    cout<<max;

}