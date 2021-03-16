#include<iostream>
#include<conio.h>
using namespace std;

int tkt_psawat()
{
	int maskapai,tgl_brgkt,Tujuan;
	cout<<"SILAHKAN PILIH MASKAPAI DIBAWAH INI  : ";<<endl;
	cout<<"1.AIR ASIA"<<endl;
	cout<<"2.EXPRESS AIR"<<endl;
	cout<<"3.SRIWIJAYA AIR"<<endl;
	Cout<<"4.LION AIR"<<endl;
	cin>>maskapai;
	if(maskapai==1){
		cout<<"AIR ASIA"
	}
	system("pause");
	
}
int kurang()
{
	int a,b,r;
	cout<<"\nmasukkan nilai 1 : ";cin>>a;
	cout<<"masukkan nilai 2 : ";cin>>b;
	r=a-b;
	cout<<r<<endl;
	system("pause");
}
int kali()
{
	float a,b,r;
	cout<<"\nmasukkan nilai 1 : ";cin>>a;
	cout<<"masukkan nilai 2 : ";cin>>b;
	cout<<r<<endl;
	system("pause");
}
int bagi()
{
	float a,b,r;
	cout<<"\nmasukkan nilai 1 : ";cin>>a;
	cout<<"masukkan nilai 2 : ";cin>>b;
	r=a/b;
	cout<<r<<endl;
system("pause");
}

int main()
{
	int jawab;
	menu :
	cout<<"==========================="<<endl;
	cout<<"KALKULATOR MADE BY ALIF WIRA"<<endl;
	cout<<"==========================="<<endl;
	cout<<"\nSilahkan pilih jenis perhitungannya";
	cout<<"\n1.PENJUMLAHAN"<<endl;
	cout<<"2.PENGURANGAN"<<endl;
	cout<<"3.PERKALIAN"<<endl;
	cout<<"4.Pembagian"<<endl;
	cin>>jawab;
	
	switch(jawab)
	{
		case 1:
			tambah();
			break;
			
			case 2:
			kurang();
			break;
			
			case 3:
				kali();
				break;
				
				case 4:
					bagi();
					break;
					
					default:
						cout<<"\nSALAH\n!!!!";
						
				
					}
					
						system("pause");
	}
