#include<stdio.h>
#include<locale.h>

char vetor[13] = {'b','d','f','h','j','k','m','o','q','s','u','w','y'};

char comparar(char digito)
{
    char resultado, *vt, let1;
    vt = &vetor[0];

    for(int i = 0; i < 13; i++)
    {
        //Atribui a vari�vel o valor do conte�do do ponteiro
        let1 = *vt;

        //Verifica se s�o iguais
        if (digito == let1)
        {
            //Caso sim, o resultado � a letra e o loop � encerrado
            resultado = digito;
            break;
        }
        else
        {
            //Caso n�o, o resultado � 0 e continua o loop
            resultado = '0';
            vt++;
        }
    }
    return resultado;
}

main()
{
/*
    Escreva um programa que receba uma letra via teclado usando ponteiro. Escreva
    uma funcao que pesquise esta letra existe no vetor abaixo usando ponteiros.
    Imprima o resultado da pesquisa no video na funcao main(). Passe como informacao
    para a funcao a letra digitada usando ponteiros.(utilize o comando return).
    O vetor deve ser declarado como variavel global.

    vetor -> b,d,f,h,j,k,m,o,q,s,u,w,y
*/

    setlocale(LC_ALL, "Portuguese");

    //Declara��o de vari�veis
    int continuar;
    char letra, *pletra, resultado;


    //Loop para repetir o programa
    do
    {
        //Atribuindo ao ponteiro o endere�o da variavel char letra
        pletra = &letra;

        //Entrada de dados
        printf("Digite uma �nica letra: \n");
        scanf(" %c",&pletra);

        printf("\n");//Pula a linha

        resultado = comparar(pletra);

        //Exibi��o
        printf("O resultado da compara��o �: %c \n", resultado);

        printf("\n");//Pula a linha

        //Loop para validar a sa�da do programa
        do
            {
                printf("Se deseja continuar, digite '1'. \n");
                printf("Se deseja sair, digite '0'. \n");
                scanf("%d",&continuar);
            }
        while(continuar !=0 && continuar !=1);//Verifica se o n�mero � diferente de 0 e 1

        system("cls");//Limpa a tela
    }
    while(continuar==1);//Programa reinicia se a variaver 'continuar' ter valor 1
}
