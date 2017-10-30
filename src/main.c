/*Fernando Suzuki Silva Ra 167557
  Primesort - Lab 4
 */

#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>

int i, flag_divisao=0;
int flag_encerrou=0;
int var_auxiliar;
int var_resto_divisao;

int main() {

	FILE *pipe;

	pipe = popen("sort -n -r", "w");

  while (!flag_encerrou){
  	 flag_divisao = 0;
  	 
    scanf("%d\n", &var_auxiliar);
    
    if(var_auxiliar == -1){
      flag_encerrou = 1;
    }
    
    else{
    	if((((var_auxiliar%2) == 0) && (var_auxiliar != 2)) || (var_auxiliar == 1)) {
    		
    	}
  	
    	else{
      	for (i=1; i<=sqrt(var_auxiliar); i+=2){
				var_resto_divisao = var_auxiliar % i;
				if(var_resto_divisao == 0){
	  				flag_divisao ++;
				}
      	}	
   	}
   	
   	if(flag_divisao != 1 && var_auxiliar != 0){
   		fprintf(pipe,"%d\n",var_auxiliar);				
		}      
    }
  }
  
  pclose(pipe);
  return 0;
}