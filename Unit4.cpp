//---------------------------------------------------------------------------

#include <vcl.h>
#pragma <hdrstop>
#include <stdlib>
#include <ctime>
#include <iostream>
#include <string>

#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)

{
 Edit1->Text="";
 Edit2->Text="";
 Memo1->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button1Click(TObject *Sender)
{

if((Edit1->Text.IsEmpty())  || (Edit2->Text.IsEmpty()) )
	ShowMessage("Nie podano ¿adnych wartosci!!") ;
  else{
	  int n, max,i;
	  String wart= "";
	  n = StrToInt(Edit1->Text);
	  max = StrToInt(Edit2->Text);
	  srand(time(0));
	  float a[n];
	  float suma;
	  float sr = 0;

	  for (i = 0; i < n; i++) {

	  a[i] = (rand()%max)+1;
	  wart += FloatToStr(a[i]) + ", ";
	  suma += a[i];
	  }
	  sr=suma/n;

	  Edit3->Text=CurrToStrF(sr,ffNumber,2);
	  Memo1->Text=wart;
}
}
//---------------------------------------------------------------------------
void __fastcall TForm4::Button2Click(TObject *Sender)
{
 Edit1->Text="";
 Edit2->Text="";
 Edit3->Text="";
 Memo1->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button3Click(TObject *Sender)
{
if (Memo1->Text.IsEmpty()) {  ShowMessage("Nie ma niczego do zapiania");}
 else{


SaveDialog1->Execute();
SaveDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
SaveDialog1->FilterIndex = 2 ;
Memo1->Lines->SaveToFile(SaveDialog1->FileName);

}
}
//---------------------------------------------------------------------------


