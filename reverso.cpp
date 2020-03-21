 #include <stdio.h>
	int main() {
		int v,r1=0;
		int micaio[10];
	
		printf("Informe um numero para  min mostra o seu reverso:\n(O seu numero tem que ter no minimo 2 digitos.):");
		scanf("%d",&v);
		
		
		//pega os numeros
		for(int x=0;x<10;x++){
		    r1 = v % 10;
		    v = v /10;
		    micaio[x] = r1;
		    
		    //mostra os digitos
		}
		printf("O reverso do seu numero é:");
		for(int x =0;x<10;x++){
		    if(micaio[x] + micaio[x+1] + micaio[x+2] != 0){
		        printf("%d",micaio[x]);
		     
		    }if(micaio[x]==0 && micaio[x+1]==0 && micaio[x+2]==0){
		        x=11;
		    }
		  

		}

		return 0;
	}


