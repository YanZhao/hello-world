#include<stdio.h>
#include<string.h>
#include"FileNameTools.h"
int GetDir(char *whole,char* dir)
{ 
	char *index;
	int len;                      /*���泤��*/
	index=strrchr(whole,'/');     /*����'/'���ַ���whole�дӺ��濪ʼ�ĵ�һ�γ��ֵ�λ�ã����Ӵ˵�ĩβ���Ƹ�index*/
	len=index-whole;
	strncpy(dir,whole,len);       /*���ַ���whole��ǰlen���ַ��������ַ���dir��*/
	dir[len]='\0';                /*�����ַ���������*/
	return len;                   /*���س���*/
}

int GetName(char *whole,char* Name)
{
    int len;                               
    char *rname,*lname;                 /*name�ַ�������ߺ��ұ�*/
    lname=strrchr(whole,'/');		//�Ѿ���GetDir��˵��	
    lname++;				//�ิ����'/'������ָ��������һλ
    rname=strrchr(whole,'.');		//������չ��
    len=rname-lname;			//�õ�������չ�����ļ����ĳ���
    strncpy(Name,lname,len);		//�õ�������չ�����ļ���
    Name[len]='\0';			//�����ַ���������
    return len;				//�����ļ�������
}


int GetExt(char *whole,char* Ext)
{
   char *index;
   int len;
   index=strrchr(whole,'.');		//����չ��(Ҳ�����ļ�����׺)����
   index++;				//�ิ����'.'����ָ������һλ
   len=strlen(whole)-strlen(index);	//�õ���չ���ĳ���
   strncpy(Ext,index,len);		//������չ��
   Ext[len]='\0';			//�����ַ���������
   return len;				//������չ������
}

void TestFileNameTools(void)
{
	char whole[]="c:/windows/system32/abc.dll";
	char des[256];

	GetDir(whole,des);
	printf("%s\n",des);

	GetName(whole,des);
	printf("%s\n",des);

	GetExt(whole,des);
	printf("%s\n",des);

}