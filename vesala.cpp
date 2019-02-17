#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    // Resenje je string koji mi odredjujemo sami na pocetku
    // Trenutni oznacava koliko smo slova pogodili do sada, na pocetku su to zvezdice
    string resenje = "petica", trenutni = "*****";
    int zivoti = 5, duzina_resenja = resenje.length();
 
    while(zivoti && resenje != trenutni){
 
        cout << "Unesite slovo/rec: \n";
 
        string pokusaj;
        cin >> pokusaj;
 
 
        // Ukoliko je duzina pokusaja veca od 1 to znaci da
        // Igrac ne pokusava da pogodi slovo vec celu rec
        // Pa je potrebno samo proveriti da li je pogodio
 
        int duzina_pokusaja = pokusaj.length();
        if (duzina_pokusaja > 1){
           
            if (pokusaj == resenje){
                trenutni = pokusaj;
            } else {
                zivoti -= 1;
                cout << "Pogresili ste!\n";
            }
        }
 
        // Sa druge strane, ako je duzina pokusaja jedan
        // Treba proveriti gde se sve nalazi to slovo u resenju
        // I prepisati to u trenutni string
 
        // Popunjeno nam oznacava da li se negde u resenju nalazi to slovo (1 ako ga ima, 0 ako ne)
 
        if (duzina_pokusaja == 1){
            int popunjeno = 0;
            char slovo = pokusaj[0];
 
            // Napravimo novi string takav da
            // Je svuda jednak sa trenutnim i da mu dodamo pogodjeno slovo
 
            string pomocni = "";
            for (int brojac = 0; brojac < duzina_resenja; brojac += 1){
                if (resenje[brojac] == pokusaj[0]){
                    pomocni += pokusaj[0];
                    popunjeno = 1;
                } else {
                    pomocni += trenutni[brojac];
                }
            }
            trenutni = pomocni;
 
            if (popunjeno == 0){
                cout << "Pogresili ste!\n";
                zivoti -= 1;
            }
        }
 
        cout << "\nTrenutna rec: " << trenutni << '\n';
        cout << "Imate jos: " << zivoti << " zivota\n\n";
    }
 
    if (zivoti == 0){
        cout << "Izgubili ste\n";
    } else {
        cout << "Cestitamo\n";
    }
}
