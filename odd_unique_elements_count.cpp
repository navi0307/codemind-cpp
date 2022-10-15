#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int cnt = 0;
    vector<int>ans;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<int,int>map;
    for(int i=0;i<n;i++){
        map[arr[i]]++;
        if(map[arr[i]]==1){
        ans.push_back(arr[i]);
        }
    }

    for(int i=0;i<ans.size();i++){
        if(ans[i]%2!=0){
            cnt++;
        }
    }

    cout<<cnt<<endl;
}
