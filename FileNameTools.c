#include<stdio.h>
#include<string.h>
#include"FileNameTools.h"
int GetDir(char *whole,char* dir)
<<<<<<< HEAD
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
=======
{ 
   char *index;
   int len;                                    //´¢´æ³¤¶È
   index=strrchr(whole,'/');             
   len=index-whole;
   strncpy(dir,whole,len);
   dir[len]='\0';
   return len;
>>>>>>> upstream/master
}



int GetName(char *whole,char* Name)
{
<<<<<<< HEAD
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
=======
    int len;                               
    char *rname,*lname;                //name×Ö·û´®µÄ×ó±ßºÍÓÒ±ß
    lname=strrchr(whole,'/');
    lname++;
    rname=strrchr(whole,'.');
    len=rname-lname;
    strncpy(Name,lname,len);
    Name[len]='\0';
    return len;
>>>>>>> upstream/master
}


int GetExt(char *whole,char* Ext)
{
<<<<<<< HEAD
    int i;
    i=strlen(whole);
    while(whole[i]!='.')
    {
        i--;
    }
     strcpy(Ext,&whole[i+1]);
    return strlen(whole)-i-1;
=======
   char *index;
   int len;
   index=strrchr(whole,'.');
   index++;
   len=strlen(whole)-strlen(index);
   strncpy(Ext,index,len);
   Ext[len]='\0';
   return len;
>>>>>>> upstream/master
}
