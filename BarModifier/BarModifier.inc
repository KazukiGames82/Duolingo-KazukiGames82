;----------------------------------------------------
; Styles
;----------------------------------------------------

[Duolingo-KazukiGames82.Style]
W=((((#TopHeight#+#TopBarIconHOffset#)*1.5))-((((#TopHeight#+#TopBarIconHOffset#)*1.5)%1)))
ImageAlpha=0

[Duolingo-KazukiGames82_Style]
X=[#SideAppSlotXPos[#SideAppPosCustomApp[#Duolingo-KazukiGames82]]]
MouseOverAction=
MouseLeaveAction=
LeftMouseDownAction=
RightMouseDownAction=
LeftMouseUpAction=
Container=SystemTrayContainer
Group=CustomApp[#Duolingo-KazukiGames82]Sys | SysTray | Animation | Buttons00 | AppButton[#CustomApp[#Duolingo-KazukiGames82]] | CustomAppButton | Duolingo-KazukiGames82
DynamicVariables=1

[Duolingo-KazukiGames82_Style_0]
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[##CURRENTSECTION#]]\Button\Medium\Button[#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]].png
FontColor=#TopBarFontColor1#,#TopBarTitleOpacity#

[Duolingo-KazukiGames82_Style_1]
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[##CURRENTSECTION#]]\Button\Medium\ButtonColorS.png
Group=None | SysTray | Duolingo-KazukiGames82

;----------------------------------------------------
; Meters
;----------------------------------------------------

[Duolingo-KazukiGames82]
Meter=Image
MeterStyle=InfoStyle | CustomAppModifierStyle | Duolingo-KazukiGames82_Style_#Duolingo-KazukiGames82___Use_Colored_Icon#
SolidColor=0,0,0,0
MouseOverAction=[]
MouseLeaveAction=[]
W=((#TopHeight#+#TopBarIconHOffset#)*1.5)
H=(#TopHeight#+#TopBarIconHOffset#)
Padding=#SysIconPadding#
