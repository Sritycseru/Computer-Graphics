#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
int fact(int n){
    if(n>1)
        return n*fact(n-1);
    else if(n>=0)
        return 1;
}
void bezier(int px[], int py[], int n){
    float u,x,y,b;
    int i;
    putpixel(px[0],px[0],WHITE);

    int nfact = fact(n-1);
    for(u=0.0001;u<1;u+=0.0001){
        x = 0;
        y = 0;
        for(i=0;i<n;i++){
            b = fact(n)*pow(u,i)*pow(1-u,n-1-i)/(fact(n-1-i)*fact(i));
            x+=b*px[i];
            y+=b*py[i];
        }
        putpixel(x,y,WHITE);
    }
    putpixel(px[n-1],py[n-1],WHITE);
}
int main(){
    int gd = DETECT,gm;
    initgraph(&gd,&gm,"");
    int n,i;
    cout<<"Number of Control Points: ";
    cin >> n;
    int px[n],py[n];

    for(i=0;i<n;i++){
        cin >> px[i] >> py[i];
    }
    getchar();
    bezier(px,py,n);
    getchar();
}
/*
3
20 20
50 150
80 20
*/
