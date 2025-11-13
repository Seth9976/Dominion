// 函数: _Z17GameCenterConnect12PlatformTypePKcPK3DLCi
// 地址: 0xf703a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg1
XTraceAndLog("GameCenterConnect")
MutexInit(gGameCenter + 0x40)
*(gGameCenter + 8) = arg3
*gGameCenter = x19
*(gGameCenter + 4) = arg4

if (x19 != 4)
    pthread_kill(pthread_self(), 6)
    XNoReturn()
    return GameCenterDisconnect() __tailcall

XTraceAndLog("goolge connect")
GoogleGamcenterConnect_Java()
return XTrace("Gamecenter Connect success") __tailcall
