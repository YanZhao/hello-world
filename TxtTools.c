void TestTxtTools(void)
{
	char FileName [] = "test.txt"
	unsigned int numLines;
	unsigned int numWords;
	numLines = CountLines(FileName);
	
	numWords = CountEnglishWords(FileName);
	printf("%u %u\n",numLines,numWords);
}