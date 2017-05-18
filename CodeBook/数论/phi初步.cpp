//欧拉函数 phi(n) 定义为比n小且与n互质的数的个数
//1.唯一分解n=p1^k1*p2^k2···pn^kn
//2.phi(n)=n*(1-1/p1)*(1-1/p2)···(1-1/pn)
//证明:当n为素数时易得phi(n)=p(n^1)=n-1;
//当n为素数p的k次方,既n=p^k时,由公式得phi(n)=p^k-p^(k-1)
#include<cstdio>
#include<cstring>
#include<cmath>
const int maxn=3000000+33;
using namespace std;
int euler_phi(int n)//欧拉函数
{
    int m=(int)sqrt(n+0.5);
    int ans=n;
    for(int i=2;i<=m;i++)
        if(n%i==0)
        {
            ans=ans/i*(i-1);
            while(n%i==0) n/=i;
        }
    if(n>1) ans=ans/n*(n-1);
    return ans;
}
int phi[maxn];
int Euler[maxn]={0};
void phi_table(int n)//筛法欧拉表
{
    //memset(phi,0,sizeof phi);全局变量默认0
    phi[1]=1;
    for(int i=2;i<=n;i++)
        if(!phi[i])
            for(int j=i;j<=n;j+=i)
            {
                if(!phi[j])
                    phi[j]=j;
                phi[j]=phi[j]/i*(i-1);
            }
    Euler[1]=phi[1];
    for(int i=2;i<=maxn;i++)
       Euler[i]=Euler[i-1]+phi[i];
}
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        phi_table(3000000);
        printf("%d\n",Euler[b]-Euler[a-1]);
    }
    return 0;
}
