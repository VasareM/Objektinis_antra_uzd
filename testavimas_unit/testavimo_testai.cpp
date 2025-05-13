#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "strukt_antr.h"

#include "antrastes.h"


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