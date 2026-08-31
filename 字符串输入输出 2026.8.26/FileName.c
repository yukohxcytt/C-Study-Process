#include<stdio.h>
int main(void)
{
	char word[8];
	char word2[8];
	scanf("%s", &word);//读到空格后会马上停止，进入下一个scanf，所以第一个scanf输入Hello World只会读取到Hello
	scanf("%s", &word2);
	printf("%s$$%s\n", word, word2);
	return 0;
}