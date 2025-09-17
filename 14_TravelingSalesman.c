#include <stdio.h>
#include <limits.h>
int best=INT_MAX;
int n;
int visited[12];
int g[12][12];
void dfs(int u,int cnt,int cost){
 if(cost>=best) return;
 if(cnt==n){ if(g[u][0]) best = cost + g[u][0]; return; }
 for(int v=0;v<n;v++) if(!visited[v] && g[u][v]){ visited[v]=1; dfs(v,cnt+1,cost+g[u][v]); visited[v]=0; }
}
int main(){
 scanf("%d",&n);
 for(int i=0;i<n;i++) for(int j=0;j<n;j++) scanf("%d",&g[i][j]);
 visited[0]=1; dfs(0,1,0);
 if(best==INT_MAX) printf("-1\n"); else printf("%d\n",best);
 return 0;}