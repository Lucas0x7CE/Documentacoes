#include <stdio.h>

int main(void) {
  int a, b, c;

  a =0;
  b =0;
  c =0;

  int linhas=0;//

  char nota;
  printf("Digite as notas: ");
  
  while((nota=getchar()) != EOF){
    if(nota == '\n'){//
      ++linhas;
      printf("%d",linhas);
    }
    switch(nota){

      case 'A':
      case 'a':
	  
		++a;
		break;

      case 'B': 
      case 'b':
	  
		  ++b;
		  break;

      case 'C':
      case 'c': ++c; break;

      //caso nota seja \n(tecla enter) \t(tab) ou ' '
      case '\n':
      case '\t':
      case ' ': break;

      //caso seja qlqr outra tecla
      default: printf("Digite uma nota valida\n"); break;
    }
    printf("%c",nota);
  
  }

  printf("Notas A: %d\nNotas B: %d\nNotas C: %d\n",a,b,c);
  return 0;
}


//Esse codigo foi tirado do livro: "C - Como Programar 6ª Ed Deitel & Deitel"
