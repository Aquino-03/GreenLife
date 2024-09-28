#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int vendfru(char fv[9][15], float valuefv[9], int codfv[9], float resu, int contresu, float estoquef[5],float estoquev[5],float *caixat){
    printf("informe o código:");
    maisum:
    scanf("%i", &codfv);
    do{
    if(codfv==1){
        printf("\n%s\t\t%.2fKG", fv[0], valuefv[0]);
        resu = resu + valuefv[0];
        estoquef[0]--;
        *caixat+=valuefv[0];
    }
    if(codfv==2){
        printf("\n%s\t\t%.2fKG", fv[1], valuefv[1]);
        resu = resu + valuefv[1];
        estoquef[1]--;
        *caixat+=valuefv[1];
    }
    if(codfv==3){
        printf("\n%s\t\t%.2fKG", fv[2], valuefv[2]);
        resu = resu + valuefv[2];
        estoquef[2]--;
        *caixat+=valuefv[2];
    }
    if(codfv==4){
        printf("\n%s\t\t%.2fKG", fv[3], valuefv[3]);
        resu = resu + valuefv[3];
        estoquef[3]--;
        *caixat+=valuefv[3];
    }
    if(codfv==5){
        printf("\n%s\t\t%.2fKG", fv[4], valuefv[4]);
        resu = resu + valuefv[4];
        estoquev[0]--;
        *caixat+=valuefv[4];
    }
    if(codfv==6){
        printf("\n%s\t\t%.2fKG", fv[5], valuefv[5]);
        resu = resu + valuefv[5];
        estoquev[1]--;
        *caixat+=valuefv[5];
    }
    if(codfv==7){
        printf("\n%s\t\t%.2fKG", fv[6], valuefv[6]);
        resu = resu + valuefv[6];
        estoquev[2]--;
        *caixat+=valuefv[6];
    }
    if(codfv==8){
        printf("\n%s\t\t%.2fKG", fv[7], valuefv[7]);

        resu = resu + valuefv[7];
        estoquev[3]--;
        *caixat+=valuefv[7];
    }
    printf("\t\t\tValor:%.2fR$", resu);
    puts("\nInsira (1) para adicionar mais um produto\t\t Insira (2) para finalizar o carrinho");
        scanf("%i", &contresu);

    switch(contresu){
        case 1:
            goto maisum;
        case 2:
            printf("Valor A Ser Pago:%.2fR$", resu);
    }

   } while(contresu != 2);
    return 0;
}



int main(int argc, char *argv[]){
setlocale(LC_ALL, "portuguese");

    char fv[9][15]={
        "banana",
        "maçã",
        "manga",
        "kiwi",
        "batata",
        "cenoura",
        "abóbora",
        "brócolis"
        };
    float valuefv[9]={5.73, 13.98, 8.98, 29.99, 13.80, 3.48, 6.90, 6.88};
    int codfv[5]={1,2,3,4};
    float estoquef[5]={60.00, 80.00, 30.00, 30.00};
    float estoquev[5]={83.00, 80.00, 30.00, 27.00};



    char log[10], usu[10], name[10];
    char nomc[15]="greenlife", senc[10]="gl2024";
    char nomg[15]="verdevida", seng[10]="10092024";
    long int esc, esc1, escret;
    float resultado, caixat=0.00;
    int contaresul;
//hall do software
    puts("Olá\nAntes de iniciarmos as nossas atividades comerciais\nDesejamos a você um ótimo dia\nInforme o seu nome:\a");
        scanf("%s", name);
    system("cls");
    printf("É um prazer revelo %s.\n");
    puts("Login:\n");
        scanf("%s", log);
    puts("Senha:\n");
        scanf("%s", usu);
     system("cls");
//interface colaborador
    if (strcmp(log, nomc) == 0 && strcmp(usu, senc) == 0) {
        inicio:
        printf("Bem-vindo à interface colaborador Sr. %s.\n", name);
        printf("Escolha as funcionalidades:\n");
        printf("(1)Carrinho[Venda] (2)Estoque (3)ID[Produto] (4)Sair\n");
        scanf("%i", &esc);
    switch (esc){

        case 1:
            system("cls");
             vendfru(fv, valuefv, codfv, resultado, contaresul, estoquef, estoquev, &caixat);
        printf("\n\n\nPara retornar ao menu inicial digite 1.");
                scanf("%i", &escret);
        if (escret==1){
            system("cls");
            goto inicio;
        }
        else
            exit(0);
        break;

        case 2:
            system("cls");
        printf("Estoque de:\n(1)Frutas (2)Verduras.\n");
                scanf("%i", &esc1);
           system("cls");
            switch(esc1){
                case 1:
                    printf("%s = %fKG \t%s = %fKG \n%s = %fKG \t%s = %fKG\n", fv[0],estoquef[0],fv[1],estoquef[1],fv[2],estoquef[2],fv[3], estoquef[3]);
                    printf("\n\n\nPara retornar ao menu inicial digite 1.");
                        scanf("%i", &escret);
                    if (escret==1){
                        system("cls");
                        goto inicio;
                    }
                    else
                        exit(0);
                break;
                case 2:
                    printf("%s = %fKG \t%s = %fKG \n%s = %fKG \t%s = %fKG\n", fv[4],estoquev[0],fv[5],estoquev[1],fv[6],estoquev[2],fv[7], estoquev[3]);
                    printf("\n\n\nPara retornar ao menu inicial digite 1.");
                        scanf("%i", &escret);
                    if (escret==1){
                        system("cls");
                        goto inicio;
                    }
                    else
                        exit(0);
                    break;
                }break;
            case 3:
            system("cls");
            printf("Código\tProduto\n\n0\tbanana\n1\tmaçã\n2\tmanga\n3\tkiwi\n4\tbatata\n5\tcenoura\n6\tabóbora\n7\tbrócolis");
            printf("\n\n\nPara retornar ao menu inicial digite 1.");
                scanf("%i", &escret);
            if (escret==1){
                system("cls");
                goto inicio;
            }
            else
                exit(0);
              }

       }
//interface gerencial
    if (strcmp(log, nomg) == 0 && strcmp(usu, seng) == 0) {
        iniciog:
        printf("Bem-vindo à interface gerencial Sr. %s.\n", name);
        printf("Escolha as funcionalidades:\n");
        printf("(1)Venda (2)Estoque (3)Funcionários (4)Lucros (5)ID[Produto] (6)Sair\n");
        scanf("%i", &esc);
        system("cls");
        switch (esc){
        case 1:
                system("cls");
             vendfru(fv, valuefv, codfv, resultado, contaresul, estoquef,estoquev, &caixat);
        printf("\n\n\nPara retornar ao menu inicial digite 1.");
                scanf("%i", &escret);
        if (escret==1){
            system("cls");
            goto iniciog;
            }
            else
                exit(0);
        break;
        case 2:
             printf("Estoque de:\n(1)Frutas (2)Verduras.\n");
                scanf("%i", &esc1);
                system("cls");
             switch(esc1){
                case 1:
                    printf("%s = %fKG \t%s = %fKG \n%s = %fKG \t%s = %fKG\n", fv[0],estoquef[0],fv[1],estoquef[1],fv[2],estoquef[2],fv[3], estoquef[3]);
                    printf("\n\n\nPara retornar ao menu inicial digite 1.");
                        scanf("%i", &escret);
                    if (escret==1){
                        system("cls");
                        goto iniciog;
                    }
                    else
                        exit(0);
                break;
                case 2:
                    printf("%s = %fKG \t%s = %fKG \n%s = %fKG \t%s = %fKG\n", fv[4],estoquev[0],fv[5],estoquev[1],fv[6],estoquev[2],fv[7], estoquev[3]);

                    printf("\n\n\nPara retornar ao menu inicial digite 1.");
                        scanf("%i", &escret);
                    if (escret==1){
                        system("cls");
                        goto iniciog;
                    }
                    else
                        exit(0);
                break;
                        }
        break;

        case 3:
            puts("Escala\n");
            puts("Manhã:\nFábio\tRomero\tClaudio\tJoana.\n");
            puts("Tarde:\nJunior\tMárcio\tIohan\n");
            printf("\n\n\nPara retornar ao menu inicial digite 1.");
                scanf("%i", &escret);
            if (escret==1){
                system("cls");
                goto iniciog;
            }
            else
                exit(0);

        break;
        case 4:
            printf("Dinheiro em Caixa: %.2fR$", caixat);
            printf("\n\n\nPara retornar ao menu inicial digite 1.");
                scanf("%i", &escret);
            if (escret==1){
                system("cls");
                goto iniciog;
            }
            else
        case 5:
           system("cls");
            printf("Código\tProduto\n\n0\tbanana\n1\tmaçã\n2\tmanga\n3\tkiwi\n4\tbatata\n5\tcenoura\n6\tabóbora\n7\tbrócolis");
            printf("\n\n\nPara retornar ao menu inicial digite 1.");
                scanf("%i", &escret);
            if (escret==1){
                system("cls");
                goto iniciog;
            }
            else
                exit(0);

        break;
    }
        }

    if(strcmp(log, nomg) != 0 && strcmp(usu, seng) && (strcmp(log, nomc) != 0 && strcmp(usu, senc) != 0)){
        printf("Usúario ou senha inválido!");
    }


return 0;
}
