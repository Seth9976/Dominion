// 函数: _Z10AddOngoing14DomOngoingTypei18DomAbilityDurationb11OngoingFlag12DomTokenIcon11DomCardEnumi
// 地址: 0xadbfcc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x24 = arg7
int32_t* x0 = DomGetContext()

if (x24 != 0)
    goto label_adc034

if (*x0 != 2)
    x24 = 0
    
    if (arg8 != 0)
        goto label_adc038
    
    goto label_adc050

x24 = CardWhat(*(DomGetContext() + 8), zx.q(x0[7]))
label_adc034:
DomGame* x0_5
uint64_t x1_1
int64_t x5

if (arg8 == 0)
label_adc050:
    
    if ((arg4.d & 1) == 0)
        x0_5 = *(x0 + 8)
        x1_1 = zx.q(x0[6])
        x5 = *(x0 + 0x40)
    else
        GameAssert((*(x0 + 0x10) != 0 ? 1 : 0).b)
        x0_5 = *(x0 + 8)
        x1_1 = zx.q(x0[6])
        x5 = *(*(x0 + 0x10) + 0x40)
else
label_adc038:
    x0_5 = *(x0 + 8)
    x1_1 = zx.q(x0[6])
    x5 = sx.q(arg8)

int32_t var_58 = x24
int32_t var_60 = arg6
return AddOngoing(x0_5, x1_1, zx.q(arg1), zx.q(arg2), zx.q(arg3), x5, zx.q(arg5), 0xffffffff)
