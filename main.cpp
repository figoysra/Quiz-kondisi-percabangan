#include <iostream>

using namespace std;

int main() {
     int age, money, testCode, nomor, height, result, running, push, plank, kalori;
     string residence, name, rank, resultCode, resultInt, interview, position, olahraga;

     std::cout << "Nama Anda :";
     std::cin >> name;
     std::cout << "Age :";
     std::cin >> age;
     std::cout << "Residence: ";
     std::cin >> residence;
     std::cout << "Savings: ";
     std::cin >> money;

    if(
            age > 40 &&
            (residence == "Nevada" || residence == "New york" || residence == "Havana") &&
            money > 10000000
        ) {
        rank = "Don";
    } else if(
            (age > 25 || age <= 40) &&
            (residence == "New Jersey" || residence == "Manhattan" || residence == "Nevada")&&
            (money > 1000000 || money < 2000000)
            ){
        rank = "Underboss";
    } else if(
            (age > 18 && age <=24) &&
            (residence == "California" || residence == "Detroit" || residence == "Boston")&&
            money <=1000000
            ){
        rank = "Capo";
    }else{
        rank = "";
    };
    if(rank != "" ){
        std::cout << name << " kemungkinan adalah seorang anggota mafia dengan pangkat " << rank << std::endl;
    }else{
        std::cout << name << " tidak mencurigakan"<<std::endl;
    }

    std::cout<<"------------"<<std::endl;
    std::cout<< "soal 2" <<std::endl;

    std::cout << "Nilai Coding: " ;
    cin >> testCode;
    std::cout << "Nilai interview: ";
    cin >> interview;

    if(testCode > 80){
        resultCode = "LOLOS";
    } else if(testCode > 60 && testCode <= 80) {
        resultCode = "DIPERTIMBANGKAN";
    } else{
        resultCode = "Tidak Lolos";
    }

    if(interview == "A" || interview == "B"){
        resultInt = "LOLOS";
    } else{
        resultInt = "Tidak Lolos";
    }


    if((resultCode == "DIPERTIMBANGKAN" || resultCode == "LOLOS") && resultInt == "LOLOS"){
        std::cout << "Selamat  Kamu  Berhasil  Menjadi  Calon  Programmer"<<endl;
    }else{
        std::cout << "Maaf  Kamu  Belum  Berhasil  Menjadi  Calon Programmer"<<endl;
    }

    std::cout<<"------------"<<std::endl;
    std::cout<< "soal 3" <<std::endl;

    std::cout << "Nomor Punggung: " ;
    cin >> nomor;

    if(nomor % 2 == 0){
        position += "Target attacker, ";
        if(nomor > 50 && nomor < 100){
            position += "berhak dipilih menjadi capten team";
        }
    }else{
        position += "Defender, ";
        if( nomor % 3 == 0 && nomor %5 == 0){
            position += "Keeper";
        }
        if(nomor >= 90){
            position += "Playmaker";
        }
    }

    cout <<"Your Position " << position <<endl;


    std::cout<<"------------"<<std::endl;
    std::cout<< "soal 4" <<std::endl;

    cout<< "Berapa Anda Lari (menit): ";
    cin >> running;
    cout<< "Berapa Anda push up (menit): ";
    cin >> push;
    cout<< "Berapa Anda plank (menit): ";
    cin >> plank;

    kalori = (60 * (running/5) )+ (200 * (push/30)) + (5 * (plank/1));

    cout << "Total Kalori "<< kalori<<endl;


    std::cout<<"------------"<<std::endl;
    std::cout<< "soal 5" <<std::endl;

    cout<< "Tinggi : ";
    cin >> height;
    cout<< "Umur : ";
    cin >> age;

    if(age > 10){
        result = 80000;
    }
    else if(age > 8 && age <= 10) {
        result = 50000;
        if(height >= 150){
            result += 20000;
        }
    }else if(age <= 7 && age < 4){
       result = 40000;
       if(height >= 120){
           result += 15000;
       }
   } else if( age < 3){
        result = 30000;
        if(height >= 70){
            result += 10000;
        }
    }

    if(age < 1){
        cout << "'Dilarang masuk'";
    }else{
        cout << "Tarif : Rp. "<< result <<endl;
    }


    return 0;
}