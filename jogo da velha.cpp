#include <stdio.h>
#include <windows.h>

int main(){

	int a;
	int aa;
	int bb;
    printf("oi");
	char nome[30];
	printf("BEM VINDO AO JOGO DA VELHA XXYSLIN\n");
	printf("DIGITE SEU NOME:");
	scanf("%s",nome);
	printf("BEM VINDO %s\n",strupr(nome));
	printf("\n");
    printf("C   L I N H A        1      2      3\n");
	printf("O               4       :       :		\n");
	printf("L                    ...............	\n");
	printf("U               5       :       :		\n");
	printf("N                    ...............	\n");
	printf("A               6       :       :		\n");
	printf("\n");
	printf("ESCOLHA 1 PARA (O) OU 2 PARA (X) PARA JOGAR:");
	scanf("%i",&a);
	printf("\n");

	switch(a){
		case 1:
			printf("OK VAMOS COMECAR BOA SORTE\n");

    printf("C   L I N H A        1      2      3\n");
	printf("O               4    o  :   o   :  o	\n");
	printf("L                    ...............	\n");
	printf("U               5    o  :   o   :  o	\n");
	printf("N                    ...............	\n");
	printf("A               6    o  :   o   :  o	\n");
	printf("\n");
	printf("ESCOLHA O NUMERO DA LINHA E O DA COLUNA:\n");
	printf("LINHA:");
	scanf("%i",&aa);
	printf("COLUNA:");
	scanf("%i",&bb);
	
			break;
		case 2:

	printf("OK VAMOS COMECAR BOA SORTE\n");

    printf("C   L I N H A        1      2      3\n");
	printf("O               4       :       :		\n");
	printf("L                    ...............	\n");
	printf("U               5       :       :		\n");
	printf("N                    ...............	\n");
	printf("A               6       :       :		\n");
	printf("\n");
	printf("ESCOLHA O NUMERO DA LINHA E O DA COLUNA:\n");
	printf("LINHA:");
	scanf("%i",&aa);
	printf("COLUNA:");
	scanf("%i",&bb);

			break;
		default:
			printf("erro");
			break;
	}

	int cc = aa+bb;

	switch(a){
		case 1:
			switch(cc){
				case 5:

	printf("********************CARREGANDO********************\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
    printf("C   L I N H A        1      2      3\n");
	printf("O               4    o  :       :		\n");
	printf("L                    ...............	\n");
	printf("U               5       :       :		\n");
	printf("N                    ...............	\n");
	printf("A               6       :       :		\n");
	Sleep(3000);

    printf("C   L I N H A        1      2      3\n");
	printf("O               4    o  :       :		\n");
	printf("L                    ...............	\n");
	printf("U               5       :   x   :		\n");
	printf("N                    ...............	\n");
	printf("A               6       :       :		\n");

	printf("\n");
	printf("LINHA:");
	scanf("%i",&aa);
	printf("COLUNA:");
	scanf("%i",&bb);
					break;
				case 6:
					printf("6");

					break;
				case 8:
					printf("8");

					break;
				default:
					printf("erro");
					break;
			}
			break;
		case 2:
			break;
		default:
			printf("erro");
			break;
	}
}