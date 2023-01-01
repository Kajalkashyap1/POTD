
#include <iostream>
using namespace std;
int main() {
    
    int n;
    cin>>n;
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n-1;j++)
        cout<<" ";
        for(k=0;k<=i;k++)
        cout<<"* ";
        cout<<endl;
    }
    return 0;
}