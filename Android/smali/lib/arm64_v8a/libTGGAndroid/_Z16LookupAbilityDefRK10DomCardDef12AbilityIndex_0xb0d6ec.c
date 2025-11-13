// 函数: _Z16LookupAbilityDefRK10DomCardDef12AbilityIndex
// 地址: 0xb0d6ec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (*(arg1 + 0x6e0) == arg2)
    return arg1 + 0x6e0

if (*(arg1 + 0x6f0) == arg2)
    return arg1 + 0x6f0

if (*(arg1 + 0x700) == arg2)
    return arg1 + 0x700

if (*(arg1 + 0x710) == arg2)
    return arg1 + 0x710

pthread_kill(pthread_self(), 6)
DomCardDef* x0_5
int64_t x1
x0_5, x1 = XNoReturn()
return TryLookupAbilityDef(x0_5, x1) __tailcall
