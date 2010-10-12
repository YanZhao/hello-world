#include<stdio.h>
#include<string.h>
#include"FileNameTools.h"
int GetDir(char *whole,char* dir)
{
    int i,j;
    char t;
    for(i=0;i<=strlen(whole);i++)
      if (whole[i]=='\\')
      {
          j=i;
      }
    t=whole[j+1];
    whole[j+1]='\0';
    strcpy(dir,whole);
    whole[j+1]=t;
    return j;
}



int GetName(char *whole,char* Name)
{
    int i,j,k;
    for(i=0;i<=strlen(whole);i++)
    {
        if (whole[i]=='\\')
          j=i;
        if (whole[i]=='.')
          k=i;
    }
    for(i=j+1;i<k;i++)
    {
        strcat(Name,&whole[i]);
    }
    return k-j-1;
}


int GetExt(char *whole,char* Ext)
{
    int i,j;
    for(i=0;i<=strlen(whole);i++)
     if (whole[i]=='.')
     {
         j=i;
     }
     strcpy(Ext,&whole[j+1]);
    return strlen(whole)-j-1;
}
