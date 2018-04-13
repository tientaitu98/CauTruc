#include<iostream>
#include<queue>

#define max 200
using namespace std;
void input(int &n, int &m, int a[max][max])
{
    cin>>n;
    cin>>m;
    int u, v;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            a[i][j] = 0;
        }
    }
    for(int i = 1; i <= m; i++)
    {
        cin>>u>>v;
        a[u][v] = 1;
        a[v][u] = 1;
    }
}
void visit(int i)
{
    cout<< i <<" ";
}


void dfs(int i, int n, int a[max][max], bool check[max])
{
    visit(i);
    check[i] = true;
    for(int j = 1; j <= n; j++)
    {
        if(a[i][j] == 1 && check[j] == false) dfs(j, n, a, check);
    }
}
void DepthFirstSearch()
{
    int n;
    int m;
    int a[max][max];
    bool check[max];
    input(n, m, a);
    for(int i = 1; i <= n;i++)
    {
        check[i] = false;
    }
    dfs(1, n, a, check);
}

void bfs(int i,int n, int a[max][max],bool check[max]){
    queue<int> q;
    q.push(i);
    check[i]=true;
    while(!q.empty()){
        int k=q.front();
        cout<<k<<" ";
        for(int j=1;j<=n;j++){
            if(a[k][j]==1 && check[j]==false){
                q.push(j);
                check[j]=true;
            }
        }
        q.pop();
    }
}
void BreadthFirstSearch()
{
    int n;
    int m;
    int a[max][max];
    bool check[max];
    input(n,m,a);
    int min=100000;
    for(int i=1;i<=n;i++){
        check[i]=false;
        if(i<min){
            min=i;
        }
    }
    bfs(min,n,a,check);
}

int main()
{
    BreadthFirstSearch();
}
