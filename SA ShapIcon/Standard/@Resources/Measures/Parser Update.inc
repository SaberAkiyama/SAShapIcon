[MeasureInternetConnectivity]
; Returns the status of the internet connection.
; Changes error text depending on situation.
Measure=SysInfo
SysInfoType=INTERNET_CONNECTIVITY
SysInfoData=Best
; -1: No Internet, 1: Connected
IfCondition=(MeasureInternetConnectivity = -1)
IfTrueAction=[!CommandMeasure LuaInfo "errorConnect()"]
IfFalseAction=[!CommandMeasure LuaInfo "refreshConnect()"]

[MeasureParserCore]
Measure=WebParser
Url=https://www.deviantart.com/saberakiyama/art/SA-ShapIcon-781074293
UserAgent=Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/95.0.4638.54 Safari/537.36
Flags=Resync | NoCookies
RegExp=(?siU).*<b>Current Version: (.*)</b>.*
UpdateRate=1
LogSubstringErrors=0
OnRegExpErrorAction=[!Log "No connection or timeout." Error]
OnConnectErrorAction=[!Log "No connection or timeout." Error]
FinishAction=[!CommandMeasure LuaInfo "coreParser()"]
Disabled=#DisableUpdate#
UpdateDivider=-1
Paused=1

[MeasureCurrentVersion]
Measure=String
String=#Version#
UpdateDivider=-1
Disabled=#DisableUpdate#

[MeasureLatestVersion]
Measure=WebParser
Url=[MeasureParserCore]
StringIndex=1
IfMatch=[MeasureCurrentVersion:EscapeRegExp]
IfMatchAction=[!CommandMeasure LuaInfo "matchVersion()"]
IfNotMatchAction=[!CommandMeasure LuaInfo "notMatchVersion()"]
DynamicVariables=1
Disabled=1