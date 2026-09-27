#include<iostream>

using namespace std;

void merge(int a[],int l,int m, int r){
    int leftsize = m-l+1, rightsize=r-m;
    int left[leftsize], right[rightsize];

    
    for (int i = l; i <= m; i++){
        left[i]=a[i];
    }

    int k=0;
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

int main(){

int n;cin>>n;
int a[n];
for(int i=0;i<n;i++)cin>>a[i];
merge(a,0,3,n-1);

for(int f=0;f<n;f++)cout<<a[f]<<" ";

}


