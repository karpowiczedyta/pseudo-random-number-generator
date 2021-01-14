//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "random"
#include "math.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

int n, k; float p;

float warBezwgl(float nr) {
	if (nr < 0) {
			  return nr*(-1);
	} else return nr;
}


int bin(int n, float p) {

	int binomial = 0;

	for(int i=0; i<n; i++) {
		float u = (float) rand()/RAND_MAX;
		if (u < p) {
			binomial++;
		}
	}
	return binomial;
}

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}

//---------------------------------------------------------------------------

void __fastcall TForm1::Button8Click(TObject *Sender)
{
    this->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button7Click(TObject *Sender)
{

	Edit1->Text = "";
	Edit2->Text = "";
	Edit3->Text = "";
	for(int i = 1; i<=8;i++)
	StringGrid1->Cells[1][i] = "";
    Memo1->Clear();
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button6Click(TObject *Sender)
{

	n = StrToInt(Edit1->Text);
	p = StrToFloat(Edit2->Text);
	k = StrToInt(Edit3->Text);

	if (n < 0) {
		ShowMessage("Liczba pr�b musi by� wi�ksza b�d� r�wna 0!");
	}
	if (p > 1 || p < 0) {
	   ShowMessage("Prawdopodobie�stwo sukcesu musi zawiera� si� w przedziale od 0 do 1!");
	}
	if (k > n || k < 0) {
		ShowMessage("No�nik musi zawiera� si� w przedziale od 0 do n!");
	}

    String text="";
	float suma = 0.0;
	float rozDwu[100];
	for(int i = 0; i<100; i++){
	   rozDwu[i] = bin(n, p);
	   text += FloatToStr(rozDwu[i]) + ", ";
	   suma+=rozDwu[i];
	}
	Memo1->Text = text;

	float warOcz = suma/100;

	float mediana = 0.0;
	float a = warBezwgl(warOcz) - 1;
	float b = warBezwgl(warOcz) + 1;
	float c = warBezwgl(warOcz);

	if( a < c && b > c) mediana = c;
	else if(c < a && a < b) mediana = a;
	else mediana = b;

	float moda = 0.0;
	moda = warBezwgl((n+1)*p);

	float wariancja = 0.0;
	wariancja = n*p*(1-p);

	float wspSkos = 0.0;
	wspSkos = (1 - (2*p));
	wspSkos = wspSkos/sqrt(wariancja);

	float kurtoza = 0.0;
	kurtoza = 1 - (6*p*(1-p));
	kurtoza = kurtoza / wariancja;

	StringGrid1->Cells[1][1] = floorf(warOcz*100/100);
	StringGrid1->Cells[1][2] = floorf(wariancja*100/100);
	StringGrid1->Cells[1][3] = floorf(wspSkos*100/100);
	StringGrid1->Cells[1][4] = floorf(kurtoza * 100) / 100;
	}

void __fastcall TForm1::Info1Click(TObject *Sender)
{
   ShowMessage("Generator liczb losowych.");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
	StringGrid1->Cells[0][0] = "Nazwa: ";
	StringGrid1->Cells[1][0] = "Warto��: ";
	StringGrid1->Cells[0][1] = "�rednia";
	StringGrid1->Cells[0][2] = "Wariancja";
	StringGrid1->Cells[0][3] = "Wsp�czynnik sko�no�ci";
	StringGrid1->Cells[0][4] = "Kurtoza";
}
//---------------------------------------------------------------------------

