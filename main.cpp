#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //int* b, N_ELEMENTS
    std::cout << '1-100 ertekek duplazasa'  //dupla aposztróf és pontosvessző a sor végére, + egy sortörés
    for (int i = 0;) // i=1, kihagyva a határ és a növekvés: i<=100; i++
    {
        b[i] = i * 2;   //b[i-1]
    }
    for (int i = 0; i; i++)     //felesleges ciklus, az elsőbe beletenni a törzsöt
    {
        std::cout << "Ertek:"   //a konkrét érték kiíratása (b[i-1]) sortöréssel és pontosvessző a végére
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; //kezdőérték (0)
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]   //pontosvessző
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
