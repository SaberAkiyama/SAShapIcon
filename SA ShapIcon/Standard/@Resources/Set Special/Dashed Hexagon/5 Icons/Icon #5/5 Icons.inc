[MeterMask1]
Meter=Image
MeterStyle=Special#Special5Icon5DashedHexagonColorType#DashedHexagon#Special5Icon5DashedHexagonCode#Style
X=237
Y=96

[MeterMask2]
Meter=Image
MeterStyle=Special#Special5Icon5DashedHexagonColorType#DashedHexagon#Special5Icon5DashedHexagonCode#Style
X=313
Y=96

[MeterMask3]
Meter=Image
MeterStyle=Special#Special5Icon5DashedHexagonColorType#DashedHexagon#Special5Icon5DashedHexagonCode#Style
X=199
Y=161

[MeterMask4]
Meter=Image
MeterStyle=Special#Special5Icon5DashedHexagonColorType#DashedHexagon#Special5Icon5DashedHexagonCode#Style
X=275
Y=161

[MeterMask5]
Meter=Image
MeterStyle=Special#Special5Icon5DashedHexagonColorType#DashedHexagon#Special5Icon5DashedHexagonCode#Style
X=351
Y=161

[MeterIcon1Base]
Meter=Image
MeterStyle=Special#Special5Icon5DashedHexagonColorType##Special5Icon5CategoryDashedHexagonNo1##Special5Icon5DashedHexagonCode#Style
ImageName=#Special5Icon5DashedHexagonNo1#.png
ImageTint=#Special5Icon5DashedHexagonBase#
Container=MeterMask1
Hidden=#Special5Icon5DashedHexagonBaseHidden#

[MeterIcon2Base]
Meter=Image
MeterStyle=Special#Special5Icon5DashedHexagonColorType##Special5Icon5CategoryDashedHexagonNo2##Special5Icon5DashedHexagonCode#Style
ImageName=#Special5Icon5DashedHexagonNo2#.png
ImageTint=#Special5Icon5DashedHexagonBase#
Container=MeterMask2
Hidden=#Special5Icon5DashedHexagonBaseHidden#

[MeterIcon3Base]
Meter=Image
MeterStyle=Special#Special5Icon5DashedHexagonColorType##Special5Icon5CategoryDashedHexagonNo3##Special5Icon5DashedHexagonCode#Style
ImageName=#Special5Icon5DashedHexagonNo3#.png
ImageTint=#Special5Icon5DashedHexagonBase#
Container=MeterMask3
Hidden=#Special5Icon5DashedHexagonBaseHidden#

[MeterIcon4Base]
Meter=Image
MeterStyle=Special#Special5Icon5DashedHexagonColorType##Special5Icon5CategoryDashedHexagonNo4##Special5Icon5DashedHexagonCode#Style
ImageName=#Special5Icon5DashedHexagonNo4#.png
ImageTint=#Special5Icon5DashedHexagonBase#
Container=MeterMask4
Hidden=#Special5Icon5DashedHexagonBaseHidden#

[MeterIcon5Base]
Meter=Image
MeterStyle=Special#Special5Icon5DashedHexagonColorType##Special5Icon5CategoryDashedHexagonNo5##Special5Icon5DashedHexagonCode#Style
ImageName=#Special5Icon5DashedHexagonNo5#.png
ImageTint=#Special5Icon5DashedHexagonBase#
Container=MeterMask5
Hidden=#Special5Icon5DashedHexagonBaseHidden#

[MeterIcon1Chameleon]
Meter=Image
MeterStyle=Special#Special5Icon5DashedHexagonColorType##Special5Icon5CategoryDashedHexagonNo1##Special5Icon5DashedHexagonCode#Style
ImageName=#Special5Icon5DashedHexagonNo1#.png
ImageTint=[Desktop#Special5Icon5DashedHexagonCode#]
Container=MeterMask1
Hidden=#Special5Icon5DashedHexagonChameleonHidden#

[MeterIcon2Chameleon]
Meter=Image
MeterStyle=Special#Special5Icon5DashedHexagonColorType##Special5Icon5CategoryDashedHexagonNo2##Special5Icon5DashedHexagonCode#Style
ImageName=#Special5Icon5DashedHexagonNo2#.png
ImageTint=[Desktop#Special5Icon5DashedHexagonCode#]
Container=MeterMask2
Hidden=#Special5Icon5DashedHexagonChameleonHidden#

[MeterIcon3Chameleon]
Meter=Image
MeterStyle=Special#Special5Icon5DashedHexagonColorType##Special5Icon5CategoryDashedHexagonNo3##Special5Icon5DashedHexagonCode#Style
ImageName=#Special5Icon5DashedHexagonNo3#.png
ImageTint=[Desktop#Special5Icon5DashedHexagonCode#]
Container=MeterMask3
Hidden=#Special5Icon5DashedHexagonChameleonHidden#

[MeterIcon4Chameleon]
Meter=Image
MeterStyle=Special#Special5Icon5DashedHexagonColorType##Special5Icon5CategoryDashedHexagonNo4##Special5Icon5DashedHexagonCode#Style
ImageName=#Special5Icon5DashedHexagonNo4#.png
ImageTint=[Desktop#Special5Icon5DashedHexagonCode#]
Container=MeterMask4
Hidden=#Special5Icon5DashedHexagonChameleonHidden#

[MeterIcon5Chameleon]
Meter=Image
MeterStyle=Special#Special5Icon5DashedHexagonColorType##Special5Icon5CategoryDashedHexagonNo5##Special5Icon5DashedHexagonCode#Style
ImageName=#Special5Icon5DashedHexagonNo5#.png
ImageTint=[Desktop#Special5Icon5DashedHexagonCode#]
Container=MeterMask5
Hidden=#Special5Icon5DashedHexagonChameleonHidden#

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

[MeterSetIcon4Text]
Meter=String
MeterStyle=SpecailSetIconText
X=0r
Y=15R
Text="Icon 4:"

[MeterSetIcon5Text]
Meter=String
MeterStyle=SpecailSetIconText
X=0r
Y=15R
Text="Icon 5:"

[MeterSetIcon1Active]
Meter=String
MeterStyle=SpecailSetIconTextActive
X=775
Y=[MeterSetIcon1Text:Y]
Text=#Special5Icon5DashedHexagonNo1#
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Context\Special\Set Icon\Dashed Hexagon\5 Icons\Icon #5" "Set Icon #1.ini"][!WriteKeyValue Variables SpecSetIconShapeNum "1" "#@#Special Variables.inc"]
MouseOverAction=[!CommandMeasure LuaSpecial "setSpecialIcon1('Over')"][!CommandMeasure LuaSpecial "setSpecialMask5Icon5DashedHexagonOver1()"]
MouseLeaveAction=[!CommandMeasure LuaSpecial "setSpecialIcon1('Leave')"][!CommandMeasure LuaSpecial "setSpecialMask5Icon5DashedHexagonLeave1()"]

[MeterSetIcon2Active]
Meter=String
MeterStyle=SpecailSetIconTextActive
X=0r
Y=15R
Text=#Special5Icon5DashedHexagonNo2#
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Context\Special\Set Icon\Dashed Hexagon\5 Icons\Icon #5" "Set Icon #2.ini"][!WriteKeyValue Variables SpecSetIconShapeNum "2" "#@#Special Variables.inc"]
MouseOverAction=[!CommandMeasure LuaSpecial "setSpecialIcon2('Over')"][!CommandMeasure LuaSpecial "setSpecialMask5Icon5DashedHexagonOver2()"]
MouseLeaveAction=[!CommandMeasure LuaSpecial "setSpecialIcon2('Leave')"][!CommandMeasure LuaSpecial "setSpecialMask5Icon5DashedHexagonLeave2()"]

[MeterSetIcon3Active]
Meter=String
MeterStyle=SpecailSetIconTextActive
X=0r
Y=15R
Text=#Special5Icon5DashedHexagonNo3#
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Context\Special\Set Icon\Dashed Hexagon\5 Icons\Icon #5" "Set Icon #3.ini"][!WriteKeyValue Variables SpecSetIconShapeNum "3" "#@#Special Variables.inc"]
MouseOverAction=[!CommandMeasure LuaSpecial "setSpecialIcon3('Over')"][!CommandMeasure LuaSpecial "setSpecialMask5Icon5DashedHexagonOver3()"]
MouseLeaveAction=[!CommandMeasure LuaSpecial "setSpecialIcon3('Leave')"][!CommandMeasure LuaSpecial "setSpecialMask5Icon5DashedHexagonLeave3()"]

[MeterSetIcon4Active]
Meter=String
MeterStyle=SpecailSetIconTextActive
X=0r
Y=15R
Text=#Special5Icon5DashedHexagonNo4#
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Context\Special\Set Icon\Dashed Hexagon\5 Icons\Icon #5" "Set Icon #4.ini"][!WriteKeyValue Variables SpecSetIconShapeNum "4" "#@#Special Variables.inc"]
MouseOverAction=[!CommandMeasure LuaSpecial "setSpecialIcon4('Over')"][!CommandMeasure LuaSpecial "setSpecialMask5Icon5DashedHexagonOver4()"]
MouseLeaveAction=[!CommandMeasure LuaSpecial "setSpecialIcon4('Leave')"][!CommandMeasure LuaSpecial "setSpecialMask5Icon5DashedHexagonLeave4()"]

[MeterSetIcon5Active]
Meter=String
MeterStyle=SpecailSetIconTextActive
X=0r
Y=15R
Text=#Special5Icon5DashedHexagonNo5#
LeftMouseUpAction=[!ActivateConfig "#ROOTCONFIG#\Context\Special\Set Icon\Dashed Hexagon\5 Icons\Icon #5" "Set Icon #5.ini"][!WriteKeyValue Variables SpecSetIconShapeNum "5" "#@#Special Variables.inc"]
MouseOverAction=[!CommandMeasure LuaSpecial "setSpecialIcon5('Over')"][!CommandMeasure LuaSpecial "setSpecialMask5Icon5DashedHexagonOver5()"]
MouseLeaveAction=[!CommandMeasure LuaSpecial "setSpecialIcon5('Leave')"][!CommandMeasure LuaSpecial "setSpecialMask5Icon5DashedHexagonLeave5()"]

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
Text=#Special5Icon5DashedHexagonBase#
LeftMouseUpAction=[!CommandMeasure LuaSpecial "setSpecial5Icon5DashedHexagonBase()"]
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
Text=#Special5Icon5DashedHexagonChameleonName#
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#\Context\Special\Chameleon\Dashed Hexagon\5 Icons" "Icon #1.ini"]
MouseOverAction=[!CommandMeasure LuaSpecial "setSpecialChameleon('Over')"]
MouseLeaveAction=[!CommandMeasure LuaSpecial "setSpecialChameleon('Leave')"]

; ============================================================
; ============================================================

[MeterSkinSpecial5Icon5DashedHexagonBase]
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
Command1=[!WriteKeyValue Variables Special5Icon5DashedHexagonBase "$UserInput$" "#@#Special Variables.inc"][!RefreshGroup ShapeSettings]
DefaultValue="#Special5Icon5DashedHexagonBase#"