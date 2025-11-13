// 函数: _Z19MarkLandscapeBoughtR7DomGame9PlayerWho6CardID
// 地址: 0xbe2a58
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x9_1 = arg1 + muls.dp.d(arg2, 0x5a30) + 0x181b8
int32_t x8_2 = *(*(arg1 + mulu.dp.d(arg3, 0x68) + 0x1a68) + 0xc0)
int32_t x10 = *x9_1

if (x10 == x8_2)
    return 

if (x10 == 0)
    *x9_1 = x8_2
    return 

int64_t x10_1 = sx.q(arg2)
x9_1 = arg1 + x10_1 * 0x5a30 + 0x181bc
int32_t x11_1 = *x9_1

if (x11_1 == x8_2)
    return 

if (x11_1 == 0)
    *x9_1 = x8_2
    return 

x9_1 = arg1 + x10_1 * 0x5a30 + 0x181c0
int32_t x11_2 = *x9_1

if (x11_2 == x8_2)
    return 

if (x11_2 == 0)
    *x9_1 = x8_2
    return 

x9_1 = arg1 + x10_1 * 0x5a30 + 0x181c4
int32_t x10_2 = *x9_1

if (x10_2 == x8_2)
    return 

if (x10_2 != 0)
    pthread_kill(pthread_self(), 6)
    DomGame* x0_1
    int64_t x1
    int64_t x2
    x0_1, x1, x2 = XNoReturn()
    return AwardLandscapeAdjustment(x0_1, x1, x2) __tailcall

*x9_1 = x8_2
