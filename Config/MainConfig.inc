;----------------------------------------------------
; # # DO NOT REMOVE ANYTHING FROM THIS SECTION # # # 
;----------------------------------------------------

[Rainmeter]

[Variables]
CustomAppPosition=10

WebViewWidth=0
WebViewHeight=0

@IncludeCommunityAppMeters=#SKINSPATH#Droptop\@Resources\Meters\CommunityAppMeters.inc

DropdownMenuWidth=#WebViewWidth#

BoxHeight1=0
BoxHeight2=0
BoxHeight3=0
BoxHeight4=0
BoxHeight5=0

;----------------------------------------------------
; Custom Variables

IconW=((16*#DroptopSize#)-((16*#DroptopSize#)%1))
IconH=((16*#DroptopSize#)-((16*#DroptopSize#)%1))

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

[InfoStyle]

[IconStyle]
MouseOverAction=[!SetOption #CURRENTSECTION# ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION# SolidColor "#*DropdownItemHL*#,(#*DropdownHLOpacity*#/#HighlightShapeOpacityDivisor1B#)"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageTint ""][!SetOption #CURRENTSECTION# SolidColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
Padding=((#WebViewTopHeight#/2)-(#IconW#/2)),((#WebViewTopHeight#/2)-(#IconW#/2)),((#WebViewTopHeight#/2)-(#IconW#/2)),((#WebViewTopHeight#/2)-(#IconW#/2))
X=R
Y=r

[ArrowStyleB]

[BoxStyle]

[TextStyle]

;----------------------------------------------------
; Background
;----------------------------------------------------

[Background]
Shape=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),(#DropdownMenuWidth#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)),(#WebViewHeight#+(#DropdownItemYOffset#*2)+(#DropdownStrokeWidth#/2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#

[WebViewWhiteBG]

;-----------------------------------------

[1]
MeterStyle=#DefaultMeterStyle#
Hidden=1

[2]
MeterStyle=#DefaultMeterStyle#
Hidden=1

[3]
MeterStyle=#DefaultMeterStyle#
Hidden=1

[4]
MeterStyle=#DefaultMeterStyle#
Hidden=1

[5]
MeterStyle=#DefaultMeterStyle#
Hidden=1

[6]
MeterStyle=#DefaultMeterStyle#
Hidden=1

[7]
MeterStyle=#DefaultMeterStyle#
Hidden=1

[8]
MeterStyle=#DefaultMeterStyle#
Hidden=1

[9]
MeterStyle=#DefaultMeterStyle#
Hidden=1

[10]
MeterStyle=#DefaultMeterStyle#
Hidden=1

;-----------------------------------------

[1Icon]
MeterStyle=IconStyle

[2Icon]
MeterStyle=IconStyle

[3Icon]
MeterStyle=IconStyle

[4Icon]
MeterStyle=IconStyle

[5Icon]
MeterStyle=IconStyle

[6Icon]
MeterStyle=IconStyle

[7Icon]
MeterStyle=IconStyle

[8Icon]
MeterStyle=IconStyle

[9Icon]
MeterStyle=IconStyle

[10Icon]
MeterStyle=IconStyle
