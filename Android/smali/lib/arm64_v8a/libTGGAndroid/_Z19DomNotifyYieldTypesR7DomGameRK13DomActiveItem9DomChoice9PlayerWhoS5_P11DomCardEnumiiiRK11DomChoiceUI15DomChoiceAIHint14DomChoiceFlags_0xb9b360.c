// 函数: _Z19DomNotifyYieldTypesR7DomGameRK13DomActiveItem9DomChoice9PlayerWhoS5_P11DomCardEnumiiiRK11DomChoiceUI15DomChoiceAIHint14DomChoiceFlags
// 地址: 0xb9b360
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t fp = arg12.d
int32_t var_64 = arg3
int32_t x19 = arg5
HandleLoadingPoint(arg1, zx.q(arg5))

if ((fp & 2) == 0)
    int32_t var_78_1 = 0
    int32_t var_80_1 = 0
    NotifyLog(arg1, 0, zx.q(x19), 0, nullptr, 0, zx.q(*(arg1 + 0x1a24)), 0)

void* x0_1
int128_t v0
int128_t v1
int128_t v2
x0_1, v0, v1, v2 = DomGetContext()
int32_t x9 = *(arg1 + 0x1a24)
bool cond:0 = zx.d(*(x0_1 + 0x8c)) == 0
*(arg1 + 0x20) = x9
*(arg1 + 0x1a24) = x9 + 1
*(arg1 + 0x24) = var_64
v0 = *arg10
v1 = *(arg10 + 0x10)
v2 = *(arg10 + 0x20)
int64_t x9_2 = *(arg10 + 0x30)
*(arg1 + 0x28) = 0
*(arg1 + 0x68) = arg11.d
*(arg1 + 0x6c) = 0
*(arg1 + 0x74) = arg4
*(arg1 + 0x60) = x9_2
*(arg1 + 0x40) = v1
*(arg1 + 0x50) = v2
*(arg1 + 0x30) = v0
int64_t x9_3 = *arg2
int32_t x27_1

x27_1 = cond:0 ? fp : fp | 8

*(arg1 + 0x78) = x19
*(arg1 + 0x7c) = x9_3
memcpy(arg1 + 0x98, arg6, zx.q(arg7) << 0x20 s>> 0x1e)
*(arg1 + 0x90) = 0
*(arg1 + 0x94) = arg7
*(arg1 + 0xd38) = 0
*(arg1 + 0x8c) = 0
*(arg1 + 0x84) = arg8
*(arg1 + 0x88) = arg9
int32_t x8_4 = *(arg1 + 0x150c)
*(arg1 + 0x70) = x27_1

if (x8_4 == 3)
    DomAISimYield(gDomClient + muls.dp.d(x19, 0x18) + 0x20698, arg1, arg1 + 0x20)
else if (x8_4 != 6)
    HandleSmartplays(arg1, arg1 + 0x20)
    
    if ((DomLogReadAction(LogGet(ActiveGame(), zx.q(*(arg1 + 0x78))), arg1 + 0x20) & 1) == 0)
        xco_yield()
    else if (*(arg1 + 0x24) != var_64)
        GameHalt()
else
    *(arg1 + 0x94) = 0

memmove(arg6, arg1 + 0x98, sx.q(*(arg1 + 0x94)) << 2)

if ((x27_1 & 2) == 0)
    int32_t var_78_2 = 0
    int32_t var_80_2 = 0
    NotifyLog(arg1, 1, zx.q(x19), 0, nullptr, 0, zx.q(*(arg1 + 0x1a24)), zx.q(*(arg1 + 0x90)))

return zx.q(*(arg1 + 0x94))
