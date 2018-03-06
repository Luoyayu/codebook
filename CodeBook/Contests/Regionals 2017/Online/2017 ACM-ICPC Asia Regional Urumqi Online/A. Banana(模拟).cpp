#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
//题意:给出每只猴子偏好的几种香蕉
//给出香蕉的产地几个产地
//输出每只猴子接受的产地
int main()
{
    int t;scanf("%d",&t);
    while(t--)
    {
        int n,m;scanf("%d%d",&n,&m);
        bool mon[55][55];
        bool place[55][55];
        memset(mon,0,sizeof(mon));
        memset(place,0,sizeof(place));
        int x,y;
        int mxm=0,mxp=0,mxb=0;
        for(int i=1;i<=n;i++)
        {
            scanf("%d%d",&x,&y);
            mon[x][y]=1;
            mxm=max(mxm,x);
            mxb=max(mxb,y);
        }
        for(int i=1;i<=m;i++)
        {
            scanf("%d%d",&x,&y);
            place[y][x]=1;
            mxp=max(mxp,y);
        }
        for(int i=1;i<=mxm;i++)
        {
            for(int j=1;j<=mxp;j++)
            {
                for(int k=1;k<=mxb;k++)
                {

                    if(mon[i][k]==1&&place[j][k]==1)
                        {
                            printf("%d %d\n",i,j);
                            break;
                        }
                }

            }
        }
        printf("\n");
    }

    return 0;
}