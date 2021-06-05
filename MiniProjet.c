#include<stdio.h>
#include<stdlib.h>
#define t_max 100000
#define T_MAX 300
#define max 100
#include"struct.h"

int MenuPrincipal();
int LocationVoiture();
void VisualiserContrat();
void LouerVoiture();
void RetournerVoiture();
void ModifierContrat();
int GestionVoiture();
void ListeVoiture();
void AjouterVoiture();
void ModifierVoiture();
void SupprimerVoiture();
int GestionClient();
void ListeClient();
void AjouterClient();
void ModifierClient();
void SupprimerClient();

//*************************************************le menu principal*******************************************************************

void main()
{
	  
      MenuPrincipal();
      
}

//---------------------------------------------------Menu Principal-------------------------------------------------------------------
//*************************************************************************************************************************************
int MenuPrincipal()
{
	 int choix;
	 
	 printf("\n                                        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
	 printf("\n                                        \xb3 Menu Principal   \xb3");
	 printf("\n                                        \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");
	 
	 printf("\n");
	 
	 printf("\n                       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	 printf("\n                       \xba                                                         \xba");
	 printf("\n                       \xba     Location......................................1     \xba");
	 printf("\n                       \xba     Gestion voitures..............................2     \xba");	 
	 printf("\n                       \xba     Gestion clients...............................3     \xba");	 
	 printf("\n                       \xba     Quitter.......................................4     \xba");	 
	 printf("\n                       \xba                                                         \xba");
	 printf("\n                       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
	 printf("\n\n                                      Votre choix  :  ");
	 
	 scanf("%d",&choix);
     system("cls");
     switch(choix)
	{
		case 1 : LocationVoiture();
			break;
		case 2 : GestionVoiture();
			break;
		case 3 : GestionClient();
			break;
        default : exit(1);	
	
	}
	return choix;
 }
//***************************************************************************************************************************************
//---------------------------------------------------Location Voiture--------------------------------------------------------------------
  int LocationVoiture()
{
	 int choix;
	 
	 printf("\n                                        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
	 printf("\n                                        \xb3 Location d'une Voiture      \xb3");
	 printf("\n                                        \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");
	 
	 printf("\n");
	 
	 printf("\n                       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	 printf("\n                       \xba                                                              \xba");
	 printf("\n                       \xba     Visualiser contrat.................................1     \xba");
	 printf("\n                       \xba     Louer voiture......................................2     \xba");	 
	 printf("\n                       \xba     Retourner voiture..................................3     \xba");	 
	 printf("\n                       \xba     Modifier contrat...................................4     \xba");	
	 printf("\n                       \xba     Retour.............................................5     \xba");	 
	 printf("\n                       \xba                                                              \xba");
	 printf("\n                       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
	 printf("\n\n                                          Votre choix  :  ");
	 
	 scanf("%d",&choix);
	 system("cls");
	 	 switch(choix)
	{
		case 1 : VisualiserContrat();       
			break;
		case 2 : LouerVoiture();
			break;
		case 3 : RetournerVoiture();
			break;
		case 4 : ModifierContrat();
			break;
		case 5 :  MenuPrincipal();
			break; 
		default : exit(1); 
	
	}
     
	 return choix;
 }
 
 //--------------------------------------------------ses sous fonctions----------------------------------------------------------------
 
 // la fonction qui permet de visualiser la contrat
  
 void VisualiserContrat()
 {
 	float n;
 	contrat c;
	FILE* contra=NULL;
 	char chaine[max]="";
 	
 	contra = fopen("contrat.txt","r");
 	printf("\n-------------------------------------liste des contrats---------------------------------------\n\n");
 	while(fgets(chaine,t_max,contra) != NULL)  // c'est pour afficher le contenu du fichier s'il existe
 	{
 		printf("%s \n",chaine);
	}
	fclose(contra);
	contra = fopen("contrat.txt","r");
	if(contra == NULL)  
	{
		printf("\n\n pas de contrat !! ");
	}
	if(contra != NULL)
	{
 		do
 		{
 			printf("\n entrez le numero de contrat que vous voullez visualiser : ");
 			scanf("%f",&n);
		}while(n<=1 || n>99);
		contra = fopen("contrat.txt","r");
 		fseek(contra,(n-1)*89,SEEK_SET);           // j'ai fait (n-1)*90 pour m'afficher le contenu de tous la ligne
		fgets(chaine,max,contra);                 // exemple si n=2 alors le programme affiche le contenu 
		printf("%s",chaine);					 //du deuxiéme ligne qui contient presque 90 caractères 
												//et ainsi de suite 
		fclose(contra);	
 	}
	fclose(contra);
	
	LocationVoiture();
 }
 
 // la fonction qui permet de louer une voiture
 
 void LouerVoiture()
 {
 	int id,nb,i=0,j=0;
 	int x,b,z,m,k,a,n,f,g;
 	char chaine[t_max]="";
 	char nomClient[8],prenomClient[10];
 	FILE* fichier;
 	FILE* contra;
 	FILE* ouvre;
 	client c;
 	voiture v;
 	contrat cont;
    fichier = fopen("clients.txt","r");
    if(fichier == NULL) // le cas de n'existence de fichier qui contient la liste
    {
    	printf("\n ************************************************************************************************************** \n");
		do
		{
			printf("\n vous voullez louer une voiture (oui == 1 ou non == 0) : ");
			scanf("%d",&x);
		}while(x != 1 && x != 0);
		if(x == 1)
		{
			printf("\n\t\t d'accord : saisir svp votre informations ici : \n\n");
			do
			{
				printf("\t l'id du client : ");
				scanf("%d",&c.idClient);
			}while(c.idClient<0 || c.idClient>99);
 			printf("\t le nom du client (!! max des caracteres 8 !!) : ");
 			scanf("%s",c.nom);
 			printf("\t le prenom du client (!! max des caracteres 10 !!) : ");
 			scanf("%s",c.prenom);
 			do
			{
				printf("\t CIN  : ");
		    	scanf("%d",&c.cin);
			}while(c.cin <00000 || c.cin >99999);
 			printf("\t l'adresse (!! max des caracteres 10 !!) : ");
 			scanf("%s",c.adresse);
 			do
 			{
 				printf("\t numero de telephone : ");
 				scanf("%d",c.telephone);
			}while(c.telephone<0000000000 || c.telephone>9999999999);
			
			// on met ces informations dans le fichier "clients.txt"
			fichier=fopen("clients.txt","a+");
	   		{
	
				fprintf(fichier,"l'id du client:%d,Nom:%s,Prenom:%s,cin:%d,l'adresse:%s,numero de telephone:%d",c.idClient,c.nom,c.prenom,c.cin,c.adresse,c.telephone);
        	}
	    	fclose(fichier);
	    }
	    else     // si l'utilisateur ne veut pas louer une voiture
	    {
	    	printf("\n-------------------------------------------merci de votre visite------------------------------------------------\n");
		}
	    
	    printf("\n-----------------------------------------verification d'existance de voiture----------------------------------------\n");
	    ouvre = fopen("ajout.txt","r");
	   	if(ouvre == NULL)    // si le fichier qui contient la liste des voitures n'existe pas
	   	{
	   		printf("\n ************************************************************************************************************* \n");
			do
 			{
 				printf("\t l'id du voiture : ");
 				scanf("%d",&v.idVoiture);
 			}while(v.idVoiture<1 || v.idVoiture>99);
		 	printf("\t la marque (!! max 6 caracteres) : ");
 			scanf("%s",v.marque);
 			printf("\t le nom de la voiture (!! max 7 caracteres) : ");
 			scanf("%s",v.nomVoiture);
 			printf("\t couleur (!! max 6 caracteres) : ");
 			scanf("%s",v.couleur);
 			do
 			{
 				printf("\t nombre de place : ");
 				scanf("%d",&v.nbrPlace);
 			}while(v.nbrPlace<1 || v.nbrPlace>9);
 			do
 			{
				 printf("\t le prix d'un jour : ");
 				scanf("%d",&v.prixJour);
 			}while(v.prixJour<100 || v.prixJour>999);
			 printf("\t est-il en location (veuillez ecrivez oui) : ");
 			 scanf("%s",v.EnLocation);
 			 
 			// on met ces informations dans le fichier "ajout.txt"
 			ouvre = fopen("ajout.txt","a+");
 			{
 				fprintf(ouvre,"l'id voiture:%d,marque:%s,Nom:%s,couleur:%s,nombre de place:%d,le prix d'un jour:%d$,en location:%s",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbrPlace,v.prixJour,v.EnLocation);
				fclose(ouvre);
			}
			
			// si le client à saisir tous ses informations ,il passe au création du contrat
			printf("\n--------------------------------------------creation de contrat-----------------------------------------------\n");
			
			printf("\n\t donner numero de contrat : ");
			scanf("%f",&cont.numContrat);
			do
			{
				printf("\t donner l'id du client : ");
				scanf("%d",&cont.idClient);
			}while(cont.idClient<0 || cont.idClient>99);
			do
			{
				printf("\t donner l'id du voiture : ");
				scanf("%d",&cont.idVoiture);				
			}while(cont.idVoiture<0 || cont.idVoiture>99);
			do
			{
				printf("\t donner le cout : ");
				scanf("%d",&cont.cout);
			}while(cont.cout<100 || cont.cout>999);
			printf("\t Date de debut de contrat : \n");
			do{
				printf("\t\t Jour : ");
				scanf("%d",&cont.debut.jour);
			}while(cont.debut.jour<1 || cont.debut.jour>30);
			do
			{
				printf("\t\t Mois : ");
				scanf("%d",&cont.debut.mois);
			}while(cont.debut.mois<1 || cont.debut.mois>12);
			do
			{
				printf("\t\t Annee : ");
				scanf("%d",&cont.debut.annee);
			}while(cont.debut.annee<2000 || cont.debut.annee>2020);
			printf("\t Date de fin de contrat : \n");
			do
			{
				printf("\t\t Jour : ");
				scanf("%d",&cont.fin.jour);
			}while(cont.fin.jour<1 || cont.fin.jour>30);
			do{
				printf("\t\t Mois : ");
				scanf("%d",&cont.fin.mois);
			}while(cont.fin.mois<1 || cont.fin.mois>12);
			do{
				printf("\t\t Annee : ");
				scanf("%d",&cont.fin.annee);
			}while(cont.fin.annee<2000 || cont.fin.annee>2020);
					
			// on ajout ces informations à la fin du liste des contrats déja enregistrées 
			contra = fopen("contrat.txt","a+");
			{
				fprintf(contra,"num:%f  id voiture:%d  id client:%d  cout:%d  Date Debut:%d/%d/%d  Date Fin:%d/%d/%d",cont.numContrat,cont.idVoiture,cont.idClient,cont.cout,cont.debut.jour,cont.debut.mois,cont.debut.annee,cont.fin.jour,cont.fin.mois,cont.fin.annee);
				fclose(contra);
			}
			fclose(ouvre);
	   	   }
	   	   
	    	printf("\n*********************************La location est effectue avec succes********************************************\n");
	    	printf("\n------------------------------------------Merci de votre visite--------------------------------------------------\n");
	    
	   	    fclose(fichier);
	}
	fichier = fopen("clients.txt","r");
	if(fichier != NULL)    // le cas d'existance de fichier 
	{
		
		printf("\n-------------------------------------------information du client---------------------------------------------------\n");
		
		// on demande à l'utilisateur de saisir son nom et son prénom
 		printf("\n donner le nom du clients : ");
 		scanf("%s",&nomClient);
 		printf("\n donner le prenom du clients : ");
 		scanf("%s",&prenomClient);
 		
 		printf("\n*******************************************verification d'existance du client*****************************************");
 		printf("\n\n");
 		fichier = fopen("clients.txt","r");
 		while(fgets(chaine,t_max,fichier) != NULL)   // après on affiche la liste des clients déja enregistrées dans le fichier
 		{
 			printf("%s \n",chaine);
		}
		fclose(fichier);
		do
		{	
			printf("\n est ce que vous avez trouvee votre nom dans cette liste (oui = 1 || non = 0) : ");
 			scanf("%d",&f);
		}while(f != 1 && f != 0);
		if(f == 1)  
		{
		 	printf("\n\n entrer le numero de ligne ou il se trouve ce client : ");
			scanf("%d",&nb);
		
			while(i<nb*109)
			{
				fichier = fopen("clients.txt","r");
				fseek(fichier,i,SEEK_SET);    	 // s'il a trouvée ses informations on affiche ligne par ligne et on prend compte que
				fgets(chaine,t_max,fichier);  	// chaque ligne contient presque 109 caractères
				printf("\n %s",chaine);
				fclose(fichier);
			
				do{
					printf("\n est ce que ces informations concerne a vous ? (oui = 1 || non = 0) :  ");
					scanf("%d",&z);
				}while(z != 1 && z !=0);
				if(z == 1) 						// il spécifier la ligne qui contient ses informations
				{
					printf("\n\n\t\t D'accord !!! \n");
					i+=112;
					
					// aprés il passe au vérification du voiture
					printf("\n-----------------------------------------verification du voiture---------------------------------------\n");
					
					// on lui demander de donner une identité
					printf("\n donner l'id du voiture a rechercher : ");
					scanf("%d",&id);
					printf("\n---------------------------------------la liste des voitures-----------------------------------------\n\n");
					ouvre = fopen("ajout.txt","r");
					while(fgets(chaine,t_max,ouvre) != NULL)   	// après on affiche la liste des clients déja enregistrées dans le fichier
 					{
 						printf("%s \n",chaine);
					}
					fclose(ouvre);
					do
					{	
						printf("\n est ce que vous avez trouvee l'id dans cette liste (oui = 1 || non = 0) : ");
 						scanf("%d",&g);
					}while(g != 1 && g != 0);
					if(g == 1)
					{
						printf("\n donner le numero de ligne ou il y a la voiture a Louer : ");
						scanf("%d",&nb);
						printf("\n----------------------------------verification de voiture--------------------------------------\n");
						while(j<nb*109)
						{
							ouvre = fopen("ajout.txt","r");     	 // la meme chose
							fseek(ouvre,j,SEEK_SET);				// s'il a trouvée ses informations on affiche ligne par ligne 
							fgets(chaine,t_max,ouvre);				
							printf("\n %s",chaine);
							fclose(ouvre);
						
							do{
								printf("\n est-il la voiture qui choisi le client ? (oui = 1 || non = 0) :  ");
								scanf("%d",&m);
							}while(m != 1 && m !=0);
							if(m == 1)
							{
								do
								{
									printf("\n est-il disponible (oui = 1 || non = 0) : ");  // on vérifier si la voiture est disponible ou non
									scanf("%d",&k);
								}while(k != 1 && k != 0);
								if(k == 1)				// s'il est disponible 
								{
									printf("\n\t\t Ree-saisir les informations du voiture en changeons la location de non a oui : \n\n");
 	
 									do
 									{
 										printf("\t l'id du voiture : ");
 										scanf("%d",&v.idVoiture);
 									}while(v.idVoiture<1 || v.idVoiture>99);
								 	printf("\t la marque (!! max 6 caracteres) : ");
 									scanf("%s",v.marque);
 									printf("\t le nom de la voiture (!! max 7 caracteres) : ");
 									scanf("%s",v.nomVoiture);
 									printf("\t couleur (!! max 6 caracteres) : ");
 									scanf("%s",v.couleur);
 									do
 									{
 										printf("\t nombre de place : ");
 										scanf("%d",&v.nbrPlace);
 									}while(v.nbrPlace<1 || v.nbrPlace>9);
 									do
 									{
										 printf("\t le prix d'un jour : ");
 										scanf("%d",&v.prixJour);
 									}while(v.prixJour<100 || v.prixJour>999);
									 printf("\t est-il en location (veuillez ecrivez oui) : ");
 									 scanf("%s",v.EnLocation);
 								
 									ouvre = fopen("voit.txt","a+");
 									{
 										fprintf(ouvre,"l'id voiture:%d,marque:%s,Nom:%s,couleur:%s,nombre de place:%d,le prix d'un jour:%d$,en location:%s\n",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbrPlace,v.prixJour,v.EnLocation);
										fclose(ouvre);
									}
									j+=112;
									
									// création de contrat
									printf("\n--------------------------------------------creation de contrat-----------------------------------------------\n");
 					
									printf("\n\t donner numero de contrat : ");
									scanf("%f",&cont.numContrat);
									do
									{
										printf("\t donner l'id du client : ");
										scanf("%d",&cont.idClient);
									}while(cont.idClient<0 || cont.idClient>99);
									do
									{
										printf("\t donner l'id du voiture : ");
										scanf("%d",&cont.idVoiture);				
									}while(cont.idVoiture<0 || cont.idVoiture>99);
									do
									{
										printf("\t donner le cout : ");
										scanf("%d",&cont.cout);
									}while(cont.cout<100 || cont.cout>999);
									printf("\t Date de debut de contrat : \n");
									do{
										printf("\t\t Jour : ");
										scanf("%d",&cont.debut.jour);
									}while(cont.debut.jour<1 || cont.debut.jour>30);
									do
									{
										printf("\t\t Mois : ");
										scanf("%d",&cont.debut.mois);
									}while(cont.debut.mois<1 || cont.debut.mois>12);
									do
									{
										printf("\t\t Annee : ");
										scanf("%d",&cont.debut.annee);
									}while(cont.debut.annee<2000 || cont.debut.annee>2020);
									printf("\t Date de fin de contrat : \n");
									do
									{
										printf("\t\t Jour : ");
										scanf("%d",&cont.fin.jour);
									}while(cont.fin.jour<1 || cont.fin.jour>30);
									do{
										printf("\t\t Mois : ");
										scanf("%d",&cont.fin.mois);
									}while(cont.fin.mois<1 || cont.fin.mois>12);
									do{
										printf("\t\t Annee : ");
										scanf("%d",&cont.fin.annee);
									}while(cont.fin.annee<2000 || cont.fin.annee>2020);
									
									contra = fopen("contrat.txt","a+");
									{
										fprintf(contra,"\nnum:%f  id voiture:%d  id client:%d  cout:%d  Date Debut:%d/%d/%d  Date Fin:%d/%d/%d",cont.numContrat,cont.idVoiture,cont.idClient,cont.cout,cont.debut.jour,cont.debut.mois,cont.debut.annee,cont.fin.jour,cont.fin.mois,cont.fin.annee);
										fclose(contra);
									}
								}
								else			// s'il n'est pas disponible
								{
									printf("\n\n !!! cette voiture est deja louer par un autre personne!!! \n");
							
									ouvre = fopen("voit.txt","a+");       // et on le met dans un autre fichier
									{
										fprintf(ouvre,"%s",chaine);
										fclose(ouvre);
									}
									j+=112;
								}
							}
							else 			// c'est ce n'est pas la voiture qu'il veut louer
							{
								ouvre = fopen("voit.txt","a+"); 		// et on le met dans un autre fichier
								{
									fprintf(ouvre,"%s",chaine);
									fclose(ouvre);
								}
								
								j+=112;				// on passe à la ligne suivant
							}
							
						}
						remove("ajout.txt");		
						rename("voit.txt","ajout.txt");
					}
					else     // s'il ne trouve pas la voiture qu'il veut dans la liste des voitures
					{
						printf("\n\t************************************voiture introuvable**************************************\n");
						
						printf("\n-------------------------------------ajouter une voiture-----------------------------------------\n");
						do
 						{
 							printf("\t l'id du voiture : ");
 							scanf("%d",&v.idVoiture);
 						}while(v.idVoiture<1 || v.idVoiture>99);
					 	printf("\t la marque (!! max 6 caracteres) : ");
 						scanf("%s",v.marque);
 						printf("\t le nom de la voiture (!! max 7 caracteres) : ");
 						scanf("%s",v.nomVoiture);
 						printf("\t couleur (!! max 6 caracteres) : ");
 						scanf("%s",v.couleur);
 						do
 						{
 							printf("\t nombre de place : ");
 							scanf("%d",&v.nbrPlace);
 						}while(v.nbrPlace<1 || v.nbrPlace>9);
 						do
 						{
							 printf("\t le prix d'un jour : ");
 							scanf("%d",&v.prixJour);
 						}while(v.prixJour<100 || v.prixJour>999);
						 printf("\t est-il en location (veuillez ecrivez oui) : ");
 						 scanf("%s",v.EnLocation);
 						
 						ouvre = fopen("ajout.txt","a+");
 						{
 							fprintf(ouvre,"\nl'id voiture:%d,marque:%s,Nom:%s,couleur:%s,nombre de place:%d,le prix d'un jour:%d$,en location:%s",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbrPlace,v.prixJour,v.EnLocation);
							fclose(ouvre);
						}
						
						printf("\n------------------------------------------creation de contrat----------------------------------------\n");
						
						printf("\n\t donner numero de contrat : ");
						scanf("%f",&cont.numContrat);
						do
						{
							printf("\t donner l'id du client : ");
							scanf("%d",&cont.idClient);
						}while(cont.idClient<0 || c.idClient>99);
						do
						{
							printf("\t donner l'id du voiture : ");
							scanf("%d",&cont.idVoiture);				
						}while(cont.idVoiture<0 || cont.idVoiture>99);
						do
						{
							printf("\t donner le cout : ");
							scanf("%d",&cont.cout);
						}while(cont.cout<100 || cont.cout>999);
						printf("\t Date de debut de contrat : \n");
						do{
							printf("\t\t Jour : ");
							scanf("%d",&cont.debut.jour);
						}while(cont.debut.jour<1 || cont.debut.jour>30);
						do
						{
							printf("\t\t Mois : ");
							scanf("%d",&cont.debut.mois);
						}while(cont.debut.mois<1 || cont.debut.mois>12);
						do
						{
							printf("\t\t Annee : ");
							scanf("%d",&cont.debut.annee);
						}while(cont.debut.annee<2000 || cont.debut.annee>2020);
						printf("\t Date de fin de contrat : \n");
						do
						{
							printf("\t\t Jour : ");
							scanf("%d",&cont.fin.jour);
						}while(cont.fin.jour<1 || cont.fin.jour>30);
						do{
							printf("\t\t Mois : ");
							scanf("%d",&cont.fin.mois);
						}while(cont.fin.mois<1 || cont.fin.mois>12);
						do{
							printf("\t\t Annee : ");
							scanf("%d",&cont.fin.annee);
						}while(cont.fin.annee<2000 || cont.fin.annee>2020);
					
						contra = fopen("contrat.txt","a+");
						{
							fprintf(contra,"\nnum:%f  id voiture:%d  id client:%d  cout:%d  Date Debut:%d/%d/%d  Date Fin:%d/%d/%d",cont.numContrat,cont.idVoiture,cont.idClient,cont.cout,cont.debut.jour,cont.debut.mois,cont.debut.annee,cont.fin.jour,cont.fin.mois,cont.fin.annee);
							fclose(contra);
						}
						fclose(ouvre);
						
					}
				}
				else   // s'il ne trouve pas ses informations dans le première ligne ,il passe au suivant
				{
					i+=112;
				}
			}
		}
		else			// et s'il ne trouve jamais ses informations dans la liste des clients il va ressaisir ses propres info ici
		{
			printf("\n-------------------------------------creation de client--------------------------------------------------------\n\n");
			do
			{
				printf("\t l'id du client : ");
				scanf("%d",&c.idClient);
			}while(c.idClient<0 || c.idClient>99);
 			printf("\t le nom du client (!! max des caracteres 8 !!) : ");
 			scanf("%s",c.nom);
 			printf("\t le prenom du client (!! max des caracteres 10 !!) : ");
 			scanf("%s",c.prenom);
 			do
			{
				printf("\t CIN  : ");
		    	scanf("%d",&c.cin);
			}while(c.cin <00000 || c.cin >99999);
 			printf("\t l'adresse (!! max des caracteres 10 !!) : ");
 			scanf("%s",c.adresse);
 			do
 			{
 				printf("\t numero de telephone : ");
 				scanf("%d",&c.telephone);
			}while(c.telephone<0000000000 || c.telephone>9999999999);
		

			fichier=fopen("clients.txt","a+");
	   		{
						
				fprintf(fichier,"\nl'id du client:%d,Nom:%s,Prenom:%s,cin:%d,l'adresse:%s,numero de telephone:%d",c.idClient,c.nom,c.prenom,c.cin,c.adresse,c.telephone);
        	}
	    	fclose(fichier);
	    	
	    	// les memes étapes sont répètés
	    	printf("\n-------------------------------------------verification du voiture-------------------------------------------\n");
				
			printf("\n donner l'id du voiture a rechercher : ");
			scanf("%d",&id);
			printf("\n\n");
			ouvre = fopen("ajout.txt","r");
			printf("\n------------------------------------liste des voitures------------------------------------------\n\n");
			while(fgets(chaine,t_max,ouvre) != NULL)
 			{
 				printf("%s \n",chaine);
			}
			fclose(ouvre);
			do
			{	
				printf("\n est ce que vous avez trouvee votre id dans cette liste (oui = 1 || non = 0) : ");
 				scanf("%d",&g);
			}while(g != 1 && g != 0);
			if(g == 1)
			{
				printf("\n donner le numero de ligne ou il y a la voiture a Louer : ");
				scanf("%d",&nb);
					
				while(i<nb*109)
				{
					ouvre = fopen("ajout.txt","r");
					fseek(ouvre,i,SEEK_SET);
					fgets(chaine,t_max,ouvre);
					printf("\n %s",chaine);
					fclose(ouvre);
						
					do{
						printf("\n est-il la voiture qui choisi le client ? (oui = 1 || non = 0) :  ");
						scanf("%d",&m);
					}while(m != 1 && m !=0);
					if(m == 1)
					{
						do
						{
							printf("\n est-il disponible (oui = 1 || non = 0) : ");
							scanf("%d",&k);
						}while(k != 1 && k != 0);
						if(k == 1)
						{
							printf("\n\t\t Ree-saisir les informations du voiture en changeons la location de non a oui : \n\n");
 	
 							do
 							{
 								printf("\t l'id du voiture : ");
 								scanf("%d",&v.idVoiture);
 							}while(v.idVoiture<1 || v.idVoiture>99);
						 	printf("\t la marque (!! max 6 caracteres) : ");
 							scanf("%s",v.marque);
 							printf("\t le nom de la voiture (!! max 7 caracteres) : ");
 							scanf("%s",v.nomVoiture);
 							printf("\t couleur (!! max 6 caracteres) : ");
 							scanf("%s",v.couleur);
 							do
 							{
 								printf("\t nombre de place : ");
 								scanf("%d",&v.nbrPlace);
 							}while(v.nbrPlace<1 || v.nbrPlace>9);
 							do
 							{
								 printf("\t le prix d'un jour : ");
 								scanf("%d",&v.prixJour);
 							}while(v.prixJour<100 || v.prixJour>999);
							 printf("\t est-il en location (veuillez ecrivez oui) : ");
 							 scanf("%s",v.EnLocation);
 								
 							ouvre = fopen("voit.txt","a+");
 							{
 								fprintf(ouvre,"\nl'id voiture:%d,marque:%s,Nom:%s,couleur:%s,nombre de place:%d,le prix d'un jour:%d$,en location:%s",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbrPlace,v.prixJour,v.EnLocation);
								fclose(ouvre);
							}
							i+=112;
								
							printf("\n--------------------------------------------creation de contrat-----------------------------------------------\n");
 					
							printf("\n\t donner numero de contrat : ");
							scanf("%f",&cont.numContrat);
							do
							{
								printf("\t donner l'id du client : ");
								scanf("%d",&cont.idClient);
							}while(cont.idClient<0 || cont.idClient>99);
							do
							{
								printf("\t donner l'id du voiture : ");
								scanf("%d",&cont.idVoiture);				
							}while(cont.idVoiture<0 || cont.idVoiture>99);
							do
							{
								printf("\t donner le cout : ");
								scanf("%d",&cont.cout);
							}while(cont.cout<100 || cont.cout>999);
							printf("\t Date de debut de contrat : \n");
							do{
								printf("\t\t Jour : ");
								scanf("%d",&cont.debut.jour);
							}while(cont.debut.jour<1 || cont.debut.jour>30);
							do
							{
								printf("\t\t Mois : ");
									scanf("%d",&cont.debut.mois);
							}while(cont.debut.mois<1 || cont.debut.mois>12);
							do
							{
								printf("\t\t Annee : ");
								scanf("%d",&cont.debut.annee);
							}while(cont.debut.annee<2000 || cont.debut.annee>2020);
							printf("\t Date de fin de contrat : \n");
							do
							{
								printf("\t\t Jour : ");
								scanf("%d",&cont.fin.jour);
							}while(cont.fin.jour<1 || cont.fin.jour>30);
							do{
								printf("\t\t Mois : ");
								scanf("%d",&cont.fin.mois);
							}while(cont.fin.mois<1 || cont.fin.mois>12);
							do{
								printf("\t\t Annee : ");
								scanf("%d",&cont.fin.annee);
							}while(cont.fin.annee<2000 || cont.fin.annee>2020);
									
							contra = fopen("contrat.txt","a+");
							{
								fprintf(contra,"\nnum:%f  id voiture:%d  id client:%d  cout:%d  Date Debut:%d/%d/%d  Date Fin:%d/%d/%d",cont.numContrat,cont.idVoiture,cont.idClient,cont.cout,cont.debut.jour,cont.debut.mois,cont.debut.annee,cont.fin.jour,cont.fin.mois,cont.fin.annee);
								fclose(contra);
							}
						}
						else
						{
							printf("\n\n !!! cette voiture est deja louer par un autre personne!!! \n");
							
							ouvre = fopen("voit.txt","a+");
							{
								fprintf(ouvre,"%s",chaine);
								fclose(ouvre);
							}
							i+=112;
						}
					}
					else
					{
						ouvre = fopen("voit.txt","a+");
						{
							fprintf(ouvre,"%s",chaine);
							fclose(ouvre);
						}				
						i+=112;
					}
							
				}
				remove("ajout.txt");
				rename("voit.txt","ajout.txt");
			}
			else
			{
				printf("\n\t\t****************************************voiture introuvable*****************************************\n");
				
				printf("\n-----------------------------------------ajouter une voiture--------------------------------------------\n");
				do
 				{
 					printf("\t l'id du voiture : ");
 					scanf("%d",&v.idVoiture);
 				}while(v.idVoiture<1 || v.idVoiture>99);
			 	printf("\t la marque (!! max 6 caracteres) : ");
 				scanf("%s",v.marque);
 				printf("\t le nom de la voiture (!! max 7 caracteres) : ");
 				scanf("%s",v.nomVoiture);
 				printf("\t couleur (!! max 6 caracteres) : ");
 				scanf("%s",v.couleur);
 				do
 				{
 					printf("\t nombre de place : ");
 					scanf("%d",&v.nbrPlace);
 				}while(v.nbrPlace<1 || v.nbrPlace>9);
 				do
 				{
					 printf("\t le prix d'un jour : ");
 					scanf("%d",&v.prixJour);
 				}while(v.prixJour<100 || v.prixJour>999);
				 printf("\t est-il en location (veuillez ecrivez oui) : ");
 				 scanf("%s",v.EnLocation);
 						
 				ouvre = fopen("ajout.txt","a+");
 				{
 					fprintf(ouvre,"\nl'id voiture:%d,marque:%s,Nom:%s,couleur:%s,nombre de place:%d,le prix d'un jour:%d$,en location:%s",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbrPlace,v.prixJour,v.EnLocation);
					fclose(ouvre);
				}
			
				printf("\n--------------------------------------------creation de contrat-----------------------------------------------\n");
			
				printf("\n\t donner numero de contrat : ");
				scanf("%f",&cont.numContrat);
				do
				{
					printf("\t donner l'id du client : ");
					scanf("%d",&cont.idClient);
				}while(cont.idClient<0 || cont.idClient>99);
				do
				{
					printf("\t donner l'id du voiture : ");
					scanf("%d",&cont.idVoiture);				
				}while(cont.idVoiture<0 || cont.idVoiture>99);
				do
				{
					printf("\t donner le cout : ");
					scanf("%d",&cont.cout);
				}while(cont.cout<100 || cont.cout>999);
				printf("\t Date de debut de contrat : \n");
				do{
					printf("\t\t Jour : ");
					scanf("%d",&cont.debut.jour);
				}while(cont.debut.jour<1 || cont.debut.jour>30);
				do
				{
					printf("\t\t Mois : ");
					scanf("%d",&cont.debut.mois);
				}while(cont.debut.mois<1 || cont.debut.mois>12);
				do
				{
					printf("\t\t Annee : ");
					scanf("%d",&cont.debut.annee);
				}while(cont.debut.annee<2000 || cont.debut.annee>2020);
				printf("\t Date de fin de contrat : \n");
				do
				{
					printf("\t\t Jour : ");
					scanf("%d",&cont.fin.jour);
				}while(cont.fin.jour<1 || cont.fin.jour>30);
				do{
					printf("\t\t Mois : ");
					scanf("%d",&cont.fin.mois);
				}while(cont.fin.mois<1 || cont.fin.mois>12);
				do{
					printf("\t\t Annee : ");
					scanf("%d",&cont.fin.annee);
				}while(cont.fin.annee<2000 || cont.fin.annee>2020);
					
				contra = fopen("contrat.txt","a+");
				{
					fprintf(contra,"\nnum:%f  id voiture:%d  id client:%d  cout:%d  Date Debut:%d/%d/%d  Date Fin:%d/%d/%d",cont.numContrat,cont.idVoiture,cont.idClient,cont.cout,cont.debut.jour,cont.debut.mois,cont.debut.annee,cont.fin.jour,cont.fin.mois,cont.fin.annee);
					fclose(contra);
				}
				fclose(ouvre);		
			}
	    	
		}
		
		
 		fclose(fichier);
	}
	
	printf("\n*********************************La location est effectue avec succes********************************************\n");
	
	printf("\n------------------------------------------Merci de votre visite--------------------------------------------------\n");
	
	LocationVoiture();
	
}
	
 // la fonction qui permet de retourner une voiture 
 
void RetournerVoiture()
{
 	FILE *ouvre;
 	FILE *contra;
 	voiture v;
 	char chaine[t_max]="";
 	int nb,id,c,x,k,i=0,j=0;
 	
 	printf("\n---------------------------------------Retourner voiture--------------------------------------------------\n");
 	
    printf("\n donner l'id de la voiture a Retourner : ");
 	scanf("%d",&id);
 	
 	printf("\n-------------------------------------------la liste des voitures-------------------------------------------\n\n");
 	
	ouvre = fopen("ajout.txt","r");
	while(fgets(chaine,t_max,ouvre) != NULL)
 	{
 		printf("%s \n",chaine);
	}
	fclose(ouvre);
	printf("\n***************************************************************************************************************\n");
	do
	{	
		printf("\n est ce que vous avez trouvee votre id dans cette liste (oui = 1 || non = 0) : ");
 		scanf("%d",&k);
	}while(k != 1 && k != 0);
	if(k == 1)
	{
		printf("\n donner le numero de ligne de voiture a Retourner : ");
   		scanf("%d",&nb);
 		while(i<nb*109)
		{
			ouvre = fopen("ajout.txt","r");
			fseek(ouvre,i,SEEK_SET);
			fgets(chaine,t_max,ouvre);
			printf("\n %s",chaine);
			fclose(ouvre);
				
			do
			{
				printf("\n est-il la voiture a Retourner : ");
				scanf("%d",&c);
			}while(c != 1 && c != 0);
			if(c == 1)
			{
 				printf("\n\t\t Ree-saisir les informations du voiture en changeons la location de oui a non : \n\n");
 				do
 				{
 					printf("\t l'id du voiture : ");
 					scanf("%d",&v.idVoiture);
 				}while(v.idVoiture<1 || v.idVoiture>99);
			 	printf("\t la marque (!! max 6 caracteres) : ");
 				scanf("%s",v.marque);
 				printf("\t le nom de la voiture (!! max 7 caracteres) : ");
 				scanf("%s",v.nomVoiture);
 				printf("\t couleur (!! max 6 caracteres) : ");
 				scanf("%s",v.couleur);
 				do
 				{
 					printf("\t nombre de place : ");
 					scanf("%d",&v.nbrPlace);
 				}while(v.nbrPlace<1 || v.nbrPlace>9);
 				do
 				{
					 printf("\t le prix d'un jour : ");
 					scanf("%d",&v.prixJour);
 				}while(v.prixJour<100 || v.prixJour>999);
				 printf("\t est-il en location (veuillez ecrivez non) : ");
 				 scanf("%s",v.EnLocation);
 				
 				ouvre = fopen("voitu.txt","a+");
 				{
 					fprintf(ouvre,"l'id voiture:%d,marque:%s,Nom:%s,couleur:%s,nombre de place:%d,le prix d'un jour:%d$,en location:%s",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbrPlace,v.prixJour,v.EnLocation);
					fclose(ouvre);
				}
				i+=112;
				
				printf("\n\n puisque vous avez retourner cette voiture il faut supprimer la contrat \n");
		
				printf("\n---------------------------------------suppression de contrat-------------------------------------------\n\n");
				
				printf("\n entrer le nombre de contrat que vous avez deja dans votre fichier : ");
				scanf("%d",&nb);
				while(j<nb*89)      			// on affiche ligne par ligne
				{
					contra = fopen("contrat.txt","r");
					fseek(contra,j,SEEK_SET);				
					fgets(chaine,t_max,contra);
					printf("%s",chaine);
					fclose(contra);
		
					printf("\n est ce que cette contrat a le meme de id de voiture ? (oui = 1 || non = 0) : ");
					scanf("%d",&x);
					printf("\n");
		
					if(x == 1)
					{
						j+=89;    // si l'utilisateur veut supprimer une contrat ,on ne met pas cette dernière dans le nouveau fichier
					}
					else
					{
						contra = fopen("cont.txt","a+");
						{
							fprintf(contra,"%s",chaine);
							fclose(contra);
						}
						j+=89;  		//sinon met la contrat dans un nouveau fichier et on passe au ligne suivant
					}
				}
				remove("contrat.txt");     // on supprime le fichier 
				rename("cont.txt","contrat.txt");	 	// et on le renomer		
			}
			else
			{
				ouvre = fopen("voitu.txt","a+");
				{
					fprintf(ouvre,"%s",chaine);
					fclose(ouvre);
				}
				i+=112;
			}
		}
		remove("ajout.txt");
		rename("voitu.txt","ajout.txt");
	}
	else
	{
		printf("\n cette id n'existe pas \n");
	}
	printf("\n*********************************L'operation est effectue avec succes***************************************\n");
	
	printf("\n\n****************************************Merci de votre visite*********************************************\n");
	
	LocationVoiture();
}
 
 //la fonction qui permet de modifier une contrat
 
 void ModifierContrat()
{
	FILE* contra;
	contrat c;
	char chaine[t_max]="";
	int x,nb,k,i=0;
	
	printf("\n entrer le nombre de contrat que vous avez deja dans votre fichier : ");
	scanf("%d",&nb);
	while(i<nb*89)
	{
		contra = fopen("contrat.txt","r");
		fseek(contra,i,SEEK_SET);
		fgets(chaine,t_max,contra);
		printf("\n %s",chaine);
		fclose(contra);
		do{
		printf("\n tu veux modifier quelque chose dans cette contrat ou non ? (oui = 1 || non = 0) : ");
		scanf("%d",&x);
		}while(x != 1 && x != 0);
		if(x == 1)
		{
			printf("\n Ree_saisir les informations et modifier ce que vous voullez \n");
			
			printf("\n\t donner numero de contrat : ");
			scanf("%f",&c.numContrat);
			do
			{
				printf("\t donner l'id du client : ");
				scanf("%d",&c.idClient);
			}while(c.idClient<0 || c.idClient>99);
			do
			{
				printf("\t donner l'id du voiture : ");
				scanf("%d",&c.idVoiture);				
			}while(c.idVoiture<0 || c.idVoiture>99);
			do
			{
				printf("\t donner le cout : ");
				scanf("%d",&c.cout);
			}while(c.cout<100 || c.cout>999);
			printf("\t Date de debut de contrat : \n");
			do{
				printf("\t\t Jour : ");
				scanf("%d",&c.debut.jour);
			}while(c.debut.jour<1 || c.debut.jour>30);
			do
			{
				printf("\t\t Mois : ");
				scanf("%d",&c.debut.mois);
			}while(c.debut.mois<1 || c.debut.mois>12);
			do
			{
				printf("\t\t Annee : ");
				scanf("%d",&c.debut.annee);
			}while(c.debut.annee<2000 || c.debut.annee>2020);
			printf("\t Date de fin de contrat : \n");
			do
			{
				printf("\t\t Jour : ");
				scanf("%d",&c.fin.jour);
			}while(c.fin.jour<1 || c.fin.jour>30);
			do{
				printf("\t\t Mois : ");
				scanf("%d",&c.fin.mois);
			}while(c.fin.mois<1 || c.fin.mois>12);
			do{
				printf("\t\t Annee : ");
				scanf("%d",&c.fin.annee);
			}while(c.fin.annee<2000 || c.fin.annee>2020);
							
			contra = fopen("cont.txt","a+");
			{
				fprintf(contra,"num:%f  id voiture:%d  id client:%d  cout:%d  Date Debut:%d/%d/%d  Date Fin:%d/%d/%d\n",c.numContrat,c.idVoiture,c.idClient,c.cout,c.debut.jour,c.debut.mois,c.debut.annee,c.fin.jour,c.fin.mois,c.fin.annee);
				fclose(contra);
			}
					
			i+=89;
		}
		else
		{
			contra = fopen("cont.txt","a+");
			{
				fprintf(contra,"%s",chaine);
				fclose(contra);
			}
		i+=89;
		}
		
	}
	
	remove("contrat.txt");
	rename("cont.txt","contrat.txt");
	
	printf("\n\n**********************************la modification est effectue avec succes***************************************\n\n");
	
	LocationVoiture();
}

 // pour ce qui suit les memes étapes sont répètés 
 //----------------------------------------------------------Gestion Voiture-------------------------------------------------------------
 //**************************************************************************************************************************************
   int GestionVoiture()
{
	 int choix;
	 
	 printf("\n                                        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
	 printf("\n                                        \xb3 Gestion des Voitures      \xb3");
	 printf("\n                                        \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");
	 
	 printf("\n");
	 
	 printf("\n                       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	 printf("\n                       \xba                                                              \xba");
	 printf("\n                       \xba     Liste des Voitures.................................1     \xba");
	 printf("\n                       \xba     Ajouter voiture....................................2     \xba");	 
	 printf("\n                       \xba     Modifier voiture...................................3     \xba");	 
	 printf("\n                       \xba     Supprimer voiture..................................4     \xba");	 
	 printf("\n                       \xba     Retour.............................................5     \xba");	 
	 printf("\n                       \xba                                                              \xba");
	 printf("\n                       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
	 printf("\n\n                                          Votre choix  :  ");
	 
	 scanf("%d",&choix);
	 system("cls");
	  switch(choix)
	{
		case 1 : ListeVoiture();
			break;
		case 2 : AjouterVoiture();
			break;
		case 3 : ModifierVoiture();
			break;
		case 4 : SupprimerVoiture();
			break;
		case 5 : MenuPrincipal();
			break; 
		default : exit(1); 
   }  
	return choix; 
 }

//-----------------------------------------------------------ses sous fonctions-----------------------------------------------------------

//la fonction qui permet de voir la liste du voiture deja enegistrees

void ListeVoiture(voiture *v,int n)
{
	char chaine[t_max]="";
	FILE* ouvre=NULL;
	ouvre=fopen("ajout.txt","r");
	if(ouvre != NULL)
	{
		printf("\n-------------------------------------------la liste des voitures------------------------------------------------\n\n");
		while(fgets(chaine,t_max,ouvre) != NULL)
		{
		printf("%s \n",chaine);
	    }
	    fclose(ouvre);
	}
	else
	{
		printf("\n ce fichier n'existe pas !!! \n");
	}
	printf("\n\n");
	GestionVoiture();
}

//la fonction qui permet d'ajouter une voiture

void AjouterVoiture()
{
	   voiture v;
	   int i,n;
	    printf("\n entrer le nombre de voiture que vous voullez ajouter : \t");
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
	    	wprintf(L"\n\n la voiture N%lc %d---------------------------------------------------------- \n\n",248,i+1);
	    	do{
				printf("\n\t l'id de la voiture : ");
				scanf("%d",&v.idVoiture);
			}while(v.idVoiture<1 || v.idVoiture>99);
	    	printf("\t la Marque de la voiture (!! max 6 caractere !!) : ");
			scanf("%s",v.marque);
			printf("\t Nom Voiture (!! max 7 caractere !!) : ");
			scanf("%s",v.nomVoiture);
			printf("\t sa couleur (!! max 6 caractere !!) : ");
			scanf("%s",v.couleur);
			do{
				printf("\t nombre de place : ");
				scanf("%d",&v.nbrPlace);
			}while(v.nbrPlace<1 || v.nbrPlace>9);
			do{
				printf("\t prix d'un jour : ");
				scanf("%d",&v.prixJour);
			}while(v.prixJour<100 || v.prixJour>999);
			printf("\t est-il en location ? (oui ou non) : ");
			scanf("%s",v.EnLocation);
		    
		
			FILE *ouvre = fopen("ajout.txt","a+");
	   		{
			printf("\n");
			fprintf(ouvre,"\nl'id voiture:%d,marque:%s,Nom:%s,couleur:%s,nombre de place:%d,prix d'un jour:%d$,en location:%s",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbrPlace,v.prixJour,v.EnLocation);
		    }
		  fclose(ouvre);
    	}
    	printf("\n\n**********************************l'ajout est effectue avec succes***************************************\n\n");
		GestionVoiture();
}

//la fonction qui permet de modifier les information d'une voiture 

void ModifierVoiture()
{
	FILE* ouvre;
	voiture v;
	char chaine[t_max]="";
	int x,c,nb,i=0;
	
	printf("\n-------------------------------------------la liste des voitures------------------------------------------------\n\n");
 	
	ouvre = fopen("ajout.txt","r");
	while(fgets(chaine,t_max,ouvre) != NULL)
 	{
 		printf("%s \n",chaine);
	}
	fclose(ouvre);
	printf("\n*****************************************************************************************************************\n");
	do
	{
		printf("\n tu veux modifier une voiture ou non : ");
		scanf("%d",&c);
	}while(c != 1 && c != 0);
	if(c == 1)
	{
		printf("\n entrer le nombre de voiture que vous avez dans votre fichier : ");
		scanf("%d",&nb);
		while(i<nb*109)
		{
			ouvre = fopen("ajout.txt","r");
			fseek(ouvre,i,SEEK_SET);
			fgets(chaine,t_max,ouvre);
			printf("\n %s",chaine);
			fclose(ouvre);
		
			do{
			printf("\n tu veux modifier les informations de cette voiture ? (oui = 1 || non = 0) : ");
			scanf("%d",&x);
			}while(x != 1 && x != 0);
			if(x == 1)
			{
				printf("\n Ree-saisir les information et changer ce que vous voullez \n");
				do
				{
					printf("\t l'id voiture : ");
					scanf("%d",&v.idVoiture);
				}while(v.idVoiture<1 || v.idVoiture>99);
				printf("\t marque (!! max 6 caractere !!) : ");
				scanf("%s",v.marque);
				printf("\t Nom (!! max 7 caractere !!) : ");
				scanf("%s",v.nomVoiture);
				printf("\t couleur (!! max 6 caractere !!) : ");
			    scanf("%s",v.couleur);
				do
				{
					printf("\t nombre de place  : ");
					scanf("%d",&v.nbrPlace);
				}while(v.nbrPlace<1 || v.nbrPlace>9);
				do
				{
					printf("\t prix d'un jour  : ");
					scanf("%d",&v.prixJour);
				}while(v.prixJour<100 || v.prixJour>999);
				printf("\t est-il en location ? (oui ou non) : ");
				scanf("%s",v.EnLocation);
			
				ouvre = fopen("voiture.txt","a+");
				{
					fprintf(ouvre,"l'id voiture:%d,marque:%s,Nom:%s,couleur:%s,nombre de place:%d,le prix d'un jour:%d$,en location:%s\n",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbrPlace,v.prixJour,v.EnLocation);
					fclose(ouvre);
				}
				i+=112;
			}
			else
			{
				ouvre = fopen("voiture.txt","a+");
				{
					fprintf(ouvre,"%s",chaine);
					fclose(ouvre);
				}
				i+=112;
			}
		}
		remove("ajout.txt");
		rename("voiture.txt","ajout.txt");
		
		printf("\n\n**********************************la modification est effectue avec succes***************************************\n\n");
	}
	else
	{
		printf("\n-------------------------------------------Merci de votre visite------------------------------------------------\n\n");
	}
	
	GestionVoiture();
}

// la fonction qui supprime une voiture

void SupprimerVoiture()
{
	FILE* ouvre;
	voiture v;
	char chaine[t_max]="";
	int x,nb,id,c,i=0;
	
	printf("\n donner l'id de la voiture que vous voullez supprimer : ");
	scanf("%d",&id);
	printf("\n*******************************************************************************************************\n");
	printf("\n entrer le nombre de voiture que vous avez deja dans votre fichier : ");
	scanf("%d",&nb);
	while(i<nb*109)
	{
		ouvre = fopen("ajout.txt","r");
		fseek(ouvre,i,SEEK_SET);
		fgets(chaine,t_max,ouvre);
		printf("\n %s",chaine);
		fclose(ouvre);
		
		printf("\n est ce que cette voiture a le meme id que tu as entree ? (oui = 1 || non = 0) : ");
		scanf("%d",&x);
		printf("\n");
		
		if(x == 1)
		{
			i+=112;
		}
		else
		{
			ouvre = fopen("voit.txt","a+");
			{
				fprintf(ouvre,"%s",chaine);
				fclose(ouvre);
			}
			i+=112;
		}
	}
	remove("ajout.txt");
	rename("voit.txt","ajout.txt");
	
	printf("\n\n**********************************la suppression est effectue avec succes***************************************\n\n");
	
	GestionVoiture();
}

//--------------------------------------------------------Gestion Client-------------------------------------------------------------------
//*****************************************************************************************************************************************
  int GestionClient()
{
	 int choix;
	 
	 printf("\n                                        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
	 printf("\n                                        \xb3 Gestion des Clients      \xb3");
	 printf("\n                                        \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");
	 
	 printf("\n");
	 
	 printf("\n                       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	 printf("\n                       \xba                                                              \xba");
	 printf("\n                       \xba     Liste des clients..................................1     \xba");
	 printf("\n                       \xba     Ajouter client.....................................2     \xba");	 
	 printf("\n                       \xba     Modifier client....................................3     \xba");	 
	 printf("\n                       \xba     Supprimer client...................................4     \xba");	 
	 printf("\n                       \xba     Retour.............................................5     \xba");	 
	 printf("\n                       \xba                                                              \xba");
	 printf("\n                       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
	 printf("\n\n                                          Votre choix  :  ");
	 
	 scanf("%d",&choix);
	 system("cls");
	  switch(choix)
	{
		case 1 : ListeClient();
			break;
		case 2 : AjouterClient();
			break;
		case 3 : ModifierClient();
			break;
		case 4 : SupprimerClient();
			break;
		case 5 : MenuPrincipal();
			break; 
		default : exit(1); 
	
	}
     
	return choix;    

}
 
//-------------------------------------------------ses sous fonctions-------------------------------------------------------------------

// la fonction qui permet d'afficher la liste des clients
 
 void ListeClient(client *v,int n)
{
	char ch[T_MAX]="";
	FILE* fichier=NULL;
	fichier=fopen("clients.txt","r");
	if(fichier != NULL)
	{
		printf("\n\n-----------------------------------------liste des clients---------------------------------------------\n\n");
		while(fgets(ch,T_MAX,fichier) != NULL)
		{
		printf("%s",ch);
	    }
	    fclose(fichier);
	}
	else
	{
		printf("\n ce fichier n'existe pas !!! \n");
	}
	printf("\n\n");
	GestionClient();
}

// la fontion qui permet d'ajouter un client

void AjouterClient()
{
	   client c;
	   int i,n;
	   
	    printf("\n entrer le nombre de client que vous voullez ajouter : \t");
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
	    	wprintf(L"\n\n le client N%lc %d---------------------------------------------------------- \n\n",248,i+1);
	    	do
			{
				printf("\t l'id du client : ");
				scanf("%d",&c.idClient);
			}while(c.idClient<0 || c.idClient>99);
 			printf("\t le nom du client (!! max des caracteres 8 !!) : ");
 			scanf("%s",c.nom);
 			printf("\t le prenom du client (!! max des caracteres 10 !!) : ");
 			scanf("%s",c.prenom);
 			do
			{
				printf("\t CIN  : ");
		    	scanf("%d",&c.cin);
			}while(c.cin <00000 || c.cin >99999);
 			printf("\t l'adresse (!! max des caracteres 10 !!) : ");
 			scanf("%s",c.adresse);
 			do
 			{
 				printf("\t numero de telephone : ");
 				scanf("%d",&c.telephone);
			}while(c.telephone<0000000000 || c.telephone>9999999999);
		
			FILE *fichier = fopen("clients.txt","a+");
	   		{
				printf("\n");
				fprintf(fichier,"client num %d:",i+4);
				fprintf(fichier,"l'id du client:%d,Nom:%s,Prenom:%s,cin:%d,l'adresse:%s,numero de telephone:%d\n",c.idClient,c.nom,c.prenom,c.cin,c.adresse,c.telephone);
		    }
		    fclose(fichier);
    	}
    	printf("\n\n**********************************l'ajout est effectue avec succes***************************************\n\n");
		GestionClient();
}

//la fonction qui permet de modifier les information d'un client

void ModifierClient()
{
	FILE* fichier;
	client v;
	char ch[T_MAX]="";
	int x,nb,c,i=0;
	
	printf("\n-------------------------------------------la liste des clients------------------------------------------------\n\n");
 	
	fichier = fopen("clients.txt","r");
	while(fgets(ch,T_MAX,fichier) != NULL)
 	{
 		printf("%s \n",ch);
	}
	fclose(fichier);
	printf("\n*****************************************************************************************************************\n");
	do
	{
		printf("\n tu veux modifier un client de cette liste ou non : ");
		scanf("%d",&c);
	}while(c != 1 && c != 0);
	if(c == 1)
	{
		printf("\n entrer le nombre de client que vous avez deja dans votre fichier : ");
		scanf("%d",&nb);
		while(i<nb*109)
		{
			fichier = fopen("clients.txt","r");
			fseek(fichier,i,SEEK_SET);
			fgets(ch,T_MAX,fichier);
			printf("\n %s",ch);
			fclose(fichier);
			do{
				printf("\n tu veux modifier les informations de ce client ? (oui = 1 || non = 0) : ");
				scanf("%d",&x);
			}while(x != 1 && x != 0);
			if(x == 1)
			{
				printf("\n Ree-saisir les information que vous voullez \n");
				do
				{
					printf("\t l'id du client : ");
					scanf("%d",&v.idClient);
				}while(v.idClient<0 || v.idClient>99);
				printf("\t Nom (!! max 8 caractere !!) : ");
				scanf("%s",v.nom);
				printf("\t Prenom (!! max 10 caractere !!) : ");
				scanf("%s",v.prenom);
				do
				{
					printf("\t CIN  : ");
		    		scanf("%d",&v.cin);
				}while(v.cin <00000 || v.cin >99999);
				printf("\t l'adresse (!! max 10 caractere !!) : ");
				scanf("%s",v.adresse);
				do{
					printf("\t numero de telephone  : ");
					scanf("%d",&v.telephone);
				}while(v.telephone<0000000000 || v.telephone>9999999999);
			
				fichier = fopen("cli.txt","a+");
				{
					fprintf(fichier,"l'id du client:%d,Nom:%s,Prenom:%s,cin:%d,l'adresse:%s,numero de telephone:%d\n",v.idClient,v.nom,v.prenom,v.cin,v.adresse,v.telephone);
					fclose(fichier);
				}
				i+=112;
			}
			else
			{
				fichier = fopen("cli.txt","a+");
				{
					fprintf(fichier,"%s",ch);
					fclose(fichier);
				}
			i+=112;
			}
		}
		remove("clients.txt");
		rename("cli.txt","clients.txt");
	
		printf("\n\n**********************************la modification est effectue avec succes***************************************\n\n");
	}
	else
	{
		printf("\n***********************************************Merci de votre visite******************************************\n");
	}
	
	GestionClient();
}

// la fonction qui permet de supprimer un client

void SupprimerClient()
{
	FILE* fichier;
	client v;
	char ch[T_MAX]="";
	int x,nb,id,c,i=0;
	
	printf("\n donner l'id du client que tu veux supprimer : ");
	scanf("%d",&id);
	printf("\n***************************************************************************************************\n");
	printf("\n\n entrer le nombre de client que vous avez deja dans votre fichier : ");
	scanf("%d",&nb);
	
	while(i<nb*109)
	{
		fichier = fopen("clients.txt","r");
		fseek(fichier,i,SEEK_SET);
		fgets(ch,T_MAX,fichier);
		printf("\n %s",ch);
		fclose(fichier);
		do{
		printf("\n est ce que ce client a le meme id que tu as entree ? (oui = 1 || non = 0) : ");
		scanf("%d",&x);
		}while(x != 1 && x != 0);
		printf("\n");
		
		if(x == 1)
		{
			i+=112;
		}
		else
		{
			fichier = fopen("cli.txt","a+");
			{
				fprintf(fichier,"%s",ch);
				fclose(fichier);
			}
			i+=112;
		}
	}
	remove("clients.txt");
	rename("cli.txt","clients.txt");
	
	printf("\n\n**********************************la suppression est effectue avec succes***************************************\n\n");

	GestionClient();
}
//***********************************************-------Fin------************************************************************************
