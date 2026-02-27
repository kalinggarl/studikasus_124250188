#include <iostream>
using namespace std;

void binary();
void sequential();

struct toko{
	string namabuku;
	int harga;
}; toko buku[7];
	bool found;
	int cari;


int main(){ 
	
	buku[0].namabuku="a little life";
	buku[0].harga=50000;
	
	buku[1].namabuku="hamnet";
	buku[1].harga=75000;
	
	buku[2].namabuku="wuthering heights";
	buku[2].harga=100000;
	
	buku[3].namabuku="intermezzo";
	buku[3].harga=120000;
	
	buku[4].namabuku="the alchemist";
	buku[4].harga=135000;
	
	buku[5].namabuku="little women";
	buku[5].harga=150000;
	
	buku[6].namabuku="null";
	buku[6].harga=0;
	
	int metode;
	do{
	cout<<"Silahkan pilih Metode pencarian buku :"<<endl;
	cout<<"1. Binary Search method"<<endl;
	cout<<"2. Sequential Search method"<<endl;
	cout<<"3. Keluar"<<endl;
	cout<<"Metode: ";
	cin>>metode;
	
	if(metode==1){
		binary();
		}else if(metode==2){
			sequential();
			}else if(metode>3){
				cout<<"input tidak valid"<<endl;
				}
	}while(metode!=3);
	cout<<"Thanks!!";
		

	}
	
	void binary(){
	int i=0, j=5, k;
	cout<<"silahkan cari harga buku: ";
	cin>>cari;
	found=false;
	while(found==false&&i<=j){
		k=(i+j)/2;
		if(cari==buku[k].harga){
			found=true;
			}else if(cari<buku[k].harga){
				j=k-1;
				}else{
					i=k+1;
					}
		}
	if(found){
		cout<<"Buku dengan harga: "<<cari<<" dengan Judul "<<buku[k].namabuku<<endl;
		}else{
			cout<<"buku tidak ditemukan di harga tersebut"<<endl;
			}
	}
	void sequential(){
	found=false;
	int metode1,i=0;
	do{
	cout<<"1. Dengan sentinel"<<endl;
	cout<<"2. Tanpa sentinel"<<endl;
	cout<<"3. kembali"<<endl;
	cout<<"silahkan pilih: ";cin>>metode1;
	
	if(metode1==2){
		cout<<"cari buku dengan harga: ";cin>>cari;
		found=false;
		i=0;
		while(i<5&&found==false){
				if(buku[i].harga==cari){
					found=true;
					}else{
						i++;
						}
				}
	if(found){
			cout<<"Buku dengan harga: "<<cari<<" dengan Judul "<<buku[i].namabuku<<endl;
			}else{
				cout<<"buku tidak ditemukan di harga tersebut"<<endl;
				}
				
			}else if(metode1==3){
				return;
			}else if(metode1==1){
					cout<<"cari buku dengan harga: ";cin>>cari;
					buku[6].harga=cari;
					i=0;
			while(buku[i].harga!=cari){
						i++;}
						if(i<6){
							cout<<"Buku dengan harga: "<<cari<<" dengan Judul "<<buku[i].namabuku<<endl;
							}else{
								cout<<"Buku dengan harga "<<cari<<" tidak di temukan"<<endl;
								}
					}else{
						cout<<"input tidak valid"<<endl;
						}
			
	}while(metode1!=3);
	}
	
	
	
	
	


