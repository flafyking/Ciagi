#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;


int main()
{

    vector <int> tab;
    ifstream plik;
    long int max = 0;
    long int min = 100000000000;
    string line;

    plik.open("C:\\dane4.txt");

    if (plik.is_open())
    {
        while (getline(plik, line))
        {
            tab.push_back(stoi(line));
            }
        }
        plik.close();
        
        for (int i = 0; i < tab.size() - 1; i++) {
            cout << tab[i] << endl;
            if (abs(tab[i] - tab[i + 1]) > max) {
                max = abs(tab[i] - tab[i + 1]);
            }
            if (abs(tab[i] - tab[i + 1]) < min) {
                min = abs(tab[i] - tab[i + 1]);
            }
        }

        cout << endl;
        cout << max << endl;
        cout << min << endl;

}

