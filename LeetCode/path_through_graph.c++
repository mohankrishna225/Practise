#include <bits/stdc++.h>
using namespace std;


long long int graph(long long int edge1)
{
    for(long long int s=2;s*s<=edge1;s++)
    {
        if(edge1%s==0)return edge1/s;
    }
    return 1;
}

void path_through_graph()
{   
    int edge1,edge2;
    cin>>edge1>>edge2;
    if(edge1<edge2)swap(edge1,edge2);
    if(edge1==edge2){cout<<0;return;}
    map<int,int> node;
    
    int counts=0;
    while(edge1!=1)
    {
        counts++;
        edge1=graph(edge1);
        node[edge1]=counts;
    } 
    counts=0;
    while(!m.count(edge2))
    {
        counts++;
        edge2=graph(edge2);
    }
    cout<<counts+node[edge2];
}
int32_t main()
{   
ios_base::sedge2nc_with_stdio(0);cin.tie(0);cout.tie(0);
    path_through_graph();
    return 0;
}
