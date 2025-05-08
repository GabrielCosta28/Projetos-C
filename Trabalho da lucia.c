#include <stdio.h>

#include <stdlib.h>

#include <locale.h>

#include <time.h>



int main()

{

    int JogarNovamente=1;

    do{

    setlocale(LC_ALL, "portuguese");

    srand(time(NULL));



    int codigo, senha1, senha2, senha3, senha4, n1, n2, n3, n4;

    int tentativa, chute;

    int palpite1, palpite2, palpite3, palpite4;

    int acertos;

    int acerto1 = 0, acerto2 = 0, acerto3 = 0, acerto4 = 0;



    codigo = (rand() % 9000) + 1000;



    senha1 = (codigo / 1000);

    senha2 = (codigo / 100) % 10;

    senha3 = (codigo / 10) % 10;

    senha4 = (codigo % 10);



    printf("\t\t\t\t--------Bem Vindo Ao Jogo Secreto!--------");

    printf("\n  |-------------------------------------------------------------------------------------------------------|");

    printf("\n  |Voc� ir� ter no m�ximo 10 tentativas. Seu objetivo � acertar a sequ�ncia de n�meros entre [1000 e 9999]|");

    printf("\n  |                       A partir da 5a tentativa, o jogo ir� te entregar dicas.                         |");

    printf("\n  |-------------------------------------------------------------------------------------------------------|");

    printf("\n\n\t\t\t\t\t\tBoa Sorte!");



    for (tentativa = 0; tentativa < 10; tentativa++) {

        printf("\nTentativa %d: ", tentativa + 1);

        scanf("%d", &chute);



        palpite1 = chute / 1000;

        palpite2 = (chute / 100) % 10;

        palpite3 = (chute / 10) % 10;

        palpite4 = chute % 10;



        acertos = 0;

        printf("Resultado: ");



if (palpite1 == senha1) {

    acerto1 = 1;

}

if (acerto1 == 1) {

    printf("[%d]", senha1);

    acertos++;

} else {

    printf("[_]");

}



if (palpite2 == senha2) {

    acerto2 = 1;

}

if (acerto2 == 1) {

    printf("[%d]", senha2);

    acertos++;

} else {

    printf("[_]");

}





if (palpite3 == senha3) {

    acerto3 = 1;

}

if (acerto3 == 1) {

    printf("[%d]", senha3);

    acertos++;

} else {

    printf("[_]");

}





if (palpite4 == senha4) {

    acerto4 = 1;

}

if (acerto4 == 1) {

    printf("[%d]", senha4);

    acertos++;

} else {

    printf("[_]");

}

        printf("\nVoc� acertou %d d�gitos!\n", acertos);



        if (acertos==4){

            printf("Parab�ns! Voc� adivinhou a senha corretamente!\n");

            return 0;

        }



        if (tentativa>=4){

            printf("\nDicas:\n");

            if (senha1 % 2==0) {

                printf("� O 1� d�gito � par\n");

            } else{

                printf("� O 1� d�gito � �mpar\n");

            }



            if (tentativa>=5){

                if (senha2%2==0){

                    printf("� O 2� d�gito � par\n");

                } else {

                    printf("� O 2� d�gito � �mpar\n");

                }

            }



            if (tentativa>=6){

                if (senha3%2==0){

                    printf("� O 3� d�gito � par\n");

                } else {

                    printf("� O 3� d�gito � �mpar\n");

                }

            }



            if (tentativa>=7){

                if (senha4%2==0){

                    printf("� O 4� d�gito � par\n");

                } else {

                    printf("� O 4� d�gito � �mpar\n");

                }

            }



            if (chute>codigo){

                printf("� Seu chute � MAIOR que o c�digo\n");

            } else {

                printf("� Seu chute � MENOR que o c�digo\n");

            }

        }

    }



    printf("\nVoc� usou todas as tentativas! O c�digo correto era: %d%d%d%d\n", senha1, senha2, senha3, senha4);

    printf("Fim de jogo.\n");

     printf("\nDeseja jogar novamente? (1 = Sim / 0 = N�o): ");



        scanf("%d", &JogarNovamente);



        system("cls || clear");



    } while (JogarNovamente == 1);

    printf("\nObrigado por jogar, at� a pr�xima!");

    return 0;

}
