#include<iostream>
using namespace std;
//deklarasi single Linked List
struct Data{
	string nama;
	int umur, tb;
	
	Data *next;
};

int main(){
	//inisialisasi single linked list
	Data *node1, *node2, *node3;
	node1 = new Data();
	node2 = new Data();
	node3 = new Data();
	
	//isi data node
	node1->nama = "Dinda";
	node1->umur = 20;
	node1->tb = 150;	
	node1->next= node2;
	
	node2->nama = "Laiz";
	node2->umur = 20;
	node2->tb = 180;	
	node2->next= node3;
	
	node3->nama = "Agus";
	node3->umur = 21;
	node3->tb = 150;
	node3->next= NULL;
	
	

//Cetak Data
	Data *cur;
	cur=node1;
	while( cur != NULL){
		cout << "Nama		: " << cur->nama<<endl;
		cout << "Umur		: " << cur->umur<<endl;
		cout << "Tinggi Badan	: " << cur->tb<<endl;		
		cur = cur->next;		
		cout << endl <<endl;
	}
}	




