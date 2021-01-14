//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button1Click(TObject *Sender)
{
  if((Edit1->Text.IsEmpty())  || (Edit2->Text.IsEmpty()) )
	ShowMessage("Nie podano zadnych wartosci!!") ;
   else if (Edit1->Text==0 || Edit2->Text==0)
		  ShowMessage("Badanie w³aœciwoœci rozk³.hipergeometrycznego nie mo¿e zostaæ zrealizowane ze wzglêgu na ZERA!!!  Podaj wartoœci ró¿ne od 0 :) ");
   else if(StrToInt(Edit1->Text) < StrToInt(Edit2->Text))
   {
	 ShowMessage("Liczebnoœæ losowanych kul musi byæ mniejsza b¹dŸ równa liczebnoœæ kul w urnie!!! ");
   }
   else if(Edit1->Text>8)
   {
	 ShowMessage("Najwiêksza liczebnoœæ kul w urnie wynosi 8!!!Wybierz liczebnoœæ z przedzia³u<1-8>");
   }
  else
  {
int N,n,K;//na pewno nie bd zero
N = StrToInt(Edit1->Text);
n = StrToInt(Edit2->Text);
do {K = rand()% N +1;} while(K>=N);   //nigdy nie bd 0 / N-K te¿ nigdy nie bd zera

//int K = 20;
int NminusK ;
int k=0 ;
int i ;
int kR;
long long unsigned int silniaK = 1;
long long unsigned int silniak =1 ;
long long unsigned int silniaKminusk=1;
long long unsigned int silniaNminusM=1;
long long unsigned int silnia_n_minus_k=1;
long long unsigned int silnia_z_odejmowaniem =1;
long long unsigned int silniaN=1;
long long unsigned int silnia_n=1;
long long unsigned int silnia_N_minus_n=1;



	if(n<K)
	{kR=n;}
	else if(K<n)
	kR=K;
	else if(K==n)
	kR=K;

	   for (k = 1; k <= kR; k++)
	   {
	   //obliczanie silni dla K-l.elementów wyróznionych w populacji generalnej:

	   for (i = 1; i <= K; i++) {
		  silniaK = silniaK*i;
	   }

	   // silnia z k!
		if(k==0)
		{
		  silniak = 1;
		}
		else{
			   for (i = 1; i <= k; i++)
			   {
				  silniak = silniak*i;

			   }
			}

	   //silnia z (K-k)!

	   int Kminusk = K-k;

	   if(Kminusk==0)
		 silniaKminusk=1;
	   else
	   {
			for (i = 1; i <= Kminusk ; i++)
			{
			  silniaKminusk = silniaKminusk*i;
		   }
	   }

		NminusK = N-K;

	   if(NminusK==0)
		 silniaNminusM=1;
	   else
	   {
		for (i = 1; i <= NminusK ; i++) {
		  silniaNminusM = silniaNminusM*i;
	   }
	   }

	   int n_minus_k= n-k;

	   if(n_minus_k==0)
		 silnia_n_minus_k=1;
	   else
	   {
		for (i = 1; i <= n_minus_k ; i++) {
		  silnia_n_minus_k = silnia_n_minus_k*i;
	   }
	   }

	   int odejmowanie2WartosciWSilni= NminusK - n_minus_k;

	   if(odejmowanie2WartosciWSilni==0)
		silnia_z_odejmowaniem=1;
		else
		{
		   for (i = 1; i <= odejmowanie2WartosciWSilni ; i++) {
			  silnia_z_odejmowaniem = silnia_z_odejmowaniem*i;
		   }

		}
	   for (i = 1; i <= N; i++) {
		  silniaN = silniaN*i;
	   }

		for (i = 1; i <= n; i++) {
		  silnia_n = silnia_n*i;
	   }

		int N_minus_n = N-n;

		if(N_minus_n==0)
		 silnia_N_minus_n=1;
		 else {
			for (i = 1; i <= N_minus_n; i++) {
			  silnia_N_minus_n = silnia_N_minus_n*i;
		   }
		  }

		long long unsigned int mnozenie1=silniak*silniaKminusk ;
		long long unsigned int mnozenie2=silnia_n_minus_k*silnia_z_odejmowaniem ;
		long long unsigned int mnozenie3=silnia_n*silnia_N_minus_n ;

		long double dzielenie1 = (double)silniaK/(double)mnozenie1;
		long double dzielenie2 = (double)silniaNminusM/(double)mnozenie2;
		long double dzielenie3 = (double)silniaN/(double)mnozenie3;

		long double  mnozenie11 = dzielenie1 * dzielenie2;

		long double prawdopodobienstwo = mnozenie11/dzielenie3;


		Memo1->Lines->Add("Prawdopodobieñstwo dla k=" + IntToStr(k)+ " wynosi : "+FloatToStr(prawdopodobienstwo));


	}

       float p,q;

   p = ((float)K/(float)N);
   q = 1-p;

   float wartoscOczekiwana = n*p;
   float wariancja = (float)n*p*q*(((float)N-(float)n)/((float)N-1));
   float odchylenieStandardowe =sqrt(wariancja);

   Edit3->Text=CurrToStrF(wartoscOczekiwana,ffNumber,2);
   Edit4->Text=CurrToStrF(wariancja,ffNumber,2);
   Edit5->Text=CurrToStrF(odchylenieStandardowe,ffNumber,2);
   Edit6->Text=IntToStr(K);
   Edit7->Text=IntToStr(NminusK);

	 }

}

//---------------------------------------------------------------------------

void __fastcall TForm5::Button2Click(TObject *Sender)
{Edit1->Text="";
 Edit2->Text="";
 Edit3->Text="";
 Edit4->Text="";
 Edit5->Text="";
 Edit6->Text="";
 Edit7->Text="";
 Memo1->Lines->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm5::Button3Click(TObject *Sender)
{
    SaveDialog1->Execute();
Memo1->Lines->SaveToFile(SaveDialog1->FileName);
//Edit3->Text->SaveToFile(SaveDialog1->FileName);
//Edit4->Text->SaveToFile(SaveDialog1->FileName);
//Edit5->Text->SaveToFile(SaveDialog1->FileName);
}
//---------------------------------------------------------------------------

