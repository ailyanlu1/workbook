//4288 Coder �߶��� vector͵������
/*
���⣺��һ�����У�ÿ����3�ֲ�����
    1�������򼯺�������һ��ԭ��x
    2���Ѽ����е�Ԫ��x
    3����ѯ�������±�%5=3��Ԫ�ص��ܺ�

˼·��vector
*/
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<vector>
using namespace std;
char op[5];
int n,x;
__int64 ans;

vector<int>V;
int main(){
  int i;
  while(scanf("%d",&n)!=EOF){
    V.clear();
    while(n--){
      scanf("%s",op);
      if(op[0] == 's'){
        ans = 0;
        for(i = 2; i < V.size(); i+=5)
          ans += V[i];
        printf("%I64d\n",ans);
      }
      else{
        scanf("%d",&x);
        if(op[0] == 'a')
          V.insert(lower_bound(V.begin(),V.end(),x),x);
        else
          V.erase(lower_bound(V.begin(),V.end(),x));
      }
    }	
  }
  return 0;
}