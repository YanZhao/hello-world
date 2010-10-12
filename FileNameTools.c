#include<stdio.h>
#include<string.h>
#include"FileNameTools.h"
int GetDir(char *whole,char* dir)
{
    int i;
    char t;
    i=strlen(whole);
    while(whole[i]!='\\')
    {
        i--;
    }

    t=whole[i+1];
    whole[i+1]='\0';
    strcpy(dir,whole);
    whole[i+1]=t;
    return i;
}



int GetName(char *whole,char* Name)
{
    int i,j,k;
    j=strlen(whole);
    while(whole[j]!='\\')
    {
        j--;
        if(whole[i]=='.')
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
    int i;
    i=strlen(whole);
    while(whole[i]!='.')
    {
        i--;
    }
     strcpy(Ext,&whole[i+1]);
    return strlen(whole)-i-1;
}
