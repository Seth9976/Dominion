// 函数: _Z25CollectExtraTurnAbilitiesR7DomGame9PlayerWho
// 地址: 0xbd6cdc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* entry_x8
*(entry_x8 + 0x400) = 0
int32_t i_5 = *(arg1 + 0x19c0)

if (i_5 s< 1)
    return 

if (*(arg1 + 0x19cc) != arg2)
    uint64_t i_4
    
    if (i_5 s> 1)
        i_4 = zx.q(i_5)
    else
        i_4 = 1
    
    void* __offset(DomGame, 0x3c254) x10_4 = arg1 + 0x3c254
    uint64_t i
    
    do
        if (*x10_4 == 0 && *(x10_4 + 4) == arg2)
            int64_t x12_2 = sx.q(*(entry_x8 + 0x400))
            int32_t x11_9 = *(x10_4 - 0x20) << 0x12
            *(entry_x8 + 0x400) = x12_2.d + 1
            *(entry_x8 + (x12_2 << 2)) = x11_9
        
        i = i_4
        i_4 -= 1
        x10_4 += 0xb8
    while (i != 1)
else
    uint64_t i_3
    
    if (i_5 s> 1)
        i_3 = zx.q(i_5)
    else
        i_3 = 1
    
    if (*(arg1 + 0x19d0) != arg2)
        void* __offset(DomGame, 0x3c254) x10_5 = arg1 + 0x3c254
        uint64_t i_1
        
        do
            if (*x10_5 == 0 && *(x10_5 + 4) == arg2 && (zx.d(*(x10_5 + 0xc)) & 8) == 0)
                int64_t x12_3 = sx.q(*(entry_x8 + 0x400))
                int32_t x11_14 = *(x10_5 - 0x20) << 0x12
                *(entry_x8 + 0x400) = x12_3.d + 1
                *(entry_x8 + (x12_3 << 2)) = x11_14
            
            i_1 = i_3
            i_3 -= 1
            x10_5 += 0xb8
        while (i_1 != 1)
    else
        void* __offset(DomGame, 0x3c254) x10_3 = arg1 + 0x3c254
        uint64_t i_2
        
        do
            if (*x10_3 == 0 && *(x10_3 + 4) == arg2 && (zx.d(*(x10_3 + 0xc)) & 0xc) == 0)
                int64_t x12_1 = sx.q(*(entry_x8 + 0x400))
                int32_t x11_5 = *(x10_3 - 0x20) << 0x12
                *(entry_x8 + 0x400) = x12_1.d + 1
                *(entry_x8 + (x12_1 << 2)) = x11_5
            
            i_2 = i_3
            i_3 -= 1
            x10_3 += 0xb8
        while (i_2 != 1)
