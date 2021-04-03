/* Atividade Matrizes
Escreva um programa que implemente uma matriz quadrada de ordem 4x4 e retorne:
A somatória dos elementos da matriz.
A somatória dos números pares da diagonal principal
A somatória dos números ímpares da diagonal secundária.
A quantidade de números ímpares nas duas diagonais.
A quantidade de números pares na matriz.
Os números divisíveis por 5 na matriz.
O maior elemento da diagonal secundária.
A diferença da somatória dos elementos da diagonal principal com a diagonal secundária.
Para a segunda questão utilize um menu para o usuário definir a hora que ele quer calcular cada item.
Não se esqueça da opção imprime matriz. */
#include <iostream>
#include <math.h>
using namespace std;

int menu(){
	system("cls");
	int op;
	cout << "\n\t*** Escolha uma opcao: ***\t\n\n" ;
	cout << "\t1 - A somatoria dos elementos da matriz\n" ;
	cout << "\t2 - A somatoria dos numeros pares da diagonal principal\n" ;
	cout << "\t3 - A somatoria dos numeros impares da diagonal secundaria\n" ;
	cout << "\t4 - A quantidade de numeros impares nas duas diagonais\n" ;
	cout << "\t5 - A quantidade de numeros pares na matriz\n" ;
	cout << "\t6 - Os numeros divisiveis por 5 na matriz\n" ;
	cout << "\t7 - O maior elemento da diagonal secundaria\n" ;
	cout << "\t8 - A diferenca da somatoria dos elementos da diagonal principal com a diagonal secundaria\n" ;
	cout << "\t9 - Imprime\n" ;
	cout << "\t0 - Sair\n\t" ;
	cin >> op;
	return op;
}
int main(int argc, char** argv) {
	
	int MAX = 4;
	int opcao, matriz[MAX][MAX];
	char voltar;
	
	for (int i = 0 ; i < MAX ; i++){
		for (int j = 0 ; j < MAX ; j++){
			matriz[i][j] = (pow(i,j))*5;
		}
	}
	do{
	  	opcao = menu();
	  	switch (opcao){
	    	case 1:
	    		system("cls");
	      		int soma;
	      		soma = 0;
	      		for (int i = 0 ; i < MAX ; i++){
			    	for (int j = 0 ; j < MAX ; j++){
				    	soma = soma + matriz[i][j];
	        		}
	      		}
	      		cout << "\tA soma dos elementos eh: " << soma << endl;
	      	break;
	    	case 2:
	    		system("cls");
	    		int SomaDiagoPAR; // soma diagonal principal numeros pares
	    		SomaDiagoPAR = 0;
	      		for (int i = 0 ; i < MAX ; i++){
			    	for (int j = 0 ; j < MAX ; j++){
			    		if (i = j){
							if (((matriz[i][j])%2) == 0){
				    			SomaDiagoPAR = SomaDiagoPAR + matriz[i][j];
				    		}
				    	}
	        		}
	      		}
	      		cout << "\tA soma dos PARES da diagonal primaria eh: " << SomaDiagoPAR << endl;
	      	break;
	      	case 3:
	      		system("cls");
	      		int somaSecunIMPAR; // soma diagonal secundaria numeros impares
	      		somaSecunIMPAR = 0;
	      		for(int i = 0 ; i < MAX ; i++){
	      			for (int j = 0 ; j < MAX ; j++){
	      				if (i + j == MAX - 1){
	      					if ((matriz[i][j])%2 != 0){
	      					somaSecunIMPAR = somaSecunIMPAR +  matriz [i][j];
	      					}
						}
					}
				}
				cout << "\tA soma dos IMPARES da diagonal secundaria eh: " << somaSecunIMPAR << endl;
			break;
			case 4:
				system("cls");
				int IMPARESdiag; // soma a qtd os impares nas duas diagonais
				IMPARESdiag = 0;
				for(int i = 0 ; i < MAX ; i++){
					for(int j = 0 ; j < MAX ; j++){
						if (((i == j)||((i + j) == MAX - 1)) && ((matriz[i][j] % 2) != 0))
							IMPARESdiag ++;
					}
				}
				cout << "\tA quantidade dos IMPARES das duas diagonais eh: " << IMPARESdiag << endl;
			break;
			case 5:
				system("cls");
				int quantPARES; // quantidade de pares
				quantPARES = 0;
				for (int i = 0 ; i < MAX ; i++){
					for (int j = 0 ; j < MAX ; j++){
						if(matriz[i][j] %2 == 0){
							quantPARES ++;
						}
					}
				}
				cout << "\tA quantidade de pares na matriz eh: " << quantPARES << endl;	  
			break;
			case 6:
				system("cls");
				int div5; // divisivel por 5
				div5 = 0;
				cout << "\tNumeros divisiveis por 5: ";
				for (int i = 0 ; i < MAX ; i++){
					for (int j = 0 ; j < MAX ; j++){
						if ((matriz[i][j] %5 == 0) && (matriz[i][j] != 0)){
							cout << matriz[i][j] << " ";
						}
					}
				}
			break;  
			case 7:
				system("cls");
				int maiorSecun; // maior elemento diagonal secundaria  		
				maiorSecun = 0;
				for (int i = 0 ; i < MAX ;i++){
					for (int j = 0 ; j < MAX ; j++){
						if ((i + j == MAX -1) && (matriz[i][j] > maiorSecun)){
							maiorSecun = matriz [i][j];
						}
					}
				}
				cout << "\tO maior numero da diagonal secundaria eh: " << maiorSecun << endl;
			break;
			case 8:
				system("cls");
				int somaPrinc, somaSecund;
				somaPrinc = 0;
				somaSecund = 0;
				for (int i = 0 ; i < MAX ; i++){
					for (int j = 0 ; j < MAX ; j++){
						if(i == j){somaPrinc = somaPrinc + matriz[i][j];}
						if(i + j == MAX - 1){somaSecund = somaSecund + matriz[i][j];}
					}
				}
				cout << "\tA diferenca entre as diagonais eh: " << somaPrinc - somaSecund << endl;
			break;
			case 9:
				system("cls");
				cout << "\n\t* * * * M A T R I Z * * * *\n\n";
				for (int i = 0 ; i < MAX ; i++){
					for (int j = 0 ; j < MAX ; j++){
						cout << "\t" << matriz[i][j];
					}
				cout << "\n";
				}
			break;
			case 0:
				system("cls");
				cout << "\n\t OBRIGADO POR UTILIZAR O PROGRAMA!! \n\n";
				return 0;
			break;
		}
		cout << "\n\tDeseja voltar ao menu? (s/n): ";
		cin >> voltar;
	}while (voltar == 's' );
	system("cls");
	cout << "\n\t OBRIGADO POR UTILIZAR O PROGRAMA!! \n\n";
	return 0;
}
