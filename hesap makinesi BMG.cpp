#include<iostream>
using namespace std;
int main(){
	int sayi1,sayi2,toplam,cikarma,carpma,bolme,sonuc;
	char secim;
	
	cout<<"1.sayiyi giriniz: "<<sayi1<<endl;
	cin>>sayi1;
	
	cout<<"2.sayiyi giriniz: "<<sayi2<<endl;
	cin>>sayi2;
	
	cout<<"yapmak istediginiz islemi giriniz: "<<endl;
	cin>>secim;
	
	 if(secim=='+'){
	 	toplam=sayi1+sayi2;
	 //	toplam=sonuc;
	 	cout<<"girdiginiz islemin sonucu: "<<toplam<<endl;
	 	cin>>sonuc;
  }
	 
	  else if(secim=='-'){
	 	cikarma=sayi1-sayi2;
	 	cout<<"girdiginiz islemin sonucu: "<<cikarma<<endl;
	 }
	 
	 
	 else if(secim=='*'){
	 	carpma=sayi1*sayi2;
	 	cout<<"girdiginiz islemin sonucu: "<<carpma<<endl;
	 }
	 
	 else if(secim=='/'){
	 	bolme=sayi1/sayi2;
	 	cout<<"girdiginiz islemin sonucu: "<<bolme<<endl;
	 }
	
	return 0;
}
