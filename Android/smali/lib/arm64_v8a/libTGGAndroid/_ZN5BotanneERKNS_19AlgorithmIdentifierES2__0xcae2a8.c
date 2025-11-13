// 函数: _ZN5BotanneERKNS_19AlgorithmIdentifierES2_
// 地址: 0xcae2a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* x9 = *(arg1 + 0x10)
int64_t x8_1 = *(arg1 + 0x18)
int32_t* x10 = *(arg2 + 0x10)

if (x8_1 - x9 != *(arg2 + 0x18) - x10)
    return 1

if (x9 != x8_1)
    do
        if (*x9 != *x10)
            return 1
        
        x9 = &x9[1]
        x10 = &x10[1]
    while (x8_1 != x9)

char* x8 = *(arg1 + 0x28)
int64_t x9_1 = *(arg1 + 0x30)

if (x8 == x9_1)
label_cae314:
    char* x10_4 = *(arg2 + 0x28)
    int64_t x11_3 = *(arg2 + 0x30)
    
    if (x10_4 == x11_3)
        return 0
    
    if (x11_3 - x10_4 == 2 && zx.d(*x10_4) == 5 && zx.d(x10_4[1]) == 0)
        return 0
else if (x9_1 - x8 == 2 && zx.d(*x8) == 5 && zx.d(x8[1]) == 0)
    goto label_cae314

char* x11_6 = *(arg2 + 0x28)
void* x12_2 = *(arg2 + 0x30) - x11_6
int32_t x10_7 = x9_1 - x8 == x12_2 ? 1 : 0

if (x9_1 != x8 && x9_1 - x8 == x12_2)
    do
        uint32_t x10_8 = zx.d(*x8)
        uint32_t x12_3 = zx.d(*x11_6)
        x10_7 = x10_8 == x12_3 ? 1 : 0
        
        if (x10_8 != x12_3)
            break
        
        x8 = &x8[1]
        x11_6 = &x11_6[1]
    while (x9_1 != x8)

return zx.q(x10_7) ^ 1
