#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int main(){
    int gd,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,NULL);

    int n;
    cout<<"Number of Control Points: ";
    getchar();
    cin>>n;
    int px[n],py[n];
    for(int i=0;i<n;i++){
        cin>>px[i]>>py[i];
    }
}
