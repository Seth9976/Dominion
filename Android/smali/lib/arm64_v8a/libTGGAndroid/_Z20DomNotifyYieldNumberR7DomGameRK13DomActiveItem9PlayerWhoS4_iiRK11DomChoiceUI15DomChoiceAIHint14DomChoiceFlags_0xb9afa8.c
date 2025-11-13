// 函数: _Z20DomNotifyYieldNumberR7DomGameRK13DomActiveItem9PlayerWhoS4_iiRK11DomChoiceUI15DomChoiceAIHint14DomChoiceFlags
// 地址: 0xb9afa8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x28 = arg9.d
int32_t x20 = arg4
int32_t x21 = arg3
HandleLoadingPoint(arg1, zx.q(arg4))

if ((x28 & 2) == 0)
    int32_t var_68_1 = 0
    int32_t var_70_1 = 0
    NotifyLog(arg1, 0, zx.q(x20), 0, nullptr, 0, zx.q(*(arg1 + 0x1a24)), 0)

void* x0_1
int128_t v0
int128_t v1
int128_t v2
x0_1, v0, v1, v2 = DomGetContext()
int32_t x9 = *(arg1 + 0x1a24)
bool cond:0 = zx.d(*(x0_1 + 0x8c)) == 0
*(arg1 + 0x20) = x9
*(arg1 + 0x1a24) = x9 + 1
*(arg1 + 0x24) = 5
*(arg1 + 0x74) = x21
*(arg1 + 0x78) = x20
int32_t x8_1 = *(arg1 + 0x150c)
int32_t x27_1

x27_1 = cond:0 ? x28 : x28 | 8

*(arg1 + 0x7c) = *arg2
v0 = *arg7
v1 = *(arg7 + 0x10)
v2 = *(arg7 + 0x20)
int64_t x9_3 = *(arg7 + 0x30)
*(arg1 + 0x68) = arg8
*(arg1 + 0x6c) = 0
*(arg1 + 0x74) = x21
*(arg1 + 0x78) = x20
*(arg1 + 0x84) = arg6
*(arg1 + 0x88) = arg5
*(arg1 + 0xd38) = 0
*(arg1 + 0x8c) = 0
*(arg1 + 0x90) = 0
*(arg1 + 0x60) = x9_3
*(arg1 + 0x40) = v1
*(arg1 + 0x50) = v2
*(arg1 + 0x30) = v0
*(arg1 + 0x70) = x27_1

if (x8_1 == 3)
    DomAISimYield(gDomClient + muls.dp.d(x20, 0x18) + 0x20698, arg1, arg1 + 0x20)
else if (x8_1 != 6)
    HandleSmartplays(arg1, arg1 + 0x20)
    
    if ((DomLogReadAction(LogGet(ActiveGame(), zx.q(*(arg1 + 0x78))), arg1 + 0x20) & 1) == 0)
        xco_yield()
    else if (*(arg1 + 0x24) != 5)
        GameHalt()
else
    *(arg1 + 0x94) = 0

if ((x27_1 & 2) == 0)
    int32_t var_68_2 = 0
    int32_t var_70_2 = 0
    NotifyLog(arg1, 1, zx.q(x20), 0, nullptr, 0, zx.q(*(arg1 + 0x1a24)), zx.q(*(arg1 + 0x90)))

return zx.q(*(arg1 + 0x94))
