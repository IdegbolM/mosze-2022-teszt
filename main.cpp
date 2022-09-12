#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int* b = new int[N_ELEMENTS]; //int* b, N_ELEMENTS
    std::cout << "1-100 ertekek duplazasa\n";  //dupla aposztróf és pontosvessző a sor végére, + egy sortörés
    for (int i = 1; i<=N_ELEMENTS; i++) // i=1, kihagyva a határ és a növekvés: i<=100; i++
    {
        b[i-1] = i * 2;   //b[i-1]
        std::cout << "Ertek:" << b[i - 1] << std::endl; //felesleges ciklus, az elsőbe beletenni a törzsöt, a konkrét érték kiíratása (b[i-1]) sortöréssel és pontosvessző a végére
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag = 0; //kezdőérték (0)
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i];   //pontosvessző
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
