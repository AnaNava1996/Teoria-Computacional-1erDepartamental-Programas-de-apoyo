#include <string.h> 
#include <stdio.h >

int Cousin(int);

main() 

{ 
int n;
printf("introduzca n: ");
scanf("%d",&n);
if(Cousin(n)==0)
printf("\nno es primo");
else
printf("es primo");
}

int Cousin(int o){
	int w;
	int cont2=0;
	if(o==1){
		return 0;}
	else{
	for (w=1;w<o;w++){
		if(o%w==0){
			cont2++;}
	}
	if(cont2>1)
		return 0;
	else
		return 1;
}}
 
