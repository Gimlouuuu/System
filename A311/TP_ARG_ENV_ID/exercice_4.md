#TP_ARG_ENV_ID
#Made by Remy Aune
#08/09/2017

Exercice 4 : 
	- La commande ID nous affiche (de ce que je comprends) les IDs des differents utilisateurs du système.
	- On y voit les IDs de ma session et de sudo par exemple.

	- En le comparant avec '$cat /etc/passwd' j'ai l'impression que cela affiche la même chose, la commande ID doit simplifier l'affichage.

Après reflexion avec le professeur :
	- Chaque session est identifié par un ID unique, qui appartient à un ou plusieurs ID(s) de groupe.
	- nsswitch.conf nous informe de la manière dont le systeme va nous attribuer un ID.
