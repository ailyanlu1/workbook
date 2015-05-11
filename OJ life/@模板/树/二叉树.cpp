//==========================================����ͷ��
#include <iostream>
using namespace std;
struct BiTNode{
 char data;
 struct BiTNode *lchild, *rchild;//���Һ���
};
BiTNode *T;
void CreateBiTree(BiTNode* &T);
void Inorder(BiTNode* &T);
void PreOrderTraverse(BiTNode* &T);
void Posorder(BiTNode* &T);
//===========================================������
int main(){
cout<<"����һ����������A->Z�ַ������������ݣ��á�#����ʾ����:"<<endl;
  CreateBiTree(T);
cout<<"����ݹ������"<<endl;
PreOrderTraverse(T);
cout<<endl;
cout<<"����ݹ������"<<endl;
  Inorder(T);
cout<<endl;
cout<<"����ݹ������"<<endl;
        Posorder(T);
cout<<endl;
  return 1;}
//=============================================����ݹ鴴����������
void CreateBiTree(BiTNode* &T){
 //����������������н���ֵ��һ���ַ������ո��ַ����������
 //������������ʾ������T��
 char ch;
 if((ch=getchar())=='#')T=NULL;//����getchar����Ϊ��������׼�⺯��
 else{
  T=new BiTNode;//�����µ�����
  T->data=ch;//��getchar�������������
  CreateBiTree(T->lchild);//�ݹ鴴��������
  CreateBiTree(T->rchild);//�ݹ鴴��������
 }
}//CreateTree
//===============================================����ݹ����������
void PreOrderTraverse(BiTNode* &T){
 //����ݹ����������
 if(T){//����㲻Ϊ�յ�ʱ��ִ��
  cout<<T->data;
  PreOrderTraverse(T->lchild);//
  PreOrderTraverse(T->rchild);
 }
 else cout<<"";
}//PreOrderTraverse
//================================================�������������
void Inorder(BiTNode* &T){//����ݹ����������
 if(T){//bt=null�˲�
  Inorder(T->lchild);//�������������
  cout<<T->data;//���ʲ���
  Inorder(T->rchild);//�������������
 }
 else cout<<"";
 }//Inorder
//=================================================����ݹ����������
void Posorder(BiTNode* &T){
 if(T){
  Posorder(T->lchild);//����ݹ����������
  Posorder(T->rchild);//����ݹ����������
  cout<<T->data;//���ʸ����
 }
 else cout<<"";
}
//=================================================
