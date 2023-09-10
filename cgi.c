#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	FILE* file=fopen("sauvegarde.txt", "a+");
	FILE* fic=fopen("sauvegarde.csv", "a+");
	if(file ==NULL || fic==NULL)
		exit(1);
	printf("Content-type: text/html\n\n");
printf("<HTML>\n");
	printf("<HEAD>\n");
		printf("<TITLE>Formulaire d'inscirption MIT</TITLE>\n");
	printf("<meta charset=UTF-8 />");
	printf("</HEAD>\n");

	printf("<BODY BGCOLOR>\n");
		printf("<P>&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;\n");
		//printf("<IMG SRC=UnivMIT.jpg /> \n");
		printf("</P>\n");
		printf("<TABLE >\n");
			printf("<TR >\n");
				printf("<TD cellpadding=10 cellspacing=0>\n");
					printf("<P>&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;</P>\n");
					//printf("<IMG src=MIT.svg WIDTH=250 HEIGHT=350 />\n");
				printf("</TD>\n");
				printf("<TD BGCOLOR=#FFEECC WIDTH=950 >\n");
       char* queryString=getenv("QUERY_STRING");
        char name[50];
	char prenom[50];
	char birthday[15];
	char toerana[50];
	char lieu[50];
	char genre[10];
	char cin[20];
	char Livre[50];
	char mail[50];
	char numero[20];
	char numInscrip[10];
	char serie[8];
	char anne[10];
	char mention[15];
	char moyenne[10];
	char centre[20];

        if(queryString != NULL){
        //printf("<p>Voici le queryString: %s</p>",queryString);
	sscanf(queryString, "nom=%[^&]&prenom=%[^&]&birthday=%[^&]&lieu=%[^&]&toerana=%[^&]&genre=%[^&]&CIN=%[^&]&Livre=%[^&]&mail=%[^&]&NUMERO=%[^&]&numDINSCRI=%[^&]&serie=%[^&]&anne=%[^&]&mention=%[^&]&moyenne=%[^&]&Centre=%[^&]",name,prenom,birthday,lieu,toerana,genre,cin,Livre,mail,numero,numInscrip,serie,anne,mention,moyenne,centre);
	fprintf(file,"Nom:%s\nPrénom:%s\n",name,prenom); fprintf(fic,"%s;%s;",name,prenom);
	fprintf(file,"Date de naissance:%s\nLieu de naissance:%s\nAdresse:%s\n",birthday,toerana,lieu); fprintf(fic,"%s;%s;%s;",birthday,toerana,lieu);
	if(strcmp(genre,"1")==0){
		fprintf(file,"Genre:HOMME\n"); 
		fprintf(fic,"HOMME;");
	}
	if(strcmp(genre,"2")==0){
		fprintf(file,"Genre:FEMME\n"); 
		fprintf(fic,"FEMME;");
	}
	fprintf(file,"Numéro CIN:%s Délivré à %s\n",cin,Livre); 
	fprintf(fic,"%s;%s;",cin,Livre);
	char nameMail[20];
	for(int i=0;i<strlen(mail);i++){
		nameMail[i]=mail[i];
		if(mail[i]='%')
		   break;
	}
	//fprintf(file,"Adresse mail:%s\n",strcat(nameMail,"@gmail.com"));
	fprintf(file,"Adresse mail:%s\n",mail); fprintf(fic,"%s;",mail);
	fprintf(file,"Numero téléphone:%s\n",numero); fprintf(fic,"%s;",numero);
	fprintf(file,"Numero d'inscription du BACC:%s et série du BACC:%s \n",numInscrip,serie); fprintf(fic,"%s;%s;",numInscrip,serie);
	fprintf(file,"Année d'obtention du BACC:%s\n",anne); fprintf(fic,"%s;",anne);
	if(strcmp(mention,"1")==0){
	fprintf(file,"Mention:Très Bien\n"); 
	fprintf(fic,"Très Bien;");
	}
	if(strcmp(mention,"2")==0){
	fprintf(file,"Mention:Bien\n");
	fprintf(fic,"Bien;");
	}
	if(strcmp(mention,"3")==0){
        fprintf(file,"Mention:Assez-Bien\n"); 
	fprintf(fic,"Assez Bien;");
	}
	if(strcmp(mention,"4")==0){
        fprintf(file,"Mention:Passable\n"); 
	fprintf(fic,"Passable;");
	}
	fprintf(file,"Moyenne du Bacc:%s\n",moyenne); fprintf(fic,"%s;",moyenne);
	fprintf(file,"Centre du BACC:%s\n",centre); fprintf(fic,"%s\n",centre);
	fprintf(file,"\n\n       ------------------------------------------------------------------\n\n");
	
	//printf("<p>Bienvenu %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s </p>",name,prenom,birthday,lieu,toerana,genre,cin,Livre,mail,numero,numInscrip,serie,anne,mention,moyenne,centre);

}

					printf("<FONT SIZE=6 COLOR=BROWN>&emsp;&emsp;&emsp;&emsp;&emsp;FORMULAIRE D'INSCRIPTION MIT</FONT>\n");
					printf("<P>&emsp;&emsp;Pour être un(e) candidat(e) dans l'entrée en MIT, veuillez bien remplir avec les vraies réponses cette formulaire d'inscription.\n");
					printf("En cas d'erreur ou bug dans le remplissage de ce formulaire. Veulliez nous envoyer le problème dans cette addresse:\n");
					printf("<MARK>briceprivat292@gmail.com</MARK>.<BR>\n");
					printf("&emsp;&emsp;Merci de votre compréhension!!!\n");
					printf("</P>\n");
					printf("<FORM METHOD=\"get\" ACTION=\"cgi.cgi\"> \n");
						printf("<UL> \n");
							printf("<LI> \n");
								printf("<H2><U>Données Personnelles:</U></H2>\n");
								printf("<H3>NOM:&nbsp;<INPUT TYPE=text NAME=\"nom\" VALUE=Brice />&emsp;&emsp;&emsp;&emsp;PRÉNOM:&nbsp;<INPUT TYPE=text NAME=\"prenom\" VALUE=Privat /></H3>\n");
								printf("<H3>&emsp;&emsp;DATE DE NAISSANCE:&nbsp;<INPUT TYPE=date VALUE=JJ/MM/AA/ NAME=birthday ></H3>\n");
								printf("<H3>&emsp;&emsp;&emsp;&emsp;ET LIEU DE NAISSANCE:&nbsp;<INPUT TYPE=text NAME=lieu VALUE=Toamasina /></H3>\n");
								printf("<H3>ADRESSE:&nbsp;<INPUT TYPE=text NAME=toerana VALUE=Ambohimahitsy />&emsp;&emsp;GENRE:&nbsp;<SELECT NAME=genre >\n");
									printf("<OPTION VALUE=1 ><P>HOMME</P></OPTION>\n");
									printf("<OPTION VALUE=2 ><P>FEMME</P></OPTION>\n");
								printf("</SELECT>\n");
								printf("</H3>\n");
								printf("<H3>Num&eacute;ro CIN:&nbsp;<INPUT TYPE=text VALUE=12456456456 NAME=CIN />&nbsp;D&eacute;livr&eacute;&nbsp;&agrave;&nbsp;<INPUT TYPE=text NAME=Livre VALUE=Ambohimangakely /></H3>\n");
								printf("<H3>\n");
								printf("ADRESSE E-MAIL:&nbsp;<INPUT TYPE=text NAME=\"mail\"  />&nbsp;NUMÉRO TÉLÉPHONE:&nbsp;<INPUT TYPE=tel VALUE=261340998567 NAME=NUMERO />\n");
								printf("</H3>\n");
							printf("</LI>\n");
							printf("<LI>\n");
								printf("<H2><U>Information du bacclauréat:</U></H2>\n");
								printf("<H3>Numéro d'inscription du BACC:&nbsp;<INPUT TYPE=number NAME=numDINSCRI VALUE=3704075 />&emsp;Serie du Bacc:&nbsp;<SELECT NAME=serie >\n");
									printf("<OPTION VALUE=S >S</OPTION>\n");
									printf("<OPTION VALUE=C >C</OPTION>\n");
								printf("</SELECT>\n");
								printf("</H3>\n");
								printf("<H3>&nbsp;Annee obtentoin du BACC:&nbsp;\n");
									printf("<SELECT NAME=anne >\n");
										printf("<OPTION VALUE=2021 >2021</OPTION>\n");
										printf("<OPTION VALUE=2022 >2022</OPTION>\n");
										printf("<OPTION VALUE=2023 >2023</OPTION>\n");
									printf("</SELECT>\n");
									printf("&emsp;Mention au Bacc\n");
									printf("<SELECT NAME=mention >\n");
										printf("<OPTION VALUE=1 >Très Bien</OPTION>\n");
										printf("<OPTION VALUE=2 >Bien</OPTION>\n");
										printf("<OPTION VALUE=3 >Assez Bien</OPTION>\n");
										printf("<OPTION VALUE=4 >Passable</OPTION>\n");
									printf("</SELECT>	\n");
								printf("</H3>\n");
								printf("<H3>Moyenne au BACC:&nbsp;<INPUT TYPE=text VALUE=14.44 NAME=moyenne SIZE=5/>&emsp;Centre du BACC:&nbsp;<INPUT TYPE=text VALUE=Ambohipo NAME=\"Centre\" SIZE=25/></H3>\n");
							printf("</LI>\n");
						printf("</UL>\n");
						printf("<BR>\n");
						printf("<Strong>\n");
							printf("Après avoir <u>bien remplie</u> la formulaire d'inscription et <u>la bien verifiée</u>, veuillez cliquez sur ce bouton pour\n");
							printf("confirmer votre candidature dans la Mention Informatique et Technologie \n");
							printf("<BR>Pour plus d'inofrmations:\n");
							printf("<UL>\n");
								printf("<LI><A href=http://misa-madagascar.com/>&nbsp;MISA</A></LI>\n");
								printf("<LI><A href=https://www.facebook.com/profile.php?id=100084982487450>&nbsp;MIT</A></LI>\n");
							printf("</UL>\n");
						printf("</Strong>\n");
						printf("<BR>\n");
						printf("<BR>\n");
						printf("<BR>\n");
						printf("&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;\n");
						printf("<INPUT TYPE=submit VALUE=Confirmation WIDTH=100 HEIGHT=75>\n");
					printf("</FORM>\n");
				printf("</TD>\n");
				printf("<TD>\n");
					//printf("<IMG SRC=MIT.svg WIDTH=250 HEIGHT=350/>\n");
				printf("</TD>\n");
			printf("</TR>\n");
		printf("</TABLE>\n");
printf("	</BODY>\n");

printf("</HTML>\n");
	fclose(file);
	fclose(fic);
	return 0;
}
