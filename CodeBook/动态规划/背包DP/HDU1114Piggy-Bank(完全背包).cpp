//小猪罐
#include<bits/stdc++.h>
using namespace std;
const int maxn=10010+5;
int dp[maxn],c[maxn],w[maxn];
const int INF=0x3f3f3f3f;
int main()
{
    int t;scanf("%d",&t);
    while(t--)
    {
        int E,F;
        scanf("%d %d",&E,&F);
        int V=F-E;
        int N;scanf("%d",&N);
        for(int i=1;i<=N;i++) scanf("%d %d",&w[i],&c[i]);
        for(int i=1;i<maxn;i++) dp[i]=INF;
        dp[0]=0;
        for(int i=1;i<=N;i++)
            for(int v=c[i];v<=V;v++)
                dp[v]=min(dp[v],dp[v-c[i]]+w[i]);
        if(dp[V]!=INF)
            printf("The minimum amount of money in the piggy-bank is %d.\n",dp[V]);
        else
            printf("This is impossible.\n");

    }
    return 0;
}
