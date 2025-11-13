// 函数: _Z11SetCardFlag6CardID11DomCardFlagb
// 地址: 0xae375c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = arg3.d
int32_t x22 = arg2
int32_t x19 = arg1
void* x0 = DomGetContext()
void* result = CardGet(*(x0 + 8), zx.q(x19))

if ((x20 & 1) == 0)
    *(result + 0x28) &= not.d(x22)
    
    if (x22 == 0x80)
        return result
else
    *(result + 0x28) |= x22
    
    if (x22 == 0x80)
        return result

int64_t x4_1

if (x22 == 0x20)
    x4_1 = 6
else
    if (x22 != 0x10)
        pthread_kill(pthread_self(), 6)
        CardIDs* x0_4
        int64_t x1_1
        bool x2_1
        x0_4, x1_1, x2_1 = XNoReturn()
        return SetCardsFlag(x0_4, x1_1, x2_1) __tailcall
    
    x4_1 = 5

int64_t var_38_1 = 0
int32_t var_40_1 = 0
int32_t var_48_1 = 0
int32_t var_50_1 = 0
return NotifyEffect(*(x0 + 8), 0x16, zx.q(*(x0 + 0x18)), zx.q(x19), x4_1, zx.q(x20) & 1, 0, 0)
