//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <stdlib>
#include <ctime>
#include <iostream>
#include <string>

#include "Unit7.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
	: TForm(Owner)
{
 Edit1->Text="";
 Edit2->Text="";
 Memo1->Text="";
}
//---------------------------------------------------------------------------
void __fastcall TForm7::Button1Click(TObject *Sender)
{
if((Edit1->Text.IsEmpty())  || (Edit2->Text.IsEmpty()) )
	ShowMessage("Nie podano ¿adnych wartosci!!") ;
  else{

			int n, max,i,j ;
			String wart= "";
			n = StrToInt(Edit1->Text);
			max = StrToInt(Edit2->Text);
			srand(time(0));
			float liczba[n];
			float suma;
			float sr = 0;
			if (n>max) ShowMessage("n nie mo¿e byæ wiêksze od maksymalnego zakresu.");
				else{
			for (i = 0; i < n; i++)
			{
				bool check;
				int x;
				do
				{
				x=rand()%max+1;
				check=true;
				for (j = 0; j < i; j++)
					if (x==liczba[j])
					{
						check=false;
						break;
					}

				}
				while (!check);
				liczba[i]=x;
				wart += FloatToStr(liczba[i]) + ", ";
				suma += liczba[i];
			 }
			 }
	  sr=(suma/n);
	  Memo1->Text=wart;
	  Edit3->Text=CurrToStrF(sr,ffNumber,2);
	  }


}




//---------------------------------------------------------------------------
void __fastcall TForm7::Button2Click(TObject *Sender)
{
 Edit1->Text="";
 Edit2->Text="";
 Edit3->Text="";
 Memo1->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Button3Click(TObject *Sender)
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

