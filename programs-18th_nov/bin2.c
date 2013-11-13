#include<stdio.h>
int main(){
	int a[20],i;
	FILE *fp=fopen("arr.bin","rb"); //reading from this Binary File
	fread(a,sizeof(int),20,fp); // reading 20 integers
	fclose(fp);
	for(i=0;i<20;++i)printf("%d\n",a[i]); //printing them
	return 0;
}
