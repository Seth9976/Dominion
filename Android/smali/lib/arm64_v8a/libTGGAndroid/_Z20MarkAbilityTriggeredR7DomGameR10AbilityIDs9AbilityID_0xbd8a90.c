// 函数: _Z20MarkAbilityTriggeredR7DomGameR10AbilityIDs9AbilityID
// 地址: 0xbd8a90
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = sx.q(*(arg2 + 0x400))
*(arg2 + 0x400) = x8.d + 1
*(arg2 + (x8 << 2)) = arg3.d

if ((arg3 & 0x30) != 0)
    return 

int64_t x20_1 = arg3 & 0xffffffff
DomGame& x19_1 = arg1

if ((zx.d(*(AbilityGetRegistered(arg1, x20_1) + 4)) & 2) != 0)
    return 

arg1 = AbilitySourceCardRef(x19_1, x20_1)

if (arg1.d == 0)
    return 

int32_t x8_2 = *(x19_1 + 0x150c)

if (x8_2 - 3 u< 4)
    return 

int64_t var_28 = 0
int32_t var_30 = 0
int32_t var_38 = 0
int32_t var_40 = 0
DomNotifyEffect(zx.q(x8_2 == 2 ? 1 : 0), 0x17, 0xffffffff, arg1, 0, 1, 0, 0)
