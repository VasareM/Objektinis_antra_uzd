## Sistemos parametrai
| CPU               | RAM   | SSD         |
|-------------------|-------|-------------|
| i5-1240P 1.70 GHz | 16 GB | SSD 512 GB  |


Atlikite eksperimentinę analizę priklausomai nuo kompiliatoriaus optimizavimo lygio, nurodomo per flag'us: O1, O2, O3 ir papildykite README.md failą gautais rezultatais su optimizavimo flag'ais.

### Tyrimas: lyginama struct (ankstesnė) ir class (dabartinė) realizacijų sparta

#### Tyrimo rezultatai: *testuojami anksčiau sugeneruoti failai*
Legenda:
- melsvai paryškintas testuojamo failo įrašų kiekis

#### Testuojami paeiliui su 100000, 1000000 eilučių failais, vector konteineris, greičiausia (III) dalijimo strategija
![Image](https://github.com/user-attachments/assets/e70551f9-c0cd-4d50-b929-c8127ed66096)

### Instrukcija
programą galima paleisti dviem būdais
1. sukompiliuojant komandinėje eilutėje

   ***į terminalą reikia įrašyti:***
   
   g++ kodas_vektoriai.cpp funkcijos.cpp -o prog
   
   ./prog
   
2. naudojant **cmake** failą

   ***į terminalą reikia įrašyti (jei kompiliuojama nauja programa):***
   
   rm -r build  *(jei jau turimas build aplankas, nerašyti jei kompiliuojama pirmą kartą)*

   mkdir build

   cd build

   cmake ..

   cmake --build . *(kompiliuoja)*
   cd Debug   *(be jo po pertraukos neveikė)*
   .\Objektinis.exe *(paleidžia programą)*
   
