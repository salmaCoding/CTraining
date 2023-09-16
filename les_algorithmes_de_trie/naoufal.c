#include<stdio.h>
int* tri(int T[],int N){
	for(int i=0;i<N;i++)
	{
		printf("Donner moi le %d entier\n",i+1);
		scanf("%d",&T[i]);
	}
		for(int i=0;i<N;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			if(T[i]>T[j])
			{
				int temp;
				temp=T[i];
				T[i]=T[j];
			 	T[j]=temp;	
			}
		}
	}	
	return T;
}
int main()
{
	int i,j,N,temp,T[100];
	
	printf("donner moi la taille du tableau :\n");
	scanf("%d",&N);
	tri(T,N);
	printf("le tableau tri dans un orde croissant est :");
	for(i=0;i<N;i++)
	{
		printf("%d\n",T[i]);
	}
	return 0;
}
