//����������λ0�ĵ㲢ɾ���õ�ͱߡ� ����ͼ���л�ͼ�޷���������
//��ʽǰ���Ǵ�ͼ

int queue[maxn],iq=0;
indreege[maxm] //���
 
for (int i=1;i<=n;++i) 
	if (!indreege[i]) queue[iq++]=i;
for (i=0;i<iq;++i){
	for (k=head[queue[i]];k!=-1;k=edge[k].next){
		--indegree[edge[k].to];
		if (!indegree[edge[k].to]) queue[iq++]=egde[k].to; 
	}
}

for (i=0;i<iq;++i) cout<<quque[i]<<' ';