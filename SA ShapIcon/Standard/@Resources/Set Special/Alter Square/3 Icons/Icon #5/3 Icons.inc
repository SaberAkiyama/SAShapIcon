[MeterMask1]
Meter=Image
MeterStyle=Special#Special3Icon5AlterSquareColorType#AlterSquare#Special3Icon5AlterSquareCode#Style
X=232
Y=139

[MeterMask2]
Meter=Image
MeterStyle=Special#Special3Icon5AlterSquareColorType#AlterSquare#Special3Icon5AlterSquareCode#Style
X=275
Y=96

[MeterMask3]
Meter=Image
MeterStyle=Special#Special3Icon5AlterSquareColorType#AlterSquare#Special3Icon5AlterSquareCode#Style
X=318
Y=139

[MeterIcon1Base]
Meter=Image
MeterStyle=Special#Special3Icon5AlterSquareColorType##Special3Icon5CategoryAlterSquareNo1##Special3Icon5AlterSquareCode#Style
ImageName=#Special3Icon5AlterSquareNo1#.png
ImageTint=#Special3Icon5AlterSquareBase#
Container=MeterMask1
Hidden=#Special3Icon5AlterSquareBaseHidden#

[MeterIcon2Base]
Meter=Image
MeterStyle=Special#Special3Icon5AlterSquareColorType##Special3Icon5CategoryAlterSquareNo2##Special3Icon5AlterSquareCode#Style
ImageName=#Special3Icon5AlterSquareNo2#.png
ImageTint=#Special3Icon5AlterSquareBase#
Container=MeterMask2
Hidden=#Special3Icon5AlterSquareBaseHidden#

[MeterIcon3Base]
Meter=Image
MeterStyle=Special#Special3Icon5AlterSquareColorType##Special3Icon5CategoryAlterSquareNo3##Special3Icon5AlterSquareCode#Style
ImageName=#Special3Icon5AlterSquareNo3#.png
ImageTint=#Special3Icon5AlterSquareBase#
Container=MeterMask3
Hidden=#Special3Icon5AlterSquareBaseHidden#

[MeterIcon1Chameleon]
Meter=Image
MeterStyle=Special#Special3Icon5AlterSquareColorType##Special3Icon5CategoryAlterSquareNo1##Special3Icon5AlterSquareCode#Style
ImageName=#Special3Icon5AlterSquareNo1#.png
ImageTint=[Desktop#Special3Icon5AlterSquareCode#]
Container=MeterMask1
Hidden=#Special3Icon5AlterSquareChameleonHidden#

[MeterIcon2Chameleon]
Meter=Image
MeterStyle=Special#Special3Icon5AlterSquareColorType##Special3Icon5CategoryAlterSquareNo2##Special3Icon5AlterSquareCode#Style
ImageName=#Special3Icon5AlterSquareNo2#.png
ImageTint=[Desktop#Special3Icon5AlterSquareCode#]
Container=MeterMask2
Hidden=#Special3Icon5AlterSquareChameleonHidden#

[MeterIcon3Chameleon]
Meter=Image
MeterStyle=Special#Special3Icon5AlterSquareColorType##Special3Icon5CategoryAlterSquareNo3##Special3Icon5AlterSquareCode#Style
ImageName=#Special3Icon5AlterSquareNo3#.png
ImageTint=[Desktop#Special3Icon5AlterSquareCode#]
Container=MeterMask3
Hidden=#Special3Icon5AlterSquareChameleonHidden#

[MeterSetIcon1Text]
Meter=String
MeterStyle=SpecailSetIconText
X=750
Y=170
Text="Icon 1:"

[MeterSetIcon2Text]
Meter=String
MeterStyle=SpecailSetIconText
X=0r
Y=15R
Text="Icon 2:"

[MeterSetIcon3Text]
Meter=String
MeterStyle=SpecailSetIconText
X=0r
Y=15R
Text="Icon 3:"

[MeterSetIcon1Active]
Meter=String
MeterStyle=SpecailSetIconTextActive
X=775
Y=[MeterSetIcon1Text:Y]
Text=#Special3Icon5AlterSquareNo1#
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Context\Special\Set Icon\Alter Square\3 Icons\Icon #5" "Set Icon #1.ini"][!WriteKeyValue Variables SpecSetIconShapeNum "1" "#@#Special Variables.inc"]
MouseOverAction=[!CommandMeasure LuaSpecial "setSpecialIcon1('Over')"][!CommandMeasure LuaSpecial "setSpecialMask3Icon5AlterSquareOver1()"]
MouseLeaveAction=[!CommandMeasure LuaSpecial "setSpecialIcon1('Leave')"][!CommandMeasure LuaSpecial "setSpecialMask3Icon5AlterSquareLeave1()"]

[MeterSetIcon2Active]
Meter=String
MeterStyle=SpecailSetIconTextActive
X=0r
Y=15R
Text=#Special3Icon5AlterSquareNo2#
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Context\Special\Set Icon\Alter Square\3 Icons\Icon #5" "Set Icon #2.ini"][!WriteKeyValue Variables SpecSetIconShapeNum "2" "#@#Special Variables.inc"]
MouseOverAction=[!CommandMeasure LuaSpecial "setSpecialIcon2('Over')"][!CommandMeasure LuaSpecial "setSpecialMask3Icon5AlterSquareOver2()"]
MouseLeaveAction=[!CommandMeasure LuaSpecial "setSpecialIcon2('Leave')"][!CommandMeasure LuaSpecial "setSpecialMask3Icon5AlterSquareLeave2()"]

[MeterSetIcon3Active]
Meter=String
MeterStyle=SpecailSetIconTextActive
X=0r
Y=15R
Text=#Special3Icon5AlterSquareNo3#
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Context\Special\Set Icon\Alter Square\3 Icons\Icon #5" "Set Icon #3.ini"][!WriteKeyValue Variables SpecSetIconShapeNum "3" "#@#Special Variables.inc"]
MouseOverAction=[!CommandMeasure LuaSpecial "setSpecialIcon3('Over')"][!CommandMeasure LuaSpecial "setSpecialMask3Icon5AlterSquareOver3()"]
MouseLeaveAction=[!CommandMeasure LuaSpecial "setSpecialIcon3('Leave')"][!CommandMeasure LuaSpecial "setSpecialMask3Icon5AlterSquareLeave3()"]

; ============================================================

[MeterColor]
Meter=String
MeterStyle=IconText
X=200
Y=460
Text=Color Tint

[MeterColorActive]
Meter=String
MeterStyle=IconActive
X=0r
Y=5R
Text=#Special3Icon5AlterSquareBase#
LeftMouseUpAction=[!CommandMeasure LuaSpecial "setSpecial3Icon5AlterSquareBase()"]
MouseOverAction=[!CommandMeasure LuaSpecial "setSpecialBase('Over')"]
MouseLeaveAction=[!CommandMeasure LuaSpecial "setSpecialBase('Leave')"]

[MeterChameleon]
Meter=String
MeterStyle=IconText
X=440
Y=460
Text=Chameleon Tint

[MeterChameleonActive]
Meter=String
MeterStyle=IconActive
X=0r
Y=5R
Text=#Special3Icon5AlterSquareChameleonName#
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#\Context\Special\Chameleon\Alter Square\3 Icons" "Icon #5.ini"]
MouseOverAction=[!CommandMeasure LuaSpecial "setSpecialChameleon('Over')"]
MouseLeaveAction=[!CommandMeasure LuaSpecial "setSpecialChameleon('Leave')"]

; ============================================================
; ============================================================

[MeterSkinSpecial3Icon5AlterSquareBase]
Measure=Plugin
Plugin=InputText
StringAlign=Center
FontFace=Segoe UI
FontSize=15
X=132
Y=480
W=140
H=30
AntiAlias=1
FocusDismiss=1
Command1=[!WriteKeyValue Variables Special3Icon5AlterSquareBase "$UserInput$" "#@#Special Variables.inc"][!RefreshGroup ShapeSettings]
DefaultValue="#Special3Icon5AlterSquareBase#"