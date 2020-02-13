#include <stdio.h>
#include <stdlib.h>
#include <myconio.h>
#include <windows.h>
#include <string.h>
#include <conio.h>
#include <time.h>
void ENCADRE()
{
    int Longueur;
    gotoxy(1,1);
    printf("==================================================");
    for(Longueur=2;Longueur<30;Longueur++)
    {
        gotoxy(1,Longueur);
        printf("||");
        gotoxy(49,Longueur);
        printf("||");
    }
    gotoxy(1,Longueur);
    printf("==================================================");
}
void MENU(int n)
{
    ENCADRE();
    n=3+4*n;
    gotoxy(5,n);
    printf("_____________________________");
    n++;
    gotoxy(5,n);
    printf("|");
    gotoxy(33,n);
    printf("|");
    n++;
    gotoxy(5,n);
    printf("|___________________________|\n");
}
int digit_to_int(char d)
{
 char str[2];

 str[0] = d;
 str[1] = '\0';
 return (int) strtol(str, NULL, 10);
}

int main()
{
    int IDATE[10][3],a,B,i,J,u,w,y,z,CHOICE,CHOICE2,CHOICE3,CHOICE4; // ADD DATE LATER
    long V,x,ID,MDP,r,Client[10][2],CompteID[10][3],CompteMDP[10][3],MONEY[10][3];//money = IdClient|IdCompte
    char inpt,NOM[10][12],PRENOM[10][12],PROFESSION[10][12],NameCherche[12],LastNameCherche[10],TEL[10][12];
    srand(time(0));
    for(z=0;z<10;z++) // making sure that everything is empty
    {
        NameCherche[z]=NULL;
        LastNameCherche[z]=NULL;
    for(x=0;x<1;x++)
    {
        {Client[z][x]=0;}
    }
    for(x=0;x<3;x++)
    {CompteID[z][x]=0;CompteMDP[z][x]=0;MONEY[z][x]=0;}
    for(x=0;x<12;x++)
    {
        NOM[z][x]=NULL;
        PRENOM[z][x]=NULL;
        PROFESSION[z][x]=NULL;
        TEL[z][x]=NULL;
    }
    }
    { // initialising the asministrator account
        Client[0][0]=13666999;
        Client[0][1]=29342013;
        // ID 13666999 MDP 29342013
        NOM[0][0]='Y';NOM[0][1]='o';NOM[0][2]='u';
        PRENOM[0][0]='n';PRENOM[0][1]='e';PRENOM[0][2]='s';PRENOM[0][3]='s';
        PROFESSION[0][0]='E';PROFESSION[0][1]='l';PROFESSION[0][2]='e';PROFESSION[0][3]='v';PROFESSION[0][4]='e';
        TEL[0][0]='0';TEL[0][1]='6';TEL[0][2]='4';TEL[0][3]='8';TEL[0][4]='3';TEL[0][5]='3';TEL[0][6]='0';TEL[0][7]='9';TEL[0][8]='3';TEL[0][9]='3';
        IDATE[0][0]=2018;IDATE[0][1]=12;IDATE[0][2]=18;
    }
    w=0;
    while(w==0) //Log in
    {
    system("cls");
    printf("\n \n               BIENVENUE A NOTRE BANK \n\n       ID :\n\n       MDP : ");
    ENCADRE();
    gotoxy(13,5);
    scanf("%ld",&ID);
    gotoxy(14,7);
    scanf("%ld",&MDP);
    x=ID/100000000;

        if((Client[x][0]==ID)&&(Client[x][1]==MDP))
            w = 1;
        while (w)
        {
            //while
    if(x==0)
    {
        CHOICE=0;
        while (CHOICE==0)
        {
        system("cls");
        CHOICE2=0;
        CHOICE3=0;
        z=15;y=5;
        a=1;
        while (CHOICE==0)
        {
        system("cls");
        printf("\n\n      Bienvenue cher administrateur\n\n   Que voules-vous faire ?\n ");
        printf("\n\n      Gestion Des Clients  \n\n"); // ecriture à la ligne 8
        printf("\n\n      Gestion Des Comptes  \n\n");
        printf("\n\n     Gestion Des Operations\n\n");
        printf("\n\n      Se  Deconnecter      \n\n");
        MENU(a);
        inpt= getch();
        if(inpt=='8')
            {
                if(a>1)
                    a--;
            }
        else if(inpt=='2')
            {
                if(a<4)
                    a++;
            }
        else if (inpt=='5')
            {CHOICE=a;}
        }
        a=1;
        switch(CHOICE) // Result of Main Menu
        {
        case 1: // 1 of First switch
        {
        while (CHOICE2==0)
        {
        system("cls");
        printf("\n\n      Bienvenue cher administrateur\n\n   Que voules-vous faire ?\n ");
        printf("\n\n        Ajouter Client     \n\n");
        printf("\n\n        Modification       \n\n");
        printf("\n\n        Suppression        \n\n");
        printf("\n\n        Recherche          \n\n");
        printf("\n\n        Menu General       \n\n");
        MENU(a);inpt= getch();
        if(inpt=='8')
            {
                if(a>1)
                    a--;
            }
        else if(inpt=='2')
            {
                if(a<5)
                    a++;
            }
        else if (inpt=='5')
            {CHOICE2=a;}
        }
        a=1;
        switch(CHOICE2) // Menu of case 1 menu 1
        {
        case 1: // Ajouter Client
        {
            u=1;
            while((Client[u][0]!=0)&&(u<10))
            {
                    u++;
            }
        system("cls");gotoxy(16,3);
        //while (CHOICE3==0)
        //while ((0<a)&&(a<5))
        printf("Veuilliez remplir ce formulaire \n \n        NOM :\n \n        PRENOM :\n \n        PROFESSION :\n \n        NUMERO DE TELEPHONE :\n \n ");
        printf("\n\n        Confirmer");
        ENCADRE();z=15;y=5;gotoxy(z,y);
        while ((0<a)&&(a<5))
        {
        for(i=0;i<12;i++)
        {inpt= getch();
        if (a!= 4)
        {
        if(inpt=='8')
            {
                if(a>1)
                    {a--;i=0;
                if(a==1)
                {z=15;y=5;
                for(r=0;r<12;r++)
    {
        NOM[u][r]=NULL;
        PRENOM[u][r]=NULL;
    }}
                else if(a==2)
                {
                    z=18;y=7;
                    for(r=0;r<12;r++)
    {
        PRENOM[u][r]=NULL;
        PROFESSION[u][r]=NULL;
    }
                }
                else if(a==3)
                {
                    z=22;y=9;
                    for(r=0;r<12;r++)
    {
        PROFESSION[u][r]=NULL;
        TEL[u][r]=NULL;
    }
                }
                ENCADRE();gotoxy(z,y);printf("           ");gotoxy(z,y);}
                else
                {
                    for(r=0;r<12;r++)
    {
        NOM[u][r]=NULL;
    }
                }
            }
        else if(inpt=='2')
            {
                if(a<4)
                    {a++;i=0;
                if(a==1)
                {z=15;y=5;}
                if(a==2)
                {z=18;y=7;}
                if(a==3)
                {z=22;y=9;}
                if(a==4)
                {z=31;y=11;}
                ENCADRE();gotoxy(z,y);printf("           ");gotoxy(z,y);}
                else
                {
                    a++;i=12;
                }
            }
        else // remplissage des variables
        {
            printf("%c",inpt);
            if(a==1)
                {NOM[u][i]=inpt;}
            if(a==2)
                {PRENOM[u][i]=inpt;}
            if(a==3)
                {PROFESSION[u][i]=inpt;}
            z++;
        }
        }
        else // copier coller de ce qui est avant sauf qu'on se deplace avec R et F au lieu de 2 et 8
            {if((inpt=='r')||(inpt=='R'))
            {
                a--;i=0;
                if(a==3)
                {z=22;y=9;}
                else if(a==4)
                {z=31;y=11;}
                ENCADRE();gotoxy(z,y);printf("           ");gotoxy(z,y);
                for(i=0;r<12;r++)
    {
        PROFESSION[u][r]=NULL;
        TEL[u][r]=NULL;
    }
            }
        else if((inpt=='f')||(inpt=='F'))
            {
                if(a<4)
                    {a++;i=0;
                if(a==4)
                {z=31;y=11;}
                ENCADRE();gotoxy(z,y);printf("           ");gotoxy(z,y);}
                else
                {
                    a++;i=12;
                }
            }
        else // remplissage des variables
        {
            printf("%c",inpt);
            if(a==1)
                {NOM[u][i]=inpt;}
            if(a==2)
                {PRENOM[u][i]=inpt;}
            if(a==3)
                {PROFESSION[u][i]=inpt;}
            if(a==4)
                {TEL[u][i]=inpt;}
            z++;
        }
            } //fin du copier coller
        }
        a++;}
        a=1;
        while (CHOICE3==0)
        {
        system("cls");
        gotoxy(16,3);
        printf("Veuilliez remplir ce formulaire \n \n        NOM :\n \n        PRENOM :\n \n        PROFESSION :\n \n        NUMERO DE TELEPHONE :\n \n ");
        gotoxy(15,5);
        for(i=0;i<12;i++)
            printf("%c",NOM[u][i]);
        gotoxy(18,7);
        for(i=0;i<12;i++)
            printf("%c",PRENOM[u][i]);
        gotoxy(22,9);
        for(i=0;i<12;i++)
            printf("%c",PROFESSION[u][i]);
        gotoxy(31,11);
        for(i=0;i<12;i++)
            printf("%c",TEL[u][i]);
        gotoxy(5,13);
        printf("Voulez vous confirmer ceci ?\n\n\n         Oui       \n \n\n \n        Non");// Confirmation de creation de client
        i=a+2;
        MENU(i);inpt= getch();
        if(inpt=='8')
            {
                if(a>1)
                    a--;
            }
        else if(inpt=='2')
            {
                if(a<2)
                    a++;
            }
        else if (inpt=='5')
            {
            if(a==2) // cancel the change if it's not confirmed
            {
                for(i=0;i<12;i++)
    {
        NOM[u][i]=NULL;
        PRENOM[u][i]=NULL;
        PROFESSION[u][i]=NULL;
        TEL[u][i]=NULL;
    }
            CHOICE=1;CHOICE2=1;CHOICE3=1;w=1; // retour au menu general
            }
            else // here i must generate the random id + mdp for the new Client ( still no account )
            {
                Client[u][0]=100000000*u;
                MDP=1;
                while (MDP<100000000)
                {r=rand()%10;
                Client[u][1]+=(MDP*r);
                MDP*=10;}
                MDP=1;
                while (MDP<100000000)
                {r=rand()%10;
                Client[u][0]+=(MDP*r);
                MDP*=10;}
                system("cls");
                printf("\n \n           Voici les identifiants de ce Client \n\n       ID :\n\n       MDP : ");
                ENCADRE();
                gotoxy(13,5);
                printf("%ld",Client[u][0]);
                gotoxy(14,7);
                printf("%ld",Client[u][1]);
                Sleep(2000);
                inpt=getch();
                CHOICE=1;CHOICE2=1;CHOICE3=1;w=1; // retour au menu general
            }
            }
        }a=1;
        }
        break;
        case 2: // Modification (still empty)
        {while (CHOICE3==0)
        {
        system("cls");}}
        break;
        case 3: // Suppression
        {
        system("cls");ENCADRE();gotoxy(3,3);
        printf("Entrez L'ID du client a supprimer");
        gotoxy(18,5);
        scanf("%ld",&ID);
        B=ID/100000000;
        a=1;
        if (Client[B][0]==ID)
        {
            //Main delete
            while (CHOICE3==0)
            {system("cls");
            gotoxy(4,7);
            printf("Nom : ");
            for(r=0;r<12;r++)
                printf("%c",NOM[B][r]);
            printf(" ");
            for(r=0;r<12;r++)
                printf("%c",PRENOM[B][r]);
            gotoxy(4,8);
            printf("TEL : ");
            for(r=0;r<12;r++)
                printf("%c",TEL[B][r]);
            gotoxy(4,9);
            printf("Profession : ");
            for(r=0;r<12;r++)
                printf("%c",PROFESSION[B][r]);
            gotoxy(4,10);
            printf("ID : ");
            printf("%ld \n\n", Client[B][0]);
            printf("       Etes Vous sur de \n");
            gotoxy(8,13);
            printf("vouloir supprimer ce client ? \n \n \n         Oui       \n \n\n \n        Non");
            i=a+2;
            MENU(i);inpt= getch();
        if(inpt=='8')
            {
                if(a>1)
                    a--;
            }
        else if(inpt=='2')
            {
                if(a<2)
                    a++;
            }
        else if (inpt=='5')
        {
            //DELETE PROGRAMME HERE
            CHOICE3=a;
            if(a==1)
            {
                                for(J=0;J<12;J++)
    {
        NOM[B][J]=NULL;
        PRENOM[B][J]=NULL;
        PROFESSION[B][J]=NULL;
        TEL[B][J]=NULL;
    }
    Client[B][0]=0;
    Client[B][1]=0;
    CHOICE=1;CHOICE2=1;CHOICE3=1;w=1;
            }
            else
            {
                CHOICE=1;CHOICE2=1;CHOICE3=1;w=1;
            }
            a=1;

        }
        }}
        else
        {
            gotoxy(18,7);
            printf("ID introuvable");
            Sleep(3000);
            inpt=getch();
            CHOICE=1;CHOICE2=1;CHOICE3=1;w=1;
        }
        }
        break;
        case 4: // Recherche
        {while (CHOICE3==0)
        {
        system("cls");
        printf("\n\n      Bienvenue cher administrateur\n\n  Comment voulez vous effectuer la recherche?\n ");
        printf("\n\n        Par nom     \n\n");
        printf("\n\n        Par ID       \n\n");
        printf("\n\n        Retour        \n\n");
        MENU(a);inpt= getch();
        if(inpt=='8')
            {
                if(a>1)
                    a--;
            }
        else if(inpt=='2')
            {
                if(a<3)
                    a++;
            }
        else if (inpt=='5')
            {CHOICE3=a;}
        }a=1;
        switch(CHOICE3)
        {
        case 1: //Recherche par nom
            {
                system("cls");
                J=0;i=0;
                // boucle start here ?
                while(J<12) // lecture de la recherche
                {
                ENCADRE();
                z=5;y=5;gotoxy(z,y);
                printf("entrez le nom :");
                y+=2;gotoxy(z,y);
                if (i) // affichage de ce que l'utilisateur a écrit
                {
                   for(ID=0;ID<i;ID++)
                {
                    printf("%c", NameCherche[ID]);
                }
                }
                else
                {
                for(ID=0;ID<J;ID++)
                {
                    printf("%c", NameCherche[ID]);
                }}
                printf(" ");
                for(ID=0;((ID<J)&&(i>0));ID++)
                {
                    printf("%c", LastNameCherche[ID]);
                }
                if(i)
                    z+=(J+i+1);
                else
                    z+=J;
                gotoxy(z,y);
                inpt=getch();
                system("cls");
                if (inpt==' ')
                {
                    if(i==0)
                        {i=J;J=-1;}
                }
                else if(inpt=='7') // 7 est pour effacer la derniere valeure entrée
                {
                    if(J>0)
                    {
                        if (i>0)
                        {
                        LastNameCherche[J]=' ';
                        J--;//retour à la case d'avant
                        LastNameCherche[J]=' ';
                        }
                        else
                        {
                            NameCherche[J]=' ';
                            J--;//pareil
                            NameCherche[J]=' ';
                        }
                        J--;//pour annuler l'incrementation
                    }
                    else
                    {
                        J=i;
                        i=0;
                    }
                }
                else if(inpt=='9')// 9 est pour retourner au menu general
                {
                    J=12;i=1;CHOICE=1;CHOICE2=1;CHOICE3=1;w=1;
                }
                else
                {
                    if (i==0)
                    NameCherche[J]=inpt;
                    else
                    LastNameCherche[J]=inpt;
                }
                J++;
                //Recherche et affichage
                gotoxy(z,y);
                printf("\n\n    Resultats :\n\n");
                if(i==0) // dans ce cas là le lastname est vide
                {
                    for(MDP=0;MDP<10;MDP++)
                    {
                    r=1;B=1;
                    for(ID=0;ID<J;ID++)
                        {
                            if(NOM[MDP][ID]!= NameCherche[ID])
                                B=0;
                            if(PRENOM[MDP][ID]!= NameCherche[ID])
                                r=0;
                        }
                    if ((B)||(r))//Affichage du profile
                    {
                        printf("   Nom : ");
                        for(ID=0;ID<12;ID++)
                            printf("%c",NOM[MDP][ID]);
                        printf(" ");
                        for(ID=0;ID<12;ID++)
                            printf("%c",PRENOM[MDP][ID]);
                        printf("\n   TEL : ");
                        for(ID=0;ID<12;ID++)
                            printf("%c",TEL[MDP][ID]);
                        printf("\n   Profession : ");
                        for(ID=0;ID<12;ID++)
                            printf("%c",PROFESSION[MDP][ID]);
                        printf("\n   ID : ");
                        printf("%ld \n\n", Client[MDP][0]);
                    }
                    }
                }
                else // on va just manipuler un peu plus les conditions
                {
                    for(MDP=0;MDP<10;MDP++)
                    {
                    r=1;B=1;
                    for(ID=0;ID<i;ID++)
                        {
                            if(NOM[MDP][ID]!= NameCherche[ID])
                                B=0;
                            if(PRENOM[MDP][ID]!= NameCherche[ID])
                                r=0;
                        }
                    for(ID=0;ID<J;ID++)
                        {
                            if(PRENOM[MDP][ID]!= LastNameCherche[ID])
                                B=0;
                            if(NOM[MDP][ID]!= LastNameCherche[ID])
                                r=0;
                        }
                    if ((B)||(r))//Affichage du profile
                    {
                        printf("   Nom : ");
                        for(ID=0;ID<12;ID++)
                            printf("%c",NOM[MDP][ID]);
                        printf(" ");
                        for(ID=0;ID<12;ID++)
                            printf("%c",PRENOM[MDP][ID]);
                        printf("\n   TEL : ");
                        for(ID=0;ID<12;ID++)
                            printf("%c",TEL[MDP][ID]);
                        printf("\n   Profession : ");
                        for(ID=0;ID<12;ID++)
                            printf("%c",PROFESSION[MDP][ID]);
                        printf("\n   ID : ");
                        printf("%ld \n\n",Client[MDP][0]);
                    }
                    }
                }
                if((J==12)&&(i==0))
                {
                    i=J;J=0;
                }
                }
            }
        system("cls");
        break;
        case 2: //Recherche par id (Perfect)
            {
                J=0;MDP=1000000000;B=0;system("cls");
                while(J<9)
                {
                ENCADRE();
                z=5;y=5;gotoxy(z,y);
                printf("entrez l'ID :");
                y+=2;gotoxy(z,y);
                printf("%d",B);
                z+=J;gotoxy(z,y);
                printf("         ");
                gotoxy(z,y);
                inpt=getch();
                system("cls");
                if(inpt=='f') //f est pour quitter
                    {J=9;system("cls");}
                else
                    {
                        if(J)
                            i=digit_to_int(inpt);
                        else
                        {
                            ID=digit_to_int(inpt); //ID identifie le client
                            i=digit_to_int(inpt);
                        }
                    }
                J++;//MDP va storer la valeur saisie par l'utilisateur et r compteur
                B=(B*10)+i;
                MDP/=10;
                r=(Client[ID][0]/MDP)-B;
                gotoxy(z,y);
                printf("\n\n    Resultats :\n\n");
                if (r==0)
                {
                        printf("   Nom : ");
                        for(r=0;r<12;r++)
                            printf("%c",NOM[ID][r]);
                        printf(" ");
                        for(r=0;r<12;r++)
                            printf("%c",PRENOM[ID][r]);
                        printf("\n   TEL : ");
                        for(r=0;r<12;r++)
                            printf("%c",TEL[ID][r]);
                        printf("\n   Profession : ");
                        for(r=0;r<12;r++)
                            printf("%c",PROFESSION[ID][r]);
                        printf("\n   ID : ");
                        printf("%ld \n\n", Client[ID][0]);
                }
                else
                {
                    printf("      Aucun client ne correspond");
                }
                }
            }
        system("cls");
        break;
        case 3: //Retour
            {CHOICE=1;CHOICE2=1;CHOICE3=1;w=1;}
        system("cls");
        break;}
        }
        break;
        case 5: // Menu General
        {CHOICE=1;CHOICE2=1;CHOICE3=1;w=1;}
        system("cls");
        break;}}
        case 2: // 2 of First switch
        {while (CHOICE2==0)
        {system("cls");
        printf("\n\n      Bienvenue cher administrateur\n\n   Que voules-vous faire ?\n ");
        printf("\n\n        Nouveau Compte     \n\n");
        printf("\n\n        Consultations      \n\n");
        printf("\n\n       Fermeture Du Compte \n\n");
        printf("\n\n       Menu General       \n\n");
        MENU(a);
        inpt= getch();
        if(inpt=='8')
            {
                if(a>1)
                    a--;
            }
        else if(inpt=='2')
            {
                if(a<4)
                    a++;
            }
        else if (inpt=='5')
            {CHOICE2=a;}
        }a=1;
        switch(CHOICE2) // Menu of case 2 menu 1
        {
        case 1: // Nouveau Compte
        {while (CHOICE3==0)
        {
        system("cls");ENCADRE();gotoxy(3,3);
        printf("Entrez L'ID du client");
        gotoxy(8,5);
        scanf("%ld",&ID);
        B=ID/100000000;
        a=1;
        if (Client[B][0]==ID) // B est l'identifiant du cliant
        {
            u=0;
            while((CompteID[B][u]!=0)&&(u<3))
            {u++;}
            if(u<3)
            {
            CompteID[B][u]=100000000*B+10000000*u;
            CompteMDP[B][u]=100000000*B+10000000*u;
            MDP=1;
            while (MDP<100000000)
            {r=rand()%10;
            CompteMDP[B][u]+=(MDP*r);
            MDP*=10;}
            MDP=1;
            while (MDP<10000000)
            {r=rand()%10;
            CompteID[B][u]+=(MDP*r);
            MDP*=10;}
            gotoxy(8,7);
            printf("Entrez la somme de depart");
            gotoxy(8,9);
            scanf("%ld",&MONEY[B][u]);
            if(MONEY[B][u]<1000)
            {
            gotoxy(8,7);
            printf("la somme doit etre d'au moins 1000");
            gotoxy(8,9);
            printf("   ");//efface le nombre d'avant
            gotoxy(8,9);
            scanf("%ld",&MONEY[B][u]);
            }
            system("cls");//Compte créé avec succes
            gotoxy(5,7);
            printf("Compte cree avec succes");
            gotoxy(7,9);
            printf("ID compte : %ld",CompteID[B][u]);
            gotoxy(7,11);
            printf("MDP compte : %ld",CompteMDP[B][u]);
            gotoxy(7,13);
            printf("Solde : %ld",MONEY[B][u]);
            ENCADRE();
            Sleep(3000);
            inpt=getch();
            CHOICE=1;CHOICE2=1;CHOICE3=1;w=1;
            }
            else
            {
            gotoxy(5,7);
            printf("un client peut avoir au max 3comptes");
            Sleep(1000);
            inpt=getch();
            CHOICE=1;CHOICE2=1;CHOICE3=1;w=1;
            }

        }
        else
        {
            gotoxy(18,7);
            printf("ID introuvable");
            Sleep(3000);
            inpt=getch();
            CHOICE=1;CHOICE2=1;CHOICE3=1;w=1;
        }
        }}
        break;
        case 2: // Consultations
        {while (CHOICE3==0)
        {
        system("cls");ENCADRE();gotoxy(3,3);
        printf("Entrez L'ID du client");
        gotoxy(8,5);
        scanf("%ld",&ID);
        B=ID/100000000;
        a=1;
        if (Client[B][0]==ID)
        {u=0;
        while(u<3)
        {
            if (CompteID[B][u]!=0)
            {J=u+1;printf("\n\n   id Compte %d : %ld \n   mdp Compte %d : %ld \n   solde Compte %d : %ld \n ",J,CompteID[B][u],J,CompteMDP[B][u],J,MONEY[B][u]);}
            u++;
        }
        printf("    cliquez n'importe ou");
        ENCADRE();
        Sleep(3000);
        inpt=getch();
        CHOICE=1;CHOICE2=1;CHOICE3=1;w=1;
        }
        else
        {
            gotoxy(18,7);
            printf("ID introuvable");
            Sleep(3000);
            inpt=getch();
            CHOICE=1;CHOICE2=1;CHOICE3=1;w=1;
        }
        system("cls");
        }}
        break;
        case 3: // Fermeture Du Compte
        {while (CHOICE3==0)
        {
        system("cls");ENCADRE();gotoxy(3,3);
        printf("Entrez L'ID du client");
        gotoxy(8,5);
        scanf("%ld",&ID);
        B=ID/100000000;
        a=1;
        if (Client[B][0]==ID)
        {u=0;
        while((CompteID[B][u]!=0)&&(u<3))
        {J=u+1;printf("\n\n   id Compte %d : %ld \n   mdp Compte %d : %ld \n   solde Compte %d : %ld \n ",J,CompteID[B][u],J,CompteMDP[B][u],J,MONEY[B][u]);u++;}
        printf("    Quel compte supprimer ? \n   ");
        ENCADRE();
        y=7+5*J;
        gotoxy(5,y);
        scanf("%d",&J);
        system("cls");ENCADRE();
        gotoxy(5,7);
        a=1;
        u=J-1;
        i=1;
        if((0<J)&&(J<4))
        {
        while(i!=0)
        {
        system("cls");
        gotoxy(5,7);
        printf("\n\n   id Compte %d : %ld \n   mdp Compte %d : %ld \n   solde Compte %d : %ld \n ",J,CompteID[B][u],J,CompteMDP[B][u],J,MONEY[B][u]);
        printf("    Voulez vous vraiment \n     supprimer ce compte ?");
        printf("\n\n\n         Oui       \n \n\n \n        Non");
        i=a+2;
        MENU(i);inpt= getch();
        if(inpt=='8')
            {
                if(a>1)
                    a--;
            }
        else if(inpt=='2')
            {
                if(a<2)
                    a++;
            }
        else if (inpt=='5')
        {
            if(a==1)
            {
                i=0;
                CompteID[B][u]=0;
                CompteMDP[B][u]=0;
                MONEY[B][u]=0;
                system("cls");
                ENCADRE();
                gotoxy(18,7);
                printf("Compte supprime");
                Sleep(3000);
                inpt=getch();

            }
            else
            {
                i=0;
            }
        }
        }
        }
        else
        {
            gotoxy(7,7);
            printf("Compte introuvable");
        }
        CHOICE=1;CHOICE2=1;CHOICE3=1;w=1;
        }
        else
        {
            gotoxy(18,7);
            printf("ID introuvable");
            Sleep(3000);
            inpt=getch();
            CHOICE=1;CHOICE2=1;CHOICE3=1;w=1;
        }
        }}
        break;
        case 4: // Menu General
        {system("cls");CHOICE=1;CHOICE2=1;CHOICE3=1;w=1;}
        break;}}
        break;
        case 3:  // 3 of First switch
        {while (CHOICE2==0)
        {system("cls");
        printf("\n\n      Bienvenue cher administrateur\n\n   Que voules-vous faire ?\n ");
        printf("\n\n        Retrait            \n\n");
        printf("\n\n        Virement           \n\n");
        printf("\n\n        Menu General       \n\n");
        MENU(a);
        inpt= getch();
        if(inpt=='8')
            {
                if(a>1)
                    a--;
            }
        else if(inpt=='2')
            {
                if(a<3)
                    a++;
            }
        else if (inpt=='5')
            {CHOICE2=a;}
        }a=1;
        switch(CHOICE2) // Menu of case 3 menu 1
        {
        case 1: // Retrait
        {while (CHOICE3==0)
        {
            system("cls");
            ENCADRE();
            gotoxy(5,5);
            printf("    ID compte :\n\n       MDP compte :");
            ENCADRE();
            gotoxy(21,5);
            scanf("%ld",&ID);
            gotoxy(21,7);
            scanf("%ld",&MDP);
            V=ID/100000000;
            J=0;
            for(B=0;B<4;B++)
            {
            if((CompteID[V][B]==ID)&&(CompteMDP[V][B]==MDP))
         {  system("cls");
            ENCADRE();
            gotoxy(5,5);
            printf("Quel est le montant a retirer ?");
            gotoxy(5,7);
            scanf("%ld",&r);
            while(r>700)
            {gotoxy(5,5);printf("Le montant ne peut pas depasser 700DH");gotoxy(5,7);printf("                                            ");ENCADRE();gotoxy(5,7);scanf("%ld",&r);}
            MONEY[V][B]-=r;B=4;CHOICE=1;CHOICE2=1;CHOICE3=1;w=1;
        }
        else
            {
                J++;
            }
        if(J==3)
        {
            system("cls");
            ENCADRE();
            gotoxy(5,5);
            printf("ID ou MDP incorrect");
            inpt=getch();
            CHOICE=1;CHOICE2=1;CHOICE3=1;w=1;
        }
        }
        system("cls");
        }
        }
        break;
        case 2: // Virement
        {while (CHOICE3==0)
        {
        system("cls");}}
        break;
        case 3: // Menu General
        {CHOICE=1;CHOICE2=1;CHOICE3=1;w=1;}
        system("cls");
        break;}}
        break;
        case 4: //Back to connection screen
            {w=0;}
        system("cls");
        break;
        }
        }
        }
    else//Client part : empty
    {
        gotoxy(1,5);
        printf("   Nom : ");
                        for(r=0;r<12;r++)
                            printf("%c",NOM[x][r]);
                        printf(" ");
                        for(r=0;r<12;r++)
                            printf("%c",PRENOM[x][r]);
                        printf("\n   TEL : ");
                        for(r=0;r<12;r++)
                            printf("%c",TEL[x][r]);
                        printf("\n   Profession : ");
                        for(r=0;r<12;r++)
                            printf("%c",PROFESSION[x][r]);
                        printf("\n   ID : ");
                        printf("%ld \n\n", Client[x][0]);
                        printf("\n   MDP : ");
                        printf("%ld \n\n", Client[x][1]);
        u=0;
        while((CompteID[x][u]!=0)&&(u<3))
        {i=u+1;printf("id Compte %d : %ld \n mdp Compte %d : %ld \n solde Compte %d : %ld \n ",i,CompteID[x][u],i,CompteMDP[x][u],i,MONEY[x][u]);u++;}
        printf("\n \n       Partie Client Comming soon...\n");
        ENCADRE();
        inpt=getch();
        Sleep(10000);
        system("cls");
        w=0;
    }}
        w=0;// back to connection screen if the ID / password is false
    }
}
