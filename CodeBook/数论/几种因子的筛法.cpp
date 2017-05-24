
///1<****************************筛质因子************************>
#include<cstdio>
#include<vector>
using namespace std;
const int N = 100000 + 5;
vector<int > prime_factor[N];
void init()
{
    for(int i = 2; i < N; i++)
        if(prime_factor[i].size() == 0) //如果i是质数
            for(int j = i; j < N; j += i)
                prime_factor[j].push_back(i);
}
int main()
{
    init();
    for(int i=0;i<prime_factor[20].size();i++)
        printf("%d\n",prime_factor[20][i]);
}

///<****************************筛质因子************************>



///2<****************************筛一般因子************************>
vector <int>factor[maxn];
const int maxn=100000;
void init()
{
    for(int i=1;i<=maxn;i++)
        for(int j=i;j<maxn;j+=i)
            factor[j].push_back(i);
}
///<****************************筛一般因子************************>



///3<****************************预处理质分解************************>
vector<int> prime_factor[maxn];
void init()
{
    for(int i=2;i<maxn;i++) if(prime_factor[i.size()==0)
        for(int j=i;j<maxn;j+=i)
        {
            int tmp=j;
            while(tmp%i==0)
            {
                prime_factor[j].push_back(i);
                tmp/=i;
            }
        }
}

///3<****************************预处理质分解************************>


