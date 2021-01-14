//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitMain.h"
#include "Unit3.h"
#include "Unit5.h"
#include "Unit4.h"
#include "Unit6.h"
#include "Unit7.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
int nr = 1;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::RadioButton1Click(TObject *Sender)
{
	Form7->Show();

}
//---------------------------------------------------------------------------
void __fastcall TForm2::RadioButton2Click(TObject *Sender)
{
	nr = 2;
	Form4->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::RadioButton4Click(TObject *Sender)
{
	nr = 4;
    Form6->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
ShellExecuteA(0, "open", "https://pl.wikipedia.org/wiki/Losowanie", NULL, NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Info1Click(TObject *Sender)
{
	ShowMessage("Program przedstawiaj¹cy generatory liczb losowych");
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button2Click(TObject *Sender)
{
	 ShellExecuteA(0, "open", "https://pl.wikipedia.org/wiki/Losowanie", NULL, NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button3Click(TObject *Sender)
{
	 ShellExecuteA(0, "open", "https://pl.wikipedia.org/wiki/Rozk%C5%82ad_dwumianowy", NULL, NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button4Click(TObject *Sender)
{
	 ShellExecuteA(0, "open", "https://pl.wikipedia.org/wiki/Rozk%C5%82ad_Poissona", NULL, NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------
void __fastcall TForm2::Button5Click(TObject *Sender)
{
	 ShellExecuteA(0, "open", "https://pl.wikipedia.org/wiki/Rozk%C5%82ad_hipergeometryczny", NULL, NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------




void __fastcall TForm2::RadioButton3Click(TObject *Sender)
{
	Form1->Show();

}
//---------------------------------------------------------------------------


void __fastcall TForm2::RadioButton5Click(TObject *Sender)
{
	Form5->Show();
}
//---------------------------------------------------------------------------

