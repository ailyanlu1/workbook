int ans[maxn];
int ansi=0; //��¼�� 
bool visit[2*maxm]; //����ͼ�������ߴ����� 
void dfs(int now){
	for (int k=head[now];k!=-1;k=edge[k].next)
		if (!visit[t]){
			visit[k]=true;
			visit[k^1]=true; //��Ƿ���� ע��1 
			dfs(edge[k].to);
			ans[ansi++]=k;
		} 
}  
//ע��1����Ϊ��ʽǰ���Ǵ������ʱ��edge[i]��a->b edge[i+1]�� b->a�� ^1����