#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int Binario(int);

int main() {
	int op,n,m;
	
	printf("\n\n1. Escoger numero\n2. Random\n");
	scanf("%d",&op);
	switch(op){
		case 1:
			scanf("%d",&n);
			Binario(n);
			break;
		case 2:
			m=rand()%1001;
			Binario(m);
			break;
		default:
			printf("opcion invalida! D:<\n");
			break;
	}
	
	return 0;
}

int Binario(int n){
	int p=n;
	int i=0;
	int j;
	int a[10];
while(n>0){
	if(n%2==0){
		a[i]=0;
		i++;}
	else{
		a[i]=1;
		i++;
		}
	n=n/2;
}
printf("\nEl numero %d en Binario es: ",p);
for(j=i-1;j>=0;j--){
printf("%d",a[j]);
}
printf(",");
}



