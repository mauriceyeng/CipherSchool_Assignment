#include<bits/stdc++.h>
using namespace std;

int main(){
    int low,high,i,j,flag;
    cout<<"Enter low: ";
    cin>>low;
    cout<<"Enter high: ";
    cin>>high;
    for(i=low;i<=high;i++){
        if(i==1 || i==0)
        continue;
        flag=1;
        for(j=2;j<=i/2;++j){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag==1)
        cout<<i<<endl;
    }


    return 0;
}