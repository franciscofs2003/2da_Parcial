#include <stdio.h>
#include <stdlib.h>
int A[10];

void swamp(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;

} //punteros de intercambio

void examen(int A[], int n){
	int indexMin;
	for(int i=0; i<n-1; i++){
	 int min = i;
	 for(int j=i+1; j<n; j++){
	  if(A[j]<A[min]){
	   min=j;
	  }
	 }
	 if(indexMin != i){
	  swamp(&A[min],&A[i]);
	 }
	}
}

void pantalla(int A[], int n){
  for(int i=0; i<n-1;i++){
   printf("%d,",A[i]);
  }
  printf("%d\n",A[n-1]);
}

void datos(int A[], int n){
 for(int i=0; i<n; i++){
  printf("ingresa un valor al numero %d: ",i+1);
  scanf("%d",&A[i]);
 }
}

int main(){
  int n=10;

  datos(A,n);
  printf("\nnumeros desordenada: \n");
  pantalla(A,n);
  examen(A,n);
  printf("\nnumeros  ordenados: \n");
  pantalla(A,n);
  return 0;
}
