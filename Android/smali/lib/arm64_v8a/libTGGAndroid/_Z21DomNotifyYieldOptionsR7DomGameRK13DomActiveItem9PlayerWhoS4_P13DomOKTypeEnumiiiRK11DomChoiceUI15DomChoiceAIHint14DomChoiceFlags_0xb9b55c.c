// 函数: _Z21DomNotifyYieldOptionsR7DomGameRK13DomActiveItem9PlayerWhoS4_P13DomOKTypeEnumiiiRK11DomChoiceUI15DomChoiceAIHint14DomChoiceFlags
// 地址: 0xb9b55c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x26 = arg11.d
int32_t x20 = arg4
HandleLoadingPoint(arg1, zx.q(arg4))

if ((x26 & 2) == 0)
    int32_t var_78_1 = 0
    int32_t var_80_1 = 0
    NotifyLog(arg1, 0, zx.q(x20), 0, nullptr, 0, zx.q(*(arg1 + 0x1a24)), 0)

void* x0_1
int128_t v0
int128_t v1
int128_t v2
x0_1, v0, v1, v2 = DomGetContext()
int32_t x9 = *(arg1 + 0x1a24)
int32_t x28

if (zx.d(*(x0_1 + 0x8c)) == 0)
    x28 = x26
else
    x28 = x26 | 8

*(arg1 + 0x20) = x9
*(arg1 + 0x1a24) = x9 + 1
*(arg1 + 0x24) = 4
int64_t x8_3 = *arg2
*(arg1 + 0x74) = arg3
*(arg1 + 0x78) = x20
*(arg1 + 0x7c) = x8_3
v0 = *arg9
v1 = *(arg9 + 0x10)
int64_t x8_4 = *(arg9 + 0x30)
v2 = *(arg9 + 0x20)
*(arg1 + 0x68) = arg10.d
*(arg1 + 0x6c) = 0
*(arg1 + 0x30) = v0
*(arg1 + 0x60) = x8_4
*(arg1 + 0x40) = v1
*(arg1 + 0x50) = v2
memcpy(arg1 + 0x98, arg5, zx.q(arg6) << 0x20 s>> 0x1e)
*(arg1 + 0x90) = 0
*(arg1 + 0x94) = arg6
*(arg1 + 0xd38) = 0
*(arg1 + 0x8c) = 0
*(arg1 + 0x84) = arg7
*(arg1 + 0x88) = arg8
int32_t x8_6 = *(arg1 + 0x150c)
*(arg1 + 0x70) = x28

if (x8_6 == 3)
    DomAISimYield(gDomClient + muls.dp.d(x20, 0x18) + 0x20698, arg1, arg1 + 0x20)
else if (x8_6 != 6)
    HandleSmartplays(arg1, arg1 + 0x20)
    
    if ((DomLogReadAction(LogGet(ActiveGame(), zx.q(*(arg1 + 0x78))), arg1 + 0x20) & 1) == 0)
        xco_yield()
    else if (*(arg1 + 0x24) != 4)
        GameHalt()
else if (arg8 == 0)
    *(arg1 + 0x94) = 0
else
    *(arg1 + 0x94) = 1

memmove(arg5, arg1 + 0x98, sx.q(*(arg1 + 0x94)) << 2)

if ((x28 & 2) == 0)
    int32_t var_78_2 = 0
    int32_t var_80_2 = 0
    NotifyLog(arg1, 1, zx.q(x20), 0, nullptr, 0, zx.q(*(arg1 + 0x1a24)), zx.q(*(arg1 + 0x90)))

return zx.q(*(arg1 + 0x94))
