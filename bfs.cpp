#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
int visited[N];
vector<int>adj_list[N];

void bfs(int src)
{
    queue<int>q;
    visited[src]=1;
    q.push(src);
    while (! q.empty())
    {
        int head=q.front();
        q.pop();
        cout<<head<<endl;
        for(int adj_node: adj_list[head])
        {
            if(visited[adj_node]==0)
            {
                visited[adj_node]=1;
                q.push(adj_node);
            }
        }
    }
}

/*
graph input: 
6 6
0 1
1 2
2 3
1 5
2 4
5 4
graph:
0----1----2----3
     |    |
     |    |
     5----4

*/

int main()
{
    int vertex,edges;
    // cout<<"Enter number of vertex and edges:"<<endl;
    cin>>vertex>>edges;
    // cout<<"Enter edge list:"<<endl;
    for (int i = 0; i < edges; i++)
    {
        int u,v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    bfs(0);
    return 0;
}