#include<stdio.h>
int main(){
	int a[10],i;
	for(i=0;i<10;++i)scanf("%d",&a[i]);
	FILE *fp=fopen("arr.bin","wb"); //writing to this file
	fwrite(a,sizeof(int),10,fp); //Writing 10 integers once
	fwrite(a,sizeof(int),10,fp); //Writing them again
	fclose(fp);
	return 0;
}
