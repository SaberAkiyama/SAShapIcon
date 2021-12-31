[MeterCurrentText]
Meter=String
MeterStyle=IconTextCurrent
X=960
Y=80
Text=Current Icon

[MeterSmiteText]
Meter=String
MeterStyle=IconTextName
X=0r
Y=5R
Text=Smite

; ============================================================
; ============================================================

[MeterMaskShape]
Meter=Shape
MeterStyle=Mask#SmiteShape#90
MyFillGradient=#ShapeGradientAngle# | #SmiteShapeGradient1Base#,255 ; 1.0 | #SmiteShapeGradient2Base#,255 ; 0.0
X=915
Y=160

[MeterMaskImage]
Meter=Image
ImagePath=#@#Plus\Image Shapes\Settings\Mask
ImageName=#SmiteMask#.png
ImageTint=#SmiteMaskBase#
X=0r
Y=0r
AntiAlias=1
UpdateDivider=-1
Hidden=#SmiteRegularHidden#

[MeterIconImageSmite]
Meter=Image
ImageName=#@#Plus\Image Shapes\Settings\Icon\Gaming\Smite.png
ImageTint=#SmiteMaskBase#
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
Text=#SmiteMask#
LeftMouseUpAction=[!ToggleConfig "#ROOTCONFIG#\Context\Plus\Mask Shapes" "Smite.ini"]
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
Text=#SmiteMaskBase#
LeftMouseUpAction=[!CommandMeasure LuaGaming "setSmiteColorManual('Mask')"]
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
Text=#SmiteShapeGradient1Base#
LeftMouseUpAction=[!CommandMeasure LuaGaming "setSmiteColorManual('Gradient 1')"]
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
Text=#SmiteShapeGradient2Base#
LeftMouseUpAction=[!CommandMeasure LuaGaming "setSmiteColorManual('Gradient 2')"]
MouseOverAction=[!SetOption MeterColorShapeGradient2Active FontColor "255,215,0"][!UpdateMeter *][!Redraw]
MouseLeaveAction=[!SetOption MeterColorShapeGradient2Active FontColor "255,255,255"][!UpdateMeter *][!Redraw]

; ============================================================
; ============================================================

[MeterSkinSmite]
Measure=Plugin
Plugin=InputText
StringAlign=Center
FontFace=Segoe UI
FontSize=15
W=140
H=30
AntiAlias=1
FocusDismiss=1
Command1=[!WriteKeyValue Variables SmiteMaskBase "$UserInput$" "#@#Plus\Variables.inc"] X=1012 Y=342 DefaultValue="#SmiteMaskBase#" [!RefreshGroup "ShapeSettings"]
Command2=[!WriteKeyValue Variables SmiteShapeGradient1Base "$UserInput$" "#@#Plus\Variables.inc"] X=772 Y=442 DefaultValue="#SmiteShapeGradient1Base#" [!RefreshGroup "ShapeSettings"]
Command3=[!WriteKeyValue Variables SmiteShapeGradient2Base "$UserInput$" "#@#Plus\Variables.inc"] X=1012 Y=442 DefaultValue="#SmiteShapeGradient2Base#" [!RefreshGroup "ShapeSettings"]

; ============================================================
; ============================================================

[MeterApplyButton]
Meter=String
MeterStyle=IconSkinActive
X=960
Y=565
Text="Apply Changes"
LeftMouseUpAction=[!CommandMeasure LuaGaming "setApply()"]
MouseOverAction=[!CommandMeasure LuaGaming "setSkinApply('Over')"]
MouseLeaveAction=[!CommandMeasure LuaGaming "setSkinApply('Leave')"]