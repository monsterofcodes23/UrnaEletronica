#include<stdio.h>
#include<string.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");
    float motoqueiro= 0, joaozinho = 0, mariazinha = 0, raimundinho = 0, votos = 0, branco = 0, nulo = 0, maior, segundaMaior;
    int voto, motoqueiro_numero = 99, joaozinho_numero = 20, raimundinho_numero = 29, mariazinha_numero = 50;
    char maior_segundoTurno[30] = "", segundaMaior_segundoTurno[30] = "";


    do {
        printf("******************************\n");
        printf("em qual candidato deseja votar?\n");
        printf("[0] para voto em branco\n");
        printf("[1] para encerrar a votacao\n");
        printf("******************************\n");
        scanf("%d", &voto);

        if (voto == 0) {
            printf("voce votou em branco\n");
            branco += 1;
        } else if (voto == 20) {
            printf("voce votou no joaozinho\n");
            votos += 1;
            joaozinho += 1;
        } else if (voto == 50) {
            printf("voce votou na mariazinha");
            votos += 1;
            mariazinha += 1;
        } else if (voto == 99) {
            printf("voce votou no motoqueiro fantasma");
            votos += 1;
            motoqueiro += 1;
        } else if(voto == 29) {
            printf("voce votou no raimundinho");
            votos += 1;
            raimundinho += 1;
        } else if (voto != 1) {
            printf("voce votou nulo");
            nulo += 1;
        }

    } while(voto != 1);

    printf("******************** Resultado das eleicoes ********************\n");
    printf("total de votos apurados: %.0f\n", votos);
    printf("total de votos do candidato Joaozinho: %.0f\n", joaozinho);
    printf("total de votos do candidato Mariazinha: %.0f\n", mariazinha);
    printf("total de votos do candidato Motoqueiro Fantasma: %.0f\n", motoqueiro);
    printf("total de votos do candidato Raimundinho: %.0f\n", raimundinho);
    printf("total de votos em branco: %.0f\n", branco);
    printf("total de votos nulos: %.0f\n", nulo);

    joaozinho = joaozinho * 100 / votos;
    mariazinha = mariazinha * 100 / votos;
    motoqueiro = motoqueiro * 100 / votos;
    raimundinho = raimundinho * 100 / votos;

    if (joaozinho >= 0 || mariazinha >= 0 || motoqueiro >= 0 || raimundinho >= 0) {
        printf("******************** Resultado das eleicoes ********************\n");
        printf("porcentagem total de votos do candidato Joaozinho: %.2f%%\n", joaozinho);
        printf("porcentagem total de votos do candidato Mariazinha: %.2f%%\n", mariazinha);
        printf("porcentagem total de votos do candidato Motoqueiro Fantasma: %.2f%%\n", motoqueiro);
        printf("porcentagem total de votos do candidato Raimundinho: %.2f%%\n", raimundinho);
    }

        if (joaozinho >= 50) {
        printf("eleicao terminada, joaozinho e o vencedor\n");
        return 0;
    } else if (mariazinha >= 50) {
        printf("eleicao terminada, mariazinha e a vencedora\n");
        return 0;
    } else if (motoqueiro >= 50) {
        printf("eleicao terminada, motoqueiro fantasma e o vencedor\n");
        return 0;
    } else if (raimundinho >= 50) {
        printf("eleicao terminada, raimundinho e o vencedor\n");
        return 0;
    } else {
        if (joaozinho >= mariazinha && joaozinho >= motoqueiro && joaozinho >= raimundinho) {
            maior = joaozinho;
            joaozinho = joaozinho_numero;
            strcpy(maior_segundoTurno, "joaozinho");
            printf("a disputa sera entre joaozinho e \n");
            if (mariazinha >= motoqueiro && mariazinha >= raimundinho) {
                segundaMaior = mariazinha;
                strcpy(segundaMaior_segundoTurno, "mariazinha");
                printf("mariazinha");
            } else if (motoqueiro >= mariazinha && motoqueiro >= raimundinho) {
                segundaMaior = motoqueiro;
                strcpy(segundaMaior_segundoTurno, "motoqueiro");
                printf("motoqueiro");
            } else {
                segundaMaior = raimundinho;
                strcpy(segundaMaior_segundoTurno, "raimundinho");
                printf("raimundinho");
            }
        } else if (mariazinha >= joaozinho && mariazinha >= motoqueiro && mariazinha >= raimundinho) {
            maior = mariazinha;
            strcpy(maior_segundoTurno, "mariazinha");
            printf("a disputa sera entre mariazinha e \n");
            if (joaozinho >= motoqueiro && joaozinho >= raimundinho) {
                segundaMaior = joaozinho;
                strcpy(segundaMaior_segundoTurno, "joaozinho");
                printf("joaozinho");
            } else if (motoqueiro >= joaozinho && motoqueiro >= raimundinho) {
                segundaMaior = motoqueiro;
                strcpy(segundaMaior_segundoTurno, "motoqueiro");
                printf("motoqueiro");
            } else {
                segundaMaior = raimundinho;
                strcpy(segundaMaior_segundoTurno, "raimundinho");
                printf("raimundinho");
            }
        } else if (motoqueiro >= joaozinho && motoqueiro >= mariazinha && motoqueiro >= raimundinho) {
            maior = motoqueiro;
            strcpy(maior_segundoTurno, "motoqueiro");
            printf("a disputa sera entre motoqueiro e \n");
            if (joaozinho >= mariazinha && joaozinho >= raimundinho) {
                segundaMaior = joaozinho;
                strcpy(segundaMaior_segundoTurno, "joaozinho");
                printf("joaozinho");
            } else if (mariazinha >= joaozinho && mariazinha >= raimundinho) {
                segundaMaior = mariazinha;
                strcpy(segundaMaior_segundoTurno, "mariazinha");
                printf("mariazinha");
            } else {
                segundaMaior = raimundinho;
                strcpy(segundaMaior_segundoTurno, "raimundinho");
                printf("raimundinho");
            }
        } else if (raimundinho >= joaozinho && raimundinho >= mariazinha && raimundinho >= motoqueiro) {
            maior = raimundinho;
            strcpy(maior_segundoTurno, "raimundinho");
            printf("a disputa sera entre raimundinho e \n");
            if (joaozinho >= mariazinha && joaozinho >= motoqueiro) {
                segundaMaior = joaozinho;
                strcpy(segundaMaior_segundoTurno, "joaozinho");
                printf("joaozinho");
            } else if (mariazinha >= joaozinho && mariazinha >= motoqueiro) {
                segundaMaior = mariazinha;
                strcpy(segundaMaior_segundoTurno, "mariazinha");
                printf("mariazinha");
            } else {
                segundaMaior = motoqueiro;
                strcpy(segundaMaior_segundoTurno, "motoqueiro");
                printf("motoqueiro");
            }
        } else {
            printf("candidatos não receberam votos o sufuciente\n");
        }
        votos = 0;
        mariazinha = 0;
        joaozinho = 0;
        motoqueiro = 0;
        raimundinho = 0;

        do {
            printf("******************************\n");
            printf("em qual candidato deseja votar?\n");
            printf("[0] para voto em branco\n");
            printf("[1] para encerrar a votacao\n");
            printf("Votação entre %s e %s: \n", maior_segundoTurno, segundaMaior_segundoTurno);
            printf("******************************\n");
            scanf("%d", &voto);

                if (voto == 0){
                    printf("Você votou em branco.");
                    branco += 1;
                } else if ( voto == joaozinho_numero && strcmp(maior_segundoTurno, "joãozinho") == 0){
                    joaozinho += 1;
                    votos += 1;
                } else if (voto == mariazinha_numero && strcmp(maior_segundoTurno, "mariazinha") == 0){
                    mariazinha += 1;
                    votos += 1;
                } else if (voto == motoqueiro_numero && strcmp(maior_segundoTurno, "motoqueiro") == 0){
                    motoqueiro += 1;
                    votos += 1;
                } else if (voto == raimundinho_numero && strcmp(maior_segundoTurno, "raimundinho") == 0){
                    raimundinho += 1;
                    votos += 1;
                } else if (voto != 1) {
                printf("Você votou nulo.\n");
                nulo += 1;
            }   

        } while (voto != 1);
        if (strcmp(maior_segundoTurno, "joaozinho") == 0) {
         if (joaozinho > segundaMaior) {
            printf("O vencedor do segundo turno é Joãozinho!\n");
            } else if (joaozinho < segundaMaior) {
            printf("A vencedora do segundo turno é %s!\n", segundaMaior_segundoTurno);
             } else {
            printf("O segundo turno terminou em empate entre Joãozinho e %s!\n", segundaMaior_segundoTurno);
        }
            } else if (strcmp(maior_segundoTurno, "mariazinha") == 0) {
        if (mariazinha > segundaMaior) {
            printf("A vencedora do segundo turno é Mariazinha!\n");
            } else if (mariazinha < segundaMaior) {
            printf("O vencedor do segundo turno é %s!\n", segundaMaior_segundoTurno);
            } else {
            printf("O segundo turno terminou em empate entre Mariazinha e %s!\n", segundaMaior_segundoTurno);
            }
            } else if (strcmp(maior_segundoTurno, "motoqueiro") == 0) {
        if (motoqueiro > segundaMaior) {
            printf("O vencedor do segundo turno é Motoqueiro Fantasma!\n");
            } else if (motoqueiro < segundaMaior) {
            printf("O vencedor do segundo turno é %s!\n", segundaMaior_segundoTurno);
            } else {
            printf("O segundo turno terminou em empate entre Motoqueiro Fantasma e %s!\n", segundaMaior_segundoTurno);
        }
            } else if (strcmp(maior_segundoTurno, "raimundinho") == 0) {
        if (raimundinho > segundaMaior) {
            printf("O vencedor do segundo turno é Raimundinho!\n");
            } else if (raimundinho < segundaMaior) {
            printf("O vencedor do segundo turno é %s!\n", segundaMaior_segundoTurno);
            } else {
            printf("O segundo turno terminou em empate entre Raimundinho e %s!\n", segundaMaior_segundoTurno);
        }
    }
        
    }

    

    return 0;
}