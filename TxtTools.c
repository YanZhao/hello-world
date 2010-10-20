#include <stdio.h>

unsigned int CountLines(char *FileName)
{
    FILE* fp=NULL;                //设置文件指针
    char ch;                      //暂存文件内容
    unsigned int sum=1;           //设置计数器，初始值为1

    fp=fopen(FileName,"rb");
    if (fp==NULL)                 //如果文件打开失败，提示错误
    {
        perror("Count failed");
        return 0;
    }
    ch=fgetc(fp);
    if (ch==EOF)                  //文件为空，返回值为0
     return 0;
    while(ch!=EOF)                //以回车为分隔，对行进行计数
    {
        if (ch=='\n')
            sum++;
        ch=fgetc(fp);
    }
    fclose(fp);                   //关闭文件

    return sum;
}

unsigned int CountEnglishWords(char *FileName)
{
    FILE* fp=NULL;                  //设置文件指针
    unsigned int sum=1;             //设置计数器，初始值为1
    char ch;                        //暂存文件内容

    fp=fopen(FileName,"rb");        //以只读方式打开文件
    if (fp==NULL)                   //如果文件打开失败，提示错误
    {
        perror("Count failed");
        return 0;
    }
    ch=fgetc(fp);
    if (ch==EOF)                    //文件为空，返回值为0
     return 0;
    while(ch!=EOF)                  //以空格为分隔，开始对英语单词进行计数
    {
        if (ch==' ')
            sum++;
        ch=fgetc(fp);
    }
    fclose(fp);                     //关闭文件
    return sum;
}

void TestTxtTools(void)
{
	char FileName [] = "test.txt";
	unsigned int numLines;
	unsigned int numWords;
	numLines = CountLines(FileName);

	numWords = CountEnglishWords(FileName);
	printf("%u %u\n",numLines,numWords);
}
