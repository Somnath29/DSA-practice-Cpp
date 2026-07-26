#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i = 0; i<n ;i++){
        cin>>arr[i];
    }
    map<int,int> hash; // empty map

    for(int i =0;i <n; i++){
        hash[arr[i]]++;
    }

    cout<<"hash map:- \n";
    for(auto it: hash){
        cout<<it.first<<" -> "<<it.second<<endl;
    }

    int q;cin>>q;

    cout<<"printing frequencies of every elem :-\n";
    while(q--){
        int num;
        cin>>num;
        cout<<num<<" -> "<<hash[num]<<endl;
    }   
    return 0;
}