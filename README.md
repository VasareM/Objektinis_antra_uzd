## Sistemos parametrai
| CPU               | RAM   | SSD         |
|-------------------|-------|-------------|
| i5-1240P 1.70 GHz | 16 GB | SSD 512 GB  |


## v2.0: dokumentacija ir Unit testavimas

## Paleidimas

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

3. testai kompiliuojami komandinėje eilutėje

   g++ -std=c++17 -I. -DRUN_TESTS testavimas_unit/testavimo_testai.cpp kodas_vektoriai.cpp funkcijos.cpp -o runTests

   ./runTests
   
5. naudojant **cmake** failą

   ***į terminalą reikia įrašyti (jei jau buvo sukurtas build aplankas):***
   
   rm -r build

   mkdir build

   cd build

   cmake ..

   cmake --build .

   cd debug

   .\Objektinis.exe
   
