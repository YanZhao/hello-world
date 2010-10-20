#include <stdio.h>

unsigned int CountLines(char *FileName)
{
    FILE* fp=NULL;                //�����ļ�ָ��
    char ch;                      //�ݴ��ļ�����
    unsigned int sum=1;           //���ü���������ʼֵΪ1

    fp=fopen(FileName,"rb");
    if (fp==NULL)                 //����ļ���ʧ�ܣ���ʾ����
    {
        perror("Count failed");
        return 0;
    }
    ch=fgetc(fp);
    if (ch==EOF)                  //�ļ�Ϊ�գ�����ֵΪ0
     return 0;
    while(ch!=EOF)                //�Իس�Ϊ�ָ������н��м���
    {
        if (ch=='\n')
            sum++;
        ch=fgetc(fp);
    }
    fclose(fp);                   //�ر��ļ�

    return sum;
}

unsigned int CountEnglishWords(char *FileName)
{
    FILE* fp=NULL;                  //�����ļ�ָ��
    unsigned int sum=1;             //���ü���������ʼֵΪ1
    char ch;                        //�ݴ��ļ�����

    fp=fopen(FileName,"rb");        //��ֻ����ʽ���ļ�
    if (fp==NULL)                   //����ļ���ʧ�ܣ���ʾ����
    {
        perror("Count failed");
        return 0;
    }
    ch=fgetc(fp);
    if (ch==EOF)                    //�ļ�Ϊ�գ�����ֵΪ0
     return 0;
    while(ch!=EOF)                  //�Կո�Ϊ�ָ�����ʼ��Ӣ�ﵥ�ʽ��м���
    {
        if (ch==' ')
            sum++;
        ch=fgetc(fp);
    }
    fclose(fp);                     //�ر��ļ�
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
