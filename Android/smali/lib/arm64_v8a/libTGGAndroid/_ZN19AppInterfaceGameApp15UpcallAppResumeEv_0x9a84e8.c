// 函数: _ZN19AppInterfaceGameApp15UpcallAppResumeEv
// 地址: 0x9a84e8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XTraceAndLog("app resume")
TimerStop(gGameApp)
*gGameApp = TimerStart()
return GameSpecific_AppResume() __tailcall
