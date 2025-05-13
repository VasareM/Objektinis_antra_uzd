#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "strukt_antr.h"

#include "antrastes.h"
using std::setw;


// ??

TEST_CASE("Studentai konstruktoriaus testas")
{
    studentai s;
    REQUIRE(s.vardas() == "");
    REQUIRE(s.pavarde() == "");
    REQUIRE(s.egzam() == 0);
}



TEST_CASE("Input operatorriaus testas >>")
{
    std::stringstream ss("Vardenis Pavardenis 7 5 9 8");
    studentai s;
    ss >> s;
    REQUIRE(s.vardas() == "Vardenis");
    REQUIRE(s.pavarde() == "Pavardenis");
    REQUIRE(s.pazymiai()[0] == 7);
    REQUIRE(s.pazymiai()[1] == 5);
    REQUIRE(s.pazymiai()[2] == 9);
    REQUIRE(s.egzam() == 8);
}
TEST_CASE("Output operatoriaus testas <<")
{
    std::stringstream out;
    studentai s;
    s.setVardas("Vardenis");
    s.setPavarde("Pavardenis");
    s.addPazymys(7);
    s.addPazymys(5);
    s.addPazymys(9);
    s.setEgzam(8);
    s.setGalVid(7.6);
    s.setGalMed(7.6);
    s.setVidurkis(7);
    s.setMediana(7);   

    out << s;
    
    std::ostringstream tikimasi;
    tikimasi << std::left << setw(25) << s.pavarde() << setw(20) << s.vardas() << setw(20) << std::fixed << std::setprecision(2) << s.gal_vid() << setw(20) << s.gal_med() << std::endl;
    
    REQUIRE(out.str() == tikimasi.str());
}
