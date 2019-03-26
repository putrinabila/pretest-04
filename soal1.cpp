/*
Nama : Putri Nabila
NPM : 140810180007
Kelas : A 
Tanggal Pembuatan quiz: 26 Maret 2019
Deksripsi : Jawaban pre test 04 
*/

#include <iostream>

using namespace std;

struct ElemtList{
    char npm[14];
    char nama[40];
    float ipk;
    ElemtList* next;
};
typedef ElemtList* pointer;
typedef pointer List;

void createList(List& First);
void createElemt(pointer& pBaru);
void insertLast (List& First, pointer pBaru);
void traversal (List First);

int main()
{	int n;
    pointer p;
    List mhs;
    int pilih;

    createList(mhs);
    while(1){
        system("cls");
        cout<<"Menu"<<endl;
        cout<<"1. Tambah Data "<<endl;
        cout<<"2. Tampilkan"<<endl;
        cout<<"3. Exit"<<endl;
        cout << "Masukan Pilihan : "; cin >> pilih;
        switch(pilih){
            
        case 1:
 		cout<<"Masukan banyak mahasiswa:";
 		cin>>n;
 		for(int i=0;i<n;i++){
 		createElemt(p);
        insertLast(mhs, p);
}

 		traversal(mhs);
 		cout<<"\n"<<endl;
 		break; 
 
 		case 2:
 		cout<<"Masukan banyak mahasiswa:";
 		cin>>n;
 		for(int i=0;i<n;i++){
 		createElemt(p); 
 		insertLast(mhs,p);
 		cout<<endl;
}
 		traversal(mhs);
 		cout<<"\n"<<endl;   
 		break; 
        	
		case 3:
        return 0;
        break;
        }
        system("pause");
    }
}
void createList(List& First){
    First = NULL;
    }

void createElemt(pointer& pBaru){
    pBaru = new ElemtList;
    cout<<"Nama               : "; cin.ignore();cin.getline(pBaru->nama,40);
    cout<<"NPM                : "; cin>>pBaru->npm;
    cout<<"IPK                : "; cin>>pBaru->ipk;
    pBaru->next=NULL;
}
void traversal(List First){
    cout<<"\nNo\t"<<"\tNama\t\t"<<"NPM\t\t"<<"IPK\t"<<endl;
    pointer pBantu;
    pBantu=First;
    int i=1;
    while(pBantu != NULL){
        cout<<i<<"\t"<<pBantu->nama<<"\t\t\t"<<pBantu->npm<<"\t\t"<<pBantu->ipk<<endl;
        pBantu=pBantu->next;
        i++;
    }
}
void insertLast(List& First, pointer pBaru){
    pointer Last;
    if (First==NULL){
        First=pBaru;
    }
    else {
        Last=First;
        while (Last->next!=NULL){
            Last=Last->next;
        }
        Last->next=pBaru;
    }
}

