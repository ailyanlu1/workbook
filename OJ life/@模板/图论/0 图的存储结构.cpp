
//�ڽӾ���
int a[maxn][maxn];//����ʡ�ԡ������� 
 
//------------------------------------------------------------------------------
 
//ǰ���� 
int head[maxn]; //�洢���ΪVi�ĵ�һ���ߵ�λ�� 
struct node{ 
	int from;  //��� 
	int to;  //�յ� 
	int w;  //Ȩֵ 
};
node edge[maxm];

bool cmp(node a,node b){
	if (a.from==b.from && a.to==b.to) return a.w<b.w;
	if (a.from==b.from) return a.to<b.to;
	return a.from<b.from;
} //�ȽϺ���

cin>>n>>m;
for (i=0;i<m;++i)
	cin>>edge[i].from>>edge[i].to>>edge[i].w;
sort(edge,edge+m,cmp);
head[edge[0].from]=0;
for (i=1;i<m;++i)
	if (edge[i].from!=edge[i-1].from)
		head[edge[i].from]from=i; //���� 
//�������ǰ�headɨһ�� ʡ��  
 
//------------------------------------------------------------------------------
 
//�ڽӱ�
struct edgenode{  //�ڽӱ�ڵ� 
	int to;
	int w;
	edgenode *next;
};

struct vnode{  //����ڵ� 
	int from;
	edgenode *first;
}

vnode adjlist[maxn];  //����ͼ���ڽӱ�

//����
cin>>i>>j>>w;
edgenode *p=new edgenode();
p->to=j;
p->w=w;
p->next=adjlist.first;
adjlist[i].first=p;

//����
for (i=i;i<n;++i)
	for (edgenode *k=adjlist[i].frist;k!=null;k=k->next)
		cout<<i<<' '<<k->to<<' '<<k->w<<endl;
 
//------------------------------------------------------------------------------
 
//STL��vectorģ������
struct edgenode{
	int to;
	int w;
};
vector <node> map[maxn];

//����
edgenode e;
cin>>i>>j>>w;
e.to=j;
e.w=w;
map[i].push_back(e);

//����
for (i=1;i<=n;++i)
	for (vector<node>::iterator k=map[i].begin():k!=map[i].end();k++ ){
		node t=*k;
		cout<<i<<' '<<t.to<<' '<<t.w<<endl;
	} 
	
//------------------------------------------------------------------------------

//��ʽǰ���ǣ�����^-^��

int head[n];
struct edgenote{
	int to;
	int w;
	int next; //��ʼ��λ-1 
}  
edgenode edge[m];

//����
cin>>i>>j>>w;
edge[k].to=j;
edge[k].w=w;
edge[k].next=head[i];
head[i]=k;

//����
for (i=1;i<=n;++i)
	for (k=head[i];k!=-1;k=edge[k].next)
		cout<<i<<' '<<edge[k].to<<' '<<egde[k].w<<endl;