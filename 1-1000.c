#include <stdio.h>
#include <stdlib.h>

//Todos en binario 1-1000
//
int Binario(int);

int main() {
		int op,n,m,k,r;
		char cad[10];

	printf("\n\n1. Escoger numero\n2. Random\n");
	scanf("%d",&op);
	switch(op){
		case 1:
			scanf("%d",&n);
			for(k=0;k<=n;k++){
				Binario(k);
			}
			break;
		case 2:
			m=rand()%1001;
			for(r=0;r<=m;r++){
			Binario(r);}
			break;
		default:
			break;
	}
	return 0;
}


int Binario(int n){
	int i=0;
	int j;
	int a[10];

if(n==0){
	printf("\n\n0");
}
else{
while(n>0){
	if(n%2==0){
		a[i]=0;
		i++;}
	else{
		a[i]=1;
		i++;
		}
	n=n/2;
}}

FILE *prueba=fopen("prueba.txt","a+");
for(j=i-1;j>=0;j--){
printf("%d",a[j]);
fprintf(prueba,"%d",a[j]);
}
fprintf(prueba,",");
printf(",");
fclose(prueba);
}




