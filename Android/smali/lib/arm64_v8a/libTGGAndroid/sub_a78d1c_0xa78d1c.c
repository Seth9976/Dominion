// 函数: sub_a78d1c
// 地址: 0xa78d1c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (**(arg1 + 8) s> 0x27)
    return 

DomGame* x19_1 = *(DomGetContext() + 8)
int32_t x8_4 = **(arg1 + 8) + 1
int128_t var_60
__builtin_memset(&var_60, 0, 0x30)
var_60.d = 0x9f
int128_t var_50
var_50:0xc.d = x8_4
int128_t var_40
var_40:8.q = 0
int64_t var_30_1 = 0
int32_t x0_1 = ChooseNumber(0, 0x28, &var_60, 0x2e, 0)
int32_t* x8_5 = *(arg1 + 8)

if (x0_1 s<= *x8_5)
    DomLog(0x10, 0)
    int64_t var_68_2 = 0
    int32_t var_70_2 = 0
    int32_t var_78_2 = 0
    int32_t var_80_2 = 0
    NotifyEffect(x19_1, 0x2c, zx.q(CurrentWho()), 0, 2, 0, 0, 0)
    return 

*x8_5 = x0_1
**(arg1 + 0x10) = CurrentWho()
DomLog(0x10, x0_1)
int64_t var_68_1 = 0
int32_t var_70_1 = 0
int32_t var_78_1 = 0
int32_t var_80_1 = 0
NotifyEffect(x19_1, 0x2c, zx.q(CurrentWho()), 0, 1, zx.q(x0_1), 0, 0)
StoreHighestBid(x0_1)
