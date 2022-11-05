#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
	for(int i=0;i<n;i++){
        cin>>arr[i];
	}
	vector<int>v;
    map<int,int>map;
    for(int i=0;i<n;i++){
    	map[arr[i]]++;
	}
	for(int i=0;i<n;i++){
		if(arr[i]==map[arr[i]]){
			v.push_back(arr[i]);
		}
	}
	int mini=INT_MAX, maxi=INT_MIN;
    for(int i=0;i<v.size();i++){
    	maxi=max(maxi,v[i]);
    	mini=min(mini,v[i]);
	}
	if(v.empty())   cout<<-1<<endl;
	else cout<<mini<< " " <<maxi<<endl;
}