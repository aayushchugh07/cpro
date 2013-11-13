#include<stdio.h>
#include<string.h>

int main()
{	
	int n,i,j;
	scanf("%d",&n);
	
	
	for(i=0;i<n;++i)
	{	
		
		int flag=0,count=0;
		char a[100];
		
		scanf(" %s",a);
		j=-1;
		while(a[j+1]!='\0')
		{	j++;
			//printf("%c",a[j]);
			if(a[j]=='a'||a[j]=='e'||	a[j]=='i'||	a[j]=='o'||	a[j]=='u' ||	a[j]=='A' ||	a[j]=='E'||	a[j]=='I' ||	a[j]=='O' ||	a[j]=='U')
			{	count++;
	
				while  (a[1+j]=='a'||a[j+1]=='e'||	a[j+1]=='i'||	a[j+1]=='o'||	a[j+1]=='u'||	a[j+1]=='A' ||	a[j+1]=='E' ||	a[j+1]=='I' ||	a[j+1]=='O'||	a[j+1]=='U')
				j++;
			}
		}
		printf("%d\n",count);		
	}

	return 0;
}