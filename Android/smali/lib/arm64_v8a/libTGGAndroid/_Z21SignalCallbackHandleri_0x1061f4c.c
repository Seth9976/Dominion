// 函数: _Z21SignalCallbackHandleri
// 地址: 0x1061f4c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (zx.d(*gInException) != 0)
    XLog("Exception during exception processing.\n")
    exit(0)
    noreturn

*gInException = 1
XLog("\nUnhandled Exception signal %d\n")
backtraceToLogcat()
*gInException = 0
exit(0)
noreturn
