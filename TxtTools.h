/*
参数值：
    输入文件名
返回值：
    返回文件中的行数，以回车为行分隔符。
*/
unsigned int CountLines(char* FileName);

/*
参数值：
    输入文件名
返回值：
    返回文件中的单词数（针对英文文件，以空格为词分割单位）
*/
unsigned int CountEnglishWords(char* FileName);


void TestTxtTools(void);
