#define max(a,b) ((a)>(b)?(a):(b))

void ZeroOnePack(int f[],int c,int w){
	for (int i=v;i>=c,--i)
		f[i]=max(f[i],f[i-c]+w)
} 

void CompletePack(int f[],int c,int w){
	for (i=c;i<=v;++i)
		f[i]=max(f[i],f[i-c]+w)
} 

void MultiplePack(int f[],int c,int w,int m){
	if (c*m>v){
		CompletePack(f[],c,w);
		return;
	}
	int k=1;
	while (k<m){
		ZeroOnePack(f[],k*c,k*w);
		m-=k;
		k<<1;
	}
	ZeroOnePack(f[],m*c,m*w);
}


int main()
{
	memset(f,0,sizeof(f));
	//����Ҫװ����������ʼ��Ϊ-maxlongint 
	
	// 01���� 
	for (int i=1;i<=n;++i)
		ZeroOnePack(f[],c[i],w[i]);
		
	//��ȫ����
	for (int i=1;i<=n;++i)
		CompletePack(f[],c[i],w[i]);
	
	//���ر���	
	for(int i=1;i<=n;++i)
		MultiplePack(f[],c,w,m);
}
