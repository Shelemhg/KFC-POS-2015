#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <windows.h>
#include <time.h>

//miembros de un namespace van a utilizarse frecuentemente en un programa como impresiones con  cout
using namespace std;


//VARIABLE MAESTRA DE PRODUCTOS
int X=1;

//Switch para activar ANIMACIONES
int A=1; 


int  EleccionMenuPrincipal, Tic=A, Toc, PolloRetardo=1800, PolloConteo=0, RecetaPollo=0;
			
//SUBTOTALES
			int Total, Pago, SubtotalFantasmaATP=0,SubtotalArmaTuPaquete=0, SubtotalFamiliar=0, SubTotalIndividual=0, SubTotalPostres=0, SubTotalBebidas=0, SubTotalChickipack=0, SubTotalMenuALaCarta=0;
			
// 1) FAMILIARES
			int OpcionFamiliares=0,reg=0,DocePiezas=X,DieciseisPiezas=X,PureFamATP=X,EnsaladaFamATP=X,ArrozFamATP=X,
			PopcornMedATP=X,PapasFamATP=X,CuatroBisquetsATP=X,KeTirasJumboATP=X,CompFamATP=X,CuatroRefMedATP=X,
			OchoPiezas=X,DiezPiezas=X,CatorcePiezas=X,PaqueteMix=X;
			
// 2) INDIVIDUAL
			int opcionComplemento, OrdenPaquetesIndividuales, MegaBoxPolloKeTiras=X, MegaBoxKeTirasHamburguesa=X, MegaBoxHamburguesaPollo=X, EnsaladaCesar=X, PopCornMediano=X, PopCornGrande=X,
			Complemento,Regreso,Hamburguesa,KeBoxPollo=X,KeBoxHamburguesa=X,BoxPollo=X,BoxKeTiras=X,BoxHamburguesa=X,BigBoxPollo=X,BigBoxKeTiras=X,BigBoxHamburguesa=X;
			
// 3) POSTRES
			int OpcionPostres, KeConoSencillo=X, KeConoDoble=X, SundaeOreo=X, SundaeKFCChocolate=X, SundaeKFCCaramelo=X, SundaeKFCFresa=X, PayKFC=X;
			
// 4) BEBIDAS
			int PepsiChica=X, PepsiLightChica=X, ManzanitaSolChica=X, SevenUpChica=X, LiptonIceTeaChica=X, AguaFresh=X, PepsiMediana=X, PepsiLightMediana=X,
			ManzanitaSolMediana=X, SevenUpMediana=X, LiptonIceTeaMediana=X, PepsiGrande=X, PepsiLightGrande=X, ManzanitaSolGrande=X, SevenUpGrande=X, LiptonIceTeaGrande=X,
			OpcionBebidas, Pepsi=X, PepsiLight=X, ManzanitaSol=X, SevenUp=X, Lipton=X;
			
// 5) CHIKIPACK
			int OpcionChikyPack, PechugaCrugiChikipack=X, UnaPiezaChikipack=X, KeTirasChikipack=X, PopCornMedianoChikipack=X, N;
			
// 6) MENU A LA CARTA
			int OpcionMenuALaCarta=0, UnaPiezaMC=X,DocePiezasMC=X,DieciseisPiezasMC=X,KeTiraMC=X,PopcornMedMC=X,PopcornGrMC=X,SalsaSBBQMC=X,SalsaJalapenioMC=X,
			KruncherMC=X,DoubleKrunchMC=X,BigKrunchMC=X,SupremaMC=X,KeConoSenMC=X,KeConoDobMC=X,SundaeKFCOreoMC=X,SundaeKFCMC=X,PayKFCMC=X,EnsaladaCesarMC=X,
			RefrescoChMC=X,RefrescoMedMC=X,RefrescoGrMC=X,AguaMC=X,PapasChMC=X,PapasMedMC=X,PapasGrMC=X,PapasFamMC=X,ArrozMedMC=X,ArrozGrMC=X,ArrozFamMC=X,
			PureMedMC=X,PureGrMC=X,PureFamMC=X,EnsaladaMedMC=X,EnsaladaGrMC=X,EnsaladaFamMC=X,EloteMC=X,BisquetMC=X;


//ANIMACIONES
BarraDeCarga(){
	
		  //Cambio de COLOR al menu		
	HANDLE  hConsole;
		    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		    SetConsoleTextAttribute(hConsole, 12);
	        Sleep(1000);                                          
//Barra de carga	

		if (Tic==1){
			
		printf("\n\n\n\n             KKKKKKKK     KKKKKKK  FFFFFFFFFFFFFFFFFFFF    CCCCCCCCCCCCCCC\n");
		printf("              kK:::K     K::::K     F:::::::::::::::F    CC:::::::::::::C\n");
		printf("              K:::K    K:::::K      F::::::FFFFFFFFF    C::::CCCCCCCC::C\n");
		printf("             K:::K   K::::K        F::::F       FF     C::::C       CCC\n");
		printf("             K::::K::::K           F:::FFFFFFFFFF    C:::C              \n");
		printf("             K::::::::K           F:::::::::::::F   C:::C              \n");
		printf("             K::::K::::K          F::::FFFFFFFFFF    C:::C              \n");
		printf("            K::::K  K::::K        F::::F             C::::C       CCCCCC\n");
		printf("            k::::K   K::::K      F::::F              C::::CCCCCCCC::::C\n");
		printf("          Kk::::K    K:::::KK    F:::::FF              CC::::::::::::C\n");
		printf("          KKKKKKKK   KKKKKKKKK  FFFFFFFFFF               CCCCCCCCCCCC\n\n\n\n");
		
		printf("            CARGANDO  ");
			
			for (Toc=0;Toc<1;Toc++){
					cout << "|";
			    Sleep(1000);	
				}
			for (Toc=0;Toc<2;Toc++){
					cout << "|";
			    Sleep(700);	
				}
			for (Toc=0;Toc<4;Toc++){
					cout << "|";
			    Sleep(400);	
				}
			for (Toc=0;Toc<10;Toc++){
					cout << "|";
			    Sleep(150);	
				}
			for (Toc=0;Toc<10;Toc++){
					cout << "|";
			    Sleep(30);	
				}
			for (Toc=0;Toc<15;Toc++){
					cout << "|";
			    Sleep(5);	
				}
					
		}
		}

Pollo (){
		system("cls");
		printf("\n\n                            Entrada Invalida \n\n");
		printf("                                  .=""=.  \n");
		printf("                                /-_--_-%c  \n",92);
		printf("                               |--O--O--|  \n");
		printf("                               %c---/%c---/  \n",92,92, 92  );
		printf("                              ,/'-=%c/=-'%c,  \n",92, 92 );
		printf("                             /-/--------%c-%c  \n",92 ,92 );
		printf("                            |-/----------%c-|  \n",92 );
		printf("                            %c/-%c--------/-%c/  \n",92 ,92 ,92 );
		printf("                                '.----.'  \n");
		printf("                                _|`~~`|_  \n");
		printf("                                /|%c  /|%c  \n",92 ,92 );
} 

Pollo1 (){
		system("cls");
		printf("\n\n                            Entrada Invalida \n\n");
		printf("                                  .=""=.  \n");
		printf("                                /-_--_-%c  \n",92 );
		printf("                               |--O--O--|  \n");
		printf("                               %c---/%c---/  \n",92 ,92 ,92 );
		printf("                           ___,/'-=%c/=-'%c,___  \n",92 ,92,92 );
		printf("                          C___----------- ___D \n");
		printf("                              %c----------/  \n",92 );
		printf("                               %c--------/  \n",92 );
		printf("                                '.----.'  \n");
		printf("                                _|`~~`|_  \n");
		printf("                                /|%c  /|%c  \n",92 ,92 );
}

PolloP (){ 
		system("cls");
		printf("\n\n                            Entrada Invalida \n\n");
		printf("                                  .=""=.  \n");
		printf("                                /-_--_-%c  \n",92);
		printf("                               |--O--O--|  \n");
		printf("                               %c---/%c---/  \n",92,92  );
		printf("                              ,/'-|  |-'%c,  \n",92 );
		printf("                             /-/--=%c/=--%c-%c  \n",92 ,92, 92 );
		printf("                            |-/----------%c-|  \n",92 );
		printf("                            %c/-%c--------/-%c/  \n",92 ,92 ,92 );
		printf("                                '.----.'  \n");
		printf("                                _|`~~`|_  \n");
		printf("                                /|%c  /|%c  \n",92 ,92 );

} 

PolloEntradaInvalida(){
	int i;	
	
	if(PolloConteo>1){
		PolloRetardo=10;
	}
	PolloConteo=PolloConteo+1;	
		system("cls");
			printf("\n\n                            Entrada Invalida \n\n");
			Sleep(PolloRetardo);
			
			
			if (Tic==1){
				
			
			Pollo();
			Sleep(PolloRetardo);
	
				for(i=0;i<3;i++){
					Pollo();
					Sleep(75);
					Pollo1();
					Sleep(75);
					i++;
				}
				i=0;
				Pollo();
				Sleep(200);
				for(i=0;i<3;i++){
					Pollo();
					Sleep(100);
					PolloP();
					Sleep(100);
					i++;
				}
				
				Pollo();
				Sleep(400);
				for(i=0;i<4;i++){
					
					Pollo1();
					Sleep(75);
					Pollo();
					Sleep(60);
					i++;
				}
			Pollo();
				if(PolloConteo>1){
					Sleep(10);}
				else{
					Sleep (1100);
				}
			}		
							
				
}

Colonel1(){
	
	printf("                  @@@@@@@ .                  \n");       
	printf("              @@@@        @@°°°°°°                \n");  
	printf("           @@@@@            @@°°°°°°°°              \n");
	printf("         @@@@@@@@@@@@.......   @°°°°°°°°°°°         \n");
	printf("        @@@@% @S-............   @°°°°°°°°°°°        \n");
	printf("       @@@-  @@'..............  @°°°°°°°°°°°°°      \n");
	printf("    °°°°@@ @@@'................@@@°°°°°°°°°°°°°°    \n");
	printf("    °°°°@@ @@-'...........@@@@@@@@°°°°°°°°°°°°°°°   \n");
	printf("   °°°°@@@ @@@@@@@@@.B@@@@'Q@@...@°°°°°°°°°°°°°°°°  \n");
	printf("  °°°°°°°@@@@@-@'@@@@'.@....6@...@°°°°°°°°°°°°°°°°  \n");
	printf("  °°°°°°°@@ @@@..  @'......+....@°°°°°°°°°°°°°°°°° \n");
	printf(" °°°°°°°°@@@@@@....@@'...@''.....@°°°°°°°°°°°°°°°°° \n");
	printf(" °°°°°°°°°@@@@@''..@'@..@ @@'...@°°°°°°°°°°°°°°°°°° \n");
	printf(" °°°°°°°°°°@@@@@@@@@  @)    @'.@@°°_  __  ___    ___ \n");
	printf(" °°°°°°°°°°Q@@@@'@@ @@@@@@@@@..@°°| |/ / | __|  / _/ \n");
	printf(" °°°°°°°°°°°°@@@''@@@@@@@'..@..@°°|   <  | _|  | %c__\n",92);
	printf(" °°°°°°°°°°°°°@@@'@6@@@........@@°|_|%c_%c |_|    %c__/\n", 92, 92, 92);
	printf(" °°°°°°°°°°°°°°@@@''@@    ....@  @@@@°°°°°°°°°°°°°° \n");
	printf(" .°°°°°°°°°°°°°@@@@@@@     .@@.  @ @°@@@@@@@@@6°°°° \n");
	printf("  °°°°°°°°°°°°@@  @@@@     @@    @ @°°@          @  \n");
	printf("  .°°°°°°°°°°@@@@ ''@@@@  @@@@     -@°@.            \n");
	printf("   °°°°°°°@@@Q@'@  @@@@@@@@@@@  @  '@°°@            \n");
	printf("    °°°@@@@@@@@'-@ '@@@@@@'@@      '@°°@@           \n");
	printf("     @.  '@@°@@ ''     '@@@ '-     '@@°°@           \n");

}
	
Colonel2(){
	
	
	
	
	printf("                  @@@@@@@ .                  \n");       
	printf("              @@@@        @@°°°°°°                \n");  
	printf("           @@@@@            @@°°°°°°°°              \n");
	printf("         @@@@@@@@@@@@.......   @°°°°°°°°°°°         \n");
	printf("        @@@@% @S-............   @°°°°°°°°°°°        \n");
	printf("       @@@-  @@'..............  @°°°°°°°°°°°°°      \n");
	printf("    °°°°@@ @@@'................@@@°°°°°°°°°°°°°°    \n");
	printf("    °°°°@@ @@-'...........@@@@@@@@°°°°°°°°°°°°°°°   \n");
	printf("   °°°°@@@ @@@@@@@@@.B@@@@'Q@@...@°°°°°°°°°°°°°°°°  \n");
	printf("  °°°°°°°@@@@@-@'@@@@@@@@@@@6@...@°°°°°°°°°°°°°°°°  \n");
	printf("  °°°°°°°@@ @@@..  @'@@@@@@@....@°°°°°°°°°°°°°°°°° \n");
	printf(" °°°°°°°°@@@@@@....@@'...@''.....@°°°°°°°°°°°°°°°°° \n");
	printf(" °°°°°°°°°@@@@@''..@'@..@ @@'...@°°°°°°°°°°°°°°°°°° \n");
	printf(" °°°°°°°°°°@@@@@@@@@  @)    @'.@@°°_  __  ___    ___ \n");
	printf(" °°°°°°°°°°Q@@@@'@@ @@@@@@@@@..@°°| |/ / | __|  / _/ \n");
	printf(" °°°°°°°°°°°°@@@''@@@@@@@'..@..@°°|   <  | _|  | %c__\n",92);
	printf(" °°°°°°°°°°°°°@@@'@6@@@........@@°|_|%c_%c |_|    %c__/\n", 92, 92, 92);
	printf(" °°°°°°°°°°°°°°@@@''@@    ....@  @@@@°°°°°°°°°°°°°° \n");
	printf(" .°°°°°°°°°°°°°@@@@@@@     .@@.  @ @°@@@@@@@@@6°°°° \n");
	printf("  °°°°°°°°°°°°@@  @@@@     @@    @ @°°@          @  \n");
	printf("  .°°°°°°°°°°@@@@ ''@@@@  @@@@     -@°@.            \n");
	printf("   °°°°°°°@@@Q@'@  @@@@@@@@@@@  @  '@°°@            \n");
	printf("    °°°@@@@@@@@'-@ '@@@@@@'@@      '@°°@@           \n");
	printf("     @.  '@@°@@ ''     '@@@ '-     '@@°°@           \n");

}	

Colonel(){

	//Cambio de COLOR al menu
HANDLE  hConsole;
		    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);	
SetConsoleTextAttribute(hConsole, 12);
		int i;	

			system("cls");
			Sleep(2000);
			Colonel1();
			Sleep(3000);
			system("cls");
			Colonel2();
			Sleep(200);
			system("cls");
			Colonel1();
		   Sleep(2000);
		   
	system("cls");

}

PolloDeCarga(){
	if(Tic==1){
			
		int j;
				system("cls");
				printf("\n\n                       SU ORDEN ESTARA LISTA EN UN MOMENTO ");
				//system("pause");
				Sleep (1500);
				printf("\n\n\n       MIENTRAS, DISFRUTE DE ESTA PIERNA DE POLLO...");
				Sleep (4300);
				printf(" BAILANDO!!\n\n");
				Sleep (930);
				system("cls");
				for(j=0;j<8;j++){
					if((j%2)==0){
						printf("\n\n\n                             `...``                        \n");
						printf("                       `-oo/++oso++/-.`                    \n");
						printf("                      -o+oo+oo+++++++o+-`                  \n");
						printf("                     -+ooooo+oo++++++++o+-                 \n");
						printf("                    -+ssooooo+++oooo+o++o/`                \n");
						printf("                    -+ooos++++++++oo++o+++-                \n");
						printf("                   `+ooosoo+o+++o++++++++o:                \n");
						printf("                   `-+ooooooo+o+o+++++++++o`               \n");
						printf("                      -o+ossooo+++++++++++o`               \n");
						printf("                       -/ssosooo+++++++++oo`               \n");
						printf("                        `+ssssooooo++++++o:                \n");
						printf("                         `-+ysooooooo++oo+/.               \n");
						printf("                           `./oooooooo+oo++-               \n");
						printf("                              .+ssooosoooos+.              \n");
						printf("                                `osooosooss/-            \n");
						printf("                                `/+osooooooos/             \n");
						printf("                                    osoooooooo:             \n");
						printf("                                   `osssooooooo+-            \n");
						printf("                                   +ssoosssssooo:           \n");
						printf("                                    -osooosysooo.          \n");
						printf("                                     `/ooo+sooo/.          \n");
						printf("                                       .-..--`             \n");
						Sleep(500);
						system("cls");
					}
					else if((j%2)!=0){
						printf("\n\n\n                                     ``.-.`                \n");
						printf("                                 `.-/++oso++//:-`          \n");
						printf("                               `-+o+++++++oo+o+++-         \n");
						printf("                              -o+++++++++oo+ooooo+-        \n");
						printf("                             `o+++o+oooo+++oooooss+:       \n");
						printf("                             -+++o++oo++++++++sooo+-       \n");
						printf("                             :o++++++++o+++o+oosooo+`      \n");
						printf("                            .o+++++++++o+o+ooooooo+-`      \n");
						printf("                            `o+++++++++++ooooso+o-`        \n");
						printf("                            `oo+++++++++ooososs/-          \n");
						printf("                             :o++++++ooooossss+`           \n");
						printf("                            ./+o++oooooooosy+-`            \n");
						printf("                            -++oo+oooooooo/.`              \n");
						printf("                           .+soooosoooss+.                 \n");
						printf("                           -/ssoooooooso`                  \n");
						printf("                           /sooooooso+/`                   \n");
						printf("                         :ooooooooso.`                     \n");
						printf("                        -+oooooossso`                      \n");
						printf("                       :oosssssooss+                       \n");
						printf("                       .ooosysoooso-                       \n");
						printf("                       ./ooos+oos/`                        \n");
						printf("                          `--..-.                          \n");
						Sleep(500);
						system("cls");
						}
					}                                                                                      	
			printf("\n\n                                 ORDEN LISTA!!\n\n");
			Sleep (2000);
					
			printf("                     __   ___    __     ___  _    __     __ \n");
			printf("                    / _] | _ %c  /  %c   / _/ | |  /  %c  /' _/\n", 92, 92, 92); 
			printf("                   | [/%c | v / | /%c | | %c__ | | | /%c | `._`. \n", 92, 92, 92, 92);
			printf("                    %c__/ |_|_%c |_||_|  %c__/ |_| |_||_| |___/ \n\n", 92, 92, 92);
			
			printf("                       ___    __    ___        __   _  _  \n");
			printf("                      | _,%c  /__%c  | _ %c     /' _/ | || | \n", 92, 92, 92);
			printf("                      | v_/ | %c/ | | v /     `._`. | %c/ | \n", 92, 92);
			printf("                      |_|    %c__/  |_|_%c     |___/  %c__/  \n\n", 92, 92, 92);
			
			printf("                      ___   __    __ __   ___   ___    __   \n");
			printf("                     / _/  /__%c  |  V  | | _,%c | _ %c  /  %c  \n", 92, 92, 92, 92);
			printf("                    | %c__ | %c/ | | %c_/ | | v_/ | v / | /%c | \n", 92, 92, 92, 92);
			printf("                     %c__/  %c__/  |_| |_| |_|   |_|_%c |_||_| \n", 92, 92, 92);
			Sleep (3000);
			Colonel();
	
		}
}


//MODULOS DE OPCIONES
SaborPollo(){
	printf("\n\nElige tu receta:\n\n\t1)CrujiPollo\n\t2)Spicy BBQ\n\t3)Jalapenio\n\t4)Hot Cruji (Nuevo)\n\t5)Receta secreta\n");
	scanf("%i",&RecetaPollo);
	switch(RecetaPollo){
		case 1:{
			printf("\tHas elegido la receta CrujiPollo.\n\n");
			break;
		}
		case 2:{
			printf("\tHas elegido la receta Spicy BBQ.\n\n");
			break;
		}
		case 3:{
			printf("\tHas elegido la receta Jalapenio.\n\n");
			break;
		}
		case 4:{
			printf("\tHas elegido la receta Hot Cruji.\n\n");
			break;
		}
		case 5:{
			printf("\tHas elegido la Receta Secreta.\n\n");
			break;
		}

	}
}	

ArmaTuPaquete(){

	InicioArmaTuPaquete:
	
	//Cambio de COLOR al menu		
	HANDLE  hConsole;
		    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	
	system("cls");
	printf("\t\tMENU ARMA TU PAQUETE\n\n");
	printf("\tPara eliminar un paquete presiona - y la opcion a ELIMINAR\n \tPara finalizar la orden presiona 0\n \tPara VOLVER A EMPEZAR toda la orden presiona 999\n\n\n");
	printf("\tEscoge tu numero de piezas:\n\n");
	printf("\t   10) 12 Piezas    $179\n\t   11) 16 Piezas    $219\n");
	printf("\n\n\tEscoge tus complementos:\n\n");
	printf("\t $29 cada uno \t       $39 cada uno\t   $49 cada uno\n\n");
	printf("\t   1) Pure Fam. \t 4) Papas Fam.\t   7) Ke-Tiras JUMBO \n");
	printf("\t   2) Ensalada Fam. \t 5) Popcorn Med.   8) 2 Comp.Fam.(Arroz y Pure)\n");
	printf("\t   3) Arroz Fam. \t 6) 4 Bisquets\t   9) 4 Refrescos Med. \n\n");
	
		if (DocePiezas!=0 or DieciseisPiezas!=0 or PureFamATP!=0 or EnsaladaFamATP!=0 or PapasFamATP!=0 
		    or PopcornMedATP!=0 or ArrozFamATP!=0 or CuatroBisquetsATP!=0 or KeTirasJumboATP!=0 or CompFamATP!=0 or CuatroRefMedATP!=0 ){
SetConsoleTextAttribute(hConsole, 244);
			printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n\n");
SetConsoleTextAttribute(hConsole, 79);
			printf("Orden:\n\n");
//Piezas
			if (DocePiezas!=0){
			printf("\t%i Piezas.         ",DocePiezas*12);
			}
			if (DieciseisPiezas!=0){
			printf("\t%i Piezas.      ",DieciseisPiezas*16);
			}
	
//Fila  1____________________________
			if (PureFamATP!=0){
			printf("\n\t%i  Pure Fam.         ",PureFamATP);
			}
			if (PapasFamATP!=0){
			printf("\t%i  Papas Fam.      ",PapasFamATP);
			}
			if (KeTirasJumboATP!=0){
			printf("\t%i  Ke-Tiras        ",KeTirasJumboATP);
			}
	
//Fila  2____________________________
			if (EnsaladaFamATP!=0){
			printf("\n\t%i  Ensalada Fam.     ",EnsaladaFamATP);
			}
			if (PopcornMedATP!=0){
			printf("\t%i  Popcorn Fam.      ",PopcornMedATP);
			}
			if (CompFamATP!=0){
			printf("\t%i  Comp. Fam.      ",CompFamATP*2);
			}
			
//Fila  3____________________________
			if (ArrozFamATP!=0){
			printf("\n\t%i  Arroz Fam.        ",ArrozFamATP);
			}
			if (CuatroBisquetsATP!=0){
			printf("\t%i  Bisquets      ",CuatroBisquetsATP*4);
			}
			if (CuatroRefMedATP!=0){
			printf("\t%i  Refrescos Med.",CuatroRefMedATP*4);
			}
	
		}
	
		printf("\n\n\t\t\t\t\t\tEl total a pagar es $%i\n",SubtotalArmaTuPaquete);
	
	scanf("%i",&OpcionFamiliares);
	
	switch(OpcionFamiliares){
		case 10:{
			DocePiezas = DocePiezas + 1;
			SubtotalArmaTuPaquete = SubtotalArmaTuPaquete + 179;
			SubtotalFantasmaATP = SubtotalFantasmaATP + 179;
			SaborPollo();
			system("pause");
			goto InicioArmaTuPaquete;
			break;
		}
		case 11:{
			DieciseisPiezas = DieciseisPiezas + 1;
			SubtotalArmaTuPaquete = SubtotalArmaTuPaquete + 219;
			SubtotalFantasmaATP = SubtotalFantasmaATP + 219;
			SaborPollo();
			system("pause");
			goto InicioArmaTuPaquete;
			break;
		}
		case 1:{
			PureFamATP = PureFamATP + 1;
			SubtotalArmaTuPaquete = SubtotalArmaTuPaquete + 29;
			SubtotalFantasmaATP = SubtotalFantasmaATP + 29;
			goto InicioArmaTuPaquete;
			break;
		}
		case 2:{
			EnsaladaFamATP = EnsaladaFamATP + 1;
			SubtotalArmaTuPaquete = SubtotalArmaTuPaquete + 29;
			SubtotalFantasmaATP = SubtotalFantasmaATP + 29;
			goto InicioArmaTuPaquete;
			break;
		}
		case 3:{
			ArrozFamATP = ArrozFamATP + 1;
			SubtotalArmaTuPaquete = SubtotalArmaTuPaquete + 29;
			SubtotalFantasmaATP = SubtotalFantasmaATP + 29;
			goto InicioArmaTuPaquete;
			break;
		}
		case 4:{
			PapasFamATP = PapasFamATP + 1;
			SubtotalArmaTuPaquete = SubtotalArmaTuPaquete + 39;
			SubtotalFantasmaATP = SubtotalFantasmaATP + 39;
			goto InicioArmaTuPaquete;
			break;
		}
		case 5:{
			PopcornMedATP = PopcornMedATP + 1;
			SubtotalArmaTuPaquete = SubtotalArmaTuPaquete + 39;
			SubtotalFantasmaATP = SubtotalFantasmaATP + 39;
			goto InicioArmaTuPaquete;
			break;
		}
		case 6:{
			CuatroBisquetsATP = CuatroBisquetsATP + 1;
			SubtotalArmaTuPaquete = SubtotalArmaTuPaquete + 39;
			SubtotalFantasmaATP = SubtotalFantasmaATP + 39;
			goto InicioArmaTuPaquete;
			break;
		}
		case 7:{
			KeTirasJumboATP = KeTirasJumboATP + 1;
			SubtotalArmaTuPaquete = SubtotalArmaTuPaquete + 49;
			SubtotalFantasmaATP = SubtotalFantasmaATP + 49;
			SaborPollo();
			system("pause");
			goto InicioArmaTuPaquete;
			break;
		}
		case 8:{
			CompFamATP = CompFamATP + 1;
			SubtotalArmaTuPaquete = SubtotalArmaTuPaquete + 49;
			SubtotalFantasmaATP = SubtotalFantasmaATP + 49;
			goto InicioArmaTuPaquete;
			break;
		}
		case 9:{
			CuatroRefMedATP = CuatroRefMedATP + 1;
			SubtotalArmaTuPaquete = SubtotalArmaTuPaquete + 49;
			SubtotalFantasmaATP = SubtotalFantasmaATP + 49;
			goto InicioArmaTuPaquete;
			break;
		}
		case -10:{
			if(DocePiezas>0){
			DocePiezas = DocePiezas - 1;
			SubtotalArmaTuPaquete = SubtotalArmaTuPaquete - 179;
			SubtotalFantasmaATP = SubtotalFantasmaATP - 179;
			}goto InicioArmaTuPaquete;
			break;
		}
		case -11:{
			if(DieciseisPiezas>0){
			DieciseisPiezas = DieciseisPiezas - 1;
			SubtotalArmaTuPaquete = SubtotalArmaTuPaquete - 219;
			SubtotalFantasmaATP = SubtotalFantasmaATP - 219;
			}goto InicioArmaTuPaquete;
			break;
		}
		case -1:{
			if(PureFamATP>0){
			PureFamATP = PureFamATP - 1;
			SubtotalArmaTuPaquete = SubtotalArmaTuPaquete - 29;
			SubtotalFantasmaATP = SubtotalFantasmaATP - 29;
			}goto InicioArmaTuPaquete;
			break;
		}
		case -2:{
			if(EnsaladaFamATP>0){
			EnsaladaFamATP = EnsaladaFamATP - 1;
			SubtotalArmaTuPaquete = SubtotalArmaTuPaquete - 29;
			SubtotalFantasmaATP = SubtotalFantasmaATP - 29;
			}goto InicioArmaTuPaquete;
			break;
		}
		case -3:{
			if(ArrozFamATP>0){
			ArrozFamATP = ArrozFamATP - 1;
			SubtotalArmaTuPaquete = SubtotalArmaTuPaquete - 29;
			SubtotalFantasmaATP = SubtotalFantasmaATP - 29;
			}goto InicioArmaTuPaquete;
			break;
		}
		case -4:{
			if(PapasFamATP>0){
			PapasFamATP = PapasFamATP - 1;
			SubtotalArmaTuPaquete = SubtotalArmaTuPaquete - 39;
			SubtotalFantasmaATP = SubtotalFantasmaATP - 39;
			}goto InicioArmaTuPaquete;
			break;
		}
		case -5:{
			if(PopcornMedATP){
			PopcornMedATP = PopcornMedATP - 1;
			SubtotalArmaTuPaquete = SubtotalArmaTuPaquete - 39;
			SubtotalFantasmaATP = SubtotalFantasmaATP - 39;
			}goto InicioArmaTuPaquete;
			break;
		}
		case -6:{
			if(CuatroBisquetsATP>0){
			CuatroBisquetsATP = CuatroBisquetsATP - 1;
			SubtotalArmaTuPaquete = SubtotalArmaTuPaquete - 39;
			SubtotalFantasmaATP = SubtotalFantasmaATP - 39;
			}goto InicioArmaTuPaquete;
			break;
		}
		case -7:{
			if(KeTirasJumboATP>0){
			KeTirasJumboATP = KeTirasJumboATP - 1;
			SubtotalArmaTuPaquete = SubtotalArmaTuPaquete - 49;
			SubtotalFantasmaATP = SubtotalFantasmaATP - 49;
			}goto InicioArmaTuPaquete;
			break;
		}
		case -8:{
			if(CompFamATP>0){
			CompFamATP = CompFamATP - 1;
			SubtotalArmaTuPaquete = SubtotalArmaTuPaquete - 49;
			SubtotalFantasmaATP = SubtotalFantasmaATP - 49;
			}goto InicioArmaTuPaquete;
			break;
		}
		case -9:{
			if(CuatroRefMedATP>0){
			CuatroRefMedATP = CuatroRefMedATP - 1;
			SubtotalArmaTuPaquete = SubtotalArmaTuPaquete - 49;
			SubtotalFantasmaATP = SubtotalFantasmaATP - 49;
			}goto InicioArmaTuPaquete;
			break;
		}
		case 999:{
			DocePiezas = DieciseisPiezas = PureFamATP = EnsaladaFamATP = ArrozFamATP = PopcornMedATP
			 = PapasFamATP = CuatroBisquetsATP = KeTirasJumboATP = CompFamATP = CuatroRefMedATP = SubtotalArmaTuPaquete = 0;
			goto InicioArmaTuPaquete;
			break;
		}
		case 0:{
			SubtotalFamiliar = SubtotalFamiliar + SubtotalFantasmaATP;
			SubtotalFantasmaATP = 0;
			break;
		}
		default:{
			PolloEntradaInvalida();
			goto InicioArmaTuPaquete;
			break;
		}
		break;
	}
	}

Familiares(){//OPCION 1
	
	InicioMenuFamiliares:
		
	//Cambio de COLOR al menu		
	HANDLE  hConsole;
		    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);	
	SetConsoleTextAttribute(hConsole, 79);
	
	system("cls");
	fflush(stdin);

	printf("           ___    __    __ __   _   _     _    __    ___   ___    __  \n");
	printf("          | __|  /  %c  |  V  | | | | |   | |  /  %c  | _ %c | __| /' _/ \n", 92, 92, 92);
	printf("          | _|  | /%c | | %c_/ | | | | |_  | | | /%c | | v / | _|  `._`. \n", 92, 92, 92);
	printf("          |_|   |_||_| |_| |_| |_| |___| |_| |_||_| |_|_%c |___| |___/ \n\n", 92);

	printf("     Para eliminar un paquete presiona - y la opcion a ELIMINAR\n     Para finalizar la orden presiona 0\n     Para VOLVER A EMPEZAR toda la orden presione 999\n\n\n");
	printf("    Escoge el paquete que desees:\n\n\n");
	printf("\t1) 8 Piezas\t\t$169\n\t2) 10 Piezas\t\t$219\n\t3) 14 Piezas\t\t$289\n\t4) Paquete Mix\t\t$199\n\t5) Arma tu Paquete\n\n");
	
	if(OchoPiezas!=0 or DiezPiezas!=0 or CatorcePiezas!=0 or PaqueteMix!=0){
SetConsoleTextAttribute(hConsole, 244);	
		printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n\n\tTotal de productos:\n");
SetConsoleTextAttribute(hConsole, 79);
		//Fila  1____________________________
		if (OchoPiezas!=0){
		printf("\t%i 8 Piezas .",OchoPiezas);
		}
	
		//Fila  2____________________________
		if (DiezPiezas!=0){
		printf("\n\t%i 10 Piezas",DiezPiezas);
		}
	
		//Fila  3____________________________
		if (CatorcePiezas!=0){
		printf("\n\t%i 14 Piezas",CatorcePiezas);
		}
	
		//Fila  4____________________________
		if (PaqueteMix!=0){
		printf("\n\t%i Paquete Mix.",PaqueteMix);
		}
	}
	
	if(DocePiezas!=0 or DieciseisPiezas!=0 or PureFamATP!=0 or EnsaladaFamATP!=0 or PapasFamATP!=0 
	   or PopcornMedATP!=0 or ArrozFamATP!=0 or CuatroBisquetsATP!=0 or KeTirasJumboATP!=0 or CompFamATP!=0 or CuatroRefMedATP!=0){
	
		//Arma tu paquete
		printf("\n\n\tArma tu paquete:\n\n");
		//Piezas
		if (DocePiezas!=0){
		printf("\t%i Piezas.         ",DocePiezas*12);
		}
		if (DieciseisPiezas!=0){
		printf("\t%i Piezas.      ",DieciseisPiezas*16);
		}
	
		//Fila  1____________________________
		if (PureFamATP!=0){
		printf("\n\t%i  Pure Fam.         ",PureFamATP);
		}
		if (PapasFamATP!=0){
		printf("\t%i  Papas Fam.      ",PapasFamATP);
		}
		if (KeTirasJumboATP!=0){
		printf("\t%i  Ke-Tiras        ",KeTirasJumboATP);
		}
	
		//Fila  2____________________________
		if (EnsaladaFamATP!=0){
		printf("\n\t%i  Ensalada Fam.     ",EnsaladaFamATP);
		}
		if (PopcornMedATP!=0){
		printf("\t%i  Popcorn Fam.      ",PopcornMedATP);
		}
		if (CompFamATP!=0){
		printf("\t%i  Comp. Fam.      ",CompFamATP*2);
		}
	
		//Fila  3____________________________
		if (ArrozFamATP!=0){
		printf("\n\t%i  Arroz Fam.        ",ArrozFamATP);
		}
		if (CuatroBisquetsATP!=0){
		printf("\t%i  Bisquets      ",CuatroBisquetsATP*4);
		}
		if (CuatroRefMedATP!=0){
		printf("\t%i  Refrescos Med.",CuatroRefMedATP*4);
		}
	
	}
SetConsoleTextAttribute(hConsole, 244);	
	printf("\nSUBTOTAL $%i\n",SubtotalFamiliar);
SetConsoleTextAttribute(hConsole, 79);	
	scanf("%i",&OpcionFamiliares);
	
	system("cls");
	
	printf("\n**************************************************************************");
	
	switch(OpcionFamiliares){
	/*Seleccion de los paquetes*/
	case 1:{
		OchoPiezas = OchoPiezas + 1;
		printf("\n\nHas elegido el Paquete de 8 Piezas\n");
		printf("\nEste paquete incluye:\n\t1 pure familiar.\n\t1 ensalada familiar.\n\t4 bisquets.");
	
		SaborPollo();
	
		SubtotalFamiliar = SubtotalFamiliar + 169;
	
		printf("\nEl total a pagar por el paquete es: $169\n");
	
		printf("\n\nDeseas ordenar otro paquete? 1=SI 2=NO\n");
		scanf("%i",&reg);
		if(reg == 1)
			goto InicioMenuFamiliares;
	
	}break;
	
	case 2:{
		DiezPiezas = DiezPiezas + 1;
		printf("\n\nHas elegido el Paquete de 10 Piezas\n");
		printf("\nEste paquete incluye:\n\t1 ensalada familiar.\n\t1 pure familiar.\n\t5 bisquets.");
	
		SaborPollo();
	
		SubtotalFamiliar = SubtotalFamiliar + 219;
	
		printf("\nEl total a pagar por el paquete es: $219\n");
	
		printf("\n\nDeseas ordenar otro paquete? 1=SI 2=NO\n");
		scanf("%i",&reg);
		if(reg == 1)
			goto InicioMenuFamiliares;
	
	}break;
	
	case 3:{
		CatorcePiezas = CatorcePiezas + 1;
		printf("\n\nHas elegido el Paquete de 14 Piezas\n");
		printf("\nEste paquete incluye:\n\t1 ensalada familiar.\n\t1 pure familiar.\n\t6 bisquets.\n\t1 arroz familiar.");
	
		SaborPollo();
	
		SubtotalFamiliar = SubtotalFamiliar + 289;
	
		printf("\nEl total a pagar por el paquete es: $289\n");
	
		printf("\n\nDeseas ordenar otro paquete? 1=SI 2=NO\n");
		scanf("%i",&reg);
		if(reg == 1)
			goto InicioMenuFamiliares;
	
	}break;
	
	case 4:{
		PaqueteMix = PaqueteMix + 1;
		printf("\n\nHas elegido el Paquete Mix\n");
		printf("\nEste paquete incluye:\n\t6 piezas de pollo.\n\t4 bisquets.\n\t2 hamburguesas Kruncher\n\t2 complementos familiares");
		printf("\n\n Que complementos deseas elegir?\n\t1)Arroz y pure\n\t2)Arroz y ensalada \n\t3)Pure y ensalada\n");/*Funcion complementos*/
		scanf("%i",&OpcionFamiliares);
		system("cls");
		printf("\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
		printf("Tu paquete incluye:\n\t6 piezas de pollo.\n\t4 bisquets.\n\t2 hamburguesas Kruncher.");
		switch(OpcionFamiliares){
			case 1:{
				printf("\n\tArroz y pure\n");
				break;
			}
			case 2:{
				printf("\n\tArroz y ensalada\n");
				break;
			}
			case 3:{
				printf("\n\tPure y ensalada\n");
				break;
			}
		}
	
		SaborPollo();
	
		SubtotalFamiliar = SubtotalFamiliar + 199;
	
		printf("\nEl total a pagar por el paquete es: $199\n");
	
		printf("\n\nDeseas ordenar otro paquete? 1=SI 2=NO\n");
		
		scanf("%i",&reg);
		if(reg == 1)
			goto InicioMenuFamiliares;
			
		}break;
		
		case 5:{
			ArmaTuPaquete();
			goto InicioMenuFamiliares;
		}break;
		
		case -1:{
		if(OchoPiezas>0){
		OchoPiezas = OchoPiezas - 1;
		SubtotalFamiliar = SubtotalFamiliar - 169;
		}goto InicioMenuFamiliares;
		}break;
		
		case -2:{
		if(DiezPiezas>0){
		DiezPiezas= DiezPiezas-1;
		SubtotalFamiliar = SubtotalFamiliar - 219;
		}goto InicioMenuFamiliares;
		}break;
		
		case -3:{
		if(CatorcePiezas>0){
		CatorcePiezas= CatorcePiezas-1;
		SubtotalFamiliar = SubtotalFamiliar - 289;
		}goto InicioMenuFamiliares;
		}break;
		
		case -4:{
		if(PaqueteMix>0){
		PaqueteMix = PaqueteMix-1;
		SubtotalFamiliar = SubtotalFamiliar - 199;
		}goto InicioMenuFamiliares;
		}break;
		
		case 0:{
			goto FinMenuFamiliares;
		}break;
		
		case 999:{
			DocePiezas = DieciseisPiezas = PureFamATP = EnsaladaFamATP = ArrozFamATP 
			= PopcornMedATP = PapasFamATP = CuatroBisquetsATP = KeTirasJumboATP = CompFamATP = CuatroRefMedATP = 
			SubtotalArmaTuPaquete = OchoPiezas = DiezPiezas = CatorcePiezas = PaqueteMix = SubtotalFamiliar = 0;
			goto InicioMenuFamiliares;
		}break;
		
		default:{
			PolloEntradaInvalida();
			goto InicioMenuFamiliares;
		}break;
		
		}
	FinMenuFamiliares:
		printf(" ");


}

Individual(){//OPCION 2
		
	InicioMenuIndividual:
	
	//Cambio de COLOR al menu		
	HANDLE  hConsole;
		    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 79);
	
	system("cls");
	fflush(stdin);
    //*********      Impresión de pantalla de InicioMenuChikiPack del Menu INDIVIDUAL     *******************
	printf("     _   __  _   __    _   _   _   _   __    _  _    __    _     ___    __  \n", 92, 92, 92);
	printf("    | | |  %c| | | _%c  | | | %c / | | | | _%c  | || |  /  %c  | |   | __| /' _/ \n", 92, 92, 92, 92, 92);
	printf("    | | | | ' | | v | | | `%c V /' | | | v | | %c/ | | /%c | | |_  | _|  `._`. \n", 92, 92, 92);
	printf("    |_| |_|%c__| |__/  |_|   %c_/   |_| |__/   %c__/  |_||_| |___| |___| |___/ \n\n", 92, 92, 92);
	printf("\tPara eliminar un paquete presiona - y la opcion a ELIMINAR\n \tPara finalizar la orden presiona 0\n \tPara VOLVER A EMPEZAR toda la orden presione 999\n\n");
	printf("     Escoge el paquete que desees:\n");
	printf("  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  \n");
	printf("  KEBOX $49      BOX $65            BIGBOX $85          MEGA BOX $95\n\n");
	printf(" 1) Pollo        3) Pollo.          6) Pollo.          9) Pollo y Ke-Tiras\n");
	printf("                                                               Jumbo\n\n");
	printf(" 2) Hamburguesa  4) Ke-Tiras Jumbo  7) Ke-Tiras Jumbo  10) Ke-Tiras Jumbo y\n");
	printf("                                                             Hamburguesa\n\n");
	printf("                 5) Hamburguesa.    8) Hamburguesa     11) Hamburguesa y Pollo\n\n");
	printf("  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  \n");
	printf("  12) Ensalada Cesar $69     13) Popcorn Medianas $59    14) Popcorn Grandes $69\n");
	printf("  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  \n");
	
//*****************************      Comprovación e Impresión de las ordenes actuales del Menu INDIVIDUAL    ************************************************************
	if(KeBoxPollo!=0 or KeBoxHamburguesa!=0 or BoxPollo!=0 or BoxKeTiras!=0 or BoxHamburguesa!=0 
	   or BigBoxPollo!=0 or BigBoxKeTiras!=0 or BigBoxHamburguesa!=0 or MegaBoxPolloKeTiras!=0 
	   or MegaBoxKeTirasHamburguesa!=0 or  MegaBoxHamburguesaPollo!=0 or EnsaladaCesar!=0 or PopCornMediano!=0 or  PopCornGrande!=0 ){
SetConsoleTextAttribute(hConsole, 244);	
		printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n\nTotal de productos:\n");
SetConsoleTextAttribute(hConsole, 79);
		//Fila  1____________________________
		if (KeBoxPollo!=0){
		printf("    %i KEBOX Pollo.      ",KeBoxPollo);
		}
		if (KeBoxHamburguesa!=0){
		printf("    %i KEBOX Hamb.       \n",KeBoxHamburguesa);
		}
		
		//Fila  2____________________________
		
		if (BoxKeTiras!=0){
		printf("    %i BOX Ke-Tiras J.   ",BoxKeTiras);
		}
		if (BoxPollo!=0){
		printf("    %i BOX Pollo.        ",BoxPollo);
		}
		if (BoxHamburguesa!=0){
		printf("    %i BOX Hamb.         \n",BoxHamburguesa);
		}
		
		//Fila  3____________________________
		if (BigBoxPollo!=0){
		printf("    %i BIGBOX Pollo.     ",BigBoxPollo);
		}
		if (BigBoxKeTiras!=0){
		printf("    %i BIGBOX Ke-Tiras J.",BigBoxKeTiras);
		}
		if (BigBoxHamburguesa!=0){
		printf("    %i BIGBOX Hamb.      \n",BigBoxHamburguesa);
		}
		
		//Fila  1
		if (MegaBoxPolloKeTiras!=0){
		printf("    %i  MegaBox (Pollo & KT J.)  ",MegaBoxPolloKeTiras);
		}
		if (MegaBoxKeTirasHamburguesa!=0){
		printf("    %i  MegaBox (Ke-Tira-Jumbo & Hamburguesa).\n",MegaBoxKeTirasHamburguesa);
		}
		if (MegaBoxHamburguesaPollo!=0){
		printf("    %i  MegaBox (Hamburguesa & Pollo).    ",MegaBoxHamburguesaPollo);
		}
		//Fila  2
		if (EnsaladaCesar!=0){
		printf("\n    %i  Ensalada Cesar(Incluye botella de agua de 600 ml).",EnsaladaCesar);
		}
		
		//Fila  3
		if (PopCornMediano!=0){
		printf("\n    %i Pop Corn Mediano         ",PopCornMediano);
		}
		if (PopCornGrande!=0){
		printf("    %i Pop Corn Grande      ",PopCornGrande);
		}	
	}
//Cambio de color del SUBTOTAL
SetConsoleTextAttribute(hConsole, 244);		
	printf("\n\nSUBTOTAL: $%i\n",SubTotalIndividual);
SetConsoleTextAttribute(hConsole, 244);
	scanf("%i",&OrdenPaquetesIndividuales);
	
	system("cls");
	
	printf("\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * ");
	
//***********************************      Impresión y personalización de los paquetes que se seleccionen    **********************************************	
	switch(OrdenPaquetesIndividuales){

		case 1:{
			KeBoxPollo = KeBoxPollo+1;
			printf("\n\nHas elegido el KEBOX Pollo\n");
			printf("\nEste paquete incluye:\n\t1 Pieza de pollo\n\t1 Ke-Tira\n\t1 Pure chico\n\t1 Ensalada chica\n\t1 Refresco chico");
			
			SaborPollo();
			
			SubTotalIndividual = SubTotalIndividual + 49; /*Suma lo que se lleve hasta este momento al total*/
			
			printf("\nEl total a pagar por el paquete es: $49\n");
			
			printf("\n\nDeseas ordenar otro paquete? 1=SI 2=NO\n");
			scanf("%i",&Regreso);
			if(Regreso == 1)
				goto InicioMenuIndividual;
			else if(Regreso == 2)
				goto FinMenuIndividual;
		
			}break;
		case 2:{
			KeBoxHamburguesa = KeBoxHamburguesa+1;
			printf("\n\nHas elegido el KEBOX Hamburguesa");
			printf("\nEste paquete incluye:\n\t1 Hamburguesa Double Crunch\n\t1 Pure chico\n\t1 Ensalada chica\n\t1 Refresco chico");
			
			SaborPollo();
			
			SubTotalIndividual = SubTotalIndividual + 49; /*Suma lo que se lleve hasta este momento al total*/
			
			printf("\nEl total a pagar por el paquete es: $49\n");
			
			printf("\n\nDeseas ordenar otro paquete? 1=SI 2=NO\n");
			scanf("%i",&Regreso);
			if(Regreso == 1)
				goto InicioMenuIndividual;
			else if(Regreso == 2)
				goto FinMenuIndividual;
		
		}break;
		case 3:{
			BoxPollo=BoxPollo+1;
			printf("\n\nHas elegido el BOX Pollo");
			printf("\nEste paquete incluye:\n\t2 Piezas de pollo\n\t1 Bisquet\n\t1 Papas medianas\n\t1 Refresco mediano");
			
			SaborPollo();
			
			SubTotalIndividual = SubTotalIndividual + 65; /*Suma lo que se lleve hasta este momento al total*/
			
			printf("\nEl total a pagar por el paquete es: $65\n");
			
			printf("\n\nDeseas ordenar otro paquete? 1=SI 2=NO\n");
			scanf("%i",&Regreso);
			if(Regreso == 1)
				goto InicioMenuIndividual;
			else if(Regreso == 2)
				goto FinMenuIndividual;
		
		}break;	
		case 4:{
			BoxKeTiras=BoxKeTiras+1;
			printf("\n\nHas elegido el BOX Ke-Tiras Jumbo");
			printf("\nEste paquete incluye:\n\t2 Ke-Tiras Jumbo\n\t1 Bisquet\n\t1 Papas medianas\n\t1 Refresco mediano");
			
			SaborPollo();
			
			SubTotalIndividual = SubTotalIndividual + 65;
			
			printf("\nEl total a pagar por el paquete es: $65\n");
				
			printf("\n\nDeseas ordenar otro paquete? 1=SI 2=NO\n");
			scanf("%i",&Regreso);
			if(Regreso == 1)
				goto InicioMenuIndividual;
			else if(Regreso == 2)
				goto FinMenuIndividual;
		
		}break;
		case 5:{
			BoxHamburguesa=BoxHamburguesa+1;
			printf("\n\nHas elegido el BOX Hamburguesa");
			printf("\nEste paquete incluye:\n\t1 Hamburguesa Double Crunch\n\t1 Bisquet\n\t1 Papas medianas\n\t1 Refresco mediano");
			
			SaborPollo();
			
			SubTotalIndividual = SubTotalIndividual +  65; 
			
			printf("\nEl total a pagar por el paquete es: $65\n");
			
			printf("\n\nDeseas ordenar otro paquete? 1=SI 2=NO\n");
			scanf("%i",&Regreso);
			if(Regreso == 1)
				goto InicioMenuIndividual;
			else if(Regreso == 2)
				goto FinMenuIndividual;
		
		}break;
		case 6:{
			BigBoxPollo = BigBoxPollo+1;
			printf("\n\nHas elegido el BIGBOX Pollo");
			printf("\nEste paquete incluye:\n\t3 piezas de pollo\n\t1 Bisquet\n\t1 Papas medianas\n\t1 Complemento mediano\n\t1 Refresco mediano");
			printf("\n\nQue complemento deseas elegir?\n1)Arroz\n2)Pure\n3)Papas\n4)Elote\n5)Ensalada\n");/*Funcion complementos*/
			scanf("%i",&opcionComplemento);
			system("cls");
			printf("\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
			printf("\nEste paquete incluye:\n\t3 piezas de pollo\n\t1 Bisquet\n\t1 Papas medianas\n\t1 Refresco mediano\n\t");
			switch(opcionComplemento){
				case 1:{
					printf("Arroz\n");
					break;
				}
				case 2:{
					printf("Pure\n");
					break;
				}
				case 3:{
					printf("Papas\n");
					break;
				}
				case 4:{
					printf("Elote\n");
					break;
				}
				case 5:{
					printf("Ensalada\n");
					break;
				}
			}
			
			SaborPollo();
			
			SubTotalIndividual = SubTotalIndividual + 85;
			
			printf("\nEl total a pagar por el paquete es: $85\n");
			
			printf("\n\nDeseas ordenar otro paquete? 1=SI 2=NO\n");
			scanf("%i",&Regreso);
			if(Regreso == 1)
				goto InicioMenuIndividual;
			else if(Regreso == 2)
				goto FinMenuIndividual;
			BigBoxPollo = BigBoxPollo+1;	
		}break;
		case 7:{
			BigBoxKeTiras = BigBoxKeTiras+1;
			printf("\n\nHas elegido el BIGBOX Ke-Tiras Jumbo");
			printf("\nEste paquete incluye:\n\t3 Ke-Tiras Jumbo\n\t1 Bisquet\n\t1 Papas medianas\n\t1 Complemento mediano\n\t1 Refresco mediano");
			printf("\n\nQue complemento deseas elegir?\n1)Arroz\n2)Pure\n3)Papas\n4)Elote\n5)Ensalada\n");/*Funcion complementos*/
			scanf("%i",&opcionComplemento);
			system("cls");
			printf("\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
			printf("\nEste paquete incluye:\n\t3 piezas de pollo\n\t1 Bisquet\n\t1 Papas medianas\n\t1 Refresco mediano\n\t");
			
			switch(opcionComplemento){
				case 1:{
					printf("Arroz\n");
					break;
				}
				case 2:{
					printf("Pure\n");
					break;
				}
				case 3:{
					printf("Papas\n");
					break;
				}
				case 4:{
					printf("Elote\n");
					break;
				}
				case 5:{
					printf("Ensalada\n");
					break;
				}
			}
			
			SaborPollo();
			
			SubTotalIndividual = SubTotalIndividual + 85;
			
			printf("\nEl total a pagar por el paquete es: $85\n");
			
			printf("\n\nDeseas ordenar otro paquete? 1=SI 2=NO\n");
			scanf("%i",&Regreso);
			if(Regreso == 1)
				goto InicioMenuIndividual;
			else if(Regreso == 2)
				goto FinMenuIndividual;
		
		}break;
		case 8:{
			BigBoxHamburguesa = BigBoxHamburguesa+1;
			printf("\n\nHas elegido el BIGBOX Hamburguesa");
			printf("\nEste paquete incluye:\n\t1 Hamburguesa Big Crunch o 1 Suprema\n\t1 Bisquet\n\t1 Papas medianas\n\t1 Refresco mediano");
			printf("\n\nQue hamburguesa deseas elegir?\n 1) Hamburguesa Big Crunch\n 2) Hamburguesa Suprema\n");
			scanf("%i",&Hamburguesa);
			if(Hamburguesa == 1){
				system("cls");
				printf("\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
				printf("\nTu paquete incluye:\n\t1 Hamburguesa Big Crunch\n\t1 Bisquet\n\t1 Papas medianas\n\t1 Refresco mediano\n");}
			else if(Hamburguesa == 2){
				system("cls");
				printf("\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
				printf("\nTu paquete incluye:\n\t1 Hamburguesa Suprema\n\t1 Bisquet\n\t1 Papas medianas\n\t1 Refresco mediano\n");}
			
			SaborPollo();
			
			SubTotalIndividual = SubTotalIndividual + 85;
			
			printf("\nEl total a pagar por el paquete es: $85\n");
			
			printf("\n\nDeseas ordenar otro paquete? 1=SI 2=NO\n");
			scanf("%i",&Regreso);
			if(Regreso == 1)
				goto InicioMenuIndividual;
			else if(Regreso == 2)
				goto FinMenuIndividual;
		
		}break;
		case 9:{
			MegaBoxPolloKeTiras = MegaBoxPolloKeTiras+1;
			printf("\n\nHas elegido el MEGA Box Pollo & Ke-Tiras Jumbo");
			printf("\nEste paquete incluye:\n\t1 2 Piezas de pollo\n\t2 Ke-Tiras Jumbo\n\t1 bisquet\n\tPapas Medianas\n\t2 Complementos medianos\n\t1 Refresco mediano");
			printf("\n\nElige tu primer complemento:\n1)Arroz\n2)Pure\n3)Papas\n4)Elote\n5)Ensalada\n");/*Funcion complementos*/
			scanf("%i",&opcionComplemento);
			system("cls");
			printf("\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
			printf("\nTu paquete incluye:\n\t2 Piezas de pollo\n\t2 Ke-Tiras Jumbo\n\t1 bisquet\n\tPapas Medianas\n\t1 Refresco mediano\n");
			switch(opcionComplemento){
				case 1:{
					printf("\tArroz\n");
					printf("\nElige tu segundo complemento:\n1)Arroz\n2)Pure\n3)Papas\n4)Elote\n5)Ensalada\n");
					scanf("%i",&opcionComplemento);
					system("cls");
					printf("\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
					printf("\nTu paquete incluye:\n\t2 Piezas de pollo\n\t2 Ke-Tiras Jumbo\n\t1 bisquet\n\tPapas Medianas\n\t1 Refresco mediano\n\tArroz\n");
					switch(opcionComplemento){
						case 1:{
							printf("\tArroz\n");
							break;
						}
						case 2:{
							printf("\tPure\n");
							break;
						}
						case 3:{
							printf("\tPapas\n");
							break;
						}
						case 4:{
							printf("\tElote\n");
							break;
						}
						case 5:{
							printf("\tEnsalada\n");
							break;
						}
					}
					break;
				}
				case 2:{
					printf("\tPure\n");
					printf("\nElige tu segundo complemento:\n1)Arroz\n2)Pure\n3)Papas\n4)Elote\n5)Ensalada\n");
					scanf("%i",&opcionComplemento);
					system("cls");
					printf("\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
					printf("\nTu paquete incluye:\n\t2 Piezas de pollo\n\t2 Ke-Tiras Jumbo\n\t1 bisquet\n\tPapas Medianas\n\t1 Refresco mediano\n\tPure\n");
					switch(opcionComplemento){
						case 1:{
							printf("\tArroz\n");
							break;
						}
						case 2:{
							printf("\tPure\n");
							break;
						}
						case 3:{
							printf("\tPapas\n");
							break;
						}
						case 4:{
							printf("\tElote\n");
							break;
						}
						case 5:{
							printf("\tEnsalada\n");
							break;
						}
					}					
					break;
				}
				case 3:{
					printf("\tPapas\n");
					printf("\nElige tu segundo complemento:\n1)Arroz\n2)Pure\n3)Papas\n4)Elote\n5)Ensalada\n");
					scanf("%i",&opcionComplemento);
					system("cls");
					printf("\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
					printf("\nTu paquete incluye:\n\t2 Piezas de pollo\n\t2 Ke-Tiras Jumbo\n\t1 bisquet\n\tPapas Medianas\n\t1 Refresco mediano\n\tPapas\n");
					switch(opcionComplemento){
						case 1:{
							printf("\tArroz\n");
							break;
						}
						case 2:{
							printf("\tPure\n");
							break;
						}
						case 3:{
							printf("\tPapas\n");
							break;
						}
						case 4:{
							printf("\tElote\n");
							break;
						}
						case 5:{
							printf("\tEnsalada\n");
							break;
						}
					}					
					break;
				}
				case 4:{
					printf("\tElote\n");
					printf("\nElige tu segundo complemento:\n1)Arroz\n2)Pure\n3)Papas\n4)Elote\n5)Ensalada\n");
					scanf("%i",&opcionComplemento);
					system("cls");
					printf("\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
					printf("\nTu paquete incluye:\n\t2 Piezas de pollo\n\t2 Ke-Tiras Jumbo\n\t1 bisquet\n\tPapas Medianas\n\t1 Refresco mediano\n\tElote\n");
					switch(opcionComplemento){
						case 1:{
							printf("\tArroz\n");
							break;
						}
						case 2:{
							printf("\tPure\n");
							break;
						}
						case 3:{
							printf("\tPapas\n");
							break;
						}
						case 4:{
							printf("\tElote\n");
							break;
						}
						case 5:{
							printf("\tEnsalada\n");
							break;
						}
					}					
					break;
				}
				case 5:{
					printf("\tEnsalada\n");
					printf("\nElige tu segundo complemento:\n1)Arroz\n2)Pure\n3)Papas\n4)Elote\n5)Ensalada\n");
					scanf("%i",&opcionComplemento);
					system("cls");
					printf("\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
					printf("\nTu paquete incluye:\n\t2 Piezas de pollo\n\t2 Ke-Tiras Jumbo\n\t1 bisquet\n\tPapas Medianas\n\t1 Refresco mediano\n\tEnsalada\n");
					switch(opcionComplemento){
						case 1:{
							printf("\tArroz\n");
							break;
						}
						case 2:{
							printf("\tPure\n");
							break;
						}
						case 3:{
							printf("\tPapas\n");
							break;
						}
						case 4:{
							printf("\tElote\n");
							break;
						}
						case 5:{
							printf("\tEnsalada\n");
							break;
						}
					}					
					break;
				}

			}

			
			SaborPollo();
			
			SubTotalIndividual = SubTotalIndividual + 95;
			
			printf("\nEl total a pagar por el paquete es: $95\n");
			
			printf("\n\nDeseas ordenar otro paquete? 1=SI 2=NO\n");
			scanf("%i",&Regreso);
			if(Regreso == 1)
				goto InicioMenuIndividual;
			else if(Regreso == 2)
				goto FinMenuIndividual;
			break;
		}
		case 10:{
			MegaBoxKeTirasHamburguesa = MegaBoxKeTirasHamburguesa+1;
			printf("\n\nHas elegido el MEGA Box Ke-Tiras Jumbo & Hamburguesa");
			printf("\nEste paquete incluye:\n\t1 Big Krunch o Suprema\n\t1 Ke-Tira Jumbo\n\t1 Bisquet\n\tPapas Medianas\n\t1 Complemento mediano\n\t1 Refresco mediano");
			printf("\n\nQue hamburguesa deseas elegir?\n 1) Hamburguesa Big Crunch\n 2) Hamburguesa Suprema\n");
			scanf("%i",&Hamburguesa);
			if(Hamburguesa == 1){
				system("cls");
				printf("\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
				printf("\nTu paquete incluye:\n\t1 Hamburguesa Big Crunch\n\t1 Ke-Tira Jumbo\n\t1 Bisquet\n\tPapas Medianas\n\t1 Refresco mediano");
				printf("\n\nQue complemento deseas elegir?\n1)Arroz\n2)Pure\n3)Papas\n4)Elote\n5)Ensalada\n");/*Funcion complementos*/
				scanf("%i",&opcionComplemento);
				system("cls");
				printf("\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
				printf("\nTu paquete incluye:\n\t1 Hamburguesa Big Crunch\n\t1 Ke-Tira Jumbo\n\t1 Bisquet\n\tPapas Medianas\n\t1 Refresco mediano\n");
				switch(opcionComplemento){
					case 1:{
						printf("\tArroz\n");
						break;
					}
					case 2:{
						printf("\tPure\n");
						break;
					}
					case 3:{
						printf("\tPapas\n");
						break;
					}
					case 4:{
						printf("\tElote\n");
						break;
					}
					case 5:{
						printf("\tEnsalada\n");
						break;
					}
				}
			}
			else if(Hamburguesa == 2){
				system("cls");
				printf("\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
				printf("\nTu paquete incluye:\n\t1 Hamburguesa Suprema\n\t1 Ke-Tira Jumbo\n\t1 Bisquet\n\tPapas Medianas\n\t1 Refresco mediano");
				printf("\n\nQue complemento deseas elegir?\n1)Arroz\n2)Pure\n3)Papas\n4)Elote\n5)Ensalada\n");/*Funcion complementos*/
				scanf("%i",&opcionComplemento);
				system("cls");
				printf("\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
				printf("\nTu paquete incluye:\n\t1 Hamburguesa Suprema\n\t1 Ke-Tira Jumbo\n\t1 Bisquet\n\tPapas Medianas\n\t1 Refresco mediano\n");
				switch(opcionComplemento){
					case 1:{
						printf("\tArroz\n");
						break;
					}
					case 2:{
						printf("\tPure\n");
						break;
					}
					case 3:{
						printf("\tPapas\n");
						break;
					}
					case 4:{
						printf("\tElote\n");
						break;
					}
					case 5:{
						printf("\tEnsalada\n");
						break;
					}
				}
			}
			
			SaborPollo();
			
			SubTotalIndividual = SubTotalIndividual + 95;
			
			printf("\nEl total a pagar por el paquete es: $95\n");
			
			printf("\n\nDeseas ordenar otro paquete? 1=SI 2=NO\n");
			scanf("%i",&Regreso);
			if(Regreso == 1)
				goto InicioMenuIndividual;
			else if(Regreso == 2)
				goto FinMenuIndividual;
			break;
		}
		case 11:{
			MegaBoxHamburguesaPollo = MegaBoxHamburguesaPollo+1;
			printf("\n\nHas elegido el MEGA Box Hamburguesa & Pollo");
			printf("\nEste paquete incluye:\n\t1 Big Krunch o Suprema\n\t1 Pieza de pollo\n\t1 Bisquet\n\tPapas Medianas\n\t1 Complemento mediano\n\t1 Refresco mediano");
			printf("\n\nQue hamburguesa deseas elegir?\n 1) Hamburguesa Big Crunch\n 2) Hamburguesa Suprema\n");
			scanf("%i",&Hamburguesa);
			if(Hamburguesa == 1){
				system("cls");
				printf("\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
				printf("\nTu paquete incluye:\n\t1 Hamburguesa Big Crunch\n\t1 Pieza de pollo\n\t1 Bisquet\n\tPapas Medianas\n\t1 Refresco mediano");
				printf("\n\nQue complemento deseas elegir?\n1)Arroz\n2)Pure\n3)Papas\n4)Elote\n5)Ensalada\n");/*Funcion complementos*/
				scanf("%i",&opcionComplemento);
				system("cls");
				printf("\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
				printf("\nTu paquete incluye:\n\t1 Hamburguesa Big Crunch\n\t1 Pieza de pollo\n\t1 Bisquet\n\tPapas Medianas\n\t1 Refresco mediano\n");
				switch(opcionComplemento){
					case 1:{
						printf("\tArroz\n");
						break;
					}
					case 2:{
						printf("\tPure\n");
						break;
					}
					case 3:{
						printf("\tPapas\n");
						break;
					}
					case 4:{
						printf("\tElote\n");
						break;
					}
					case 5:{
						printf("\tEnsalada\n");
						break;
					}
				}
			}
			else if(Hamburguesa == 2){
				system("cls");
				printf("\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
				printf("\nTu paquete incluye:\n\t1 Hamburguesa Suprema\n\t1 Pieza de pollo\n\t1 Bisquet\n\tPapas Medianas\n\t1 Refresco mediano");
				printf("\n\nQue complemento deseas elegir?\n1)Arroz\n2)Pure\n3)Papas\n4)Elote\n5)Ensalada\n");/*Funcion complementos*/
				scanf("%i",&opcionComplemento);
				system("cls");
				printf("\n * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n");
				printf("\nTu paquete incluye:\n\t1 Hamburguesa Suprema\n\t1 Pieza de pollo\n\t1 Bisquet\n\tPapas Medianas\n\t1 Refresco mediano\n");
				switch(opcionComplemento){
					case 1:{
						printf("\tArroz\n");
						break;
					}
					case 2:{
						printf("\tPure\n");
						break;
					}
					case 3:{
						printf("\tPapas\n");
						break;
					}
					case 4:{
						printf("\tElote\n");
						break;
					}
					case 5:{
						printf("\tEnsalada\n");
						break;
					}
				}
			}
			
			SaborPollo();
			
			SubTotalIndividual = SubTotalIndividual + 95;
			
			printf("\nEl total a pagar por el paquete es: $95\n");
			
			printf("\n\nDeseas ordenar otro paquete? 1=SI 2=NO\n");
			scanf("%i",&Regreso);
			if(Regreso == 1)
				goto InicioMenuIndividual;
			else if(Regreso == 2)
				goto FinMenuIndividual;
			break;
		}
		case 12:{
			EnsaladaCesar=EnsaladaCesar+1;
			printf("\n\nHas elegido la EnsaladaCesar");
			printf("\nEste paquete incluye:\n\t1 Agua de 600ml");
			
			SubTotalIndividual = SubTotalIndividual +  69; 
			
			printf("\nEl total a pagar por el paquete es: $69\n");
			
			printf("\n\nDeseas ordenar otro paquete? 1=SI 2=NO\n");
			scanf("%i",&Regreso);
			if(Regreso == 1)
				goto InicioMenuIndividual;
			else if(Regreso == 2)
				goto FinMenuIndividual;
		
		}break;
		case 13:{
			PopCornMediano=PopCornMediano+1;
			printf("\n\nHas elegido la PopcornMediana");
			printf("\nEste paquete incluye:\n\tPapas Medianas\n\tRefresco Mediano");
			
			SubTotalIndividual = SubTotalIndividual +  59; 
			
			printf("\nEl total a pagar por el paquete es: $59\n");
			
			printf("\n\nDeseas ordenar otro paquete? 1=SI 2=NO\n");
			scanf("%i",&Regreso);
			if(Regreso == 1)
				goto InicioMenuIndividual;
			else if(Regreso == 2)
				goto FinMenuIndividual;
		
		}break;
		case 14:{
			PopCornGrande=PopCornGrande+1;
			printf("\n\nHas elegido la PopcornMediana");
			printf("\nEste paquete incluye:\n\tPapas Medianas\n\tRefresco Mediano");
			
			SubTotalIndividual = SubTotalIndividual +  69; 
			
			printf("\nEl total a pagar por el paquete es: $69\n");
			
			printf("\n\nDeseas ordenar otro paquete? 1=SI 2=NO\n");
			scanf("%i",&Regreso);
			if(Regreso == 1)
				goto InicioMenuIndividual;
			else if(Regreso == 2)
				goto FinMenuIndividual;
		
		}break;
	
	//Borrar Ordenes
		case -1:{
			if(KeBoxPollo>0){
			KeBoxPollo= KeBoxPollo-1;
			SubTotalIndividual = SubTotalIndividual - 49;
			}goto InicioMenuIndividual;
			}break;
		case -2:{
			if(KeBoxHamburguesa>0){
			KeBoxHamburguesa= KeBoxHamburguesa-1;
			SubTotalIndividual = SubTotalIndividual - 49;
			}goto InicioMenuIndividual;
			}break;
		case -3:{
			if(BoxPollo>0){
			BoxPollo= BoxPollo-1;
			SubTotalIndividual = SubTotalIndividual - 65;
			}goto InicioMenuIndividual;
			}break;
		case -4:{
			if(BoxKeTiras>0){
			BoxKeTiras= BoxKeTiras-1;
			SubTotalIndividual = SubTotalIndividual - 65;
			}goto InicioMenuIndividual;
			}break;
		case -5:{
			if(BoxHamburguesa>0){
			BoxHamburguesa= BoxHamburguesa-1;
			SubTotalIndividual = SubTotalIndividual - 65;
			}goto InicioMenuIndividual;
			}break;
		case -6:{
			if(BigBoxPollo>0){
			BigBoxPollo= BigBoxPollo-1;
			SubTotalIndividual = SubTotalIndividual - 85;
			}goto InicioMenuIndividual;
			}break;
		case -7:{
			if(BigBoxKeTiras>0){
			BigBoxKeTiras= BigBoxKeTiras-1;
			SubTotalIndividual = SubTotalIndividual - 85;
			}goto InicioMenuIndividual;
			}break;
		case -8:{
			if(BigBoxHamburguesa>0){
			BigBoxHamburguesa= BigBoxHamburguesa-1;
			SubTotalIndividual = SubTotalIndividual - 85;
			}goto InicioMenuIndividual;
			}break;
		case -9:{
			if(MegaBoxPolloKeTiras>0){
			MegaBoxPolloKeTiras= MegaBoxPolloKeTiras-1;
			SubTotalIndividual = SubTotalIndividual - 95;
			}goto InicioMenuIndividual;
			}break;
		case -10:{
			if(MegaBoxKeTirasHamburguesa>0){
			MegaBoxKeTirasHamburguesa= MegaBoxKeTirasHamburguesa-1;
			SubTotalIndividual = SubTotalIndividual - 95;
			}goto InicioMenuIndividual;
			}break;
		case -11:{
			if(MegaBoxHamburguesaPollo>0){
			MegaBoxHamburguesaPollo= MegaBoxHamburguesaPollo-1;
			SubTotalIndividual = SubTotalIndividual - 95;
			}goto InicioMenuIndividual;
			}break;
		case -12:{
			if(EnsaladaCesar>0){
			EnsaladaCesar= EnsaladaCesar-1;
			SubTotalIndividual = SubTotalIndividual - 69;
			}goto InicioMenuIndividual;
			}break;
		case -13:{
			if(PopCornMediano>0){
			PopCornMediano= PopCornMediano-1;
			SubTotalIndividual = SubTotalIndividual - 59;
			}goto InicioMenuIndividual;
			}break;
		case -14:{
			if(PopCornGrande>0){
			PopCornGrande= PopCornGrande-1;
			SubTotalIndividual = SubTotalIndividual - 69;
			}goto InicioMenuIndividual;
			}break;
				
		case 0:{
			goto FinMenuIndividual;
		}break;
		
		case 999:{
			int Complemento=0,Regreso=0,Hamburguesa=0,KeBoxPollo=0,KeBoxHamburguesa=0,BoxPollo=0,BoxKeTiras=0,BoxHamburguesa=0,BigBoxPollo=0,BigBoxKeTiras=0,BigBoxHamburguesa=0;
			int MegaBoxPolloKeTiras=0, MegaBoxKeTirasHamburguesa=0, MegaBoxHamburguesaPollo=0, EnsaladaCesar=0, PopCornMediano=0, PopCornGrande=0;
			goto InicioMenuIndividual;
		}break;
		
		default:{
			PolloEntradaInvalida();
			goto InicioMenuIndividual;
		}break;
		
	}
	
	FinMenuIndividual:
		printf(" ");}

Postres(){//OPCION 3
		
	InicioMenuPostres:
		
//Cambio de COLOR al menu		
	HANDLE  hConsole;
		    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 252);
	
	system("cls");
	printf("                 ___    __     __   _____   ___   ___    __  \n", 92, 92, 92);
	printf("                | _,%c  /__%c  /' _/ |_   _| | _ %c | __| /' _/ \n", 92, 92, 92);
	printf("                | v_/ | %c/ | `._`.   | |   | v / | _|  `._`. \n", 92);
	printf("                |_|    %c__/  |___/   |_|   |_|_%c |___| |___/ \n", 92, 92);
	printf("\n\tEscoge tus postres uno a uno eligiendo el numero indicado\n\n");
	printf("----------------------------------------------------------------------------\n");
	printf("          ~~~~~~~~~~~\n");
	printf("            KE CONO            1) Sencillo $9              2) Doble   $13\n          ~~~~~~~~~~~    \n");
	printf("----------------------------------------------------------------------------\n       ~~~~~~~~~~~~~~~~\n");
	printf("         $15 CADA UNO           \n       ~~~~~~~~~~~~~~~~\n\n");
	printf("  3) Sundae KFC chocolate      4) Sundae KFC caramelo      5) Sundae KFC fresa\n\n");
	printf("----------------------------------------------------------------------------\n       ~~~~~~~~~~~~~~~~\n");
	printf("         $17 CADA UNO          6) Sundae KFC oreo          7)Pay KFC \n       ~~~~~~~~~~~~~~~~\n");
	

	
	
	
		 if (KeConoSencillo!=0 or KeConoDoble!=0 or SundaeOreo!=0 or SundaeKFCChocolate!=0 or SundaeKFCCaramelo!=0 or SundaeKFCFresa!=0 or PayKFC!=0)
		 {
SetConsoleTextAttribute(hConsole, 207);
		    	printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *  \n\n",SubTotalPostres);
SetConsoleTextAttribute(hConsole, 252);
		       	if (KeConoSencillo!=0){
				printf("\t%i  Cono sencillo    ",KeConoSencillo);
				}
				if (KeConoDoble!=0){
				printf("\t%i  Cono doble     ",KeConoDoble);
				}
				if (SundaeOreo!=0){
				printf("\t%i  Sundae Oreo     ",SundaeOreo);
				}
				if (SundaeKFCChocolate!=0){
				printf("\n\t%i  Sundae chocolate    ",SundaeKFCChocolate);
				}
				if (SundaeKFCCaramelo!=0){
				printf("\t%i  Sundae caramelo    ",SundaeKFCCaramelo);
				}
				if (SundaeKFCFresa!=0){
				printf("\t%i  Sundae fresa     ",SundaeKFCFresa);
				}
				if (PayKFC!=0){
				printf("\n\t%i  PayKFC           ",PayKFC);
				}
				
//Cambio de color del SUBTOTAL		
SetConsoleTextAttribute(hConsole, 207);
				printf("\nSUBTOTAL: $%i\n\n",SubTotalPostres);
//Regreso al color original
SetConsoleTextAttribute(hConsole, 252);
		}
		
		scanf("%i",&OpcionPostres);
		
		switch(OpcionPostres) {
			
			case 0:
				{
				goto FinMenuPostres;
				}
				break;
			case 1:
				{	
				KeConoSencillo=KeConoSencillo+1;
				SubTotalPostres=SubTotalPostres+9;
						fflush(stdin);
				goto InicioMenuPostres;
				}
				break;
			
			case 2:
				{	
				KeConoDoble=KeConoDoble+1;
				SubTotalPostres=SubTotalPostres+13;
						fflush(stdin);
				goto InicioMenuPostres;
				}
				break;        
				
			case 3:
				{	
				SundaeKFCChocolate=SundaeKFCChocolate+1;
				SubTotalPostres=SubTotalPostres+15;
						fflush(stdin);
				goto InicioMenuPostres;
				}
				break;
			
			case 4:
				{	
				SundaeKFCCaramelo=SundaeKFCCaramelo+1;
				SubTotalPostres=SubTotalPostres+15;
						fflush(stdin);
				goto InicioMenuPostres;
				}
				break;     
			
			case 5:
				{	
				SundaeKFCFresa=SundaeKFCFresa+1;
				SubTotalPostres=SubTotalPostres+15;
						fflush(stdin);
				goto InicioMenuPostres;
				}
				break;   
			
			case 6:
				{	
				SundaeOreo=SundaeOreo+1;
				SubTotalPostres=SubTotalPostres+17;
						fflush(stdin);
				goto InicioMenuPostres;
				}
				break;
			case 7:
				{	
				PayKFC=PayKFC+1;
				SubTotalPostres=SubTotalPostres+17;
						fflush(stdin);
				goto InicioMenuPostres;
				}
				break;
			case 999:
				{KeConoSencillo=0, KeConoDoble=0, SundaeOreo=0, SundaeKFCChocolate=0, SundaeKFCCaramelo=0, SundaeKFCFresa=0, PayKFC=0;
				goto InicioMenuPostres;
				}
				break; 
			default:{
				PolloEntradaInvalida();
				goto InicioMenuPostres;
				}break;
				
			case -1:{
				if(KeConoSencillo>0){
					KeConoSencillo=KeConoSencillo-1;
					SubTotalPostres=SubTotalPostres-9;}
				goto InicioMenuPostres;
				}break;
			case -2:{
				if(KeConoDoble>0){
					KeConoDoble=KeConoDoble-1;
					SubTotalPostres=SubTotalPostres-13;}
				goto InicioMenuPostres;
				}break;
			case -3:{
				if(SundaeKFCChocolate>0){
					SundaeKFCChocolate=SundaeKFCChocolate-1;
					SubTotalPostres=SubTotalPostres-15;}
				goto InicioMenuPostres;
				}break;
			case -4:{
				if(SundaeKFCCaramelo>0){
					SundaeKFCCaramelo=SundaeKFCCaramelo-1;
					SubTotalPostres=SubTotalPostres-15;}
				goto InicioMenuPostres;
				}break;
			case -5:{
				if(SundaeKFCFresa>0){
					SundaeKFCFresa=SundaeKFCFresa-1;
					SubTotalPostres=SubTotalPostres-15;}
				goto InicioMenuPostres;
				}break;
			case -6:{
				if(SundaeOreo>0){
					SundaeOreo=SundaeOreo-1;
					SubTotalPostres=SubTotalPostres-17;}
				goto InicioMenuPostres;
				}break;
			case -7:{
				if(PayKFC>0){
					PayKFC=PayKFC-1;
					SubTotalPostres=SubTotalPostres-17;}
				goto InicioMenuPostres;
				break;}	
		FinMenuPostres:
			printf(" ");
	}
	}

Bebidas(){//OPCION 4
	
	InicioMenuBebidas:
		
	//Cambio de COLOR al menu		
	HANDLE  hConsole;
		    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 249);
	
	system("cls");
	
	printf("              __   ___   __   _   __     __     __ \n"); 
	printf("             |  %c | __| |  %c | | | _%c   /  %c  /' _/ \n", 92, 92, 92, 92); 
	printf("             | -< | _|  | -< | | | v | | /%c | `._`. \n", 92); 
	printf("             |__/ |___| |__/ |_| |__/  |_||_| |___/ \n\n"); 
	printf("    Escoge tus bebidas uno a uno eligiendo el numero indicado\n");
	printf("    Para eliminar una sola opcion presiona - y la opcion a ELIMINAR\n    Para VOLVER A EMPEZAR toda la orden presione 999\n\n       ~~~~~~~~~~~~~~~~\n");
	printf("         $16 CADA UNO           1) Pepsi chica        2) Pepsi light chica\n       ~~~~~~~~~~~~~~~~    \n");
	printf("  3) Manzanita sol chica        4) 7up chica          5) Lipton ice tea chica\n");
	printf("----------------------------------------------------------------------------\n       ~~~~~~~~~~~~~~~~\n");
	printf("         $19 CADA UNO           6) Agua fresh 600 ml\n       ~~~~~~~~~~~~~~~~\n");
	printf("----------------------------------------------------------------------------\n       ~~~~~~~~~~~~~~~~\n");
	printf("         $20 CADA UNO           7) Pepsi mediana      8) Pepsi light mediana\n       ~~~~~~~~~~~~~~~~\n");
	printf("  9) Manzanita sol mediana     10) 7up mediana       11) Lipton ice tea mediana\n\n");
	printf("----------------------------------------------------------------------------\n       ~~~~~~~~~~~~~~~~\n");
	printf("         $25 CADA UNO          12) Pepsi grande      13) Pepsi light grande\n       ~~~~~~~~~~~~~~~~\n");
	printf(" 14) Manzanita sol grande      15) 7up grande        16) Lipton ice tea grande\n\n");
	
	if ( PepsiChica!=0 or PepsiLightChica!=0 or ManzanitaSolChica!=0 or SevenUpChica!=0 or LiptonIceTeaChica!=0 or AguaFresh!=0 or PepsiMediana!=0 or PepsiLightMediana!=0 or
			ManzanitaSolMediana!=0 or SevenUpMediana!=0 or LiptonIceTeaMediana!=0 or PepsiGrande!=0 or PepsiLightGrande!=0 or ManzanitaSolGrande!=0 or SevenUpGrande!=0 or LiptonIceTeaGrande!=0 or
			Pepsi!=0 or PepsiLight!=0 or ManzanitaSol!=0 or SevenUpChica!=0 or SevenUpMediana!=0 or SevenUpGrande!=0 or LiptonIceTeaChica!=0 or LiptonIceTeaMediana!=0 or LiptonIceTeaChica!=0)
	{
SetConsoleTextAttribute(hConsole, 159);
	       printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * \n\n",SubTotalBebidas);
SetConsoleTextAttribute(hConsole, 249);
			if (PepsiChica!=0){
			printf("    %i  Pepsi ch          ",PepsiChica);
			}
			if (PepsiLightChica!=0){
			printf("    %i  pepsi light ch    ",PepsiLightChica);
			}
			if (ManzanitaSolChica!=0){
			printf("    %i  manzanita  ch     \n",ManzanitaSolChica);
			}
			if (SevenUpChica!=0){
			printf("    %i  7up ch            ",SevenUpChica);
			}
			if (LiptonIceTeaChica!=0){
			printf("    %i  lipton ice tea ch ",LiptonIceTeaChica);
			}
			if (AguaFresh!=0){
			printf("    %i  agua fresh        \n",AguaFresh);
			}
			if (PepsiMediana!=0){
			printf("    %i  pepsi med         ",PepsiMediana);
			}
			if (PepsiLightMediana!=0){
			printf("    %i  pepsi light med   ",PepsiLightMediana);
			}
			if (ManzanitaSolMediana!=0){
			printf("    %i  manzanita ch      \n",ManzanitaSolMediana);
			}
			if (SevenUpMediana!=0){
			printf("    %i  7up med           ",SevenUpMediana);
			}
			if (LiptonIceTeaMediana!=0){
			printf("    %i  lipton ice tea med",LiptonIceTeaMediana);
			}
			if (PepsiGrande!=0){
			printf("    %i  pepsi gr          \n",PepsiGrande);
			}
			if (PepsiLightGrande!=0){
			printf("    %i  pepsi light gr    ",PepsiLightGrande);
			}
			if (ManzanitaSolGrande!=0){
			printf("    %i  manzanita sol gr  ",ManzanitaSolGrande);
			}
			if (SevenUpGrande!=0){
			printf("    %i  7up grande        \n",SevenUpGrande);
			}
			if (LiptonIceTeaGrande!=0){
			printf("    %i  lipton ice tea gr \n",LiptonIceTeaGrande);
			}
			
//Cambio de color del SUBTOTAL
SetConsoleTextAttribute(hConsole, 159);	
			printf("\nSUBTOTAL: $%i\n\n",SubTotalBebidas);
//Regreso al color original
SetConsoleTextAttribute(hConsole, 249);
	}
		
	scanf("%i",&OpcionBebidas);
	
//Opciones del MENU BEBIDAS	
	switch(OpcionBebidas) {
		
		case 0:{	
			goto FinMenuBebidas;
			break;}	
		case 1:{	
			PepsiChica=PepsiChica+1;
			SubTotalBebidas=SubTotalBebidas+16;
					fflush(stdin);
			goto InicioMenuBebidas;
			break;}
		case 2:{	
			PepsiLightChica=PepsiLightChica+1;
			SubTotalBebidas=SubTotalBebidas+16;
					fflush(stdin);
			goto InicioMenuBebidas;
			break;}
		case 3:{	
			ManzanitaSolChica=ManzanitaSolChica+1;
			SubTotalBebidas=SubTotalBebidas+16;
					fflush(stdin);
			goto InicioMenuBebidas;
			break;}
		case 4:{	
			SevenUpChica=SevenUpChica+1;
			SubTotalBebidas=SubTotalBebidas+16;
					fflush(stdin);
			goto InicioMenuBebidas;
			break;}
		case 5:{	
			LiptonIceTeaChica=LiptonIceTeaChica+1;
			SubTotalBebidas=SubTotalBebidas+16;
					fflush(stdin);
			goto InicioMenuBebidas;
			break;}
		case 6:{	
			AguaFresh=AguaFresh+1;
			SubTotalBebidas=SubTotalBebidas+17;
					fflush(stdin);
			goto InicioMenuBebidas;
			break;}
		case 7:{	
			PepsiMediana=PepsiMediana+1;
			SubTotalBebidas=SubTotalBebidas+20;
					fflush(stdin);
			goto InicioMenuBebidas;
			break;}
		case 8:{	
			PepsiLightMediana=PepsiLightMediana+1;
			SubTotalBebidas=SubTotalBebidas+20;
					fflush(stdin);
			goto InicioMenuBebidas;
			break;}
		case 9:{	
			ManzanitaSolMediana=ManzanitaSolMediana+1;
			SubTotalBebidas=SubTotalBebidas+20;
					fflush(stdin);
			goto InicioMenuBebidas;
			break;}
		case 10:{	
			SevenUpMediana=SevenUpMediana+1;
			SubTotalBebidas=SubTotalBebidas+20;
					fflush(stdin);
			goto InicioMenuBebidas;
			break;}
		case 11:{	
			LiptonIceTeaMediana=LiptonIceTeaMediana+1;
			SubTotalBebidas=SubTotalBebidas+20;
					fflush(stdin);
			goto InicioMenuBebidas;
			break;}
		case 12:{	
			PepsiGrande=PepsiGrande+1;
			SubTotalBebidas=SubTotalBebidas+25;
					fflush(stdin);
			goto InicioMenuBebidas;
			break;}
		case 13:{	
			PepsiLightGrande=PepsiLightGrande+1;
			SubTotalBebidas=SubTotalBebidas+25;
					fflush(stdin);
			goto InicioMenuBebidas;
			break;}
		case 14:{	
			ManzanitaSolGrande=ManzanitaSolGrande+1;
			SubTotalBebidas=SubTotalBebidas+25;
					fflush(stdin);
			goto InicioMenuBebidas;
			break;}
		case 15:{	
			SevenUpGrande=SevenUpGrande+1;
			SubTotalBebidas=SubTotalBebidas+25;
					fflush(stdin);
			goto InicioMenuBebidas;
			break;}
		case 16:{	
			LiptonIceTeaGrande=LiptonIceTeaGrande+1;
			SubTotalBebidas=SubTotalBebidas+25;
					fflush(stdin);
			goto InicioMenuBebidas;
			break;}
		case 999:{
			PepsiChica = PepsiLightChica =  ManzanitaSolChica = SevenUpChica = LiptonIceTeaChica = 
			AguaFresh = PepsiMediana = PepsiLightMediana = ManzanitaSolMediana = SevenUpMediana = LiptonIceTeaMediana =
			PepsiGrande = PepsiLightGrande = ManzanitaSolGrande = SevenUpGrande = LiptonIceTeaGrande = SubTotalBebidas = 0; 
			
			goto InicioMenuBebidas;
			break;}   


	
		case -1:{
			if(PepsiChica>0){
				PepsiChica=PepsiChica-1;
				SubTotalBebidas=SubTotalBebidas-16;
			}goto InicioMenuBebidas;
			break;
		}
		case -2:{
			if(PepsiLightChica>0){
				PepsiLightChica=PepsiLightChica-1;
				SubTotalBebidas=SubTotalBebidas-16;
			}goto InicioMenuBebidas;
		}
		case -3:{
			if(ManzanitaSolChica>0){	
			ManzanitaSolChica=ManzanitaSolChica-1;
			SubTotalBebidas=SubTotalBebidas-16;
			goto InicioMenuBebidas;
			}
			break;
		}
		case -4:{
			if(SevenUpChica>0){
				SevenUpChica=SevenUpChica-1;
				SubTotalBebidas=SubTotalBebidas-16;
			}goto InicioMenuBebidas;
			break;
		}
		case -5:{	
			if (LiptonIceTeaChica>0){
			LiptonIceTeaChica=LiptonIceTeaChica-1;
			SubTotalBebidas=SubTotalBebidas-16;
			}
			goto InicioMenuBebidas;
			break;   
		}
		case -6:{	
			if(AguaFresh>0){
			AguaFresh=AguaFresh-1;
			SubTotalBebidas=SubTotalBebidas-17;
			}
			goto InicioMenuBebidas;
			break;  
		}
		case -7:{
			if (PepsiMediana){	
			PepsiMediana=PepsiMediana-1;
			SubTotalBebidas=SubTotalBebidas-20;
			}
			goto InicioMenuBebidas;
			break;  
		}
		case -8:{	
			if (PepsiLightMediana>0){
			PepsiLightMediana=PepsiLightMediana-1;
			SubTotalBebidas=SubTotalBebidas-20;
			}
			goto InicioMenuBebidas;
			break;
		}
		case -9:{	
			if(ManzanitaSolMediana>0){
			ManzanitaSolMediana=ManzanitaSolMediana-1;
			SubTotalBebidas=SubTotalBebidas-20;
			}
			goto InicioMenuBebidas;
			break;        
		}
		case -10:{	
			if(SevenUpMediana>0)
			{SevenUpMediana=SevenUpMediana-1;
			SubTotalBebidas=SubTotalBebidas-20;
			}
			goto InicioMenuBebidas;
			break;
		}
		case -11:{	
			if (LiptonIceTeaMediana){
			LiptonIceTeaMediana=LiptonIceTeaMediana-1;
			SubTotalBebidas=SubTotalBebidas-20;
			}
			goto InicioMenuBebidas;
			break;     
		}
		case -12:{	
			if(PepsiGrande>0){
			PepsiGrande=PepsiGrande-1;
			SubTotalBebidas=SubTotalBebidas-25;
			}goto InicioMenuBebidas;
			break;   
		}
		case -13:{	
			if(PepsiLightGrande>0){
			PepsiLightGrande=PepsiLightGrande-1;
			SubTotalBebidas=SubTotalBebidas-25;
			}
			goto InicioMenuBebidas;
			break;  
		}
		case -14:{	
			if(ManzanitaSolGrande>0){
			ManzanitaSolGrande=ManzanitaSolGrande-1;
			SubTotalBebidas=SubTotalBebidas-25;
			}
			goto InicioMenuBebidas;
			break;  
		}
		case -15:{	
			if (SevenUpGrande>0){
			SevenUpGrande=SevenUpGrande-1;
			SubTotalBebidas=SubTotalBebidas-25;
			}
			goto InicioMenuBebidas;
			break;  
		}
		case -16:{	
			if (LiptonIceTeaGrande>0){
			LiptonIceTeaGrande=LiptonIceTeaGrande-1;
			SubTotalBebidas=SubTotalBebidas-25;
			}
			goto InicioMenuBebidas;
			break;
		}
		default:{
				PolloEntradaInvalida();
				goto InicioMenuBebidas;
		}break;
}
		    FinMenuBebidas:
			printf(" ");   
	       }

ChikyPack(){//OPCION 5
	
	InicioMenuChikiPack:
		
	//Cambio de COLOR al menu		
	HANDLE  hConsole;
		    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 28);
	
	system("cls");
	
	printf("          ___  _  _   _   _  __ __   __    ___    __     ___  _  __ \n");
	printf("         / _/ | || | | | | |/ / %c `v' /   | _,%c  /  %c   / _/ | |/ / \n",92 ,92 ,92);
	printf("        | %c__ | >< | | | |   <   `. .'    | v_/ | /%c | | %c__ |   <  \n",92 ,92 ,92);
	printf("         %c__/ |_||_| |_| |_|%c_%c   |_|     |_|   |_||_|  %c__/ |_|%c_%c \n\n",92 ,92 ,92, 92, 92, 92);
	printf("   Para eliminar una sola opcion presiona la tecla '-' y la opcion a ELIMINAR.\n");
	printf("   Presiona 0 para regresar al Menu anterior\n");
	printf("   Para VOLVER A EMPEZAR toda la orden presione: 999.\n\n");
	printf("   Todos los paquetes Chiquipack incluyen Papas y Refresco Mediano\n\n ");
	printf("\t1) Pechuga Crugi \t3) Una Pieza\n\n");
	printf("\t2) Dos Ke Tiras       \t4) Popcorn Mediano\n\t\n\n\n");
	
	
	if ( PechugaCrugiChikipack!=0 or UnaPiezaChikipack!=0 or KeTirasChikipack!=0 or  PopCornMedianoChikipack!=0){
SetConsoleTextAttribute(hConsole, 201);
		printf("\n\t* * * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * \n\n",SubTotalChickipack);
SetConsoleTextAttribute(hConsole, 28);
			//Fila  1____________________________
			if (PechugaCrugiChikipack!=0){
			printf("        %i  Pechuga Crugi.     ",PechugaCrugiChikipack);
			}
			if (UnaPiezaChikipack!=0){
			printf("        %i  Una pieza          ",UnaPiezaChikipack);
			}
			//Fila  2____________________________
			if (KeTirasChikipack!=0){
			printf("\n        %i  2 Ketiras          ",KeTirasChikipack);
			}
			if (PopCornMedianoChikipack!=0){
			printf("        %i  Popcorn Mediano   ",PopCornMedianoChikipack);
			}
			
//Cambio de color del SUBTOTAL
SetConsoleTextAttribute(hConsole, 201);
			printf("\n\nSUBTOTAL: $%i\n\n",SubTotalChickipack);
//Regreso al color original del SUBTOTAL

SetConsoleTextAttribute(hConsole, 28);
	}
	
	scanf("%i",&OpcionChikyPack);
	
//Opciones del Menu ChickiPack
	switch(OpcionChikyPack){
		//****************PECHUGA CRUGI********************//
	case 1:
		{
		PechugaCrugiChikipack=PechugaCrugiChikipack+1;
		SubTotalChickipack=SubTotalChickipack+59;
		goto InicioMenuChikiPack;
		break;
		}
	//###############DOS KE TIRAS""""""""""""""""""""""""""""//
	case 2:{
		KeTirasChikipack=KeTirasChikipack+1;
		SubTotalChickipack=SubTotalChickipack+59;
		goto InicioMenuChikiPack;
		break;
		}
	case 3:{
		UnaPiezaChikipack=UnaPiezaChikipack+1;
		SubTotalChickipack=SubTotalChickipack+59;
		goto InicioMenuChikiPack;
		break;
		}
	//""""""""""""""""""POCORN MEDIANO"""""""""""
	case 4:{
		PopCornMedianoChikipack=PopCornMedianoChikipack+1;
		SubTotalChickipack=SubTotalChickipack+59;
		goto InicioMenuChikiPack;
		break;
	}
	case 0:{
		goto FinMenuChikiPack;
		break;
	}
	case 999:{
			PechugaCrugiChikipack=0, KeTirasChikipack=0, UnaPiezaChikipack=0, PopCornMedianoChikipack=0,SubTotalChickipack=0;
			goto InicioMenuChikiPack;
	}
	
	//QUITAR UNIDADES EN LA ORDEN""""
	case -1:{
		if (PechugaCrugiChikipack>=1){
		PechugaCrugiChikipack=PechugaCrugiChikipack-1;
		SubTotalChickipack=SubTotalChickipack-59;
		}
		goto InicioMenuChikiPack;
		break;
	}
	case -2:{
		if (KeTirasChikipack>=1){
		KeTirasChikipack=KeTirasChikipack-1;
		SubTotalChickipack=SubTotalChickipack-59;
		
		}goto InicioMenuChikiPack;
		break;
	}
	 //////////////PIEZA//////////////
	case -3:{
		if (UnaPiezaChikipack>=1){
		UnaPiezaChikipack=UnaPiezaChikipack-1;
		SubTotalChickipack=SubTotalChickipack-59;
		}
		goto InicioMenuChikiPack;
		break;		
	}
	///////////POPCORN MEDIANAS//////////////
	case -4:{
		if (PopCornMedianoChikipack>=1){
		PopCornMedianoChikipack=PopCornMedianoChikipack-1;
		SubTotalChickipack=SubTotalChickipack-59;
		}
		goto InicioMenuChikiPack;
		break;
		}
	default :{
			PolloEntradaInvalida();
			goto InicioMenuChikiPack;
		break;
		}
		
}

	FinMenuChikiPack:
		printf(" ");
		}

MenuALaCarta(){//OPCION 6
	
	InicioMenuALaCarta:
		
//Cambio de COLOR al menu				
	HANDLE  hConsole;
		    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 79);
	
	system("cls");

	printf("             __      _      __       ___   __    ___   _____    __  \n");
	printf("            /  %c    | |    /  %c     / _/  /  %c  | _ %c |_   _|  /  %c \n", 92, 92, 92, 92, 92);
	printf("           | /%c |   | |_  | /%c |   | %c__ | /%c | | v /   | |   | /%c | \n", 92, 92, 92, 92, 92, 92, 92);
	printf("           |_||_|   |___| |_||_|    %c__/ |_||_| |_|_%c   |_|   |_||_| \n\n", 92, 92, 92, 92);
	printf("    Para eliminar un producto - y la opcion a ELIMINAR\n    Para finalizar la orden presiona 0\n    Para VOLVER A EMPEZAR toda la orden presiona 999\n");
	printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	printf("       POLLO                      SNACKS                     SALSAS\n\n");
	printf("   1) 1 pieza    $20        4) Ke-Tira      $19       7) Salsa Spicy BBQ $6\n");
	printf("   2) 12 piezas  $179       5) Popcorn Med  $45       8) Salsa Jalapenio $6\n");
	printf("   3) 16 piezas  $219       6) Popcorn Gr   $50\n");
	printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	printf("         HAMBURGUESAS                     POSTRES\n\n");
	printf("   9)  Kruncher        $35    13) Ke-Cono Sencillo  $9  14) Doble  $13\n");
	printf("   10) Double Krunch   $45    15) Sundaes KFC Oreo  $17\n");
	printf("   11) Big Krunch      $59    16) Sundaes KFC       $15\n");
	printf("   12) Suprema         $59    17) Pay KFC           $17\n\n");
	printf("   18) Ensalada Cesar KFC $57\n");
	printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	printf("                                 BEBIDAS:\n\n");
	printf("   19) Refresco Chico $16     20) Refresco Med  $20    21) Refresco Gr  $25\n");
	printf("   22) Agua 600 ml    $19\n");
	printf(" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n");
	printf("                                  COMPLEMENTOS:\n\n");
	printf("   PAPAS FRITAS: 23) Chicas $20   24) Med  $23     25) Gr  $26     26) Fam  $47\n\n");
	printf("          ARROZ:                  27) Med  $17     28) Gr  $19     29) Fam  $32\n\n");
	printf("           PURE:                  30) Med  $17     31) Gr  $19     32) Fam  $32\n\n");
	printf("       ENSALADA:                  33) Med  $17     34) Gr  $19     35) Fam  $32\n\n");
	printf("                 36) Elote  $17   37) Bisquet  $17\n\n");

//Cambio de color de linea divisoria
SetConsoleTextAttribute(hConsole, 244);	
	printf("* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *");
//Regreso al color original del menu

SetConsoleTextAttribute(hConsole, 79);		
		if (UnaPiezaMC!=0 or DocePiezasMC!=0 or DieciseisPiezasMC!=0){
		printf("\n\n\tPOLLO:\n");
//Pollo____________________________
		if (UnaPiezaMC!=0){
			printf("    %i 1 Pieza(s)       ",UnaPiezaMC);
			}
			if (DocePiezasMC!=0){
			printf("    %i 12 Piezas        ",DocePiezasMC);
			}
			if (DieciseisPiezasMC!=0){
			printf("    %i 16 Piezas        ",DieciseisPiezasMC);
			}
		}
		
//Snacks____________________________
		if (KeTiraMC!=0 or PopcornMedMC!=0 or PopcornGrMC!=0){
			printf("\n\n\tSNACKS:\n");
			if (KeTiraMC!=0){
			printf("    %i  Ke-Tira         ",KeTiraMC);
			}
			if (PopcornMedMC!=0){
			printf("    %i  Popcorn Med     ",PopcornMedMC);
			}
			if (PopcornGrMC!=0){
			printf("    %i  Popcorn Gr      ",PopcornGrMC);
			}
		}
		
//Salsas____________________________
		if (SalsaSBBQMC!=0 or SalsaJalapenioMC!=0){
			printf("\n\n\tSALSAS:\n");		
			if (SalsaSBBQMC!=0){
			printf("    %i  Salsa Spicy BBQ ",SalsaSBBQMC);
			}
			if (SalsaJalapenioMC!=0){
			printf("    %i  Salsa Jalapenio ",SalsaJalapenioMC);
			}
		}
		
//Hamburguesas____________________________
		if (KruncherMC!=0 or DoubleKrunchMC!=0 or BigKrunchMC!=0 or SupremaMC!=0){
			printf("\n\n\tHAMBURGUESAS:\n");
			if (KruncherMC!=0){
			printf("    %i Kruncher         ",KruncherMC);
			}
			if (DoubleKrunchMC!=0){
			printf("    %i Double Krunch    ",DoubleKrunchMC);
			}
			if (BigKrunchMC!=0){
			printf("\n    %i Big Krunch       ",BigKrunchMC);
			}
			if (SupremaMC!=0){
			printf("    %i Suprema          ",SupremaMC);
			}
		}
		
//Postres______________________
		if (KeConoSenMC!=0 or KeConoDobMC!=0 or SundaeKFCOreoMC!=0 or SundaeKFCMC!=0 or PayKFCMC!=0){
			printf("\n\n\tPOSTRES:\n");
			if (KeConoSenMC!=0){
			printf("    %i Ke-Cono Sencillo ",KeConoSenMC);
			}
			if (KeConoDobMC!=0){
			printf("    %i Ke-Cono Doble    ",KeConoDobMC);
			}
			if (SundaeKFCOreoMC!=0){
			printf("\n    %i Sundae KFC Oreo  ",SundaeKFCOreoMC);
			}
			if (SundaeKFCMC!=0){
			printf("    %i Sundae KFC       ",SundaeKFCMC);
			}
			if (PayKFCMC!=0){
			printf("\n    %i Pay KFC        ",PayKFCMC);
			}
		}
		
//Ensalada_______________
		if(EnsaladaCesarMC!=0 ){
			printf("\n\n\tENSALADAS:\n");
			printf("    %i Ensalada(s) Cesar ",EnsaladaCesarMC);
		}
		
//Bebidas___________________
		if (RefrescoChMC!=0 or RefrescoMedMC!=0 or RefrescoGrMC!=0 or AguaMC!=0){
			printf("\n\n\tBEBIDAS:\n");
			if (RefrescoChMC!=0){
			printf("    %i Refresco(s) Chi  ",RefrescoChMC);
			}
			if (RefrescoMedMC!=0){
			printf("    %i Refresco(s) Med  ",RefrescoMedMC);
			}
			if (RefrescoGrMC!=0){
			printf("    %i Refresco(s) Gr   ",RefrescoGrMC);
			}
			if (AguaMC!=0){
			printf("\n    %i Agua(s) 600 ml ",AguaMC);
		}
		}
		
//Complementos______________________
		if(PapasChMC!=0 or PapasMedMC!=0 or PapasGrMC!=0 or PapasFamMC!=0 or ArrozMedMC!=0 or ArrozGrMC!=0 or ArrozFamMC!=0 or 
		PureMedMC!=0 or PureGrMC!=0 or PureFamMC!=0 or EnsaladaMedMC!=0 or EnsaladaGrMC!=0 or EnsaladaFamMC!=0 or EloteMC!=0 or BisquetMC!=0
		){
		printf("\n\n\tCOMPLEMENTOS:\n");
		if(PapasChMC!=0){
		printf("    %i Papas Chicas     ",PapasChMC);
		}
		if(PapasMedMC!=0){
		printf("    %i Papas Medianas   ",PapasMedMC);
		}
		if(PapasGrMC!=0){
		printf("\n    %i Papas Grandes    ",PapasGrMC);
		}
		if(PapasFamMC!=0){
		printf("    %i Papas Familiares  ",PapasFamMC);
		}
		if(ArrozMedMC!=0){
		printf("\n    %i Arroz Mediano    ",ArrozMedMC);
		}
		if(ArrozGrMC!=0){
		printf("    %i Arroz Grande     ",ArrozGrMC);
		}
		if(ArrozFamMC!=0){
		printf("    %i Arroz Familiar   ",ArrozFamMC);
		}
		if(PureMedMC!=0){
		printf("\n    %i Pure Mediano     ",PureMedMC);
		}
		if(PureGrMC!=0){
		printf("    %i Pure Grande      ",PureGrMC);
		}
		if(PureFamMC!=0){
		printf("    %i Pure Familiar    ",PureFamMC);
		}
		if(EnsaladaMedMC!=0){
		printf("\n    %i Ensalada Med     ",EnsaladaMedMC);
		}
		if(EnsaladaGrMC!=0){
		printf("    %i Ensalada Grande  ",EnsaladaGrMC);
		}
		if(EnsaladaFamMC!=0){
		printf("    %i Ensalada Fam     ",EnsaladaFamMC);
		}
		if(EloteMC!=0){
		printf("\n    %i Elote(s)         ",EloteMC);
		}
		if(BisquetMC!=0){
		printf("    %i Bisquet(s)       ",BisquetMC);
		}
		}
		
//Cambio de color del SUBTOTAL
SetConsoleTextAttribute(hConsole, 244);
	printf("\n\nSUBTOTAL: $%i\n",SubTotalMenuALaCarta);
SetConsoleTextAttribute(hConsole, 79);

scanf("%i",&OpcionMenuALaCarta);

//Selección de opciones del MENU A LA CARTA
switch(OpcionMenuALaCarta){
	case 1:{
		UnaPiezaMC = UnaPiezaMC + 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta + 20;
		SaborPollo();
		system("pause");
		goto InicioMenuALaCarta;
		break;
	}
	case 2:{
		DocePiezasMC = DocePiezasMC + 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta + 179;
		SaborPollo();
		system("pause");
		goto InicioMenuALaCarta;
		break;
	}
	case 3:{
		DieciseisPiezasMC = DieciseisPiezasMC + 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta + 219;
		SaborPollo();
		system("pause");
		goto InicioMenuALaCarta;
		break;
	}
	case 4:{
		KeTiraMC = KeTiraMC + 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta + 19;
		SaborPollo();
		system("pause");
		goto InicioMenuALaCarta;
		break;
	}
	case 5:{
		PopcornMedMC = PopcornMedMC + 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta + 45;
		goto InicioMenuALaCarta;
		break;
	}
	case 6:{
		PopcornGrMC = PopcornGrMC + 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta + 50;
		goto InicioMenuALaCarta;
		break;
	}
	case 7:{
		SalsaSBBQMC = SalsaSBBQMC + 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta + 6;
		goto InicioMenuALaCarta;
		break;
	}
	case 8:{
		SalsaJalapenioMC = SalsaJalapenioMC + 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta + 6;
		goto InicioMenuALaCarta;
		break;
	}
	case 9:{
		KruncherMC = KruncherMC + 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta + 35;
		SaborPollo();
		system("pause");		
		goto InicioMenuALaCarta;
		break;
	}
	case 10:{
		DoubleKrunchMC = DoubleKrunchMC + 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta + 45;
		SaborPollo();
		system("pause");		
		goto InicioMenuALaCarta;
		break;
	}
	case 11:{
		BigKrunchMC = BigKrunchMC + 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta + 59;
		SaborPollo();
		system("pause");		
		goto InicioMenuALaCarta;
		break;
	}
	case 12:{
		SupremaMC = SupremaMC + 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta + 59;
		SaborPollo();
		system("pause");		
		goto InicioMenuALaCarta;
		break;
	}
	case 13:{
		KeConoSenMC = KeConoSenMC + 1;
		SubTotalMenuALaCarta =SubTotalMenuALaCarta + 9;
		goto InicioMenuALaCarta;
		break;
	}
	case 14:{
		KeConoDobMC = KeConoDobMC + 1;
		SubTotalMenuALaCarta =SubTotalMenuALaCarta + 13;
		goto InicioMenuALaCarta;
		break;
	}
	case 15:{
		SundaeKFCOreoMC = SundaeKFCOreoMC + 1;
		SubTotalMenuALaCarta =SubTotalMenuALaCarta + 17;
		goto InicioMenuALaCarta;
		break;
	}
	case 16:{
		SundaeKFCMC = SundaeKFCMC + 1;
		SubTotalMenuALaCarta =SubTotalMenuALaCarta + 15;
		goto InicioMenuALaCarta;
		break;
	}
	case 17:{
		PayKFCMC = PayKFCMC + 1;
		SubTotalMenuALaCarta =SubTotalMenuALaCarta + 17;
		goto InicioMenuALaCarta;
		break;
	}
	case 18:{
		EnsaladaCesarMC = EnsaladaCesarMC + 1;
		SubTotalMenuALaCarta =SubTotalMenuALaCarta + 57;
		goto InicioMenuALaCarta;
		break;
	}
	case 19:{
		RefrescoChMC = RefrescoChMC + 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta + 16;
		goto InicioMenuALaCarta;
		break;
	}
	case 20:{
		RefrescoMedMC = RefrescoMedMC + 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta + 20;
		goto InicioMenuALaCarta;
		break;
	}
	case 21:{
		RefrescoGrMC = RefrescoGrMC + 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta + 25;
		goto InicioMenuALaCarta;
		break;
	}
	case 22:{
		AguaMC = AguaMC + 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta + 19;
		goto InicioMenuALaCarta;
		break;
	}
	case 23:{
		PapasChMC = PapasChMC + 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta + 20;
		goto InicioMenuALaCarta;
		break;
	}
	case 24:{
		PapasMedMC = PapasMedMC + 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta + 23;
		goto InicioMenuALaCarta;
		break;
	}
	case 25:{
		PapasGrMC = PapasGrMC + 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta + 26;
		goto InicioMenuALaCarta;
		break;
	}
	case 26:{
		PapasFamMC = PapasFamMC + 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta + 47;
		goto InicioMenuALaCarta;
		break;
	}
	case 27:{
		ArrozMedMC = ArrozMedMC + 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta + 17;
		goto InicioMenuALaCarta;
		break;
	}
	case 28:{
		ArrozGrMC = ArrozGrMC + 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta + 19;
		goto InicioMenuALaCarta;
		break;
	}
	case 29:{
		ArrozFamMC = ArrozFamMC + 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta + 32;
		goto InicioMenuALaCarta;
		break;
	}
	case 30:{
		PureMedMC = PureMedMC + 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta + 17;
		goto InicioMenuALaCarta;
		break;
	}
	case 31:{
		PureGrMC = PureGrMC + 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta + 19;
		goto InicioMenuALaCarta;
		break;
	}
	case 32:{
		PureFamMC = PureFamMC + 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta + 32;
		goto InicioMenuALaCarta;
		break;
	}
	case 33:{
		EnsaladaMedMC = EnsaladaMedMC + 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta + 17;
		goto InicioMenuALaCarta;
		break;
	}
	case 34:{
		EnsaladaGrMC = EnsaladaGrMC + 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta + 19;
		goto InicioMenuALaCarta;
		break;
	}
	case 35:{
		EnsaladaFamMC = EnsaladaFamMC + 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta + 32;
		goto InicioMenuALaCarta;
		break;
	}
	case 36:{
		EloteMC = EloteMC + 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta + 17;
		goto InicioMenuALaCarta;
		break;
	}
	case 37:{
		BisquetMC = BisquetMC + 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta + 17;
		goto InicioMenuALaCarta;
		break;
	}


	case -1:{
		if(UnaPiezaMC>0){
		UnaPiezaMC = UnaPiezaMC - 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta - 20;
		}goto InicioMenuALaCarta;
		break;
	}
	case -2:{
		if(DocePiezasMC>0){
		DocePiezasMC = DocePiezasMC - 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta - 179;
		}goto InicioMenuALaCarta;
		break;
	}
	case -3:{
		if(DieciseisPiezasMC>0){
		DieciseisPiezasMC = DieciseisPiezasMC - 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta - 219;
		}goto InicioMenuALaCarta;
		break;
	}
	case -4:{
		if(KeTiraMC>0){
		KeTiraMC = KeTiraMC - 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta - 19;
		}goto InicioMenuALaCarta;
		break;
	}
	case -5:{
		if(PopcornMedMC){
		PopcornMedMC = PopcornMedMC - 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta - 45;
		}goto InicioMenuALaCarta;	
		break;
	}
	case -6:{
		if(PopcornGrMC>0){
		PopcornGrMC = PopcornGrMC - 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta - 50;
		}goto InicioMenuALaCarta;
		break;
	}
	case -7:{
		if(SalsaSBBQMC>0){
		SalsaSBBQMC = SalsaSBBQMC - 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta - 6;
		}goto InicioMenuALaCarta;
		break;
	}
	case -8:{
		if(SalsaJalapenioMC>0){
		SalsaJalapenioMC = SalsaJalapenioMC - 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta - 6;
		}goto InicioMenuALaCarta;
		break;
	}
	case -9:{
		if(KruncherMC>0){
		KruncherMC = KruncherMC - 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta - 35;
		}goto InicioMenuALaCarta;
		break;
	}
	case -10:{
		if(DoubleKrunchMC>0){
		DoubleKrunchMC = DoubleKrunchMC - 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta - 45;
		}goto InicioMenuALaCarta;
		break;
	}
	case -11:{
		if(BigKrunchMC>0){
		BigKrunchMC = BigKrunchMC - 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta - 59;
		}goto InicioMenuALaCarta;
		break;
	}
	case -12:{
		if(SupremaMC>0){
		SupremaMC = SupremaMC - 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta - 59;
		}goto InicioMenuALaCarta;
		break;
	}
	case -13:{
		if(KeConoSenMC>0){
		KeConoSenMC = KeConoSenMC - 1;
		SubTotalMenuALaCarta =SubTotalMenuALaCarta - 9;
		}goto InicioMenuALaCarta;
		break;
	}
	case -14:{
		if(KeConoDobMC>0){
		KeConoDobMC = KeConoDobMC - 1;
		SubTotalMenuALaCarta =SubTotalMenuALaCarta - 13;
		}goto InicioMenuALaCarta;
		break;
	}
	case -15:{
		if(SundaeKFCOreoMC>0){
		SundaeKFCOreoMC = SundaeKFCOreoMC - 1;
		SubTotalMenuALaCarta =SubTotalMenuALaCarta - 17;
		}goto InicioMenuALaCarta;
		break;
	}
	case -16:{
		if(SundaeKFCMC>0){
		SundaeKFCMC = SundaeKFCMC - 1;
		SubTotalMenuALaCarta =SubTotalMenuALaCarta - 15;
		}goto InicioMenuALaCarta;
		break;
	}
	case -17:{
		if(PayKFCMC>0){
		PayKFCMC = PayKFCMC - 1;
		SubTotalMenuALaCarta =SubTotalMenuALaCarta - 17;
		}goto InicioMenuALaCarta;
		break;
	}
	case -18:{
		if(EnsaladaCesarMC>0){
		EnsaladaCesarMC = EnsaladaCesarMC - 1;
		SubTotalMenuALaCarta =SubTotalMenuALaCarta - 57;
		}goto InicioMenuALaCarta;
		break;
	}
	case -19:{
		if(RefrescoChMC>0){
		RefrescoChMC = RefrescoChMC - 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta - 16;
		}goto InicioMenuALaCarta;
		break;
	}
	case -20:{
		if(RefrescoMedMC>0){
		RefrescoMedMC = RefrescoMedMC - 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta - 20;
		}goto InicioMenuALaCarta;
		break;
	}
	case -21:{
		if(RefrescoGrMC>0){
		RefrescoGrMC = RefrescoGrMC - 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta - 25;
		}goto InicioMenuALaCarta;
		break;
	}
	case -22:{
		if(AguaMC>0){
		AguaMC = AguaMC - 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta - 19;
		}goto InicioMenuALaCarta;
		break;
	}
	case -23:{
		if(PapasChMC>0){
		PapasChMC = PapasChMC - 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta - 20;
		}goto InicioMenuALaCarta;
		break;
	}
	case -24:{
		if(PapasMedMC>0){
		PapasMedMC = PapasMedMC - 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta - 23;
		}goto InicioMenuALaCarta;
		break;
	}
	case -25:{
		if(PapasGrMC>0){
		PapasGrMC = PapasGrMC - 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta - 26;
		}goto InicioMenuALaCarta;
		break;
	}
	case -26:{
		if(PapasFamMC>0){
		PapasFamMC = PapasFamMC - 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta - 47;
		}goto InicioMenuALaCarta;
		break;
	}
	case -27:{
		if(ArrozMedMC>0){
		ArrozMedMC = ArrozMedMC - 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta - 17;
		}goto InicioMenuALaCarta;
		break;
	}
	case -28:{
		if(ArrozGrMC>0){
		ArrozGrMC = ArrozGrMC - 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta - 19;
		}goto InicioMenuALaCarta;
		break;
	}
	case -29:{
		if(ArrozFamMC>0){
		ArrozFamMC = ArrozFamMC - 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta - 32;
		}goto InicioMenuALaCarta;
		break;
	}
	case -30:{
		if(PureMedMC>0){
		PureMedMC = PureMedMC - 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta - 17;
		}goto InicioMenuALaCarta;
		break;
	}
	case -31:{
		if(PureGrMC>0){
		PureGrMC = PureGrMC - 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta - 19;
		}goto InicioMenuALaCarta;
		break;
	}
	case -32:{
		if(PureFamMC>0){
		PureFamMC = PureFamMC - 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta - 32;
		}goto InicioMenuALaCarta;
		break;
	}
	case -33:{
		if(EnsaladaMedMC>0){
		EnsaladaMedMC = EnsaladaMedMC - 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta - 17;
		}goto InicioMenuALaCarta;
		break;
	}
	case -34:{
		if(EnsaladaGrMC>0){
		EnsaladaGrMC = EnsaladaGrMC - 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta - 19;
		}goto InicioMenuALaCarta;
		break;
	}
	case -35:{
		if(EnsaladaFamMC>0){
		EnsaladaFamMC = EnsaladaFamMC - 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta - 32;
		}goto InicioMenuALaCarta;
		break;
	}
	case -36:{
		if(EloteMC>0){
		EloteMC = EloteMC - 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta - 17;
		}goto InicioMenuALaCarta;
		break;
	}
	case -37:{
		if(BisquetMC>0){
		BisquetMC = BisquetMC - 1;
		SubTotalMenuALaCarta = SubTotalMenuALaCarta - 17;
		}goto InicioMenuALaCarta;
		break;
	}

	case 999:{
		UnaPiezaMC = DocePiezasMC = DieciseisPiezasMC = KeTiraMC = PopcornMedMC = PopcornGrMC = SalsaSBBQMC = SalsaJalapenioMC = KruncherMC = DoubleKrunchMC = 
		BigKrunchMC = SupremaMC = KeConoSenMC = KeConoDobMC = SundaeKFCOreoMC = SundaeKFCMC = PayKFCMC = EnsaladaCesarMC = RefrescoChMC = RefrescoMedMC = 
		RefrescoGrMC = AguaMC = PapasChMC = PapasMedMC = PapasGrMC = PapasFamMC = ArrozMedMC = ArrozGrMC = ArrozFamMC = PureMedMC = PureGrMC = PureFamMC =
		EnsaladaMedMC = EnsaladaGrMC = EnsaladaFamMC = EloteMC = BisquetMC = SubTotalMenuALaCarta = 0;
		goto InicioMenuALaCarta;
		break;
	}
	case 0:{
		break;
	}
	default:{
		PolloEntradaInvalida();
		goto InicioMenuALaCarta;
		break;
	}
	break;
}
}	

Ticket(){
	
//TIEMPO Y FECHA
		time_t mytime;
		mytime = time(NULL);
	
//APUNTADOR A ARCHIVO
		FILE *Ticket;

//VERIFICACION CON IMPRESION DE PRODUCTOS SELECCIONADOS

// 1) FAMILIARES				
		if (DocePiezas!=0 or DieciseisPiezas!=0 or PureFamATP!=0 or EnsaladaFamATP!=0 or ArrozFamATP!=0 or 
			PopcornMedATP!=0 or PapasFamATP!=0 or CuatroBisquetsATP!=0 or KeTirasJumboATP!=0 or CompFamATP!=0 or CuatroRefMedATP!=0 or 
			OchoPiezas!=0 or DiezPiezas!=0 or CatorcePiezas!=0 or PaqueteMix!=0 or
// 2) INDIVIDUAL
			MegaBoxPolloKeTiras!=0 or  MegaBoxKeTirasHamburguesa!=0 or  MegaBoxHamburguesaPollo!=0 or  EnsaladaCesar!=0 or  PopCornMediano!=0 or  PopCornGrande!=0 or 
			KeBoxPollo!=0 or KeBoxHamburguesa!=0 or BoxPollo!=0 or BoxKeTiras!=0 or BoxHamburguesa!=0 or BigBoxPollo!=0 or BigBoxKeTiras!=0 or BigBoxHamburguesa!=0 or	
// 3) POSTRES
			KeConoSencillo!=0 or  KeConoDoble!=0 or  SundaeOreo!=0 or  SundaeKFCChocolate!=0 or  SundaeKFCCaramelo!=0 or  SundaeKFCFresa!=0 or  PayKFC!=0 or
			
// 4) BEBIDAS
			PepsiChica!=0 or  PepsiLightChica!=0 or  ManzanitaSolChica!=0 or  SevenUpChica!=0 or  LiptonIceTeaChica!=0 or  AguaFresh!=0 or  PepsiMediana!=0 or  PepsiLightMediana!=0 or 
			ManzanitaSolMediana!=0 or  SevenUpMediana!=0 or  LiptonIceTeaMediana!=0 or  PepsiGrande!=0 or  PepsiLightGrande!=0 or  ManzanitaSolGrande!=0 or  SevenUpGrande!=0 or  LiptonIceTeaGrande!=0 or 
			Pepsi!=0 or  PepsiLight!=0 or  ManzanitaSol!=0 or  SevenUp!=0 or  Lipton!=0 or			
// 5) CHIKIPACK
			PechugaCrugiChikipack!=0 or  UnaPiezaChikipack!=0 or KeTirasChikipack!=0 or  PopCornMedianoChikipack!=0 or			
// 6) MENU A LA CARTA
			UnaPiezaMC!=0 or DocePiezasMC!=0 or DieciseisPiezasMC!=0 or KeTiraMC!=0 or PopcornMedMC!=0 or PopcornGrMC!=0 or SalsaSBBQMC!=0 or SalsaJalapenioMC!=0 or 
			KruncherMC!=0 or DoubleKrunchMC!=0 or BigKrunchMC!=0 or SupremaMC!=0 or KeConoSenMC!=0 or KeConoDobMC!=0 or SundaeKFCOreoMC!=0 or SundaeKFCMC!=0 or PayKFCMC!=0 or EnsaladaCesarMC!=0 or 
			RefrescoChMC!=0 or RefrescoMedMC!=0 or RefrescoGrMC!=0 or AguaMC!=0 or PapasChMC!=0 or PapasMedMC!=0 or PapasGrMC!=0 or PapasFamMC!=0 or ArrozMedMC!=0 or ArrozGrMC!=0 or ArrozFamMC!=0 or 
			PureMedMC!=0 or PureGrMC!=0 or PureFamMC!=0 or EnsaladaMedMC!=0 or EnsaladaGrMC!=0 or EnsaladaFamMC!=0 or EloteMC!=0 or BisquetMC!=0)
		{		

	Ticket = fopen("Ticket_KFC.xls","w");

	fprintf(Ticket,"\n\tPREMIUM RESTAURANT BRANOS SDE RL DE CV");
	fprintf(Ticket,"\n\tPASEO DE TAMARINDOS 400 PISO 1");
	fprintf(Ticket,"\n\tBOSQUES DE LAS LOMAS, CUAJIMALPA");
	fprintf(Ticket,"\n\tMEXICO, D.F. 05120");
	fprintf(Ticket,"\nRFC PRB100802H  PERSONA MORAL REGIMEN GENERAL DE LEY");
	fprintf(Ticket,"\n\t\tGERENTE: GEREN\n\n");
	
			if (DocePiezas!=0 or DieciseisPiezas!=0 or PureFamATP!=0 or EnsaladaFamATP!=0 or PapasFamATP!=0 
			    or PopcornMedATP!=0 or ArrozFamATP!=0 or CuatroBisquetsATP!=0 or KeTirasJumboATP!=0 or CompFamATP!=0 or CuatroRefMedATP!=0){
	
						fprintf(Ticket,"\t------------------------------------------------\n\tArma tu Paquete:\n\t------------------------------------------------\n");
							if (DocePiezas!=0){
								fprintf(Ticket,"%i\tPiezas\t\t$%i.00\n",DocePiezas*12,DocePiezas*179);
							}
							if (DieciseisPiezas!=0){
								fprintf(Ticket,"%i\tPiezas\t\t$%i.00\n",DieciseisPiezas*16,DieciseisPiezas*219);
							}
							if (PureFamATP!=0){
								fprintf(Ticket,"%i\tPure Familiar\t\t$%i.00\n",PureFamATP,PureFamATP*29);
							}
							if (EnsaladaFamATP!=0){
								fprintf(Ticket,"%i\tEnsalada Familiar\t\t$%i.00\n",EnsaladaFamATP,EnsaladaFamATP*29);
							}
							if (ArrozFamATP!=0){
								fprintf(Ticket,"%i\tArroz Familiar\t\t$%i.00\n",ArrozFamATP,ArrozFamATP*29);
							}
							if (PopcornMedATP!=0){
								fprintf(Ticket,"%i\tPopcorn Mediano\t\t$%i.00\n",PopcornMedATP,PopcornMedATP*39);
							}
							if (PapasFamATP!=0){
								fprintf(Ticket,"%i\tPapas Familiares\t\t$%i.00\n",PapasFamATP,PapasFamATP*39);
							}
							if (CuatroBisquetsATP!=0){
								fprintf(Ticket,"%i\tBisquets\t\t$%i.00\n",CuatroBisquetsATP*4,CuatroBisquetsATP*39);
							}
							if (KeTirasJumboATP!=0){
								fprintf(Ticket,"%i\tKeTiras Jumbo\t\t$%i.00\n",KeTirasJumboATP,KeTirasJumboATP*49);
							}
							if (CompFamATP!=0){
								fprintf(Ticket,"%i\tComplementos Familiares\t\t$%i.00\n",CompFamATP*2,CompFamATP*49);
							}
							if (CuatroRefMedATP!=0){
							    fprintf(Ticket,"%i\tRefrescos Medianos\t\t$%i.00\n",CuatroRefMedATP*4,CuatroRefMedATP*49);
						    }
						fprintf(Ticket,"\t------------------------------------------------\n");
						}			
	
			if (OchoPiezas!=0 or DiezPiezas!=0 or CatorcePiezas!=0 or PaqueteMix!=0){
				
					if (OchoPiezas!=0){
						fprintf(Ticket,"%i\tPaquete 8 Piezas\t\t$%i.00\n",OchoPiezas,OchoPiezas*169);
						}
					if (DiezPiezas!=0){
						fprintf(Ticket,"%i\tPaquete 10 Piezas\t\t$%i.00\n",DiezPiezas,DiezPiezas*219);
					}
					if (CatorcePiezas!=0){
						fprintf(Ticket,"%i\tPaquete 14 Piezas\t\t$%i.00\n",CatorcePiezas,CatorcePiezas*289);
					}
					if (PaqueteMix!=0){
						fprintf(Ticket,"%i\tPaquete Mix\t\t$%i.00\n",PaqueteMix,PaqueteMix*199);
					}
				}
	
			if (KeBoxPollo!=0 or KeBoxHamburguesa!=0 or BoxPollo!=0 or BoxKeTiras!=0 or BoxHamburguesa!=0 
				or BigBoxPollo!=0 or BigBoxKeTiras!=0 or BigBoxHamburguesa!=0 or MegaBoxPolloKeTiras!=0 
			    or MegaBoxKeTirasHamburguesa!=0 or  MegaBoxHamburguesaPollo!=0 or EnsaladaCesar!=0 or PopCornMediano!=0 or  PopCornGrande!=0 ){
		
					if (KeBoxPollo!=0){
						fprintf(Ticket,"%i\tKeBox Pollo\t\t$%i.00\n",KeBoxPollo,KeBoxPollo*49);
					}
					if (KeBoxHamburguesa!=0){
						fprintf(Ticket,"%i\tKeBox Hamburguesa\t\t$%i.00\n",KeBoxHamburguesa,KeBoxHamburguesa*49);
					}
					if (BoxPollo!=0){
						fprintf(Ticket,"%i\tBox Pollo\t\t$%i.00\n",BoxPollo,BoxPollo*65);
					}
					if (BoxKeTiras!=0){
						fprintf(Ticket,"%i\tBox Ke-Tiras\t\t$%i.00\n",BoxKeTiras,BoxKeTiras*65);
					}
					if (BoxHamburguesa!=0){
						fprintf(Ticket,"%i\tBox Hamburguesa\t\t$%i.00\n",BoxHamburguesa,BoxHamburguesa*65);
					}
					if (BigBoxPollo!=0){
						fprintf(Ticket,"%i\tBigBox Pollo\t\t$%i.00\n",BigBoxPollo,BigBoxPollo*85);
					}
					if (BigBoxKeTiras!=0){
						fprintf(Ticket,"%i\tBigBox Ke-Tiras\t\t$%i.00\n",BigBoxKeTiras,BigBoxKeTiras*85);
					}
					if (BigBoxHamburguesa!=0){
						fprintf(Ticket,"%i\tBigBox Hamburguesa\t\t$%i.00\n",BigBoxHamburguesa,BigBoxHamburguesa*85);
					}
					if (MegaBoxPolloKeTiras!=0){
						fprintf(Ticket,"%i\tMB Pollo/Ke-Tiras\t\t$%i.00\n",MegaBoxPolloKeTiras,MegaBoxPolloKeTiras*95);
					}
					if (MegaBoxKeTirasHamburguesa!=0){
						fprintf(Ticket,"%i\tMB Ke-Tiras/Hamburguesa\t\t$%i.00\n",MegaBoxKeTirasHamburguesa,MegaBoxKeTirasHamburguesa*95);
					}
					if (MegaBoxHamburguesaPollo!=0){
					    fprintf(Ticket,"%i\tMB Hamburguesa/Pollo\t\t$%i.00\n",MegaBoxHamburguesaPollo,MegaBoxHamburguesaPollo*95);
				    }
					if (EnsaladaCesar!=0){
						fprintf(Ticket,"%i\tEnsalada Cesar\t\t$%i.00\n",EnsaladaCesar,EnsaladaCesar*69);
					}
					if (PopCornMediano!=0){
						fprintf(Ticket,"%i\tPopCorn Mediano\t\t$%i.00\n",PopCornMediano,PopCornMediano*59);
					}
					if (PopCornGrande!=0){
						fprintf(Ticket,"%i\tPopCorn Grande\t\t$%i.00\n",PopCornGrande,PopCornGrande*69);
					}
			}		
				
			if (PechugaCrugiChikipack!=0 or UnaPiezaChikipack!=0 or KeTirasChikipack!=0 or  PopCornMedianoChikipack!=0){
							
					if (PechugaCrugiChikipack!=0){
						fprintf(Ticket,"%i\tPechuga Crugi CP\t\t$%i.00\n",PechugaCrugiChikipack,PechugaCrugiChikipack*59);
					}
					if (KeTirasChikipack!=0){
						fprintf(Ticket,"%i\tKeTiras CP\t\t$%i.00\n",KeTirasChikipack,KeTirasChikipack*59);
					}
					if (UnaPiezaChikipack!=0){
						fprintf(Ticket,"%i\tUna Pieza CP\t\t$%i.00\n",UnaPiezaChikipack,UnaPiezaChikipack*59);
					}
					if (PopCornMedianoChikipack!=0){
						fprintf(Ticket,"%i\tPopCorn Med CP\t\t$%i.00\n",PopCornMedianoChikipack,PopCornMedianoChikipack*59);
					}
				}
							
			if (PepsiChica!=0 or  PepsiLightChica!=0 or ManzanitaSolChica!=0 or  SevenUpChica!=0 or  LiptonIceTeaChica!=0 or  AguaFresh!=0 or  
			PepsiMediana!=0 or  PepsiLightMediana!=0 or ManzanitaSolMediana!=0 or  SevenUpMediana!=0 or  LiptonIceTeaMediana!=0 or 
			PepsiGrande!=0 or  PepsiLightGrande!=0 or  ManzanitaSolGrande!=0 or  SevenUpGrande!=0 or  LiptonIceTeaGrande!=0){
						
					if (PepsiChica!=0){
						fprintf(Ticket,"%i\tPepsi Chica\t\t$%i.00\n",PepsiChica,PepsiChica*16);
					}
					if (PepsiLightChica!=0){
						fprintf(Ticket,"%i\tPepsi Light Chica\t\t$%i.00\n",PepsiLightChica,PepsiLightChica*16);
					}
					if (ManzanitaSolChica!=0){
						fprintf(Ticket,"%i\tManzanita Sol Chica\t\t$%i.00\n",ManzanitaSolChica,ManzanitaSolChica*16);
					}
					if (SevenUpChica!=0){
						fprintf(Ticket,"%i\tSevenUp Chica\t\t$%i.00\n",SevenUpChica,SevenUpChica*16);
					}
					if (LiptonIceTeaChica!=0){
						fprintf(Ticket,"%i\tLipton Ice Tea Chico\t\t$%i.00\n",LiptonIceTeaChica,LiptonIceTeaChica*16);
					}
					if (AguaFresh!=0){
						fprintf(Ticket,"%i\tAguaFresh\t\t$%i.00\n",AguaFresh,AguaFresh*17);
					}
					if (PepsiMediana!=0){
						fprintf(Ticket,"%i\tPepsi Mediana\t\t$%i.00\n",PepsiMediana,PepsiMediana*20);
					}
					if (PepsiLightMediana!=0){
						fprintf(Ticket,"%i\tPepsi Light Mediana\t\t$%i.00\n",PepsiLightMediana,PepsiLightMediana*20);
					}
					if (ManzanitaSolMediana!=0){
						fprintf(Ticket,"%i\tManzanita Mediana\t\t$%i.00\n",ManzanitaSolMediana,ManzanitaSolMediana*20);
					}
					if (SevenUpMediana!=0){
						fprintf(Ticket,"%i\tSevenUp Med\t\t$%i.00\n",SevenUpMediana,SevenUpMediana*20);
					}
					if (LiptonIceTeaMediana!=0){
						fprintf(Ticket,"%i\tLipton Mediano\t\t$%i.00\n",LiptonIceTeaMediana,LiptonIceTeaMediana*20);
					}
					if (PepsiGrande!=0){
						fprintf(Ticket,"%i\tPepsi Grande\t\t$%i.00\n",PepsiGrande,PepsiGrande*25);
					}
					if (PepsiLightGrande!=0){
						fprintf(Ticket,"%i\tPepsi Light Grande\t\t$%i.00\n",PepsiLightGrande,PepsiLightGrande*25);
					}
					if (ManzanitaSolGrande!=0){
						fprintf(Ticket,"%i\tManzanita Grande\t\t$%i.00\n",ManzanitaSolGrande,ManzanitaSolGrande*25);
					}
					if (SevenUpGrande!=0){
						fprintf(Ticket,"%i\tSevenUp Grande\t\t$%i.00\n",SevenUpGrande,SevenUpGrande*25);
					}
					if (LiptonIceTeaGrande!=0){
						fprintf(Ticket,"%i\tLipton Grande\t\t$%i.00\n",LiptonIceTeaGrande,LiptonIceTeaGrande*25);	
					}
			}		
						
			if (KeConoSencillo!=0 or SundaeOreo!=0 or SundaeKFCChocolate!=0 or SundaeKFCCaramelo!=0 or SundaeKFCFresa!=0 or PayKFC!=0){
					
				/*printf ("\n\n               ***************    POSTRES    ***************\n");
				printf ("     **********************************************************************\n");*/
		
					if (KeConoSencillo!=0 or KeConoSenMC!=0){
						fprintf(Ticket,"%i\tKe Cono Sencillo\t\t$%i.00\n",KeConoSencillo+KeConoSenMC,(KeConoSencillo+KeConoSenMC)*9);
					}
					if (KeConoDoble!=0 or KeConoDobMC!=0){
						fprintf(Ticket,"%i\tKeCono Doble\t\t$%i.00\n",KeConoDoble+KeConoDobMC,(KeConoDoble+KeConoDobMC)*13);
					}
					if (SundaeOreo!=0 or SundaeKFCOreoMC!=0){
						fprintf(Ticket,"%i\tSundae Oreo\t\t$%i.00\n",SundaeOreo+SundaeKFCOreoMC,(SundaeOreo+SundaeKFCOreoMC)*17);
					}
					if (SundaeKFCChocolate!=0 or SundaeKFCMC!=0){
						fprintf(Ticket,"%i\tSundae KFC Chocolate\t\t$%i.00\n",SundaeKFCChocolate+SundaeKFCMC,(SundaeKFCChocolate+SundaeKFCMC)*15);
					}
					if (SundaeKFCCaramelo!=0){
						fprintf(Ticket,"%i\tSundae KFC Caramelo\t\t$%i.00\n",SundaeKFCCaramelo,SundaeKFCCaramelo*15);
					}
					if (SundaeKFCFresa!=0){
						fprintf(Ticket,"%i\tSundae KFC Fresa\t\t$%i.00\n",SundaeKFCFresa,SundaeKFCFresa*15);
					}
					if (PayKFC!=0 or PayKFCMC!=0){
						fprintf(Ticket,"%i\tPay KFC\t\t$%i.00\n",PayKFC+PayKFCMC,(PayKFC+PayKFCMC)*17);
					}
				}			
	
			if (UnaPiezaMC!=0 or DocePiezasMC!=0 or DieciseisPiezasMC!=0 or KeTiraMC!=0 or PopcornMedMC!=0 or SalsaSBBQMC!=0 or SalsaJalapenioMC!=0 
				or PopcornGrMC!=0 or KruncherMC!=0 or DoubleKrunchMC!=0 or BigKrunchMC!=0 or SupremaMC!=0
				or KeConoSenMC!=0 or KeConoDobMC!=0 or SundaeKFCOreoMC!=0 or SundaeKFCMC!=0 or PayKFCMC!=0
				or PapasChMC!=0 or PapasMedMC!=0 or PapasGrMC!=0 or PapasFamMC!=0 or ArrozMedMC!=0 or ArrozGrMC!=0 or ArrozFamMC!=0 
				or PureMedMC!=0 or PureGrMC!=0 or PureFamMC!=0 or EnsaladaMedMC!=0 or EnsaladaGrMC!=0 or EnsaladaFamMC!=0 or EloteMC!=0 or BisquetMC!=0
				or EnsaladaCesarMC!=0 or RefrescoChMC!=0 or RefrescoMedMC!=0 or RefrescoGrMC!=0 or AguaMC!=0){
				  
				/*printf ("\n\n            ***************    MENU A LA CARTA    ***************\n");
				printf ("     **********************************************************************\n");*/
					
					if (UnaPiezaMC!=0){
						fprintf(Ticket,"%i\tPieza(s)\t\t$%i.00\n",UnaPiezaMC,UnaPiezaMC*20);
					}
					if (DocePiezasMC!=0){
						fprintf(Ticket,"%i\tPiezas\t\t$%i.00\n",DocePiezasMC*12,DocePiezasMC*179);
					}
					if (DieciseisPiezasMC!=0){
						fprintf(Ticket,"%i\t16 Piezas\t\t$%i.00\n",DieciseisPiezasMC*16,DieciseisPiezasMC*219);
					}
					if (KeTiraMC!=0){
						fprintf(Ticket,"%i\tKe-Tira\t\t$%i.00\n",KeTiraMC,KeTiraMC*19);
					}
					if (PopcornMedMC!=0){
						fprintf(Ticket,"%i\tPopcorn Mediana\t\t$%i.00\n",PopcornMedMC,PopcornMedMC*45);
					}
					if (PopcornGrMC!=0){
						fprintf(Ticket,"%i\tPopcorn Grande\t\t$%i.00\n",PopcornGrMC,PopcornGrMC*50);
					}
					if (SalsaSBBQMC!=0){
						fprintf(Ticket,"%i\tSalsa Spicy BBQ\t\t$%i.00\n",SalsaSBBQMC,SalsaSBBQMC*6);
					}
					if (SalsaJalapenioMC!=0){
						fprintf(Ticket,"%i\tSalsa Jalapenio\t\t$%i.00\n",SalsaJalapenioMC,SalsaJalapenioMC*6);
					}
					if (KruncherMC!=0){
						fprintf(Ticket,"%i\tKruncher\t\t$%i.00\n",KruncherMC,KruncherMC*35);
					}
					if (DoubleKrunchMC!=0){
						fprintf(Ticket,"%i\tDouble Krunch\t\t$%i.00\n",DoubleKrunchMC,DoubleKrunchMC*45);
					}
					if (BigKrunchMC!=0){
					    fprintf(Ticket,"%i\tBig Krunch\t\t$%i.00\n",BigKrunchMC,BigKrunchMC*59);
				    }
					if (SupremaMC!=0){
						fprintf(Ticket,"%i\tSuprema\t\t$%i.00\n",SupremaMC,SupremaMC*59);
					}
					if (EnsaladaCesarMC!=0){
						fprintf(Ticket,"%i\tEnsalada Cesar KFC\t\t$%i.00\n",EnsaladaCesarMC,EnsaladaCesarMC*57);
					}
					if (PopCornGrande!=0){
						fprintf(Ticket,"%i\tPopCornGrande\t\t$%i.00\n",PopCornGrande,PopCornGrande*50);
					}
					if (PapasChMC!=0){
						fprintf(Ticket,"%i\tPapas Chicas\t\t$%i.00\n",PapasChMC,PapasChMC*20);
					}
					if (PapasMedMC!=0){
						fprintf(Ticket,"%i\tPapas Medianas\t\t$%i.00\n",PapasMedMC,PapasMedMC*23);
					}
					if (PapasGrMC!=0){
						fprintf(Ticket,"%i\tPapas Grandes\t\t$%i.00\n",PapasGrMC,PapasGrMC*26);
					}
					if (PapasFamMC!=0){
						fprintf(Ticket,"%i\tPapas Familiares\t\t$%i.00\n",PapasFamMC,PapasFamMC*47);
					}
					if (ArrozMedMC!=0){
						fprintf(Ticket,"%i\tArroz Mediano\t\t$%i.00\n",ArrozMedMC,ArrozMedMC*17);
					}
					if (ArrozGrMC!=0){
						fprintf(Ticket,"%i\tArroz Grande\t\t$%i.00\n",ArrozGrMC,ArrozGrMC*19);
					}
					if (ArrozFamMC!=0){
						fprintf(Ticket,"%i\tArroz Familiar\t\t$%i.00\n",ArrozFamMC,ArrozFamMC*32);
					}
					if (PureMedMC!=0){
						fprintf(Ticket,"%i\tPure Mediano\t\t$%i.00\n",PureMedMC,PureMedMC*17);
					}
					if (PureGrMC!=0){
						fprintf(Ticket,"%i\tPure Grande\t\t$%i.00\n",PureGrMC,PureGrMC*19);
					}
					if (PureFamMC!=0){
						fprintf(Ticket,"%i\tPure Familiar\t\t$%i.00\n",PureFamMC,PureFamMC*32);
					}
					if (EnsaladaMedMC!=0){
						fprintf(Ticket,"%i\tEnsalada Mediana\t\t$%i.00\n",EnsaladaMedMC,EnsaladaMedMC*17);
					}
					if (EnsaladaGrMC!=0){
						fprintf(Ticket,"%i\tEnsalada Grande\t\t$%i.00\n",EnsaladaGrMC,EnsaladaGrMC*19);
					}
					if (EnsaladaFamMC!=0){
						fprintf(Ticket,"%i\tEnsalada Familiar\t\t$%i.00\n",EnsaladaFamMC,EnsaladaFamMC*32);
					}
					if (EloteMC!=0){
						fprintf(Ticket,"%i\tElote(s)\t\t$%i.00\n",EloteMC,EloteMC*17);
					}
					if (BisquetMC!=0){
						fprintf(Ticket,"%i\tBisquet(s)\t\t$%i.00\n",BisquetMC,BisquetMC*17);
					}
						
						//REFRESCOS  RefrescoChMC=0,RefrescoMedMC=0,RefrescoGrMC=0,AguaMC=0,
				}	

	fprintf(Ticket,"----------------------------------------------------------------");
	fprintf(Ticket,"\nSUBTOTAL:\t\t\t$%i.00",SubtotalFamiliar+SubTotalIndividual+SubTotalPostres+SubTotalBebidas+SubTotalChickipack+SubTotalMenuALaCarta);
	fprintf(Ticket,"\nTOTAL:\t\t\t$%i.00",Total);
	fprintf(Ticket,"\nEFECTIVO:\t\t\t$%i.00",Pago);
	fprintf(Ticket,"\nCAMBIO:\t\t\t$%i.00",Pago-Total);
	fprintf(Ticket,"\n\n\t237 KFC Gustavo Baz");
	fprintf(Ticket,"\n\tAV. GUSTAVO BAZ 226");
	fprintf(Ticket,"\n\tBOSQUES DE ECHEGARAY C.P. 53310");
	fprintf(Ticket,"\nNAUCALPAN DE JUAREZ, ESTADO DE MEXICO");
	fprintf(Ticket,"\n\tCAJERO: Juanito Abichuelas");
	fprintf(Ticket,"\n\t#166 %s",ctime(&mytime));
	fprintf(Ticket,"\n\tNo. de Ticket Unico: 52");
	fprintf(Ticket,"\nFolio para Facturar: 0237100521531104");
	fprintf(Ticket,"\n\tSi requiere factura, solicitela");
	fprintf(Ticket,"\n\ten mostrador o ingrese a:");
	fprintf(Ticket,"\n\thttps://facturacion.prb.com.mx");
	fprintf(Ticket,"\n\tInternet Movil");
	fprintf(Ticket,"\n\tUsuario: kfcph@infinitummovil");
	fprintf(Ticket,"\n\tPassword: franquicias");
	fprintf(Ticket,"\n\twww.kfc.com.mx");
		}

}


main (){

		BarraDeCarga();
	
	MenuPrincipal:

//Cambio de COLOR al menu		
	HANDLE  hConsole;
		    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		    SetConsoleTextAttribute(hConsole, 79);
		    	system("cls");
SetConsoleTextAttribute(hConsole, 244);
    
		printf("\n               __  __   ___   _  _   _   _      _  _   ____   ___              \n");
		printf("              |  %c/  | | __| | %c| | | | | |    | |/ / | __|  / __|             \n",92, 92);
		printf("              | |%c/| | | _|  | .%c | | |_| |    | %c <  | _|  | (__              \n", 96, 92, 39);
		printf("              |_|  |_| |___| |_|%c_|  %c___/     |_|%c_%c |_|    %c___|             \n", 92, 92, 92, 92,92);
		printf("                                                                               \n\n");
SetConsoleTextAttribute(hConsole, 79);
		printf("    Desplazate a traves de las opciones eligiendo el NUMERO indicado y ENTER\n\n");
		printf("       1) FAMILIARES          2) INDIVIDUALES         3) POSTRES\n\n\n");
		printf("            4) BEBIDAS            5) CHICKY PACK          6) MENU A LA CARTA\n\n");


//Menu de elecciones
						
		if (DocePiezas!=0 or DieciseisPiezas!=0 or PureFamATP!=0 or EnsaladaFamATP!=0 or ArrozFamATP!=0 or 
			PopcornMedATP!=0 or PapasFamATP!=0 or CuatroBisquetsATP!=0 or KeTirasJumboATP!=0 or CompFamATP!=0 or CuatroRefMedATP!=0 or 
			OchoPiezas!=0 or DiezPiezas!=0 or CatorcePiezas!=0 or PaqueteMix!=0 or
			
// 2) INDIVIDUAL
			MegaBoxPolloKeTiras!=0 or  MegaBoxKeTirasHamburguesa!=0 or  MegaBoxHamburguesaPollo!=0 or  EnsaladaCesar!=0 or  PopCornMediano!=0 or  PopCornGrande!=0 or 
			KeBoxPollo!=0 or KeBoxHamburguesa!=0 or BoxPollo!=0 or BoxKeTiras!=0 or BoxHamburguesa!=0 or BigBoxPollo!=0 or BigBoxKeTiras!=0 or BigBoxHamburguesa!=0 or
			
// 3) POSTRES
			KeConoSencillo!=0 or  KeConoDoble!=0 or  SundaeOreo!=0 or  SundaeKFCChocolate!=0 or  SundaeKFCCaramelo!=0 or  SundaeKFCFresa!=0 or  PayKFC!=0 or
			
// 4) BEBIDAS
			PepsiChica!=0 or  PepsiLightChica!=0 or  ManzanitaSolChica!=0 or  SevenUpChica!=0 or  LiptonIceTeaChica!=0 or  AguaFresh!=0 or  PepsiMediana!=0 or  PepsiLightMediana!=0 or 
			ManzanitaSolMediana!=0 or  SevenUpMediana!=0 or  LiptonIceTeaMediana!=0 or  PepsiGrande!=0 or  PepsiLightGrande!=0 or  ManzanitaSolGrande!=0 or  SevenUpGrande!=0 or  LiptonIceTeaGrande!=0 or 
			Pepsi!=0 or  PepsiLight!=0 or  ManzanitaSol!=0 or  SevenUp!=0 or  Lipton!=0 or
			
// 5) CHIKIPACK
			PechugaCrugiChikipack!=0 or UnaPiezaChikipack!=0 or KeTirasChikipack!=0 or  PopCornMedianoChikipack!=0 or
			
// 6) MENU A LA CARTA
			UnaPiezaMC!=0 or DocePiezasMC!=0 or DieciseisPiezasMC!=0 or KeTiraMC!=0 or PopcornMedMC!=0 or PopcornGrMC!=0 or SalsaSBBQMC!=0 or SalsaJalapenioMC!=0 or 
			KruncherMC!=0 or DoubleKrunchMC!=0 or BigKrunchMC!=0 or SupremaMC!=0 or KeConoSenMC!=0 or KeConoDobMC!=0 or SundaeKFCOreoMC!=0 or SundaeKFCMC!=0 or PayKFCMC!=0 or EnsaladaCesarMC!=0 or 
			RefrescoChMC!=0 or RefrescoMedMC!=0 or RefrescoGrMC!=0 or AguaMC!=0 or PapasChMC!=0 or PapasMedMC!=0 or PapasGrMC!=0 or PapasFamMC!=0 or ArrozMedMC!=0 or ArrozGrMC!=0 or ArrozFamMC!=0 or 
			PureMedMC!=0 or PureGrMC!=0 or PureFamMC!=0 or EnsaladaMedMC!=0 or EnsaladaGrMC!=0 or EnsaladaFamMC!=0 or EloteMC!=0 or BisquetMC!=0)
		{
				
//Impresion de la ORDEN ACTUAL
		printf("-------------------------------------------------------------------------------\n");
SetConsoleTextAttribute(hConsole, 244);		
		printf("- - - - - - - - - - - - -     ORDEN ACTUAL    - - - - - - - - - - - - - - - - -\n");
	SetConsoleTextAttribute(hConsole, 79);
		printf("-------------------------------------------------------------------------------\n");
		printf ("** Presiona 123 para TERMINAR LA ORDEN y pasar a pagar **\n");
		printf ("** Presiona 9999 para ELIMINAR LA ORDEN ACTUAL **");
		if (DocePiezas!=0 or DieciseisPiezas!=0 or PureFamATP!=0 or EnsaladaFamATP!=0 or PapasFamATP!=0 
		    or PopcornMedATP!=0 or ArrozFamATP!=0 or CuatroBisquetsATP!=0 or KeTirasJumboATP!=0 or CompFamATP!=0 or CuatroRefMedATP!=0){
					printf ("\n\n               ***************   ARMA TU PAQUETE   ***************\n");
					printf ("     **********************************************************************\n");	
						if (DocePiezas!=0){
							printf("     %i  12 Piezas ATP    ",DocePiezas);
						}
						if (DieciseisPiezas!=0){
							printf("     %i  16 Piezas ATP    ",DieciseisPiezas);
						}
						if (PureFamATP!=0){
							printf("     %i  Pure Fam ATP   \n",PureFamATP);
						}
						if (EnsaladaFamATP!=0){
							printf("     %i  Ensalada Fam ATP ",EnsaladaFamATP);
						}
						if (ArrozFamATP!=0){
							printf("     %i  Arroz Fam ATP    ",ArrozFamATP);
						}
						if (PopcornMedATP!=0){
							printf("     %i  Popcorn Med ATP\n",PopcornMedATP);
						}
						if (PapasFamATP!=0){
							printf("     %i  Papas Fam ATP    ",PapasFamATP);
						}
						if (CuatroBisquetsATP!=0){
							printf("     %i  4 Bisquets ATP   ",CuatroBisquetsATP);
						}
						if (KeTirasJumboATP!=0){
							printf("     %i  KeTiras J. ATP   \n",KeTirasJumboATP);
						}
						if (CompFamATP!=0){
							printf("     %i  Comp. Fam ATP    ",CompFamATP);
						}
						if (CuatroRefMedATP!=0){
						    printf("     %i  4 Ref. Med ATP   ",CuatroRefMedATP);
					    }
					}			

				if (OchoPiezas!=0 or DiezPiezas!=0 or CatorcePiezas!=0 or PaqueteMix!=0){
					
					printf ("\n\n               *****************   FAMILIARES   *****************\n");
					printf ("     **********************************************************************\n");	
					
						if (OchoPiezas!=0){
							printf("     %i  Paquete 8 Pz     ",OchoPiezas);
							}
						if (DiezPiezas!=0){
							printf("     %i  Paquete 10 Pz    ",DiezPiezas);
						}
						if (CatorcePiezas!=0){
							printf("     %i  Paquete 14 Pz    \n",CatorcePiezas);
						}
						if (PaqueteMix!=0){
							printf("     %i  Paquete Mix      ",PaqueteMix);
						}
					}

				if (KeBoxPollo!=0 or KeBoxHamburguesa!=0 or BoxPollo!=0 or BoxKeTiras!=0 or BoxHamburguesa!=0 
	 				or BigBoxPollo!=0 or BigBoxKeTiras!=0 or BigBoxHamburguesa!=0 or MegaBoxPolloKeTiras!=0 
	  			    or MegaBoxKeTirasHamburguesa!=0 or  MegaBoxHamburguesaPollo!=0 or EnsaladaCesar!=0 or PopCornMediano!=0 or  PopCornGrande!=0 ){
						  
					printf ("\n\n               *****************   INDIVIDUAL   ******************\n");
					printf ("     **********************************************************************\n");	
						
						if (KeBoxPollo!=0){
							printf("     %i  KeBox Pollo      ",KeBoxPollo);
						}
						if (KeBoxHamburguesa!=0){
							printf("     %i  KeBox Hamburguesa",KeBoxHamburguesa);
						}
						if (BoxPollo!=0){
							printf("     %i  BoxPollo          \n",BoxPollo);
						}
						if (BoxKeTiras!=0){
							printf("     %i  BoxKeTiras       ",BoxKeTiras);
						}
						if (BoxHamburguesa!=0){
							printf("     %i  BoxHamburguesa   ",BoxHamburguesa);
						}
						if (BigBoxPollo!=0){
							printf("     %i  BigBoxPollo      \n",BigBoxPollo);
						}
						if (BigBoxKeTiras!=0){
							printf("     %i  BigBoxKeTiras    ",BigBoxKeTiras);
						}
						if (BigBoxHamburguesa!=0){
							printf("     %i  BigBox Hamb.     ",BigBoxHamburguesa);
						}
						if (MegaBoxPolloKeTiras!=0){
							printf("     %i  MB PolloKeTiras  \n",MegaBoxPolloKeTiras);
						}
						if (MegaBoxKeTirasHamburguesa!=0){
							printf("     %i  MB KeTiras Hamb. ",MegaBoxKeTirasHamburguesa);
						}
						if (MegaBoxHamburguesaPollo!=0){
						    printf("     %i  MB Hamb. Pollo   ",MegaBoxHamburguesaPollo);
					    }
						if (EnsaladaCesar!=0){
							printf("     %i  EnsaladaCesar    \n",EnsaladaCesar);
						}
						if (PopCornMediano!=0){
							printf("     %i  PopCorn Mediano  ",PopCornMediano);
						}
						if (PopCornGrande!=0){
							printf("     %i  PopCornGrande    ",PopCornGrande);
						}
				}		
					
				if (PechugaCrugiChikipack!=0 or UnaPiezaChikipack!=0 or KeTirasChikipack!=0 or  PopCornMedianoChikipack!=0){
					
					printf ("\n\n               ****************   CHIKY PACK   ****************\n");
					printf ("     **********************************************************************\n");	
					
						if (PechugaCrugiChikipack!=0){
							printf("     %i  Pechuga Crugi CP ",PechugaCrugiChikipack);
						}
						if (KeTirasChikipack!=0){
							printf("     %i  KeTiras CP       ",KeTirasChikipack);
						}
						if (PopCornMedianoChikipack!=0){
							printf("     %i  PopCorn Med CP   \n",PopCornMedianoChikipack);
						}
						if (UnaPiezaChikipack!=0){
							printf("     %i  Una Pieza   CP   ",UnaPiezaChikipack);
						}
					}
								
				if (PepsiChica!=0 or PepsiLightChica!=0 or ManzanitaSolChica!=0 or SevenUpChica!=0 or LiptonIceTeaChica!=0 or AguaFresh!=0 or PepsiMediana!=0 or PepsiLightMediana!=0 or
			ManzanitaSolMediana!=0 or SevenUpMediana!=0 or LiptonIceTeaMediana!=0 or PepsiGrande!=0 or PepsiLightGrande!=0 or ManzanitaSolGrande!=0 or SevenUpGrande!=0 or LiptonIceTeaGrande!=0 or
			Pepsi!=0 or PepsiLight!=0 or ManzanitaSol!=0 or SevenUpChica!=0 or SevenUpMediana!=0 or SevenUpGrande!=0 or LiptonIceTeaChica!=0 or LiptonIceTeaMediana!=0 or LiptonIceTeaChica!=0){
							
					printf ("\n\n               ***************    BEBIDAS    ***************\n");
					printf ("     **********************************************************************\n");
					
						if (PepsiChica!=0){
							printf("     %i  Pepsi Ch      ",PepsiChica);
						}
						if (PepsiLightChica!=0){
							printf("     %i  PepsiLight Ch ",PepsiLightChica);
						}
						if (ManzanitaSolChica!=0){
							printf("     %i  ManzanitaSolCh\n",ManzanitaSolChica);
						}
						if (SevenUpChica!=0){
							printf("     %i  SevenUp Ch    ",SevenUpChica);
						}
						if (LiptonIceTeaChica!=0){
							printf("     %i  LiptonIceTeaCh",LiptonIceTeaChica);
						}
						if (AguaFresh!=0){
							printf("     %i  AguaFresh     \n",AguaFresh);
						}
						if (PepsiMediana!=0){
							printf("     %i  Pepsi Med     ",PepsiMediana);
						}
						if (PepsiLightMediana!=0){
							printf("     %i  PepsiLightMed ",PepsiLightMediana);
						}
						if (ManzanitaSolMediana!=0){
							printf("     %i  Manzanita Med \n",ManzanitaSolMediana);
						}
						if (SevenUpMediana!=0){
							printf("     %i  SevenUp Med   ",SevenUpMediana);
						}
						if (LiptonIceTeaMediana!=0){
							printf("     %i  Lipton Med    ",LiptonIceTeaMediana);
						}
						if (PepsiGrande!=0){
							printf("     %i  Pepsi Gr      \n",PepsiGrande);
						}
						if (PepsiLightGrande!=0){
							printf("     %i  PepsiLight Gr ",PepsiLightGrande);
						}
						if (ManzanitaSolGrande!=0){
							printf("     %i  Manzanita Gr  ",ManzanitaSolGrande);
						}
						if (SevenUpGrande!=0){
							printf("     %i  SevenUp Gr   \n",SevenUpGrande);
						}
						if (LiptonIceTeaGrande!=0){
							printf("     %i  Lipton Gr    ",LiptonIceTeaGrande);	
						}
				}		
							
				if (KeConoSencillo!=0 or SundaeOreo!=0 or SundaeKFCChocolate!=0 or SundaeKFCCaramelo!=0 or SundaeKFCFresa!=0 or PayKFC!=0){
						
					printf ("\n\n               ***************    POSTRES    ***************\n");
					printf ("     **********************************************************************\n");
			
						if (KeConoSencillo!=0 or KeConoSenMC!=0){
							printf("     %i  Ke Cono Sen     ",KeConoSencillo+KeConoSenMC);
						}
						if (KeConoDoble!=0 or KeConoDobMC!=0){
							printf("     %i  KeCono Doble     ",KeConoDoble+KeConoDobMC);
						}
						if (SundaeOreo!=0 or SundaeKFCOreoMC!=0){
							printf("     %i  Sundae Oreo      \n",SundaeOreo+SundaeKFCOreoMC);
						}
						if (SundaeKFCChocolate!=0 or SundaeKFCMC!=0){
							printf("     %i  Sundae KFC Choc.",SundaeKFCChocolate+SundaeKFCMC);
						}
						if (SundaeKFCCaramelo!=0){
							printf("     %i  Sundae KFC Car.  ",SundaeKFCCaramelo);
						}
						if (SundaeKFCFresa!=0){
							printf("     %i  Sundae KFC Fresa \n",SundaeKFCFresa);
						}
						if (PayKFC!=0 or PayKFCMC!=0){
							printf("     %i  Pay KFC          ",PayKFC+PayKFCMC);
						}
					}			
		
				if (UnaPiezaMC!=0 or DocePiezasMC!=0 or DieciseisPiezasMC!=0 or KeTiraMC!=0 or PopcornMedMC!=0 or SalsaSBBQMC!=0 or SalsaJalapenioMC!=0 
					or PopcornGrMC!=0 or KruncherMC!=0 or DoubleKrunchMC!=0 or BigKrunchMC!=0 or SupremaMC!=0
					or KeConoSenMC!=0 or KeConoDobMC!=0 or SundaeKFCOreoMC!=0 or SundaeKFCMC!=0 or PayKFCMC!=0
					or PapasChMC!=0 or PapasMedMC!=0 or PapasGrMC!=0 or PapasFamMC!=0 or ArrozMedMC!=0 or ArrozGrMC!=0 or ArrozFamMC!=0 
					or PureMedMC!=0 or PureGrMC!=0 or PureFamMC!=0 or EnsaladaMedMC!=0 or EnsaladaGrMC!=0 or EnsaladaFamMC!=0 or EloteMC!=0 or BisquetMC!=0
					or EnsaladaCesarMC!=0 or RefrescoChMC!=0 or RefrescoMedMC!=0 or RefrescoGrMC!=0 or AguaMC!=0){
					  
					printf ("\n\n            ***************    MENU A LA CARTA    ***************\n");
					printf ("     **********************************************************************\n");
						
						if (UnaPiezaMC!=0){
							printf("     %i  1 Pieza MC     ",UnaPiezaMC);
						}
						if (DocePiezasMC!=0){
							printf("     %i  12 Piezas MC   ",DocePiezasMC);
						}
						if (DieciseisPiezasMC!=0){
							printf("     %i  16 Piezas MC   \n",DieciseisPiezasMC);
						}
						if (KeTiraMC!=0){
							printf("     %i  KeTiraMC       ",KeTiraMC);
						}
						if (PopcornMedMC!=0){
							printf("     %i  Popcorn Med MC ",PopcornMedMC);
						}
						if (PopcornGrMC!=0){
							printf("     %i  Popcorn Gr MC  \n",PopcornGrMC);
						}
						if (SalsaSBBQMC!=0){
							printf("     %i  Salsa SBBQ MC  ",SalsaSBBQMC);
						}
						if (SalsaJalapenioMC!=0){
							printf("     %i  Salsa Jalap. MC",SalsaJalapenioMC);
						}
						if (KruncherMC!=0){
							printf("     %i  Kruncher MC    \n",KruncherMC);
						}
						if (DoubleKrunchMC!=0){
							printf("     %i  Doub  Krunch MC",DoubleKrunchMC);
						}
						if (BigKrunchMC!=0){
						    printf("     %i  Big Krunch MC  ",BigKrunchMC);
					    }
						if (SupremaMC!=0){
							printf("     %i  Suprema MC     \n",SupremaMC);
						}
						if (EnsaladaCesarMC!=0){
							printf("     %i  Ensalada C. MC ",EnsaladaCesarMC);
						}
						if (PopCornGrande!=0){
							printf("     %i  PopCornGrande  ",PopCornGrande);
						}
						if (PapasChMC!=0){
							printf("     %i  Papas Ch MC    \n",PapasChMC);
						}
						if (PapasMedMC!=0){
							printf("     %i  Papas Med MC   ",PapasMedMC);
						}
						if (PapasGrMC!=0){
							printf("     %i  Papas Gr MC    ",PapasGrMC);
						}
						if (PapasFamMC!=0){
							printf("     %i  Papas Fam MC   \n",PapasFamMC);
						}
						if (ArrozMedMC!=0){
							printf("     %i  Arroz Med MC   ",ArrozMedMC);
						}
						if (ArrozGrMC!=0){
							printf("     %i  Arroz Gr MC    ",ArrozGrMC);
						}
						if (ArrozFamMC!=0){
							printf("     %i  Arroz Fam MC   \n",ArrozFamMC);
						}
						if (PureMedMC!=0){
							printf("     %i  Pure Med MC    ",PureMedMC);
						}
						if (PureGrMC!=0){
							printf("     %i  Pure Gr MC     ",PureGrMC);
						}
						if (PureFamMC!=0){
							printf("     %i  Pure Fam MC    \n",PureFamMC);
						}
						if (EnsaladaMedMC!=0){
							printf("     %i  Ensalada Med MC",EnsaladaMedMC);
						}
						if (EnsaladaGrMC!=0){
							printf("     %i  Ensalada Gr MC ",EnsaladaGrMC);
						}
						if (EnsaladaFamMC!=0){
							printf("     %i  Ensalada Fam MC\n",EnsaladaFamMC);
						}
						if (EloteMC!=0){
							printf("     %i  Elote MC       ",EloteMC);
						}
						if (BisquetMC!=0){
							printf("     %i  Bisquet MC\n   ",BisquetMC);
						}
							
						
					}
SetConsoleTextAttribute(hConsole, 244);	
			printf("\n\nEl SUBTOTAL es: $%i.00\n",SubtotalFamiliar + SubTotalIndividual + SubTotalPostres + SubTotalBebidas + SubTotalChickipack + SubTotalMenuALaCarta);	
SetConsoleTextAttribute(hConsole, 79);
		}



	scanf("%i",&EleccionMenuPrincipal);
			
//ELECCION DE MENU
	switch (EleccionMenuPrincipal){
			
			
			case 1:{
				Familiares();
				goto MenuPrincipal;
				break;
			}
			case 2:{
				Individual();
				goto MenuPrincipal;
				break;
			}	
			case 3:{
				Postres();
				goto MenuPrincipal;
				break;
			}
			case 4:{
				Bebidas();
				goto MenuPrincipal;
				break;
			}case 5:{
				ChikyPack();
				goto MenuPrincipal;
				break;
			}
			case 6:{
				MenuALaCarta();
				goto MenuPrincipal;
				break;
			}
			case 123:{
				
				Total=SubtotalFamiliar+SubTotalIndividual+SubTotalPostres+SubTotalBebidas+SubTotalChickipack+SubTotalMenuALaCarta;
				
				InicioPago:
				printf("\n\nIngrese efectivo a pagar\n\n  $");
				scanf("%i",&Pago);
				if (Pago<Total){
					printf("Efectivo insuficiente, Favor de ingresar una cantidad mayor o igual al total de su orden.");
					goto InicioPago;
				}
				printf("\nSu cambio: $%i.00",Pago-Total);
				Sleep(2300);
				Ticket();
				PolloDeCarga();
				
				break;
			}
			case 9999:{
					X=0;		
						SubtotalArmaTuPaquete=0, SubtotalFamiliar=0, SubTotalIndividual=0, SubTotalPostres=0, SubTotalBebidas=0, SubTotalChickipack=0, SubTotalMenuALaCarta=0;
						
			// 1) FAMILIARES
						OpcionFamiliares=0,reg=0,DocePiezas=X,DieciseisPiezas=X,PureFamATP=X,EnsaladaFamATP=X,ArrozFamATP=X,
						PopcornMedATP=X,PapasFamATP=X,CuatroBisquetsATP=X,KeTirasJumboATP=X,CompFamATP=X,CuatroRefMedATP=X,
						OchoPiezas=X,DiezPiezas=X,CatorcePiezas=X,PaqueteMix=X;
						
			// 2) INDIVIDUAL
						MegaBoxPolloKeTiras=X, MegaBoxKeTirasHamburguesa=X, MegaBoxHamburguesaPollo=X, EnsaladaCesar=X, PopCornMediano=X, PopCornGrande=X,
						KeBoxPollo=X,KeBoxHamburguesa=X,BoxPollo=X,BoxKeTiras=X,BoxHamburguesa=X,BigBoxPollo=X,BigBoxKeTiras=X,BigBoxHamburguesa=X;
						
			// 3) POSTRES
						KeConoSencillo=X, KeConoDoble=X, SundaeOreo=X, SundaeKFCChocolate=X, SundaeKFCCaramelo=X, SundaeKFCFresa=X, PayKFC=X;
						
			// 4) BEBIDAS
						PepsiChica=X, PepsiLightChica=X, ManzanitaSolChica=X, SevenUpChica=X, LiptonIceTeaChica=X, AguaFresh=X, PepsiMediana=X, PepsiLightMediana=X,
						ManzanitaSolMediana=X, SevenUpMediana=X, LiptonIceTeaMediana=X, PepsiGrande=X, PepsiLightGrande=X, ManzanitaSolGrande=X, SevenUpGrande=X, LiptonIceTeaGrande=X,
						Pepsi=X, PepsiLight=X, ManzanitaSol=X, SevenUp=X, Lipton=X;
						
			// 5) CHIKIPACK
						PechugaCrugiChikipack=X, UnaPiezaChikipack=X, KeTirasChikipack=X, PopCornMedianoChikipack=X;
						
			// 6) MENU A LA CARTA
						UnaPiezaMC=X,DocePiezasMC=X,DieciseisPiezasMC=X,KeTiraMC=X,PopcornMedMC=X,PopcornGrMC=X,SalsaSBBQMC=X,SalsaJalapenioMC=X,
						KruncherMC=X,DoubleKrunchMC=X,BigKrunchMC=X,SupremaMC=X,KeConoSenMC=X,KeConoDobMC=X,SundaeKFCOreoMC=X,SundaeKFCMC=X,PayKFCMC=X,EnsaladaCesarMC=X,
						RefrescoChMC=X,RefrescoMedMC=X,RefrescoGrMC=X,AguaMC=X,PapasChMC=X,PapasMedMC=X,PapasGrMC=X,PapasFamMC=X,ArrozMedMC=X,ArrozGrMC=X,ArrozFamMC=X,
						PureMedMC=X,PureGrMC=X,PureFamMC=X,EnsaladaMedMC=X,EnsaladaGrMC=X,EnsaladaFamMC=X,EloteMC=X,BisquetMC=X;
						
				goto MenuPrincipal;
				break;
			}
			default:{
				PolloEntradaInvalida();
				goto MenuPrincipal;				
				break;
			}
			
			
		}
		
	system("pause");
	return 0;
}





