#include<stdio.h>

void getStr(char*);
char check(char*);

int main()
{
	char str[1000];
	char* pStr = str;
	getStr(pStr);
	//check(pStr);
	printf("%c", check(pStr));
	return 0;
}
void getStr(char* pStr)
{
	scanf_s("%[^\n]s", pStr, 1000);
}
char check(char* pStr)
{
	int i = 0, n = 0;
	char last = 'a';
	while (*(pStr + i) != '\0')
	{
		if (*(pStr + i) >= 'A' && *(pStr + i) <= 'Z')
			*(pStr + i) -= 'A' + 'a';

		if (*(pStr + i) >= 'a' && *(pStr + i) <= 'z')
		{
			if (*(pStr + i) >= last)
			{
				last = *(pStr + i);
				n++;
			}
				
		}
		i++;
	}
	if(n > 0)
	return last;
	else return '0';
}