#include<iostream>

using namespace std;

void merge(int a[],int l,int m, int r){
    int leftsize = m-l+1, rightsize=r-m;
    int left[leftsize], right[rightsize];

    for (int i = l; i <= m; i++)
    {
        left[i]=a[i];
    }
    int k=0;
    for (int i = m+1; i <= r; i++)
    {
        right[k]=a[i];
        k++;
    }
    cout<<"left side: "<<endl;
    for (int i = 0; i < leftsize; i++)
    {
        cout<<left[i]<<" ";
    }
    cout<<endl<<"right side: "<<endl;
    for (int i = 0; i < rightsize; i++)
    {
        cout<<right[i]<<" ";
    }
    cout<<endl;

    
}

int main(){

int n;cin>>n;
int a[n];
for(int i=0;i<n;i++)cin>>a[i];
merge(a,0,3,n-1);
for(int i=0;i<n;i++)cout<<a[i]<<" ";


}