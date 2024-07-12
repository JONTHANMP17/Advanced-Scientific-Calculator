#include <iostream>
#include <cmath>    // untuk fungsi matematika

using namespace std;

// Fungsi untuk menjumlahkan dua angka
double tambah(double a, double b) {
    return a + b;
}

// Fungsi untuk mengurangkan dua angka
double kurang(double a, double b) {
    return a - b;
}

// Fungsi untuk mengalikan dua angka
double kali(double a, double b) {
    return a * b;
}

// Fungsi untuk membagi dua angka
double bagi(double a, double b) {
    if (b == 0) {
        cout << "Error: Pembagian dengan nol tidak diperbolehkan." << endl;
        return 0;
    }
    return a / b;
}

// Fungsi untuk menghitung akar kuadrat
double akarKuadrat(double a) {
    if (a < 0) {
        cout << "Error: Akar kuadrat dari angka negatif tidak diperbolehkan." << endl;
        return 0;
    }
    return sqrt(a);
}

// Fungsi untuk menghitung akar pangkat tiga
double akarPangkatTiga(double a) {
    return cbrt(a);
}

// Fungsi untuk menghitung sigma (penjumlahan dari 1 hingga n)
double sigma(int n) {
    return (n * (n + 1)) / 2;
}

// Fungsi untuk menghitung eksponensial
double eksponensial(double a) {
    return exp(a);
}

// Fungsi untuk menghitung logaritma natural
double logaritmaNatural(double a) {
    if (a <= 0) {
        cout << "Error: Logaritma dari angka nol atau negatif tidak diperbolehkan." << endl;
        return 0;
    }
    return log(a);
}

// Fungsi untuk menghitung sin dalam radian
double sine(double a) {
    return sin(a);
}

// Fungsi untuk menghitung cos dalam radian
double cosine(double a) {
    return cos(a);
}

// Fungsi untuk menghitung tan dalam radian
double tangent(double a) {
    return tan(a);
}

int main() {
    double num1, num2;
    string operasi;

    cout << "Masukkan operasi (+, -, *, /, sqrt, cbrt, sigma, pow, exp, ln, sin, cos, tan): ";
    cin >> operasi;

    double hasil;
    if (operasi == "+") {
        cout << "Masukkan dua angka: ";
        cin >> num1 >> num2;
        hasil = tambah(num1, num2);
    } else if (operasi == "-") {
        cout << "Masukkan dua angka: ";
        cin >> num1 >> num2;
        hasil = kurang(num1, num2);
    } else if (operasi == "*") {
        cout << "Masukkan dua angka: ";
        cin >> num1 >> num2;
        hasil = kali(num1, num2);
    } else if (operasi == "/") {
        cout << "Masukkan dua angka: ";
        cin >> num1 >> num2;
        hasil = bagi(num1, num2);
    } else if (operasi == "sqrt") {
        cout << "Masukkan satu angka: ";
        cin >> num1;
        hasil = akarKuadrat(num1);
    } else if (operasi == "cbrt") {
        cout << "Masukkan satu angka: ";
        cin >> num1;
        hasil = akarPangkatTiga(num1);
    } else if (operasi == "sigma") {
        int n;
        cout << "Masukkan angka n untuk sigma (1 hingga n): ";
        cin >> n;
        hasil = sigma(n);
    } else if (operasi == "pow") {
        cout << "Masukkan basis dan eksponen: ";
        cin >> num1 >> num2;
        hasil = pow(num1, num2);
    } else if (operasi == "exp") {
        cout << "Masukkan satu angka: ";
        cin >> num1;
        hasil = eksponensial(num1);
    } else if (operasi == "ln") {
        cout << "Masukkan satu angka: ";
        cin >> num1;
        hasil = logaritmaNatural(num1);
    } else if (operasi == "sin") {
        cout << "Masukkan satu angka (radian): ";
        cin >> num1;
        hasil = sine(num1);
    } else if (operasi == "cos") {
        cout << "Masukkan satu angka (radian): ";
        cin >> num1;
        hasil = cosine(num1);
    } else if (operasi == "tan") {
        cout << "Masukkan satu angka (radian): ";
        cin >> num1;
        hasil = tangent(num1);
    } else {
        cout << "Operasi tidak valid" << endl;
        return 1;
    }

    cout << "Hasil: " << hasil << endl;

    return 0;
}
