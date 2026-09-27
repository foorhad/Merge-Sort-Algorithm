#include<iostream>
using namespace std;

void merge(int a[],int l,int m, int r){
    int leftsize = m-l+1, rightsize=r-m;
    int left[leftsize], right[rightsize];

     int k=0;
    for (int i = l; i <= m; i++){
        left[k]=a[i];
        k++;
    }

    k=0;
    for (int i = m+1; i <=r; i++)
    {
        right[k]=a[i];
        k++;
    }

    
    int i=0,j=0, current=l;
    while (i<leftsize && j<rightsize)
    {
        if(left[i]<=right[j]){
            a[current]=left[i];
            i++;
        }
        else{
            a[current]=right[j];
            j++;
        }
        current++;
    }
  
    while (i<leftsize)
    {
        a[current]=left[i];
        i++;
        current++;
    }
    

    while (j<rightsize)
    {
        a[current]=right[j];
        j++;
        current++;
    }  
}
void divide(int a[], int l, int r){

    if(l<r){
        int mid=(l+r)/2;
        divide(a,l,mid);
        divide(a,mid+1,r);
        merge(a,l,mid,r);
        
    }
}

int main(){
    int n;cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }  
    divide(a,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    

}