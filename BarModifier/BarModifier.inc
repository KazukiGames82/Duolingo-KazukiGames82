;----------------------------------------------------
; Styles
;----------------------------------------------------

[Duolingo-KazukiGames82.Style]
ImageAlpha=0
W=((((#TopHeight#+#TopBarIconHOffset#)*1.5))-((((#TopHeight#+#TopBarIconHOffset#)*1.5)%1)))

[Duolingo-KazukiGames82_Style_0]
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[##CURRENTSECTION#]]\Button\Medium\Button[#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]].png
ImageTint=#TopBarFontColor1#,#TopBarTitleOpacity#
Group=CustomApp[#Duolingo-KazukiGames82]Sys | SysTray | Buttons00 | AppButton[#CustomApp[#Duolingo-KazukiGames82]] | CustomAppButton | Duolingo-KazukiGames82 | WifiSys

[Duolingo-KazukiGames82_Style_1]
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[##CURRENTSECTION#]]\Button\Medium\ButtonColor[#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]].png
ImageTint=255,255,255,#TopBarTitleOpacity#
Group=None | SysTray | Duolingo-KazukiGames82 | WifiSys

;----------------------------------------------------
; Meters
;----------------------------------------------------

[Duolingo-KazukiGames82]
Meter=Image
MeterStyle=InfoStyle | CustomAppModifierStyle | Duolingo-KazukiGames82_Style_#Duolingo-KazukiGames82___Use_Colored_Icon#
ImageAlpha=(#TopBarTitleOpacity#/(#NetworkStatusVar#=1?1:2))
SolidColor=0,0,0,0
MouseOverAction=
MouseLeaveAction=
LeftMouseDownAction=
W=((((#TopHeight#+#TopBarIconHOffset#)*1.5))-((((#TopHeight#+#TopBarIconHOffset#)*1.5)%1)))
H=(#TopHeight#+#TopBarIconHOffset#)
Padding=#SysIconPadding#
