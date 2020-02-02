#include <stdio.h>
#include <string.h>

struct Objet{
	char nomObjet[100]; 
	int prix;
	char caracteristique[100];
};
typedef struct Objet objet;

objet epee = {"Epee de feu", 100, "Une epee flamboyante"};
objet bouclier = {"Bouclier des Abysses",130, "Un bouclier rapporte des enfers"};
objet potion = {"Potion des horreurs",200, "Un poison si puissant qu'il ferait hurler satan"};
objet lance = {"Lance du tonnerre",140, "Deferle un puissant orage sur vos ennemis"};
objet armure = {"Armure en fer",130, "Une armure pas farouche"};
objet peluche = {"Peluche",50, "Elle vous regarde dormir la nuit"};

strncmp(charArray1,charArray2,20);

int main()
{
  char prenom[100];
  int xp = 0;
  int choix ;
  int itemachat ;
  int argentJoueur = 500;
	
	int epee1 = 0;
	int bouclier1 = 0;
	int potion1 = 0;
	int lance1 = 0;
	int armure1 = 0;
	int peluche1 = 0;
	
  printf("Comment t'appelles-tu ? ");
  scanf("%s", prenom);
  printf("Salut %s, je suis heureux de te rencontrer !", prenom);
  printf("Ta jauge d'xp est a %d \n", xp);
  
  
  while (argentJoueur > 0){
    printf("Veux-tu m'acheter quelque chose ? \n [1] oui \n [2] non \n [3] Voir votre inventaire");
    scanf("%d", &choix);
	
    if (choix == 1){
    	printf("Que veux-tu acheter %s ?\n", prenom);
    	printf(" [1] %s | %d | %s \n", epee.nomObjet, epee.prix, epee.caracteristique);
    	printf(" [2] %s | %d | %s \n", bouclier.nomObjet, bouclier.prix, bouclier.caracteristique);
    	printf(" [3] %s | %d | %s \n", potion.nomObjet, potion.prix, potion.caracteristique);
    	printf(" [4] %s | %d | %s \n", lance.nomObjet, lance.prix, lance.caracteristique);
    	printf(" [5] %s | %d | %s \n", armure.nomObjet, armure.prix, armure.caracteristique);
    	printf(" [6] %s | %d | %s \n", peluche.nomObjet, peluche.prix, peluche.caracteristique);
    	scanf("%d", &itemachat);
		
		  switch (itemachat){
				case 1:
					printf("Okay Niquel Vla l'epee \n");
					argentJoueur = argentJoueur - epee.prix;
					epee1 = epee1 + 1;
					printf("Il te reste %d\n", argentJoueur);
				break;
				
				case 2:
					printf("Okay Perfect Vla le bouclier \n");
					argentJoueur = argentJoueur - bouclier.prix;
					bouclier1 = bouclier1 + 1;
					printf("Zyva il te reste %d\n", argentJoueur );
				break;

				case 3:
					printf("... Eu... ok, voilà la potion \n");
					argentJoueur = argentJoueur - potion.prix;
					potion1 = potion1 + 1;
					printf("Zyva il te reste %d\n", argentJoueur );
				break;
				
				case 4:
					printf("Okay zyva la Lance \n");
					argentJoueur = argentJoueur - lance.prix;
					lance1 = lance1 + 1;
					printf("Zyva il te reste %d\n", argentJoueur );

				case 5:
					printf("'Kay vla l'armure, protège toi bien ptit chou \n");
					argentJoueur = argentJoueur - armure.prix;
					armure1 = armure1 + 1;
					printf("Zyva il te reste %d\n", argentJoueur );
				break;

				case 6:
					printf("OH OUI PRENDS CETTE HORREUR ! ... hum, je veux dire... Un choix judicieux. \n");
					argentJoueur = argentJoueur - peluche.prix;
					peluche1 = peluche1 + 1;
					printf("Zyva il te reste %d\n", argentJoueur );
				break;
	    }
    }else if (choix == 2){
		  printf("Veux-tu vendre dans ce cas ?");
	  }else if (choix == 3){
	
		printf("Vous possédez \n %d %s \n", epee1, epee.nomObjet);
		printf("\n %d %s \n", bouclier1, bouclier.nomObjet);
    	printf("\n %d %s \n", potion1, potion.nomObjet);
    	printf("\n %d %s \n", lance1, lance.nomObjet);
    	printf("\n %d %s \n", armure1, armure.nomObjet);
    	printf("\n %d %s \n", peluche1, peluche.nomObjet);
	  }
	}
	if (argentJoueur <= 0){
		printf("T'as plus d'argent fdp \n *Vous etes jete dehors* \n");
	}
    return 0;
}