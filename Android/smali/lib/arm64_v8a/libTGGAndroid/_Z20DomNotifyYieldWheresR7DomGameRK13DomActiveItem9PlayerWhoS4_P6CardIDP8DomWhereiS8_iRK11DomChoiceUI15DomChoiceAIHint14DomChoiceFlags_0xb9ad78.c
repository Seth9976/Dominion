// 函数: _Z20DomNotifyYieldWheresR7DomGameRK13DomActiveItem9PlayerWhoS4_P6CardIDP8DomWhereiS8_iRK11DomChoiceUI15DomChoiceAIHint14DomChoiceFlags
// 地址: 0xb9ad78
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x25 = arg12.d
int32_t x19 = arg4
HandleLoadingPoint(arg1, zx.q(arg4))

if ((x25 & 2) == 0)
    int32_t var_78_1 = 0
    int32_t var_80_1 = 0
    NotifyLog(arg1, 0, zx.q(x19), 0, nullptr, 0, zx.q(*(arg1 + 0x1a24)), 0)

void* x0_1
int128_t v0
int128_t v1
int128_t v2
x0_1, v0, v1, v2 = DomGetContext()
int32_t x9 = *(arg1 + 0x1a24)
int32_t fp

if (zx.d(*(x0_1 + 0x8c)) == 0)
    fp = x25
else
    fp = x25 | 8

*(arg1 + 0x20) = x9
*(arg1 + 0x1a24) = x9 + 1
*(arg1 + 0x24) = 3
v0 = *(arg10 + 0x20)
int64_t x8_3 = *(arg10 + 0x30)
v1 = *arg10
*(arg1 + 0x40) = *(arg10 + 0x10)
*(arg1 + 0x50) = v0
*(arg1 + 0x60) = x8_3
*(arg1 + 0x30) = v1
int64_t x8_4 = *arg2
*(arg1 + 0x68) = arg11.d
*(arg1 + 0x6c) = 0
*(arg1 + 0x74) = arg3
*(arg1 + 0x78) = x19
*(arg1 + 0x7c) = x8_4
memcpy(arg1 + 0x98, arg5, zx.q(arg7) << 0x20 s>> 0x1e)
*(arg1 + 0x94) = arg7
*(arg1 + 0x84) = -1
memcpy(arg1 + 0xd18, arg8, zx.q(arg9) << 0x20 s>> 0x1e)
int32_t x8_5 = *(arg1 + 0x150c)
*(arg1 + 0xd38) = arg9
*(arg1 + 0x8c) = 0
*(arg1 + 0x90) = 0
*(arg1 + 0x70) = fp
DomWhere* x21_1

if (x8_5 == 3)
    DomAISimYield(gDomClient + muls.dp.d(x19, 0x18) + 0x20698, arg1, arg1 + 0x20)
    x21_1 = arg6
else if (x8_5 != 6)
    HandleSmartplays(arg1, arg1 + 0x20)
    
    if ((DomLogReadAction(LogGet(ActiveGame(), zx.q(*(arg1 + 0x78))), arg1 + 0x20) & 1) == 0)
        xco_yield()
        x21_1 = arg6
    else
        x21_1 = arg6
        
        if (*(arg1 + 0x24) != 3)
            GameHalt()
else
    *(arg1 + 0x94) = 0
    x21_1 = arg6

memmove(arg5, arg1 + 0x98, sx.q(*(arg1 + 0x94)) << 2)
int64_t result = memmove(x21_1, arg1 + 0xd28, sx.q(*(arg1 + 0x94)) << 2)

if ((fp & 2) != 0)
    return result

arg10.d = 0
arg9 = 0
return NotifyLog(arg1, 1, zx.q(x19), 0, nullptr, 0, zx.q(*(arg1 + 0x1a24)), zx.q(*(arg1 + 0x90)))
    __tailcall
