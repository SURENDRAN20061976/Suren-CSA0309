#include <stdio.h>
#include <limits.h>
#define INF INT_MAX/4
int main(){ int n,m; if(scanf("%d%d",&n,&m)!=2) return 0; int g[n][n]; for(int i=0;i<n;i++) for(int j=0;j<n;j++) g[i][j]= (i==j?0:INF);
 for(int i=0;i<m;i++){int u,v,w; scanf("%d%d%d",&u,&v,&w); g[u][v]=w; g[v][u]=w; }
 int src; scanf("%d",&src);
 int dist[n],vis[n]; for(int i=0;i<n;i++){dist[i]=INF; vis[i]=0;} dist[src]=0;
 for(int i=0;i<n;i++){ int u=-1; for(int j=0;j<n;j++) if(!vis[j] && (u==-1 || dist[j]<dist[u])) u=j; if(dist[u]==INF) break; vis[u]=1; for(int v=0;v<n;v++) if(!vis[v] && dist[u]+g[u][v]<dist[v]) dist[v]=dist[u]+g[u][v]; }
 for(int i=0;i<n;i++) if(dist[i]>=INF) printf("INF "); else printf("%d ",dist[i]); printf("\n"); return 0;}