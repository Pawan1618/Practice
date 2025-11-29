#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    string p;
    cin>>s;
    cin>>p;
    int n=s.size();
    int n1=p.size();
    int cnt=0;
    bool flag=false;
    for(int i=0;i<n;i++){
        int k=i;
        for(int j=0;j<n1;j++){
            if(s[k]==p[j]){
                flag=true;
                k++;
            }
            else{
                flag=false;
            }
        }
        if(flag==true){
            cnt++;
            i=i+n1;

        }
    }
    cout<<cnt;
    return 0;

}