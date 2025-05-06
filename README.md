## Sistemos parametrai
| CPU               | RAM   | SSD         |
|-------------------|-------|-------------|
| i5-1240P 1.70 GHz | 16 GB | SSD 512 GB  |


### Tyrimas: rule of five ir i/o operatoriai
Atliekamas testatvimas tų pačių funkcijų kaip ir v1.2, tikrinami operatoriai ir konstruktoriai, gaunamas atitinkamas veikimas ir rezultatai

![Image](https://github.com/user-attachments/assets/3a6c835e-36e2-4ac6-ab0e-c69f35011482)
![Image](https://github.com/user-attachments/assets/55551e25-1bc8-4643-b10a-78279e170a72)



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
   
