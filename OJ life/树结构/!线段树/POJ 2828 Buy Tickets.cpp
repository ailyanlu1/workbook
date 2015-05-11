/*
** ��������֪���ܹ��� n ���ˣ������һ����Ҫ������ n �����е�λ���� p[n]�����ǿ���ֱ�ӰѶ��еĵ� p[n] ��λ�Ӱ��Ÿ��� n ����
** ���������ǵ� n-1 ���ˣ���Ҫ����ֻ�� n-1 ���˵ĵ� p[n-1] ��λ���ϣ���ô���أ����ǿ϶��ǴӶ��еĵ� 1 ����ʼ��������û�б���ռ���λ�þͼ� 1��ֱ�������� p[n-1]����ô�����λ�Ͱ��Ÿ��� n-1 ����
** ���ڵ� n-2 ���ˣ��Լ�ʣ�µ������˶�����������
** ��Ȼ�����������һ��һ�����������ǿ������߶�����̬��ͳ�ƿ���λ�õ������͸��¿���λ�õ���Ϣ
** ���Զ�ÿ���˰���λ�ã����Ҫ log(n) ��ʱ�䣬�ܵ�ʱ�临�Ӷ��� nlog(n) ��
*/ 


#include <cstdio>
#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
const int M=200010;

int tree[M<<2],pos[M],val[M],ans[M],kk;

void Build(int l,int r,int rt){
	tree[rt]=r-l+1;
	if (l==r) return;
	int m=(l+r)>>1;
	Build(lson);
	Build(rson);
}

void Update(int p,int l,int r,int rt){
	--tree[rt];
	if (l==r){
		kk=l;
		return;
	}
	int m=(l+r)>>1;	
	if (p<=tree[rt<<1]) 
		Update(p,lson);
	else
		Update(p-tree[rt<<1],rson);
}

int main()
{
//	std::ios::sync_with_stdio(false);
	int n,i,j,k;
	while (~scanf("%d",&n)){
		Build(1,n,1);
		for (i = 1; i <= n; ++i)
		//	cin>>pos[i]>>val[i];
			scanf("%d%d",&pos[i],&val[i]);
		for (i=n;i;--i){
			Update(pos[i]+1,1,n,1);
			ans[kk]=val[i];
		}
		for (i=1;i<n;++i)
			//cout<<ans[i]<<' ';
			printf("%d ",ans[i]);
		//cout<<ans[n]<<endl;
		printf("%d\n",ans[n]);
	}
	return 0;
}
