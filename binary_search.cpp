#include<iostream>

using namespace std;

int main(){

    int n;cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int x;cin>>x;
    int low=0, high=n-1;
    int flag=0;
    while (low<=high)
    {
        int mid=(high+low)/2;
        if(a[mid]==x){
            flag=1;
            break;
        }
        else if(x>a[mid]){
            low = mid+1;
        }
        else{
            high=mid-1;
        } 
    }
    if(flag)cout<<"Found"<<endl;
    else cout<<"Not Found"<<endl;

}