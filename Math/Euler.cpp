#include<bits/stdc++.h>
//线性筛
using namespace std;
int prime[100000];
bool vis[100000];
int cnt=0;
void Euler(int n){
    for(int i=2;i<=n;i++){
        if(!vis[i]){
            prime[cnt++]=i;
        }
        for(int j=0;j<cnt&&i*prime[j]<=n;j++){
            vis[prime[j]*i]=true;
            if(i%prime[j]==0)break;
        }
    }
    for(int i=2;i<=n;i++){
        if(!vis[i])cout<<i<<endl;
    }

}
int main(){
    Euler(1000);
}
