#include<iostream>
using namespace std;
int A[1000001],B[100000];   // a : size, x : input, c : result
int main(){                 // A[] : instead for loop?      B[] : array
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,x,c=0;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>B[i];
    }
    cin>>x;
    for(int i=0;i<a;i++){
        if(x>B[i]&&x-B[i]<=1000001&&A[x-B[i]]==1&&A[B[i]]==0) c++;  // no duplicated num --> x-B[i], B[i] are unique
        A[B[i]]++;
    }
    cout<<c;
}