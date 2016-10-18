#include<stdio.h>
#include<string.h>

void matching(char p[50], char t[200])
{
	int p_length = strlen(p);
	int t_length = strlen(t);	
	int check =1;
	int found =0;
	if(p_length > t_length)
		printf("not found \n");
	for(int i=0; i<=(t_length - p_length); i++)
	{
		check =1;
		for(int j=0; j<p_length; j++)
		{
			if(t[i+j] != p[j])
			{
				check =0;
				break; 
			}
		}
		if(check == 1)
		{
			printf("Match at position %d \n", i+1);
			found =1;
		}
	}
	if(found == 0)
		printf("not found \n");
}

int main()
{
	char p[50], t[200];
	gets(t);
	gets(p);
	matching(p,t);
}