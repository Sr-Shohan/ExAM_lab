#include <bits/stdc++.h>
 
using namespace std;
 
#define MAXC 10000
 
int lenA,lenB;
int dp[MAXC][MAXC];
bool visited[MAXC][MAXC];
 
string A,B;
 
int print_array(int a, int b)
{
    for( int i=0; i<a; i++ )
    {
        for( int j=0; j<b; j++ )
            cout<<visited[i][j]<<" ";
            cout<<endl;
    }
     cout<<"DP Array"<<endl;
    for( int i=0; i<a; i++ )
    {
        for( int j=0; j<b; j++ )
            cout<<dp[i][j]<<" ";
            cout<<endl;
    }
}
 
int LCS(int i,int j)
{
    if( i == lenA or j == lenB ) return 0;
    if( visited[i][j] ) return dp[i][j];
 
    int ans= 0;
 
    if( A[i] == B[j] ) ans = 1+LCS(i+1,j+1);
    else
    {
        int val1 = LCS(i+1,j);
        int val2 = LCS(i,j+1);
        ans = max(val1,val2);
    }
    visited[i][j] = 1;
    dp[i][j] =ans;
    return dp[i][j];
}
 
int main()
{
    print_array(10,10);
    cin>>A>>B;
 
    lenA = A.length();
    lenB = B.length();
    cout<<LCS(0,0)<<endl;
 
    print_array(10,10);
    return 0;
}