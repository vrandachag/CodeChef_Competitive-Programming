//https://www.hackerrank.com/challenges/arrays-introduction/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int arr[1000],n;
    cin>>n;
    for(int i=0;i < n ; i++)
    {
        cin>>arr[i];
    }
    for(int i = n-1;i>=0;i--)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}
