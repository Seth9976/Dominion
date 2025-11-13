// 函数: _ZN5BotaneqERKNS_19AlgorithmIdentifierES2_
// 地址: 0xcae1b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x9 = *(arg1 + 0x10)
int64_t x8_1 = *(arg1 + 0x18)
int32_t* x10 = *(arg2 + 0x10)

if (x8_1 - x9 != *(arg2 + 0x18) - x10)
    return 0

if (x9 != x8_1)
    do
        if (*x9 != *x10)
            return 0
        
        x9 = &x9[1]
        x10 = &x10[1]
    while (x8_1 != x9)

char* x8 = *(arg1 + 0x28)
int64_t x9_1 = *(arg1 + 0x30)

if (x8 == x9_1)
label_cae224:
    char* x10_4 = *(arg2 + 0x28)
    int64_t x11_3 = *(arg2 + 0x30)
    
    if (x10_4 == x11_3)
        return 1
    
    if (x11_3 - x10_4 == 2 && zx.d(*x10_4) == 5 && zx.d(x10_4[1]) == 0)
        return 1
else if (x9_1 - x8 == 2 && zx.d(*x8) == 5 && zx.d(x8[1]) == 0)
    goto label_cae224

char* x10_6 = *(arg2 + 0x28)
void* x12_2 = x9_1 - x8
void* x11_7 = *(arg2 + 0x30) - x10_6
uint64_t result = zx.q(x12_2 == x11_7 ? 1 : 0)

if (x12_2 == x11_7 && x8 != x9_1)
    do
        uint32_t x11_8 = zx.d(*x8)
        uint32_t x12_3 = zx.d(*x10_6)
        result = zx.q(x11_8 == x12_3 ? 1 : 0)
        
        if (x11_8 != x12_3)
            break
        
        x8 = &x8[1]
        x10_6 = &x10_6[1]
    while (x9_1 != x8)

return result
