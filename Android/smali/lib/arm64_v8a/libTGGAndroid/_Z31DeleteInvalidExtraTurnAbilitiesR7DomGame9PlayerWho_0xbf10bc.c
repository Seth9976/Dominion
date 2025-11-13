// 函数: _Z31DeleteInvalidExtraTurnAbilitiesR7DomGame9PlayerWho
// 地址: 0xbf10bc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t var_48 = 0
int32_t i_3 = *(arg1 + 0x19c0)

if (i_3 s< 1)
    return 

DomGame& x19_1 = arg1
int32_t var_448[0x100]

if (*(arg1 + 0x19cc) == arg2)
    uint64_t i_2
    
    if (i_3 s> 1)
        i_2 = zx.q(i_3)
    else
        i_2 = 1
    
    if (*(x19_1 + 0x19d0) != arg2)
        void* __offset(DomGame, 0x3c254) x9_4 = x19_1 + 0x3c254
        uint64_t i
        
        do
            if (*x9_4 == 0 && *(x9_4 + 4) == arg2 && (zx.d(*(x9_4 + 0xc)) & 8) != 0)
                int64_t x12_2 = sx.q(var_48)
                var_48 = x12_2.d + 1
                var_448[x12_2] = *(x9_4 - 0x20) << 0x12
            
            i = i_2
            i_2 -= 1
            x9_4 += 0xb8
        while (i != 1)
    else
        void* __offset(DomGame, 0x3c254) x9_3 = x19_1 + 0x3c254
        uint64_t i_1
        
        do
            if (*x9_3 == 0 && *(x9_3 + 4) == arg2 && (zx.d(*(x9_3 + 0xc)) & 0xc) != 0)
                int64_t x12_1 = sx.q(var_48)
                var_48 = x12_1.d + 1
                var_448[x12_1] = *(x9_3 - 0x20) << 0x12
            
            i_1 = i_2
            i_2 -= 1
            x9_3 += 0xb8
        while (i_1 != 1)

int64_t x20_1 = sx.q(var_48)

if (x20_1.d s< 1)
    return 

int64_t x21_1 = 0

do
    int128_t v0_1
    int128_t v1_1
    int128_t v2_1
    int128_t v3_1
    arg1, v0_1, v1_1, v2_1, v3_1 = AbilityGetRegistered(x19_1, zx.q(var_448[x21_1]))
    *(arg1 + 0x58) = 0
    x21_1 += 1
    int64_t x8_1 = sx.q(*(x19_1 + 0x19c0)) - 1
    *(x19_1 + 0x19c0) = x8_1.d
    v0_1 = *(x19_1 + x8_1 * 0xb8 + 0x3c238)
    v2_1 = *(x19_1 + x8_1 * 0xb8 + 0x3c208)
    v3_1 = *(x19_1 + x8_1 * 0xb8 + 0x3c218)
    *(arg1 + 0x20) = *(x19_1 + x8_1 * 0xb8 + 0x3c228)
    *(arg1 + 0x30) = v0_1
    *arg1 = v2_1
    *(arg1 + 0x10) = v3_1
    v1_1 = *(x19_1 + x8_1 * 0xb8 + 0x3c278)
    v3_1 = *(x19_1 + x8_1 * 0xb8 + 0x3c248)
    v2_1 = *(x19_1 + x8_1 * 0xb8 + 0x3c258)
    *(arg1 + 0x60) = *(x19_1 + x8_1 * 0xb8 + 0x3c268)
    *(arg1 + 0x70) = v1_1
    *(arg1 + 0x40) = v3_1
    *(arg1 + 0x50) = v2_1
    v0_1 = *(x19_1 + x8_1 * 0xb8 + 0x3c2a8)
    int64_t x9_5 = *(x19_1 + x8_1 * 0xb8 + 0x3c2b8)
    v2_1 = *(x19_1 + x8_1 * 0xb8 + 0x3c288)
    *(arg1 + 0x90) = *(x19_1 + x8_1 * 0xb8 + 0x3c298)
    *(arg1 + 0xa0) = v0_1
    *(arg1 + 0xb0) = x9_5
    *(arg1 + 0x80) = v2_1
while (x21_1 s< x20_1)
