## Sistemos parametrai
| CPU               | RAM   | SSD         |
|-------------------|-------|-------------|
| i5-1240P 1.70 GHz | 16 GB | SSD 512 GB  |

### Tyrimas: rule of five ir i/o operatoriai
![Image](https://github.com/user-attachments/assets/93908ed8-a1ae-4b27-90a0-b36ef412de03)
 
Programoje naudojami perdengti metodai, priimama duomenų įvestis ir išvestis įvairiais būdais: rankiniu būdu bei iš failo.

Studentų klasė saugo studento vardą, pavardę, pažymius, tarpinius ir galutinius rezultatus (su vidurkiu ir mediana).

##### Naudojami įvesties ir išvesties perdengti metodai
1. Įvesties operatorius (>>)

   nuskaito studento duomenis iš įvesties srauto (iš failo ar vartotojo įvesties), kreipiamasi per `>>` nuskaito privačius duomenis, tada atlieka skaičiavimus.
   
2. Išvesties operatorius (<<)

   išveda studento duomenis į išvesties srautą (ekraną arba failą), kreipiamasi `<<` naudojant formatavimo nustatymus išveda duomenis apie studentą, pradėdamas nuo pavardės.
   

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
   
