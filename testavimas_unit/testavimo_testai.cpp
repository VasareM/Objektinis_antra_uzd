#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "strukt_antr.h"
#include "kodas_vektoriai.cpp"
#include "antrastes.h"
#include "funkcijos.cpp"

// ??

TEST_CASE("Studentai konstruktoriaus testas")
{
    studentai s;
    REQUIRE(s.vardas() == "var");
    REQUIRE(s.pavarde() == "pav");
    REQUIRE(s.egzam() == 0);
}