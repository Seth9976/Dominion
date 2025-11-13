// 函数: _Z15LookupLandscape11DomCardEnum
// 地址: 0xa31774
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_cb0[0x320]

if (CardsLandscapeTops(*(DomGetContext() + 8), &var_cb0) == 0)
    pthread_kill(pthread_self(), 6)
    XNoReturn()
    return Landmod_Event_Stamp_GotItAlready() __tailcall

int64_t x21 = 0
int32_t x0_4

do
    x0_4 = CardIs(zx.q(var_cb0[x21]), zx.q(arg1))
    x21 += 1
while ((x0_4 & 1) == 0)
return zx.q(var_cb0[zx.q(x21.d - 1)])
