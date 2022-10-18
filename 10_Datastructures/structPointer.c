#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct piste {
  int koordinaatit[3];
  struct piste *seuraava;
};

struct polku {
  double matka;
  struct piste *pisteet;
};

 void laske_kuljettu_matka(struct polku *polku);
 double distanceToNextPiste(struct piste *fromPiste);
 int main()
 {
     struct polku testPath;
     struct piste piste1 = {{1, 2, 3}, NULL};
     struct piste piste2 = {{4, 5, 6}, NULL};
     struct piste piste3 = {{1, 2, 3}, NULL};

     piste1.seuraava = &piste2;
     piste2.seuraava = &piste3;

     testPath.pisteet = &piste1;

     laske_kuljettu_matka(&testPath);

     printf("%f", testPath.matka);

     return 0;
}

 void laske_kuljettu_matka(struct polku *polku)
 {
     struct piste *currentPoint = polku->pisteet;
     double total = 0;

     while (currentPoint->seuraava != NULL)
     {
         total += distanceToNextPiste(currentPoint);
         currentPoint = currentPoint->seuraava;
     }
     polku->matka = total;
 }

 double distanceToNextPiste(struct piste *fromPiste)
 {
     return sqrt(pow(fromPiste->koordinaatit[0] - fromPiste->seuraava->koordinaatit[0], 2) + pow(fromPiste->koordinaatit[1] - fromPiste->seuraava->koordinaatit[1], 2) + pow(fromPiste->koordinaatit[2] - fromPiste->seuraava->koordinaatit[2], 2));
 }