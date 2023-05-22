//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <System.StrUtils.hpp>
#include "zadanie2.h"
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
	double R1 = StrToFloat(Edit1->Text);
	double R2 = StrToFloat(Edit2->Text);
    double R;
	if (RadioButton2->Checked)
	{
		R = R1 + R2;
    }
	else
    {
		R = (R1 * R2) / (R1 + R2);
    }
	Label2->Caption = FloatToStr(R);

}
//---------------------------------------------------------------------------
