[MeterCurrentText]
Meter=String
MeterStyle=IconTextCurrent
X=960
Y=80
Text=Current Icon

[MeterBitDefenderText]
Meter=String
MeterStyle=IconTextName
X=0r
Y=5R
Text=BitDefender

; ============================================================
; ============================================================

[MeterMaskShape]
Meter=Shape
MeterStyle=Mask#BitDefenderShape#90
MyFillGradient=#ShapeGradientAngle# | #BitDefenderShapeGradient1Base#,255 ; 1.0 | #BitDefenderShapeGradient2Base#,255 ; 0.0
X=915
Y=160

[MeterMaskImage]
Meter=Image
ImagePath=#@#Plus\Image Shapes\Settings\Mask
ImageName=#BitDefenderMask#.png
ImageTint=#BitDefenderMaskBase#
X=0r
Y=0r
AntiAlias=1
UpdateDivider=-1
Hidden=#BitDefenderRegularHidden#

[MeterIconImageBitDefender]
Meter=Image
ImageName=#@#Plus\Image Shapes\Settings\Icon\Other\BitDefender.png
ImageTint=#BitDefenderMaskBase#
X=0r
Y=0r
AntiAlias=1
UpdateDivider=-1

; ============================================================
; ============================================================

[MeterMask]
Meter=String
MeterStyle=IconText
X=840
Y=320
Text=Mask Shape

[MeterMaskActive]
Meter=String
MeterStyle=IconActive
X=0r
Y=5R
Text=#BitDefenderMask#
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#\Context\Plus\Mask Shapes" "BitDefender.ini"]
MouseOverAction=[!SetOption MeterMaskActive FontColor "255,215,0"][!UpdateMeter *][!Redraw]
MouseLeaveAction=[!SetOption MeterMaskActive FontColor "255,255,255"][!UpdateMeter *][!Redraw]

[MeterColorMask]
Meter=String
MeterStyle=IconText
X=240r
Y=320
Text=Color Mask

[MeterColorMaskActive]
Meter=String
MeterStyle=IconActive
X=0r
Y=5R
Text=#BitDefenderMaskBase#
LeftMouseUpAction=[!CommandMeasure LuaOther "setBitDefenderColorManual('Mask')"]
MouseOverAction=[!SetOption MeterColorMaskActive FontColor "255,215,0"][!UpdateMeter *][!Redraw]
MouseLeaveAction=[!SetOption MeterColorMaskActive FontColor "255,255,255"][!UpdateMeter *][!Redraw]

; ============================================================
; ============================================================

[MeterColorShapeGradient1]
Meter=String
MeterStyle=IconText
X=840
Y=420
Text=Color Gradient 1

[MeterColorShapeGradient1Active]
Meter=String
MeterStyle=IconActive
X=0r
Y=5R
Text=#BitDefenderShapeGradient1Base#
LeftMouseUpAction=[!CommandMeasure LuaOther "setBitDefenderColorManual('Gradient 1')"]
MouseOverAction=[!SetOption MeterColorShapeGradient1Active FontColor "255,215,0"][!UpdateMeter *][!Redraw]
MouseLeaveAction=[!SetOption MeterColorShapeGradient1Active FontColor "255,255,255"][!UpdateMeter *][!Redraw]

[MeterColorShapeGradient2]
Meter=String
MeterStyle=IconText
X=240r
Y=420
Text=Color Gradient 2

[MeterColorShapeGradient2Active]
Meter=String
MeterStyle=IconActive
X=0r
Y=5R
Text=#BitDefenderShapeGradient2Base#
LeftMouseUpAction=[!CommandMeasure LuaOther "setBitDefenderColorManual('Gradient 2')"]
MouseOverAction=[!SetOption MeterColorShapeGradient2Active FontColor "255,215,0"][!UpdateMeter *][!Redraw]
MouseLeaveAction=[!SetOption MeterColorShapeGradient2Active FontColor "255,255,255"][!UpdateMeter *][!Redraw]

; ============================================================
; ============================================================

[MeterSkinBitDefender]
Measure=Plugin
Plugin=InputText
StringAlign=Center
FontFace=Segoe UI
FontSize=15
W=140
H=30
AntiAlias=1
FocusDismiss=1
Command1=[!WriteKeyValue Variables BitDefenderMaskBase "$UserInput$" "#@#Plus\Variables.inc"] X=1012 Y=342 DefaultValue="#BitDefenderMaskBase#" [!RefreshGroup "ShapeSettings"]
Command2=[!WriteKeyValue Variables BitDefenderShapeGradient1Base "$UserInput$" "#@#Plus\Variables.inc"] X=772 Y=442 DefaultValue="#BitDefenderShapeGradient1Base#" [!RefreshGroup "ShapeSettings"]
Command3=[!WriteKeyValue Variables BitDefenderShapeGradient2Base "$UserInput$" "#@#Plus\Variables.inc"] X=1012 Y=442 DefaultValue="#BitDefenderShapeGradient2Base#" [!RefreshGroup "ShapeSettings"]

; ============================================================
; ============================================================

[MeterApplyButton]
Meter=String
MeterStyle=IconSkinActive
X=960
Y=565
Text="Apply Changes"
LeftMouseUpAction=[!CommandMeasure LuaOther "setApply()"]
MouseOverAction=[!CommandMeasure LuaOther "setSkinApply('Over')"]
MouseLeaveAction=[!CommandMeasure LuaOther "setSkinApply('Leave')"]