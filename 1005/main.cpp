#include <iostream>

/*
 * Sejam P1 a nota da prova de peso "a" e P2 a nota da prova de peso "b".
 * Então, a média ponderada procurada é: M = (a.P1 + b.P2)/(a + b).
 */

#define PESOA 3.5
#define PESOB 7.5

using namespace std;

int main(int argc, char *argv[])
{
    double notaA, notaB;
    cin >> notaA;
    cin >> notaB;
    cout.precision(5);
    cout << "MEDIA = " << fixed << ( (PESOA*notaA + PESOB*notaB)/(PESOA+PESOB)) << endl;
    return 0;
}
