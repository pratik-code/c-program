#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000],c1,c2;
    int  i,count;

    printf("Enter  the string : ");
    gets(s);

	printf("Enter a character replace: ");
    scanf("%c",&c1);
    while(getchar()!='\n');

    printf("\nEnter character to replace  with  %c : ",c1);
    scanf("%c",&c2);
    printf("\n before replace:%s",s);
count=0;
for(i=0;s[i]!='\0';i++){

    count++;
}

    for(i=count-1;i>=0;i--)
	{
		if(s[i]==c1)
		{
		   s[i]=c2;
		   break;

	    }

	}

    printf("\nafter replace:%s",s);
}
