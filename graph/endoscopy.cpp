#include <bits/stdc++.h>
using namespace std;

/*
int action(int g[][1001],int v[][1001],int r,int c,int n,int m,int l)
{
    if(cn!=0 && (v[rn][cn-1]==0) && (g[rn][cn-1]==1 ||g[rn][cn-1]==3 ||g[rn][cn-1]==4 ||g[rn][cn-1]==5)) //left
        return 1;
    if(cn!=m-1 && (v[rn][cn+1]==0) && (g[rn][cn+1]==1 ||g[rn][cn+1]==3 ||g[rn][cn+1]==6 ||g[rn][cn+1]==7)) //right
        return 2;
    if(rn!=0 && (v[rn-1][cn]==0) && (g[rn-1][cn]==1 ||g[rn-1][cn]==2 ||g[rn-1][cn]==4 ||g[rn-1][cn]==5)) //up
        return 3;
    if(rn!=n-1 && (v[rn+1][cn]==0) && (g[rn+1][cn]==1 ||g[rn+1][cn]==2 ||g[rn+1][cn]==4 ||g[rn+1][cn]==7)) //down
        return 4;
    
    return 0;
}*/

int bfs(int g[][1001],int v[][1001],int r,int c,int n,int m,int l )
{
    queue<pair<int,int>> q;
    q.push(make_pair(r,c));
    q.push(make_pair(-1,-1));
    v[r][c] = 1;
    //l--;
    int ct = 0;
    while(!q.empty())
    {
        if(!l)
            break;
        pair<int,int>p = q.front();
        q.pop();
        int rn = p.first, cn = p.second;
        if(rn == -1 && cn == -1) {l--;  q.push(make_pair(-1,-1)); continue;}
        if(g[rn][cn]>0)ct++;
       
            if(g[rn][cn]==1)
            {
                if(cn!=0 && (v[rn][cn-1]==0) && (g[rn][cn-1]==1 ||g[rn][cn-1]==3 ||g[rn][cn-1]==4 ||g[rn][cn-1]==5)){q.push(make_pair(rn,cn-1)); v[rn][cn-1] = 1;} //left
                if(cn!=m-1 && (v[rn][cn+1]==0) && (g[rn][cn+1]==1 ||g[rn][cn+1]==3 ||g[rn][cn+1]==6 ||g[rn][cn+1]==7)){q.push(make_pair(rn,cn+1)); v[rn][cn+1] = 1;} //right
                if(rn!=0 && (v[rn-1][cn]==0) && (g[rn-1][cn]==1 ||g[rn-1][cn]==2 ||g[rn-1][cn]==6 ||g[rn-1][cn]==5)){q.push(make_pair(rn-1,cn)); v[rn-1][cn] = 1; } //up
                 if(rn!=n-1 && (v[rn+1][cn]==0) && (g[rn+1][cn]==1 ||g[rn+1][cn]==2 ||g[rn+1][cn]==4 ||g[rn+1][cn]==7)) {q.push(make_pair(rn+1,cn)); v[rn+1][cn] = 1; }  //down
            }
            else if(g[rn][cn]==2)
            {
               if(rn!=0 && (v[rn-1][cn]==0) && (g[rn-1][cn]==1 ||g[rn-1][cn]==2 ||g[rn-1][cn]==6 ||g[rn-1][cn]==5)) {q.push(make_pair(rn-1,cn)); v[rn-1][cn] = 1;} //up
               if(rn!=n-1 && (v[rn+1][cn]==0) && (g[rn+1][cn]==1 ||g[rn+1][cn]==2 ||g[rn+1][cn]==4 ||g[rn+1][cn]==7)) {q.push(make_pair(rn+1,cn)); v[rn+1][cn] = 1;}  //down
            }
            else if(g[rn][cn]==3)
            {
                 if(cn!=0 && (v[rn][cn-1]==0) && (g[rn][cn-1]==1 ||g[rn][cn-1]==3 ||g[rn][cn-1]==4 ||g[rn][cn-1]==5)){q.push(make_pair(rn,cn-1)); v[rn][cn-1] = 1;} //left
                if(cn!=m-1 && (v[rn][cn+1]==0) && (g[rn][cn+1]==1 ||g[rn][cn+1]==3 ||g[rn][cn+1]==6 ||g[rn][cn+1]==7)){q.push(make_pair(rn,cn+1)); v[rn][cn+1] = 1; } //right
            }
            else if(g[rn][cn]==4)
            {   
                if(cn!=m-1 && (v[rn][cn+1]==0) && (g[rn][cn+1]==1 ||g[rn][cn+1]==3 ||g[rn][cn+1]==6 ||g[rn][cn+1]==7)){q.push(make_pair(rn,cn+1)); v[rn][cn+1] = 1; } //right
                if(rn!=0 && (v[rn-1][cn]==0) && (g[rn-1][cn]==1 ||g[rn-1][cn]==2 ||g[rn-1][cn]==6 ||g[rn-1][cn]==5)) {q.push(make_pair(rn-1,cn)); v[rn-1][cn] = 1;} //up
            }
            else if(g[rn][cn]==5)
            {
               if(cn!=m-1 && (v[rn][cn+1]==0) && (g[rn][cn+1]==1 ||g[rn][cn+1]==3 ||g[rn][cn+1]==6 ||g[rn][cn+1]==7)) {q.push(make_pair(rn,cn+1)); v[rn][cn+1] = 1; } //right
               if(rn!=n-1 && (v[rn+1][cn]==0) && (g[rn+1][cn]==1 ||g[rn+1][cn]==2 ||g[rn+1][cn]==4 ||g[rn+1][cn]==7)) {q.push(make_pair(rn+1,cn)); v[rn+1][cn] = 1; }  //down
            }
            else if(g[rn][cn]==6)
            {
                if(rn!=n-1 && (v[rn+1][cn]==0) && (g[rn+1][cn]==1 ||g[rn+1][cn]==2 ||g[rn+1][cn]==4 ||g[rn+1][cn]==7)) {q.push(make_pair(rn+1,cn)); v[rn+1][cn] = 1; }  //down
               if(cn!=0 && (v[rn][cn-1]==0) && (g[rn][cn-1]==1 ||g[rn][cn-1]==3 ||g[rn][cn-1]==4 ||g[rn][cn-1]==5))  {q.push(make_pair(rn,cn-1)); v[rn][cn-1] = 1; } //left
            }
            else if(g[rn][cn] == 7)
            {
              if(cn!=0 && (v[rn][cn-1]==0) && (g[rn][cn-1]==1 ||g[rn][cn-1]==3 ||g[rn][cn-1]==4 ||g[rn][cn-1]==5)) {q.push(make_pair(rn,cn-1)); v[rn][cn-1] = 1; } //left
              if(rn!=0 && (v[rn-1][cn]==0) && (g[rn-1][cn]==1 ||g[rn-1][cn]==2 ||g[rn-1][cn]==6 ||g[rn-1][cn]==5)) {q.push(make_pair(rn-1,cn)); v[rn-1][cn] = 1; } //up
            }
           
    }
    return ct;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m,r,c,l;
	    int g[1001][1001];
	    int v[1001][1001];
	    cin>>n>>m;
	    cin>>r>>c;
	    cin>>l;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            cin>>g[i][j];
	            v[i][j] = 0;
	        }
	    }
	    cout<<bfs(g,v,r,c,n,m,l)<<endl;
	}
	return 0;
}

