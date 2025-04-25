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
    public:
        //konstruktoriai:
        studentai() : egzam_(0) {} // default konstruktorius
        studentai(std::istream& is);  //dis: konstruktorius, realiai inicializacijai

        studentai(const studentai& v); //copy konstruktorius
        studentai(studentai&& v) noexcept; //move konstruktorius
        studentai(std::initializer_list<double> il); // perduodamas double sarasas
        //kas cia?
        studentai& operator=(const studentai& v); // priskyrimo kopijavimo operatorius
        studentai& operator=(studentai&& v) noexcept; // priskyrimo move operatorius


        //get'eriai, inline:
        inline string vardas() const {return vardas_;}
        inline string pavarde() const {return pavarde_;}
        inline double egzam() const { return egzam_; }
        inline const vector<double>& pazymiai() const { return pazymiai_; }
        inline double suma() const {return suma_;}
        inline double vidurkis() const;
        inline int mediana() const;
        double gal_med() const;
        double gal_vid() const;

        //set'eriai:
        std::istream& readStudent(std::istream&); //set'eriai
        void setVardas(string vardas) {vardas_ = vardas;}
        void setPavarde(string pavarde) {pavarde_ = pavarde;}
        void setEgzam(double egzam) {egzam_ = egzam;}
        void setPazymiai(const vector<double>& pazymiai) {pazymiai_ = pazymiai;}
        
        void setSuma(double suma) {suma_ = suma;}
        void setVidurkis(double vidurkis) {vidurkis_ = vidurkis;}
        void setMediana(int mediana) {mediana_ = mediana;}
        void setGalMed(double gal_med) {gal_med_ = gal_med;}
        void setGalVid(double gal_vid) {gal_vid_ = gal_vid;}

        void addPazymys(double pazymys) {pazymiai_.push_back(pazymys);}


        //perdengti operatoriai
        //  i/o operatoriai friend tipo
        friend std::istream& operator>>(std::istream& is, studentai& v);
        friend std::ostream& operator<<(std::ostream& os, const studentai& v);
        /*
        friend std::ostream& operator<<(std::ostream& os, const Studentas& s);
        

        */


        //destruktorius:
        ~studentai() {
            pazymiai_.clear();
            vardas_.clear();
            pavarde_.clear();
            std::cout << "Destruktorius įvykdytas" << std::endl;
        }
};


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