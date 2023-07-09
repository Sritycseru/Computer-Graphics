#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
void circle(){
    setcolor(BLUE);
    circle(150,150,30);
    setfillstyle(SOLID_FILL,BLUE);
    floodfill(151,151,BLUE);
}
void rectangle(){
    setcolor(GREEN);
    rectangle(80,80,150,130);
    setfillstyle(SOLID_FILL,GREEN);
    floodfill(101,101,GREEN);
}

void triangle(){
    setcolor(RED);
    line(100,100,200,100);
    line(100,100,150,150);
    line(200,100,150,150);
    setfillstyle(SOLID_FILL,RED);
    floodfill(150,120,RED);
}

int main(){
    int gd,gm;
    detectgraph(&gd,&gm);
    initgraph(&gd,&gm,"");

    //string str="RCT";
    string str;
    char ch;
    cout <<"Type C for circle,T for triangle and R for rectangle"<<endl;
    for(int i=0;i<3;i++){
        if(i==0)
            cout <<"First one : ";
        else if(i==1)
            cout <<"Second one : ";
        else
            cout <<"Third one : ";

        cin >> ch;
        str+=ch;
    }
    getchar();

    for(int i=0;i<3;i++){
        if(str[i]=='C')
            circle();
        else if(str[i]=='R')
            rectangle();
        else if(str[i]=='T')
            triangle();
    }
    getchar();
}
