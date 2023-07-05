#include <iostream>
using namespace std;

class MataKuliah {
private:
    float presensi;
    float activity;
    float exercise;
    float tugasAkhir;

public:
    MataKuliah() {
        presensi = 0;
        activity = 0;
        exercise = 0;
        tugasAkhir = 0;
    }

    virtual float hitungNilaiAkhir() {
        return 0;
    }

    virtual void cekKelulusan() {
        return;
    }

    virtual void input() {
        return;
    }

    void setPresensi(float nilai) {
        presensi = nilai;
    }

    float getPresensi() {
        return presensi;
    }
};

class Pemrograman : public MataKuliah {
public:
    float hitungNilaiAkhir() override {
        float nilaiAkhir = (getPresensi() * 0.1) + (activity * 0.2) + (exercise * 0.3) + (tugasAkhir * 0.4);
        return nilaiAkhir;
    }

    void cekKelulusan() override {
        float nilaiAkhir = hitungNilaiAkhir();
        if (nilaiAkhir > 75) {
            cout << "Lulus" << endl;
        }
        else {
            cout << "Tidak Lulus" << endl;
        }
    }

    void input() override {
        float p, a, e, ua;
        cout << "Masukkan nilai presensi: ";
        cin >> p;
        setPresensi(p);
    

        

int main() {
    