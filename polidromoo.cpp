#include <stdio.h>

int  main ()
{
	int v,r1=0,n=0,aux;
		int micaio[10];
	
		printf("Informe um numero para  min mostra se é um numero polidromo reverso:\n(O seu numero tem que ter no minimo 2 digitos.):");
		scanf("%d",&v);
		n=v;
		aux=v;
		//pega os numeros
		for(int x=0;x<10;x++){
		    r1 = v % 10;
		    v = v /10;
		    micaio[x] = r1;
		    
		    //Quantidade de digitos
		} r1=0;
		for(int x= 0;n>0;){
	       n=n/10;
	       r1++;
		}
		
		
		for(int x =0;x<r1-1;x++){
		    if(micaio[x] + micaio[x+1] + micaio[x+2] != 0){
		      micaio[x]=micaio[x]*10+micaio[x+1];
		      micaio[x+1]=micaio[x];
		      n=micaio[x];
		    }if(micaio[x]==0  && micaio[x+1]==0  micaio[x+2]==0){
		        x=11;
		    }
		  
		}
		if(n==aux){
		    printf("\nVoce tem um numero polidromo: %d",aux);
		}else{
		    printf("\nO seu numero não é polidromo! %d",n);

}
	
	return 0;
}
