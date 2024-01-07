#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	FILE *file;
	file=fopen("sample.csv","r");
	if(file==NULL)
	{
		printf("File not able to open\n");
	}
	else
	{
		while(fgets(str,100,file))
		{
			puts(str);
		}
	}
	fclose(file);
	return 0;
}
