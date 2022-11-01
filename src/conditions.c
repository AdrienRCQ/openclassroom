int verifage(int argc, char *argv[])
{
int age = 0; // On initialise la variable à 0
printf("Quel age avez-vous ? ");
scanf("%d", &age); // On demande d'entrer l'âge avec scanf
printf("Ah ! Vous avez donc %d ans !\n\n", age);

switch (age)
{
case 2:
  printf("Salut bebe !");
  break;
case 6:
  printf("Salut gamin !");
  break;
case 12:
  printf("Salut jeune !");
  break;
case 16:
  printf("Salut ado !");
  break;
case 18:
  printf("Salut adulte !");
  break;
case 68:
  printf("Salut papy !");
  break;
default:
  printf("Je n'ai aucune reponse pour ton age");
  break;
}
}