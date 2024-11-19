#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main ()
{
    double fita, elastico, rosas, palitos, espumaFloral, adesivo, laco, embalagem;
    int qRosas = 0;
    double valorDoces = 0;
    double valorFinal = 0;
    double resultado = 0;
    int multi;
    int escolha = 0;
    int valorQuebra;
    int valorLucro;
    int maoDeObra;
    fita = 1;
    embalagem = 2;
    elastico = 0.5;
    laco = 1;
    adesivo = 1;
    espumaFloral = 4;
    rosas = 7;
    palitos = 0.17;

    do{
    printf(">>>Bem-vindo ao calculador de buques 1.0 da Tulip<<<\n");
    //FITA
    printf("Selecione a opcao que deseja calcular\n \t(1) Buque com Rosas.\n \t(2) Buque com Doces.\n \t(3) Buque com Rosas e Doces\n");
    scanf("%i", &escolha);

        switch(escolha){
            case 1:
            printf("Quantas rosas vai utilizar?\n");
            scanf("%i", &qRosas);
            rosas *= qRosas;
            break;

            case 2:
            printf("Qual o valor dos doces a serem utilizados?\n");
            scanf("%lf", &valorDoces);
            break;

            case 3:
            printf("Qual a quantidade de Rosas?\n");
            scanf("%i", &qRosas);
            rosas *= qRosas;
            printf("Qual o valor dos doces?\n");
            scanf("%lf", &valorDoces);
            break;

            default:
            printf("Selecione uma opcao valida.\n");
        }
    }while (escolha!=1 && escolha!=2 && escolha!=3);

    printf("Qual a quantidade de fita a ser utilizado?\n");
    scanf("%i", &multi);
    fita *= multi;
    //ELASTICO
    printf("Qual a quantidade de lacos a ser utilizado?\n");
    scanf("%i", &multi);
    laco *= multi;
    //PALITOS
    printf("Qual a quantidade de palitos a ser utilizado?\n");
    scanf("%i", &multi);
    palitos *= multi;
    //ESPUMA FLORAL
    printf("Qual a quantidade de ESPUMA FLORAL a ser utilizado?\n");
    scanf("%i", &multi);
    espumaFloral *= multi;
    //ADESIVO
    printf("Qual a quantidade de adesivos a ser utilizado?\n");
    scanf("%i", &multi);
    adesivo *= multi;
    //EMBALAGEM
    printf("Qual a quantidade de EMBALAGENS a serem utilizadas?\n");
    scanf("%i", &multi);
    embalagem *= multi;

    printf("Qual o valor de quebras a considerar em %? (digite apenas o numero)\n");
    scanf("%i", &valorQuebra);
    printf("Qual o valor da mao de obra a considerar em %? (digite apenas o numero)\n");
    scanf("%i", &maoDeObra);
    printf("Qual o valor do lucro a considerar em %? (digite apenas o numero)\n");
    scanf("%i", &valorLucro);

    valorFinal = fita + laco + palitos + espumaFloral + adesivo + embalagem + rosas + valorDoces;
    resultado = valorFinal * (1 + valorQuebra / 100.0);
    resultado = resultado * (1 + maoDeObra / 100.0);
    resultado = resultado * (1 + valorLucro / 100.0);

    printf("Este buque custa R$ %.2lf.", resultado);




    return 0;
}