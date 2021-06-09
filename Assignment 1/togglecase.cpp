#include<bits/stdc++.h>
using namespace std;

int main(){
    string inp;
    cout<<"Enter a string: ";
    cin>>inp;

    for (int i=0;inp[i]!='\0';i++){
        if(inp[i]>'A' && inp[i]<='Z')
            inp[i]=inp[i]+'a'-'A';
        else if(inp[i]>='a'  && inp[i]<='z')
            inp[i]=inp[i]+'A'-'a';
    }

    cout<<"After toggling: "<<inp;
}