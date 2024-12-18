//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TLab3Form *Lab3Form;
//---------------------------------------------------------------------------
__fastcall TLab3Form::TLab3Form(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
   void __fastcall TLab3Form::PanelMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift, int X, int Y)
{
   if(Button == mbLeft)                      // лева€ кнопка
      ((TPanel*)Sender)->Color = clLime;
   else
   if(Button == mbMiddle)                    // средн€€ кнопка
      ((TPanel*)Sender)->Color = clYellow;
   else
   if(Button == mbRight)                     // права€ кнопка
      ((TPanel*)Sender)->Color = clRed;
}



//---------------------------------------------------------------------------
void __fastcall TLab3Form::PanelMouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
	 ((TPanel*)Sender)->Caption = IntToStr(X)+" x "+IntToStr(Y);
}
//---------------------------------------------------------------------------
void __fastcall TLab3Form::PanelMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	((TPanel*)Sender)->Color = Color;
}
//---------------------------------------------------------------------------
void __fastcall TLab3Form::Click(TObject *Sender)
{
ShowMessage("ўелчок");
}
//---------------------------------------------------------------------------
void __fastcall TLab3Form::Doblclick(TObject *Sender)
{

ShowMessage("ƒвойной щелчок");
}
//---------------------------------------------------------------------------
void __fastcall TLab3Form::Change(TObject *Sender)
{
text_label->Caption = edit->Text;
}
//---------------------------------------------------------------------------
void __fastcall TLab3Form::down(TObject *Sender, WORD &Key, TShiftState Shift)
{
((TEdit*)Sender)->Color = clYellow;
}
//---------------------------------------------------------------------------
void __fastcall TLab3Form::up(TObject *Sender, WORD &Key, TShiftState Shift)
{
((TEdit*)Sender)->Color = clWhite;
}
//---------------------------------------------------------------------------
void __fastcall TLab3Form::press(TObject *Sender, System::WideChar &Key)
{
key_label->Caption = IntToStr(Key);

   if(Key == VK_RETURN) ShowMessage(edit->Text);

}
//---------------------------------------------------------------------------
void __fastcall TLab3Form::Click1(TObject *Sender)
{
ShowMessage(((TButton*)Sender)->Caption);
}
//---------------------------------------------------------------------------
void __fastcall TLab3Form::Button2Click(TObject *Sender)
{
ShowMessage(((TButton*)Sender)->Caption);
}
//---------------------------------------------------------------------------
void __fastcall TLab3Form::Click3(TObject *Sender)
{
ShowMessage(((TButton*)Sender)->Caption);
}
//---------------------------------------------------------------------------
void __fastcall TLab3Form::Changewidth(TObject *Sender)
{
panel->Width = width_track->Position;
}
//---------------------------------------------------------------------------
void __fastcall TLab3Form::Changeheight(TObject *Sender)
{
panel->Height = height_track->Position;
}
//---------------------------------------------------------------------------
void __fastcall TLab3Form::item(TObject *Sender, TListItem *Item, bool Selected)
{
if(Selected)
      item_edit->Text = Item->Caption;
   else
      item_edit->Text = "Helloo, caaatt!";

}
//---------------------------------------------------------------------------
void __fastcall TLab3Form::Changing(TObject *Sender, bool &AllowChange)
{
AllowChange = page_check->Checked;
}
//---------------------------------------------------------------------------
