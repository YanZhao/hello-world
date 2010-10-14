#include<stdio.h>
#include<string.h>
#include"FileNameTools.h"
int GetDir(char *whole,char* dir)

{
   char *index;
   int len;
   index=strrchr(whole,'/');
   len=index-whole;
   strncpy(dir,whole,len);
   dir[len]='\0';
   return len;
}



int GetName(char *whole,char* Name)
{
    int len;
    char *rname,*lname;
    lname=strrchr(whole,'/');
    lname++;
    rname=strrchr(whole,'.');
    len=rname-lname;
    strncpy(Name,lname,len);
    Name[len]='\0';
    return len;
}


int GetExt(char *whole,char* Ext)
{
    int *index;
    index=strrchr(whole,'.');
    strcpy(Ext,index+1);
    return strlen(index+1);

}
