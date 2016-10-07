#include <iostream>

/*
 * Sejam P1 a nota da prova de peso "a" e P2 a nota da prova de peso "b".
 * Então, a média ponderada procurada é: M = (a.P1 + b.P2)/(a + b).
 */

#define PESOA 2
#define PESOB 3
#define PESOC 5

using namespace std;

int main(int argc, char *argv[])
{
    double notaA, notaB, notaC;
    cin >> notaA;
    cin >> notaB;
    cin >> notaC;
    cout.precision(1);
    cout << "MEDIA = " << fixed << ( (PESOA*notaA + PESOB*notaB + PESOC*notaC)/(PESOA+PESOB+PESOC)) << endl;
    return 0;
}
