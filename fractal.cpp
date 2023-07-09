#include<graphics.h>
#include<bits/stdc++.h>
using namespace std;
void koch(int it,int x1,int y1,int x2,int y2)
{
    int x3,y3,x4,y4,x5,y5;
    int dx,dy;
    if(it==0){
        line(x1,y1,x2,y2);
    }
    else{
        dx=(x2-x1)/3;
        x3=x1+dx;
        dy=(y2-y1)/3;
        y3=y1+dy;
        x4=(int)(0.5*(x1+x2)+sqrt(3)*(y1-y2)/6);
        y4=(int)(0.5*(y1+y2)+sqrt(3)*(x2-x1)/6);
        x5=x1+2*dx;
        y5=y1+2*dy;
        koch(it-1,x1,y1,x3,y3);
        koch(it-1,x3,y3,x4,y4);
        koch(it-1,x4,y4,x5,y5);
        koch(it-1,x5,y5,x2,y2);
    }

}

int main(void)
{
    int gd,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd, &gm, "");
    int it;
    cout<<"Number of Iteration: ";
    cin>>it;
    koch(it,50,150,100,150);
    koch(it,100,150,50,50);
    koch(it,50,50,50,150);
    getch();
    return 0;
}

