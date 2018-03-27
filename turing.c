/* Software Desenvolvido por Lucas Borim e Marlon Jhow Yeung
 * Máquina de Turing
 * SPEI - Sociedade Paranaense de Ensino e Informática
 * 2º BSI - Noite
 */
#include<stdio.h>

main ()

{

    int vet[103],i,c=0,b=0,a=0,d=0,j=0,v=0;

    for (i=0;i<103;i++) vet[i]=0; //ZERA TODAS AS POSIÇÕES

    printf("Escreva o valor unario:\n");

    for (i=0;i<100;i++){
        printf("Escreva posicao %d -> ", j++); //LE TODAS AS POSIÇÕES
        scanf("%d", &vet[i+1]);
        if(vet[i+1]==0) break;
    }

    printf("\n");

    j=0;

    for(a=1;a<101;a++){ //-------------LAÇO PRINCIPAL------------------//
        if(vet[a]==0)
            break;
        if(vet[a]==1)
            vet[a]=0; //Transforma o primeiro 1 em zero

        for(b=i+1;b<=101;b++){ //Passo 2 e 3 - insere 1 no zero mais a direita
            if(vet[b]==0)
                c++;
            if(c==2){ //busca o ultimo zero mais a direita
               vet[b]=1; // troca por 1
               vet[b+1]=0; //insera mais zero a direita (Marca fim numeral)
               c=0;
               break;
            }

        }

        for(d=b;d>0;d--){ // retorna duas posições do zero a esquerda
            if (vet[d]==0)
                c++; // contador para encontrar o zero
            if(c==2){
               vet[d]=1; // altera zero para 1
               c=0; //zera o contatador
               break;
            }
        }

        for(v=0;v<b+2;v++) //escreve cada passo
            printf("%d",vet[v]);

        printf("\n");//pula linha do resultado em cada looping

        if(vet[d+1]==0)//Passos 7 e 8
            break;
    }

    system("Pause");
}
