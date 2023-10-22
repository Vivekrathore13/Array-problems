#include<iostream>
#include<vector>
using namespace std;

void sortm2(vector<int>& v){
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<j){
        if (v[i]==0) i++;
        if(v[i]==0) j--;
        if(i>j)
        break;
        if(v[i]==1 && v[j]==0){
            v[i]=0;
            v[j]=1;
            i++;
            j--;
        }
    }
}
int main(){
    vector<int>v;
    int n;
    cout<<"give the size of vector"<<endl;
    cin>>n;

    for(int i=0;i<n-1;i++){
        int q;
        cout<<"give the array element"<<endl;
        cin>>q;
        v.push_back(q);
    }
      for(int i=0;i<n-1;i++){
        cout<<v[i];
      }
cout<<endl;
   sortm2(v);
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
cout<<endl;
}