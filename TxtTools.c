#include <stdio.h>

unsigned int CountLines(char *FileName)
{
    FILE* fp=NULL;
    char ch;
    unsigned int sum=1;

    fp=fopen(FileName,"rb");
    if (fp==NULL)
    {
        perror("Count failed");
        return 0;
    }
    ch=fgetc(fp);
    if (ch==EOF)
     return 0;
    while(ch!=EOF)
    {
        if (ch=='\n')
            sum++;
        ch=fgetc(fp);
    }
    fclose(fp);

    return sum;
}

unsigned int CountEnglishWords(char *FileName)
{
    FILE* fp=NULL;
    unsigned int sum=1;
    char ch;

    fp=fopen(FileName,"rb");
    if (fp==NULL)
    {
        perror("Count failed");
        return 0;
    }
    ch=fgetc(fp);
    if (ch==EOF)
     return 0;
    while(ch!=EOF)
    {
        if (ch==' ')
            sum++;
        ch=fgetc(fp);
    }
    fclose(fp);
    return sum;
}

void TestTxtTools(void)
{
	char FileName [] = "E:\\wangzheng.txt";
	unsigned int numLines;
	unsigned int numWords;
	numLines = CountLines(FileName);

	numWords = CountEnglishWords(FileName);
	printf("%u %u\n",numLines,numWords);
}
