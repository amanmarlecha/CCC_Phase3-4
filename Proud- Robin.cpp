
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            count++;
            for(int j=i;j<n;j++)
            {
                if(a[j]==0)
                    a[j]=1;
                else
                    a[j]=0;
            }
        }
    }
    cout<<count;
    return 0;
}
