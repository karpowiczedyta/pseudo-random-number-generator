object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'GENERATORY LICZB (PSEUDO)LOSOWYCH'
  ClientHeight = 486
  ClientWidth = 749
  Color = clGradientActiveCaption
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -16
  Font.Name = 'Tahoma'
  Font.Style = [fsBold]
  Menu = MainMenu
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 19
  object Label2: TLabel
    Left = 18
    Top = 8
    Width = 91
    Height = 18
    Caption = 'Liczba pr'#243'b n:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 18
    Top = 77
    Width = 210
    Height = 18
    Caption = 'Prawdopodobie'#324'swto sukcesu p:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 18
    Top = 143
    Width = 64
    Height = 18
    Caption = 'No'#347'nik k: '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Button6: TButton
    Left = 57
    Top = 215
    Width = 121
    Height = 26
    Caption = 'Generuj'
    TabOrder = 0
    OnClick = Button6Click
  end
  object Button7: TButton
    Left = 57
    Top = 245
    Width = 121
    Height = 26
    Caption = 'Reset'
    TabOrder = 1
    OnClick = Button7Click
  end
  object Button8: TButton
    Left = 57
    Top = 277
    Width = 121
    Height = 26
    Caption = 'Zamknij'
    TabOrder = 2
    OnClick = Button8Click
  end
  object Edit1: TEdit
    Left = 57
    Top = 32
    Width = 121
    Height = 26
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
  end
  object Edit2: TEdit
    Left = 57
    Top = 101
    Width = 121
    Height = 26
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
  end
  object Edit3: TEdit
    Left = 57
    Top = 167
    Width = 121
    Height = 26
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
  end
  object StringGrid1: TStringGrid
    Left = 272
    Top = 289
    Width = 457
    Height = 178
    ColCount = 2
    DefaultColWidth = 225
    FixedCols = 0
    RowCount = 9
    TabOrder = 6
  end
  object Memo1: TMemo
    Left = 272
    Top = 8
    Width = 457
    Height = 275
    TabOrder = 7
  end
  object MainMenu: TMainMenu
    Left = 40
    Top = 344
    object Info1: TMenuItem
      Caption = 'Info'
      OnClick = Info1Click
    end
    object Autorzy1: TMenuItem
      Caption = 'Autorzy'
      object EdytaKarpowicz1: TMenuItem
        Caption = 'Edyta Karpowicz'
      end
      object KatarzynaMajchrzak1: TMenuItem
        Caption = 'Katarzyna Majchrzak'
      end
      object RadosawMarczak1: TMenuItem
        Caption = 'Rados'#322'aw Marczak'
      end
      object WiktorSobaski1: TMenuItem
        Caption = 'Wiktor Soba'#324'ski'
      end
    end
  end
end
