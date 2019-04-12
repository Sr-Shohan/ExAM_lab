#include<bits/stdc++.h>

using namespace std;
    int node,edge,mat[10][10],u,v;

int main()
{
    cin>>node>>edge;
    for( int i=0; i<edge; i++)
    {
        cin>>u>>v;
        mat[u][v] = 1;
        mat[v][u] = 1;
    }

    for( int i=1; i<=node; i++ )
    {
        for( int j=1; j<=node; j++ )
        {

            cout<<mat[i][j]<<" ";
        }
            cout<<"\n";

    }
}
