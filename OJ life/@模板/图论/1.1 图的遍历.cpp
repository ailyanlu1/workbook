//ͼ�� DFS BFS ͼ����ʽǰ���Ǳ�ʾ

bool s[maxn]={0}; //���Ƿ񱻱��� 

void dfs (int x){
	s[x]=true;
	cout<<x;
	for (int i=head[x];i!=-1;i=edge[i].next)
		if (!s[edge[i].to]) dfs(edge[i].to);		
		
//------------------------------------------------------------------------------

bool s[maxn]; //ͬ�� 
viod bfs(int x){
	int quque[maxn]; //���д��ͦ����ġ���������ѧϰ�� 
	int iq=0;
	queue[iq++]=x;
	for (int i=0;i<iq;++i){
		cout<<quque[i];
		s[i]=true;																			
		for (k=head[queue[i]];k!=-1;k=edge[k].next)
			if (!s[edge[k].to]) quque[iq++]=edge[k].to;
	}
}
