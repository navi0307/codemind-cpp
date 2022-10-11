#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num;
    string str = to_string(n);
    for(int i=0;i<str.length();i++){
        if(str[i]=='6'){
            str[i]='9';
            break;
        }
    }
    for(int i=0;i<str.length();i++)
    cout<<str[i];
    
    return 0;
}