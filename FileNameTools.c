#include<stdio.h>
#include<string.h>
#include"FileNameTools.h"
int GetDir(char *whole,char* dir)
{ 
   char *index;
   int len;                                    //´¢´æ³¤¶È
   index=strrchr(whole,'/');             
   len=index-whole;
   strncpy(dir,whole,len);
   dir[len]='\0';
   return len;
}



int GetName(char *whole,char* Name)
{
    int len;                               
    char *rname,*lname;                //name×Ö·û´®µÄ×ó±ßºÍÓÒ±ß
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
   char *index;
   int len;
   index=strrchr(whole,'.');
   index++;
   len=strlen(whole)-strlen(index);
   strncpy(Ext,index,len);
   Ext[len]='\0';
   return len;
}
