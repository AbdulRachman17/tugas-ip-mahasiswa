#include<iostream>
using namespace std;

// Prototype
bool isWithinRange(float ip, int min, int max);
void prosescek(); // proses pengecekan ip lulus dan tidak pada seluruh ip
void prosestampil(); // proses menampilkan hasil

//variabel global
float ip, jumlah=0;
int semua=0, lulus=0, tlulus=0;

// program utama
int main(){
		cout <<endl;
	
		cout <<endl;
		cout << "          Program Nilai IP Mahasiswa          "<<endl;  
		cout << "================================================"<<endl;  
		cout <<endl;
		cout <<endl;
	do{
		 
		cout<< " Masukan Nilai IP : ";
		cin>>ip;
		prosescek();
	}
	while(ip!=-999);
	
	prosestampil();
	
	return 0;
}

bool isWithinRange(float ip, int min, int max){
	bool status;
	if (ip>=min&&ip<=max){
		status=true;
	}
	else{
		status=false;
	}
	return status;
}

// proses pengecekan & rata-rata
void prosescek(){
	if(isWithinRange (ip,0,4)){
				if (ip>=2.75){
				lulus++;
				}
				else{
					tlulus++;
					}
					semua++;
					jumlah=jumlah+ip;
	}
}

// proses tampil
void prosestampil(){
	if(semua==0){
		cout <<"Tidak Ada Data";
	}
	else{
	cout <<endl;
	cout <<endl;
	cout << "Jumlah Mahasiswa      = " << semua << endl;
	cout << "Nilai Rata - Rata     = " << jumlah/semua << endl;
	cout << "Mahasiswa Yang Lulus  = " << lulus << endl;
	cout << "Mahasiswa Tidak lulus = " << tlulus << endl;
	
	}
}
	