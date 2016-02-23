# Complexity
Projet en complexite : implementation et comparaison d'algorithmes
Thibault Beziers la Fosse
Master 1 ALMA 
Université de Nantes

20/02/2015

Ce projet implémente 4 algorithmes différents calculant le maximum local d'un tableau de taille variables.
Les 4 algorithmes sont variables en compléxités, et ainsi les temps d'exécution sont différents selon l'algorithme utilisé.

Deux versions du programme sont disponibles, l'une a été réalisée avec NetBeans, et fonctionne en terminal, en exécutant le programme avec des paramètres indiquant l'algorithme à utiliser, et la taille du tableau.
L'autre a été réalisé avec une interface graphique simpliste avec Qt.
Ne sachant pas comment compiler avec un seul makefile dans un seul répertoire, la localisation des makefile et des executables générés par les IDE est indiquée :

############# 1 - Build #################

~~~~ 1- Version en Terminal

depuis la racine du projet:
cd AlgorithmCompare
make

cd dist/Debug/GNU-Linux-x86
./algorithmcompare A B
A : numero de l'algorithme (même ordre que dans le sujet)
B : taille des données

~~~~ 2- Version avec interface graphique (QT 3.2+)
Depuis puis la racine du projet, exécuter:

cd Qt/build-ComplexityProject-Desktop-Debug/
make
./ComplexityProject

############# 2 - Valeurs d'essai #################
Pour chaque algorithme seront indiquées la taille minimum des données pour avoir un temps d'exécution d'au moins 1ms, et la taille maximum jusqu'au crash du programme par manque de mémoire, ou bien lorsque le temps d'exécution est trop long (> 60secondes)
Evidemment, les temps peuvent varier selon la machine utilisée. De plus, l'algorithme est effectué sur 10 tableaux de même taille, mais avec des données différentes qui sont redéfinies aléatoirement entre chaque calcul de MaxSomme: Si bien que ça peut devenir très long (Jusqu'à 10 minutes! ) avec la taille des données maximum pour certains algorithmes.

~~~~~~~~~~ Algorithme 1 : O(n^3)
Taille minimum: 200 ~1ms
Taille maximum: 13 500 ~57ms

~~~~~~~~~~ Algorithme 2 : O(n^2)
Taille minimum: 200 ~1ms
Taille maximum: 45 000 ~9ms

~~~~~~~~~~ Algorithme 3 : O(n log n)
Taille minimum: 10 000 ~1ms
Taille maximum: 250 000 000 ~30s

~~~~~~~~~~ Algorithme 4 : O(n)
Taille minimum: 20 000 ~1ms
Taille maximum: 250 000 000 ~9s




