//program to check if entered number is armstrong number
#include<bits/stdc++.h>
using namespace std;
//function to calculate power
int arm(int x, int y){
    if(y==0){
        return 1;
    }
    if(y%2==0){
        return arm(x,y/2)*arm(x,y/2);
    }
    return x*arm(x,y/2)*arm(x,y/2);
}
//function to calculateorder of number
int order(int x){
    int num=0;
    while(x){
        num++;
        x=x/10;
    }
    return num;
}
//function to check whether number is armstrong or not
void checkArm(int x){
    int n=order(x);
    int temp=x,sum=0;
    while(temp){
        int r=temp%10;
        sum+=arm(r,n);
        temp=temp/10;
    }
    if(sum==x){
        cout<<"Yes, "<<x<<" is an Armstrong number";
    }
    else{
        cout<<"No, "<<x<<" is not an Armstrong number";
    }
}

int main(){
    int x=1253;
    cout<<checkArm()<<endl;
}
