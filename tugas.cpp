#include <iostream>
using namespace std;

class RekeningBank {
public:
    virtual void potongAdmin() = 0;
};

class RekeningSyariah : public RekeningBank {
private:
    string noRek;
    double saldo;

public:
    RekeningSyariah(string no, double saldoAwal) {
        noRek = no;
        saldo = saldoAwal;
    }

    void potongAdmin() {
        cout << "Rekening Syariah: Tidak ada potongan admin bulanan." << endl;
        cout << "No Rek: " << noRek << " | Saldo Akhir: Rp " << saldo << endl;
        cout << "----------------------------------------------------" << endl;
    }
};

class RekeningKonvensional : public RekeningBank {
private:
    string noRek;
    double saldo;

public:
    RekeningKonvensional(string no, double saldoAwal) {
        noRek = no;
        saldo = saldoAwal;
    }

    void potongAdmin() {
        saldo -= 15000;
        cout << "Rekening Konvensional: Dipotong biaya admin Rp 15000" << endl;
        cout << "No Rek: " << noRek << " | Saldo Akhir: Rp " << saldo << endl;
        cout << "----------------------------------------------------" << endl;
    }
};