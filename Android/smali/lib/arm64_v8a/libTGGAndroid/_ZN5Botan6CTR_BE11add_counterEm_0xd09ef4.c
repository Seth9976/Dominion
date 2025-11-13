// 函数: _ZN5Botan6CTR_BE11add_counterEm
// 地址: 0xd09ef4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x12_9 = *(arg1 + 0x18)
int64_t x9 = *(arg1 + 0x20)
void* x8 = *(arg1 + 0x10)
uint64_t entry_x1

if (x12_9 == 4)
    if (x9 != 0)
        int32_t* x11_5 = *(arg1 + 0x28)
        int64_t i_6 = x9 - 1
        int32_t temp0_2 = _byteswap(*(x11_5 + x8 - 4))
        *(x11_5 + x8 - 4) = _byteswap(temp0_2 + entry_x1.d)
        
        if (x9 != 1)
            int32_t x10_7 = temp0_2 + entry_x1.d + 1
            void* x11_7 = (x8 << 1) - 4
            int64_t i
            
            do
                int32_t* x12_5 = *(arg1 + 0x28)
                int32_t temp0_4 = _byteswap(x10_7)
                x10_7 += 1
                i = i_6
                i_6 -= 1
                *(x12_5 + x11_7) = temp0_4
                x11_7 += x8
            while (i != 1)
else if (x12_9 == 8)
    if (x9 != 0)
        int64_t* x11_8 = *(arg1 + 0x28)
        int64_t i_7 = x9 - 1
        uint64_t x10_9 = _byteswap(*(x11_8 + x8 - 8))
        *(x11_8 + x8 - 8) = _byteswap(x10_9 + entry_x1)
        
        if (x9 != 1)
            uint64_t x10_11 = x10_9 + entry_x1 + 1
            void* x11_10 = (x8 << 1) - 8
            int64_t i_1
            
            do
                int64_t* x12_7 = *(arg1 + 0x28)
                uint64_t x13_12 = _byteswap(x10_11)
                x10_11 += 1
                i_1 = i_7
                i_7 -= 1
                *(x12_7 + x11_10) = x13_12
                x11_10 += x8
            while (i_1 != 1)
else if (x12_9 != 0x10)
    if (x9 != 0)
        int32_t x10_12 = entry_x1.d & 0xff
        
        if (((entry_x1 == 0 ? 1 : 0) & (x10_12 == 0 ? 1 : 0) & 1) == 0 && x12_9 != 0)
            int64_t x11_13 = 0
            void* x13_14 = x8 - 1
            
            do
                void* x14_5 = x13_14
                int64_t i_4 = x12_9 - 1
                int32_t x16_1 = x10_12
                uint64_t x15_2 = entry_x1
                int64_t i_2
                
                do
                    char* x3_1 = *(arg1 + 0x28)
                    i_2 = i_4
                    x15_2 u>>= 8
                    int32_t x2_1 = x16_1 + zx.d(*(x3_1 + x14_5))
                    x16_1 = (x2_1 u>> 8 & 0xff) + zx.d((x15_2.d).b)
                    *(x3_1 + x14_5) = x2_1.b
                    
                    if (((x15_2 == 0 ? 1 : 0) & (x16_1 == 0 ? 1 : 0) & 1) != 0)
                        break
                    
                    i_4 = i_2 - 1
                    x14_5 -= 1
                while (i_2 != 0)
                x11_13 += 1
                x13_14 += x8
            while (x11_13 != x9)
else if (x9 != 0)
    int64_t* x11_1 = *(arg1 + 0x28)
    uint64_t x10_2 = *(x11_1 + x8 - 0x10 + 8)
    uint64_t x14_1 = _byteswap(*(x11_1 + x8 - 0x10))
    uint64_t x12_1 = _byteswap(x10_2)
    uint64_t x15_1 = x12_1 + entry_x1
    uint64_t x10_3
    
    if (x15_1 u< entry_x1)
        x10_3 = x14_1 + 1
    else
        x10_3 = x14_1
    
    *(x11_1 + x8 - 0x10) = _byteswap(x10_3)
    int64_t i_5 = x9 - 1
    *(x8 + *(arg1 + 0x28) - 8) = _byteswap(x15_1)
    
    if (x9 != 1)
        int64_t x11_4 = x8 << 1
        uint64_t x12_3 = x12_1 + entry_x1 + 1
        int64_t i_3
        
        do
            if (x12_3 == 0)
                x10_3 += 1
            
            *(*(arg1 + 0x28) + x11_4 - 0x10) = _byteswap(x10_3)
            void* x13_5 = *(arg1 + 0x28)
            uint64_t x14_4 = _byteswap(x12_3)
            i_3 = i_5
            i_5 -= 1
            x12_3 += 1
            void* x13_6 = x13_5 + x11_4
            x11_4 += x8
            *(x13_6 - 8) = x14_4
        while (i_3 != 1)
