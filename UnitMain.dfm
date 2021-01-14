object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Strona G'#322#243'wna'
  ClientHeight = 225
  ClientWidth = 373
  Color = clSkyBlue
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -16
  Font.Name = 'Tahoma'
  Font.Style = [fsBold]
  Menu = MainMenu
  OldCreateOrder = False
  Visible = True
  PixelsPerInch = 96
  TextHeight = 19
  object Label1: TLabel
    Left = 8
    Top = 8
    Width = 77
    Height = 19
    Caption = 'Wybierz: '
  end
  object RadioButton1: TRadioButton
    Left = 57
    Top = 37
    Width = 225
    Height = 25
    Caption = 'Losowanie proste zale'#380'ne'
    Checked = True
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    TabStop = True
    OnClick = RadioButton1Click
  end
  object RadioButton2: TRadioButton
    Left = 57
    Top = 68
    Width = 225
    Height = 17
    Caption = 'Losowanie proste niezale'#380'ne'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = RadioButton2Click
  end
  object RadioButton3: TRadioButton
    Left = 57
    Top = 99
    Width = 225
    Height = 17
    Caption = 'Rozk'#322'ad dwumianowy'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    OnClick = RadioButton3Click
  end
  object RadioButton4: TRadioButton
    Left = 57
    Top = 130
    Width = 225
    Height = 17
    Caption = 'Rozk'#322'ad Poissona'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
    OnClick = RadioButton4Click
  end
  object RadioButton5: TRadioButton
    Left = 57
    Top = 165
    Width = 225
    Height = 17
    Caption = 'Rozk'#322'ad hipergeometryczny'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    OnClick = RadioButton5Click
  end
  object Button1: TButton
    Left = 18
    Top = 37
    Width = 33
    Height = 25
    Caption = '?'
    TabOrder = 5
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 18
    Top = 68
    Width = 33
    Height = 25
    Caption = '?'
    TabOrder = 6
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 18
    Top = 99
    Width = 33
    Height = 25
    Caption = '?'
    TabOrder = 7
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 18
    Top = 130
    Width = 33
    Height = 25
    Caption = '?'
    TabOrder = 8
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 18
    Top = 161
    Width = 33
    Height = 25
    Caption = '?'
    TabOrder = 9
    OnClick = Button5Click
  end
  object MainMenu: TMainMenu
    Left = 304
    Top = 8
    object Info1: TMenuItem
      Caption = 'Info'
      OnClick = Info1Click
    end
    object Autorzy1: TMenuItem
      Caption = 'Autorzy'
      object EdytaKarpowicz1: TMenuItem
        Caption = 'Edyta Karpowicz'
      end
    end
  end
end
