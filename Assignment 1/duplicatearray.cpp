//program to find first and last occurance of a number in an array containing dupilicate elements
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,3,5,5,5,5,7,123,125},x=0,o1,o2;
    cout<<"Select a number from {1,3,5,5,5,5,7,123,125}: ";
    cin>>x;

    for(int i=0;i<9;i++){
        if(arr[i]==x){
            o1=i;
            break;
        }
        
    }

    for(int i=0;i<9;i++){
        if(arr[i]==x){
            o2=i;
        }
    }
    cout<<"First occurence: "<<o1;
    cout<<"Last occurence: "<<o2;

    return 0;
}