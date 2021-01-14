//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
#include <iostream>
#include <random>
#include <sstream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <algorithm>
#include <stdlib.h>
#include <conio.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm6 *Form6;
//---------------------------------------------------------------------------


__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{       Memo1->Lines->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button3Click(TObject *Sender)
{
Edit1->Text="";
Edit2->Text="";
Edit3->Text="";
 Edit4->Text="";
 Edit5->Text="";
 Edit6->Text="";
 Edit7->Text="";
 Edit8->Text="";
 Edit9->Text="";
  Edit10->Text="";
 Edit11->Text="";
 Edit12->Text="";
 Edit13->Text="";
 Edit14->Text="";
 Edit15->Text="";
 Edit16->Text="";
 Edit17->Text="";
 Edit18->Text="";
 Edit19->Text="";
 Edit20->Text="";
 Edit21->Text="";
 Edit22->Text="";
 Memo1->Lines->Clear();
this->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button2Click(TObject *Sender)
{
Edit1->Text="";
Edit2->Text="";
Edit3->Text="";
 Edit4->Text="";
 Edit5->Text="";
 Edit6->Text="";
 Edit7->Text="";
 Edit8->Text="";
 Edit9->Text="";
 Edit10->Text="";
 Edit11->Text="";
 Edit12->Text="";
 Edit13->Text="";
 Edit14->Text="";
 Edit15->Text="";
 Edit16->Text="";
 Edit17->Text="";
 Edit18->Text="";
 Edit19->Text="";
 Edit20->Text="";
 Edit21->Text="";
 Edit22->Text="";
 Memo1->Lines->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button1Click(TObject *Sender)
{
int n;
float p;
float lambda;
float wartocz;
float ewartocz;
float mediana;
float emediana;
float wariancja;
float ewariancja;
float skosnosc;
float eskosnosc;
float kurtoza;
float ekurtoza;
float odchylenie;
float eodchylenie;
int ilosc;


	 Memo1->Text="";


   if ((Edit1->Text.IsEmpty()) || (Edit2->Text.IsEmpty()) || (Edit10->Text.IsEmpty())) { ShowMessage("Nie wprowadzono wszystkich potrzebnych danych") ;

   }     else {
   ilosc=StrToInt(Edit10->Text);
n=StrToInt(Edit1->Text);
p=StrToFloat(Edit2->Text);
if ((p<=0)||(p>1) || (n==0) || (ilosc<=0)) {   ShowMessage("Wprowadzone dane s� b��dne");

}   else {
lambda=n*p;



Edit3->Text=CurrToStrF(lambda, ffNumber, 3);

wartocz=lambda;
Edit4->Text=CurrToStrF(wartocz, ffNumber, 3);

mediana=lambda+1/3-0.02/lambda;
Edit5->Text=CurrToStrF(mediana, ffNumber, 3);

wariancja=lambda;
Edit6->Text=CurrToStrF(wariancja, ffNumber, 3);

skosnosc=sqrt(1/lambda);
Edit7->Text=CurrToStrF(skosnosc, ffNumber, 3);

kurtoza=1/lambda;
Edit8->Text=CurrToStrF(kurtoza, ffNumber, 3);

odchylenie=sqrt(lambda);
Edit9->Text=CurrToStrF(odchylenie, ffNumber, 3);

std::default_random_engine generator;
std::poisson_distribution<int> distribution(lambda);

    	ilosc=StrToInt(Edit10->Text);
	float tablica[ilosc];
 for (int i=0; i<ilosc; ++i){

tablica[i]=distribution(generator);

}


for (int i=0; i<ilosc; ++i){
Memo1->Text+=tablica[i];
Memo1->Text += " ";

}

 ;

ilosc=StrToInt(Edit10->Text);
//suma emp
float suma=0;
for (int i = 0; i<ilosc; i++) {
	 suma=suma+tablica[i]    ;
}
ewartocz=suma/ilosc  ;
Edit11->Text=CurrToStrF(ewartocz, ffNumber, 3) ;

//mediana emp
	ilosc=StrToInt(Edit10->Text);
	std::sort(tablica, tablica+ilosc);
  if (ilosc%2==0) {
  emediana=(tablica[ilosc/2]+tablica[(ilosc-1)/2])/2 ; }
  else {
	  emediana=tablica[(ilosc)/2] ;
  }

Edit12->Text=CurrToStrF(emediana, ffNumber, 3);

//wariancja emp

float suma2=0;
for (int i = 0; i < ilosc; i++) {
  suma2=suma2+(tablica[i]-ewartocz)*(tablica[i]-ewartocz);
}
ewariancja=suma2/ilosc;
Edit13->Text=CurrToStrF(ewariancja, ffNumber, 3);

//odchylenie standardowe emp
eodchylenie=sqrt(ewariancja);
Edit16->Text=CurrToStrF(eodchylenie, ffNumber, 3);

//skosnosc emp
eskosnosc=3*((ewartocz-emediana)/eodchylenie);
Edit14->Text=CurrToStrF(eskosnosc, ffNumber, 3);

//kurtoza emp
float ilosc2;
ilosc2=ilosc;
float suma4;
for (int i = 0; i < ilosc; i++) {
 suma4=suma4+(tablica[i]-ewartocz)*(tablica[i]-ewartocz)*(tablica[i]-ewartocz)*(tablica[i]-ewartocz);
}
ekurtoza=(((1/ilosc2)*suma4)/(eodchylenie*eodchylenie*eodchylenie*eodchylenie))-3;
Edit15->Text=CurrToStrF(ekurtoza, ffNumber, 3);


//R�nice
Edit17->Text=CurrToStrF(abs(wartocz-ewartocz), ffNumber, 3);
Edit18->Text=CurrToStrF(abs(mediana-emediana), ffNumber, 3);
Edit19->Text=CurrToStrF(abs(wariancja-ewariancja), ffNumber, 3);
Edit20->Text=CurrToStrF(abs(skosnosc-eskosnosc), ffNumber, 3);
Edit21->Text=CurrToStrF(abs(kurtoza-ekurtoza), ffNumber, 3);
Edit22->Text=CurrToStrF(abs(odchylenie-eodchylenie), ffNumber, 3);


 


}}}
//---------------------------------------------------------------------------

void __fastcall TForm6::Button4Click(TObject *Sender)
{
if (Memo1->Text.IsEmpty()) {  ShowMessage("Nie ma niczego do zapiania");}
 else{


SaveDialog1->Execute();
SaveDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
SaveDialog1->FilterIndex = 2 ;
Memo1->Lines->SaveToFile(SaveDialog1->FileName);

} }
//---------------------------------------------------------------------------


