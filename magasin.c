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


int main()
{
    char prenom[100];

    int xp = 0;
    int choix ;
    int itemachat ;
    int argentJoueur = 500;

    printf("Comment t'appelles-tu ? ");
    scanf("%s", prenom);
    printf("Salut %s, je suis heureux de te rencontrer !", prenom);
    printf("Ta jauge d'xp est a %d \n", xp);

   while (argentJoueur > 0){

    printf("Veux-tu m'acheter quelque chose ? \n [1] oui \n [2] non");
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

    		if (itemachat == 1){
    			printf("Okay Niquel Vla l'epee \n");
    			argentJoueur = argentJoueur - epee.prix;
    			printf("Il te reste %d\n", argentJoueur);
    		}

    		if (itemachat == 2){
    			printf("Okay Perfect Vla le bouclier %n");
    			argentJoueur = argentJoueur - bouclier.prix;
    			printf("Zyva il te reste %d\n", argentJoueur );
    		}

    		if (itemachat == 3){
    			printf("... Eu... ok, voilà la potion %n");
    			argentJoueur = argentJoueur - potion.prix;
    			printf("Zyva il te reste %d\n", argentJoueur );
    		}

    		if (itemachat == 4){
    			printf("Okay zyva la Lance %n");
    			argentJoueur = argentJoueur - lance.prix;
    			printf("Zyva il te reste %d\n", argentJoueur );
    		}

    		if (itemachat == 5){
    			printf("'Kay vla l'armure, protège toi bien ptit chou %n");
    			argentJoueur = argentJoueur - armure.prix;
    			printf("Zyva il te reste %d\n", argentJoueur );
    		}

    		if (itemachat == 6){
    			printf("OH OUI PRENDS CETTE HORREUR ! ... hum, je veux dire... Un choix judicieux. %n");
    			argentJoueur = argentJoueur - peluche.prix;
    			printf("Zyva il te reste %d\n", argentJoueur );
    		}
	}

	if (choix == 2){
		printf("Veux-tu vendre dans ce cas ?");
	}

		}

		if (argentJoueur <= 0){
			printf("T'as plus d'argent fdp \n");
			printf(" *Vous etes jete dehors* \n");
		}





    return 0;
}