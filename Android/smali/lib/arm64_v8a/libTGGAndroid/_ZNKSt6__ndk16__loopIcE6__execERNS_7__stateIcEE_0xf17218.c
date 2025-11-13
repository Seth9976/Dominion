// 函数: _ZNKSt6__ndk16__loopIcE6__execERNS_7__stateIcEE
// 地址: 0xf17218
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t* entry_x1
int64_t* x8 = *(entry_x1 + 0x38) + (zx.q(*(arg1 + 0x28)) << 4)

if (*entry_x1 != 0xfffffc21)
    *x8 = 0
    
    if (*(arg1 + 0x20) != 0)
        if (*(arg1 + 0x18) == 0)
            *entry_x1 = 0xfffffc20
            return 
        
        *entry_x1 = 0xfffffc1e
        int64_t x9_12 = *(entry_x1 + 0x38)
        int64_t x10_10 = *(entry_x1 + 0x10)
        *(entry_x1 + 0x50) = *(arg1 + 8)
        *(x9_12 + (zx.q(*(arg1 + 0x28)) << 4) + 8) = x10_10
        int32_t x8_9 = *(arg1 + 0x2c)
        
        if (x8_9 != *(arg1 + 0x30))
            uint64_t i = zx.q(x8_9 - 1)
            uint64_t x9_15 = (i + (zx.q(i.d) << 1)) << 3
            
            do
                i += 1
                *(*(entry_x1 + 0x20) + x9_15) = *(entry_x1 + 0x18)
                *(*(entry_x1 + 0x20) + x9_15 + 8) = *(entry_x1 + 0x18)
                *(*(entry_x1 + 0x20) + x9_15 + 0x10) = 0
                x9_15 += 0x18
            while (i != zx.q(*(arg1 + 0x30) - 1))
        
        return 
    
    *entry_x1 = 0xfffffc1e
else
    int64_t x13_1 = *x8 + 1
    *x8 = x13_1
    uint64_t x12_1 = zx.q(*(arg1 + 0x28))
    int64_t x8_1 = *(entry_x1 + 0x38)
    int64_t x11_1 = *(arg1 + 0x18)
    int64_t x14_1 = *(arg1 + 0x20)
    int64_t x10_1 = *(x8_1 + (x12_1 << 4))
    int32_t x9_3 = x13_1 u< x14_1 ? 1 : 0
    
    if (x10_1 u>= x11_1 && x13_1 u< x14_1)
        x9_3 = (x13_1 u< x14_1 ? 1 : 0) & (*(x8_1 + (x12_1 << 4) + 8) != *(entry_x1 + 0x10) ? 1 : 0)
    
    if (x10_1 u>= x11_1 && x9_3 != 0)
        *entry_x1 = 0xfffffc20
        return 
    
    *entry_x1 = 0xfffffc1e
    
    if (x9_3 != 0)
        int64_t x10_2 = *(entry_x1 + 0x10)
        *(entry_x1 + 0x50) = *(arg1 + 8)
        *(x8_1 + (zx.q(*(arg1 + 0x28)) << 4) + 8) = x10_2
        int32_t x8_3 = *(arg1 + 0x2c)
        
        if (x8_3 != *(arg1 + 0x30))
            uint64_t i_1 = zx.q(x8_3 - 1)
            uint64_t x9_11 = (i_1 + (zx.q(i_1.d) << 1)) << 3
            
            do
                i_1 += 1
                *(*(entry_x1 + 0x20) + x9_11) = *(entry_x1 + 0x18)
                *(*(entry_x1 + 0x20) + x9_11 + 8) = *(entry_x1 + 0x18)
                *(*(entry_x1 + 0x20) + x9_11 + 0x10) = 0
                x9_11 += 0x18
            while (i_1 != zx.q(*(arg1 + 0x30) - 1))
        
        return 

*(entry_x1 + 0x50) = *(arg1 + 0x10)
