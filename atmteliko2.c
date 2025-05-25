/* 
To projecet anaparista ena sixrono ATM mixanima pou xrisimopioume stin kathimerinotita mas.
Exei diafores xrisis opws i metafora xrimaton se logariasmous esoterikoy alla kai eksoterikou,katathesis xrimaton
kathos kai analipsis kathos kai erotisi ipoloipou.
 Ginetai xrisi diaforon sinartiseon opos einai i while kai do while kai switch.
O akoulouthos kwdikas kanei xrisi sigkekrmenou tetrapsifiou kodikou pin o opoios orizetai me tin xrisi define.
Iparxei ena kentriko menu opou aparithmountai oles i energeies pou mporei na kanei o xristis mas apla pliktrologontas to antistixo noumero.
 Telos o kwdikas kanei xrisi system("cls") gia ton katharismo othonis alla kai printf("\a") gia epistrofi ixou.*/
#include <stdio.h>
#include <windows.h> //xroisimopio windows.h gia na litourgisei printf("\a"); wste na exoume ixo
#include <stdlib.h>  //xroisimopio stdlib.h gia na katharisei i othoni me system("cls")
#include <ctype.h>   //xrisimopio auti tin vivliothiki gia elegxo xaraktiron oste na dwsei sosta xartonomismata
#define max_prospathies 3    //megistes prospathies gia lathos PIN einai 3 
#define PIN 2724  //to 	PIN tis kartas mas

int main() {
    char userChoise; //onoma protis switch
    char userChoise2; // onoma deuteris switch pou tha vrisketai entos tis protis
    int pass = 0, prospathies = 0, iorio, maxOrio, posoana, posokat, sinolo = 1000, metaf, log; // dilosi metacliton, kathos kai ipoloipo logariasmou
   
   printf("\a");
    printf("****KALOS ORISATE STO ATM!****\n");

    pass = 0;
    prospathies = 0;

    while (prospathies < max_prospathies) { // ELEGXOS EGIROTITAS GIA PIN 
        printf("PARAKALO EISAGETE TO TETRAPSIFIO ARITMHO PIN TIS KARTAS SAS:\n");
        scanf("%d", &pass);

        if (pass == PIN) {
            printf("KALOS ORISATE!!\n");
            break;
        } else {
            prospathies++; // AN GINOUN TREIS LATHASMENES PROSPATHIES TOTE TO PROGRAMA KLEIDONI KAI XREIAZETAI EPANAKINISI
            printf("LATHOS PIN!!\n");
        }
    }

    if (prospathies == max_prospathies) {
        printf("*****KLEIDOMA LOGARIASMOU!!!PARAKALO EPIKOINONISTE ME TIN TRAPEZA SAS!!*****"); //meta apo tris lathos pliktrologiseis tou pin gineitai kleidwma tis kartas
        return 0;
    }
printf("\a"); //se auto to simeio akougetai ixos kai mpainoume sto kentriko menu
    do {
        system("cls"); //katharismos othonis
        printf("*****TRAPEZA AKMI*****\n");//titlos
        printf("DIALEKSTE ENAN ARITHMO 1 2 3 4 KAI 5\n");
        printf("************************************\n");
        printf("MENOY EPILOGWN\n");
        printf("**************\n");
        printf("1.EROTISI IPOLOIPOU\n");
        printf("2.ANALIPSI XRIMATON\n");
        printf("3.KATATHESI XRIMATON\n");
        printf("4.METAFORA XRIMATON\n");
        printf("5.EXODOS\n");
        printf("DIALEKSTE ENAN ARITHMO: ");

        scanf(" %c", &userChoise);

        switch (userChoise) { //enarksi prwtis switch
            case '1':  // case 1 emfanizei to poso pou exei mesa i karta mas 
                
				system("cls");
                printf("TO DIATHESIMO POSO EINAI:%d ", sinolo);
                break;

            case '2': //kwdikas analipsis xrimaton
                system("cls");
                printf("ELAXISTI ANALIPSI 20 EURO!!\n");
                printf("MEGISTI ANALIPSI 500 EURO!!\n");

                 do {
                      printf("DIALEKSTE ENA APO TA PARAKATO POSA:\n");
                         printf("20\n40\n80\n100\n120\n150\n180\n200\n400\n: ");

                           // 
                         while (scanf("%d", &posoana) != 1 || posoana % 10 != 0 || getchar() != '\n') {
                           printf(" DEN EINAI DINATI I SINALAGI SAS PARAKALO DIALEKSTE ENA ALLO POSO: ");
                           while (getchar() != '\n');  // Απορρόφηση περιττών χαρακτήρων
                        }

                        if (posoana > sinolo) {
                            printf("ANEPARKES IPOLOIPO\n");
                            return 0;
							} else {
                             sinolo -= posoana; // ginetai aferesi tou posou analipsis apo to sinolo tou logariasmou 
                              printf("DIALEKSATE TO AKOLOUTHO POSO.  %d\n", posoana);
                               printf("*****PARAKALO PARTE TA XRIMATA SAS APO TIN THIRIDA!!*****\n");
                                printf("*****TO NEO YPOLOIPO SAS EINAI-->%d*****", sinolo);// meta tin analipsi mas emfanizei to ipoloipo mas
                     }
                }  while (posoana > sinolo);
                printf("\a"); //ixos
                break;

            case '3': //diadikasia kathesis
            printf("\a");
            system("cls");
             printf("EISAGETE TO POSO KATHESIS: ");
              scanf("%d", &posokat);

             while (posokat < 10 || posokat % 10 != 0) {
             printf("MI DEKTO POSO PARAKALO EISAGETE ENA ALLO POSO ");
             scanf("%d", &posokat);
             }

              sinolo += posokat; 
              printf("TO POSO POU KATHESATE EINAI: %d\n", posokat);
               printf("*****TO NEO SAS IPOLOIPO EINAI--->%d\n", sinolo);
               
			   printf("\a");
                break;

				        break;
            case '4': // diadikasia metaforas xrimaton
            	printf("\a");
                system("cls");
                printf("EPILOGEITE TON TROPO METAFORAS:\n");
                printf("1. METAFORA SE LOGARIASMO ESOTERIKOY\n");
                printf("2. METAFORA SE LOGARIASMO EKSOTERIKOY\n");
                
                scanf(" %c", &userChoise2); // edw ksekinaei mia deuteri switch me dio epiloges
               // sitn sigkekrimenei switch dinoume tin dinatotita ston xristi na kanei metafora se logariasmous esoterikou alla kai eksoterikou!!
                switch (userChoise2) { //dimiourgia neas switch gia metafora eksoterikou 
					case '1': //proti epilogi metafora esoterikou 
                       printf("\a");
					   system("cls");
            	
				printf("EISAGETE TO ARITHMO LOGARIASMOU POU THELETE NA METAFERETE XRIMATA \n:");
            	scanf("%d",&log);
            	printf("EISAGETE TO POSO POY THELETE NA METAFERETE:");
            	scanf("%d",&metaf);
            	if (sinolo > metaf){
				
            		printf("EPITIXIS METAFORA XRIMATON\n");
            		sinolo-=metaf;//idia diadikasia me to poso analipsis
            		printf("TO NEO SAS YPOLOIPO EINAI--->%d",sinolo);	
				} else {
					sinolo+=metaf; // elgxos egkirotitas oste ama to poso metaforas einai megalitero tou ipoloipou to logariasmou na mas emfanizei to parakato minima
					printf("ANEPARKES YPOLOIPO/LATHOS LOGARIASMOS!!");
				}
				printf("\a");
				printf("\a");
				break;

                    case '2': // deuteri epilogi metafora eksoterikou
                       printf("\a");
                printf("********EMVASMA 5 EURO GIA METAFORES STO EKSOTERIKO**********\n"); // dilono prin tin metafora oti tha aferethoun 5 euro
                printf("EISAGETE TO ARITHMO LOGARIASMOU POU THELETE NA METAFERETE XRIMATA:\n");
                scanf("%d", &log);
                printf("EISAGETE TO POSO POY THELETE NA METAFERETE:");
                scanf("%d", &metaf);
                if (sinolo >= metaf + 5) { // sto poso metaforas ginetai prosthesi tou emvasmatos pou exoume thesei emeis  
                printf("EPITIXIS METAFORA XRIMATON\n");
                sinolo -= (metaf + 5);// edw ginetai i aferesei apo to sinolo tis kartas mas mazi me ta poso emvasmatos
                printf("TO NEO SAS YPOLOIPO EINAI--->%d", sinolo);// ektiposi tou neo ipoloipou mazi me tin aferesi tou emvasmatos
                } else {
                 printf("ANEPARKES YPOLOIPO/LATHOS LOGARIASMOS!!");
                 } 
                 printf("\a");
                 break;


                    
                }
                printf("\a");
				break;

            case '5': 
                printf("*****EYXARISTOUME POU MAS PROTIMISATE!!*****");
                break;

            default:
                printf("LATHOS EPILOGI PARAKALO KSANAPROSPATHISTE!\n");
                break;
        }
        printf("\a");
        printf("\nTHELETE NA EPISTREPSETAI STO ARXIKO MENU? (Y/N): ");
        scanf(" %c", &userChoise);
        printf("\a");
    } while (userChoise == 'Y' || userChoise == 'y');
printf("\a");
    return 0;
}
