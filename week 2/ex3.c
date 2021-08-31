#include <stdio.h>


int main(int argc,char **argv){
	int k;
	sscanf(argv[1],"%d",&k);

	for(int i=1;i<=k;i++){
		for(int j=0;j<k-i;j++)
				printf(' ');
		for(int j=0;j<i*2-1;j++)
				printf("*");
		printf("\n");
	}
	return 0;
}
