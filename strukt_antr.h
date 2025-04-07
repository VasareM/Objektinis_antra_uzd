#ifndef strukt_antr_h
#define strukt_antr_h

#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;


class studentai
{
    private:
        string vardas_;
        string pavarde_;
        double egzam_;
        vector <double> pazymiai_;
        double suma_=0;
        double vidurkis_=0;
        int mediana_=0;
        double gal_med_ = 0, gal_vid_=0;
         //double gal_vid, gal_med;
    public:
        studentai() : egzam_(0) {} // default konstruktorius
        studentai(std::istream& is);
        inline string vardas() const {return vardas_;} //get'eriai, inline
        inline string pavarde() const {return pavarde_;} //get'eriai, inline
        inline double egzam() const { return egzam_; }
        inline const vector<double>& pazymiai() const { return pazymiai_; }
        inline double vidurkis() const { return vidurkis_; }
        inline int mediana() const { return mediana_; }
        inline double gal_med() const { return gal_med_; }
        double gal_balas_mediana() const; // get'eriai
        double gal_balas_vidurkis() const;
        std::istream& readStudent(std::istream&); //set'eriai

        void setSuma(double suma) {suma_ = suma;}
        void setVidurkis(double vidurkis) {vidurkis_ = vidurkis;}
        void setMediana(int mediana) {mediana_ = mediana;}
        void setGalVid(double gal_vid) {gal_vid_ = gal_vid;}
        void setGalMed(double gal_med) {gal_med_ = gal_med;} // Correctly assign to gal_med_

};

// šitus iškelt:
//bool compare(const studentai&, const studentai&);
/*
bool comparePagalPavarde(const studentai&, const studentai&);
bool comparePagalEgza(const studentai&, const studentai&);
*/

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

#endif