#include <iostream>
#include <string> 
using namespace std;
int main(int argc, char *argv[])
{
	string a; int b,i,j;
	cin>>a;
	while (a!="0"){
		b=0; 
		for(i=0;i<a.length();++i) b+=a[i]-'0';	 
		j=b;
		while (b>9){
			j=0;
			while (b){
				j+=(b%10); 
				b/=10; 
			}
			b=j;
		}
		cout<<j<<endl;
		cin>>a;
	}
	return 0;
}

/*
���¼���Ч�� AC ���룡������
#include<stdio.h>
int main()
{
    int a,c;
    for(;scanf("%1d",&a),a>0;printf("%d\n",--a%9u+1))
        while((c=getchar())-48u<10)
            a+=c-48;
    return 0;
}
˵����
1���ܹ�����ܳ�λ��������������ʹ�����顣
2���ٶȼ��£��������ø�Ч��getchar��������ѭ����������λ���ķ�����ֻ��һ����9���࣬�������ݡ��������Լ��밡��
3����Ϊһ���յ�0����Ϊ��������������������ܹ�AC��˵����������0��ͷ�Ķ�λ������

#include<stdio.h>
int main()
{
	int i,m;
    char s[1000];
    while(scanf("%s",s)==1&&s[0]!='0'){
         for(m=i=0;s[i];i++)
                 m+=s[i]-'0';
    printf("%d\n",m%9==0?9:m%9);    //��������~
    }
    return 0;
} 
*/