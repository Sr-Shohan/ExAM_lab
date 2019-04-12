#include<bits/stdc++.h>

using namespace std;
int node,edge,mat[10][10];
char u,v;

int main()
{
    int input;
    cin>>node>>edge;

    map<char,int> mp;

    int k=1;
    for( int i=0; i<edge; i++)
    {
        cin>>u>>v;

        if( mp.find(u)  == mp.end() ) mp[u] = k++;
        if( mp.find(v)  == mp.end() ) mp[v] = k++;

        mat[mp[u]][mp[v]] = 1;
        mat[mp[v]][mp[u]] = 1;
    }

    for( auto x : mp )
        cout<<x.first<<" "<<x.second<<endl;

    for( int i=1; i<=node; i++ )
    {
        for( int j=1; j<=node; j++ )
            cout<<mat[i][j]<<" ";
        cout<<endl;
    }
}