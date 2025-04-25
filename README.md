## Sistemos parametrai
| CPU               | RAM   | SSD         |
|-------------------|-------|-------------|
| i5-1240P 1.70 GHz | 16 GB | SSD 512 GB  |



atitinkamas testavimas ir tie patys rezultatai
### Tyrimas: rule of five ir i/o operatoriai
![Image](https://github.com/user-attachments/assets/a6ce53b6-13c5-435a-96c6-867422c67c3d)

### Tyrimas: lyginama struct (ankstesnė) ir class (dabartinė) realizacijų sparta

#### Tyrimo rezultatai: *testuojami anksčiau sugeneruoti failai*
Legenda:
- melsvai paryškintas testuojamo failo įrašų kiekis

#### Testuojami paeiliui su 100000, 1000000 eilučių failais, vector konteineris, greičiausia (III) dalijimo strategija
![Image](https://github.com/user-attachments/assets/e70551f9-c0cd-4d50-b929-c8127ed66096)

### Eksperimentinė analizė su optimizavimo flag'ais:

| Optimizavimo flagai | Laikas, s                |  Laikas, s              | Exe failo dydis  | Laikas, s                |    Laikas, s                      | Exe failo dydis |
|---------------------|--------------------------|-------------------------|------------------|--------------------------|-------------------------|------------------|
|                     | Struct Vector (100000)   | Struct Vector (1000000) | Struct           | Class Vector (100000)    | Class Vector (1000000)  | Class            |
| -                   | 1,19837                  | 11,68054                | 679,20 KB        | 2,98245                  | 54,44549                | 683,40 KB        |
| O1                  | 1,16368                  | 18,99773                | 391,89 KB        | 1,64756                  | 29,51304                | 398,57 KB        |
| O2                  | 1,14052                  | 18,33628                | 354,61 KB        | 1,44885                  | 22,47576                | 363,90 KB        |
| O3                  | 1,13988                  | 15,54820                | 378,84 KB        | 1,58875                  | 27,68669                | 395,59 KB        |


### Instrukcija
programą galima paleisti dviem būdais
1. sukompiliuojant komandinėje eilutėje

   ***į terminalą reikia įrašyti:***
   
   g++ kodas_vektoriai.cpp funkcijos.cpp -o prog
   
   ./prog
   
2. kompiliuojant su optimizavimo flag'ais (pvz. su O1, pataisyti atitinkamai su O2 ir O3), *paskutinė eilutė .exe failo dydžio (KB) gavimas*

   g++ -O1 kodas_vektoriai.cpp funkcijos.cpp -o prog_O1

   ./prog_O1

   {0:N2} KB -f ((Get-Item .\prog_O1.exe).Length / 1024)
   
4. naudojant **cmake** failą

   ***į terminalą reikia įrašyti (jei jau buvo sukurtas build aplankas):***
   
   rm -r build

   mkdir build

   cd build

   cmake ..

   cmake --build .

   cd debug

   .\Objektinis.exe
   
