#include<stdio.h>
#include<string.h>
#include"FileNameTools.h"
int GetDir(char *whole,char* dir)
{ 
    int i,j;
    memset(dir,0,sizeof(dir));
    for(i=strlen(whole);1<=i;i--)
      if(whole[i]=='\\')break;
    for(j=0;j<i;j++)
      dir[j]=whole[j];
    return 0;
}



int GetName(char *whole,char* Name)
{
    return 0;
}


int GetExt(char *whole,char* Ext)
{
    return 0;
}
