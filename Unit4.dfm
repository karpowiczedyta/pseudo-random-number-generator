object Form4: TForm4
  Left = 0
  Top = 0
  Caption = 'Form4'
  ClientHeight = 270
  ClientWidth = 504
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 16
    Top = 16
    Width = 200
    Height = 19
    Caption = 'Losowanie proste niezale'#380'ne'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 18
    Top = 48
    Width = 77
    Height = 13
    Caption = 'Podaj ilo'#347'c liczb:'
  end
  object Label3: TLabel
    Left = 18
    Top = 109
    Width = 100
    Height = 13
    Caption = 'Podaj g'#243'rn'#261' granic'#281':'
  end
  object Label4: TLabel
    Left = 231
    Top = 216
    Width = 102
    Height = 13
    Caption = 'Warto'#347#263' oczekiwana:'
  end
  object Memo1: TMemo
    Left = 231
    Top = 18
    Width = 217
    Height = 185
    Lines.Strings = (
      'Memo1')
    ScrollBars = ssVertical
    TabOrder = 0
  end
  object Button1: TButton
    Left = 18
    Top = 155
    Width = 121
    Height = 25
    Caption = 'Generuj'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Edit1: TEdit
    Left = 18
    Top = 67
    Width = 121
    Height = 21
    TabOrder = 2
  end
  object Edit2: TEdit
    Left = 18
    Top = 128
    Width = 121
    Height = 21
    TabOrder = 3
  end
  object Button2: TButton
    Left = 18
    Top = 186
    Width = 121
    Height = 25
    Caption = 'Resetuj'
    TabOrder = 4
    OnClick = Button2Click
  end
  object Edit3: TEdit
    Left = 339
    Top = 209
    Width = 109
    Height = 21
    Enabled = False
    ReadOnly = True
    TabOrder = 5
  end
  object Button3: TButton
    Left = 231
    Top = 235
    Width = 217
    Height = 25
    Caption = 'Zapisz'
    TabOrder = 6
    OnClick = Button3Click
  end
  object SaveDialog1: TSaveDialog
    DefaultExt = 'txt'
    Filter = 'txt files (*.txt)|*.txt'
    Left = 16
    Top = 232
  end
end
