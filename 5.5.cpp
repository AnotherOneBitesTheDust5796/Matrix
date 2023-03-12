#include>
using namespace std;
const int N=100;
int a[N][N],b[N][N];
int main()
{
int n;
cin>>n;

for(int i=0;i;i++)
{
for(int j=0;j;j++)
{
cin>>a[i][j];
}
}

for(int i=0;i;i++)
{
for(int j=0;j;j++)
{
b[i][j]=a[i][j];
}
}

for(int i=0;i;i++)
{
int min_el=b[i][0],min_j=0;
for(int j=0;j;j++)
{
if(b[i][j]<min_el)
{
min_el=b[i][j];
min_j=j;
}
}
if(i<min_j)
{
swap(b[i][i],b[min_j][min_j]);
swap(b[i][min_j],b[min_j][i]);
}
else if(i>min_j)
{
swap(b[i][i],b[min_j][min_j]);
swap(b[min_j][i],b[min_j][min_j]);
}
}

for(int i=0;i;i++)
{
for(int j=0;j;j++)
{
cout<<b[i][j]<<" ";
}
cout<<endl;
}
return 0;
}
