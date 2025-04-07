#ifndef strukt_antr_h
#define strukt_antr_h

#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;

/*
struct studentai
{
    string vardas="var"; //default reiksmes testavimui
    string pavarde="pav";
    vector<int> pazymiai; //nd tarpiniai rezultatai
    int egzam;
    double suma=0;
    double vidurkis;
    int mediana;
    double gal_vid, gal_med;
};
*/
class studentai
{
    private:
        string vardas_;
        string pavarde_;
        double egzam_;
        vector <double> pazymiai_;
    public:
        studentai() : egzam_(0) {} // default konstruktorius
        studentai(std::istream& is);
        inline string vardas() const {return vardas_;} //get'eriai, inline
        inline string pavarde() const {return pavarde_;} //get'eriai, inline
        double gal_balas_mediana(double (*) (vector<double>)=mediana) const; // get'eriai
        double gal_balas_vidurkis(double (*) (vector<double>)=vidurkis) const{
            if (pazymiai_.empty()) return 0;
            return 0.4*vidurkis(pazymiai_) + 0.6*egzam_;
        }
        std::istream& readStudent(std::istream&); //set'eriai
};
bool compare(const studentai&, const studentai&);
bool comparePagalPavarde(const studentai&, const studentai&);
bool comparePagalEgza(const studentai&, const studentai&);

#endif