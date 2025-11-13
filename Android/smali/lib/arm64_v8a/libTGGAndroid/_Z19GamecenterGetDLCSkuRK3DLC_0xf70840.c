// 函数: _Z19GamecenterGetDLCSkuRK3DLC
// 地址: 0xf70840
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x8 = *gGameCenter

if (x8 == 3)
    return *(arg1 + 0x20)

if (x8 == 4)
    return *(arg1 + 0x18)

pthread_kill(pthread_self(), 6)
DlcDef* x0_3
XString* x1
x0_3, x1 = XNoReturn()
return GameCenterGetPrice(x0_3, x1) __tailcall
