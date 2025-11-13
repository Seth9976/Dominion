// 函数: _Z10GetCoffersR7DomGame9PlayerWho
// 地址: 0xbc1820
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = zx.q(*(arg1 + 0x19ac))
int32_t x19 = arg2
int32_t x22

x22 = arg2 == 0xffffffff ? 6 : 0x3f1

int32_t x21

if (x8.d s< 1)
    x21 = 0
else
    int64_t i_8
    
    if (x8.d u>= 3)
        i_8 = x8 & 0xfffffffe
        int32_t x10_1 = 0
        int32_t x11_1 = 0
        void* __offset(DomGame, 0x15f88) x12_1 = arg1 + 0x15f88
        int64_t i_6 = i_8
        int64_t i
        
        do
            int32_t x14_5 = *(x12_1 - 0x18)
            int32_t entry_x15
            
            if (x14_5 == x22)
                entry_x15 = *(x12_1 - 0x1c)
            
            int32_t x16_3 = *(x12_1 + 8)
            int32_t entry_x17
            
            if (x16_3 == x22)
                entry_x17 = *(x12_1 + 4)
            
            int32_t x2_3 = entry_x15 == x19 ? 1 : 0
            int32_t x0_3 = x2_3 & (x14_5 == x22 ? 1 : 0)
            
            if (x0_3 == 1)
                x2_3 = *(x12_1 - 0x20)
            
            int32_t x1_3 = (entry_x17 == x19 ? 1 : 0) & (x16_3 == x22 ? 1 : 0)
            int32_t entry_x5
            
            if (x1_3 != 0)
                entry_x5 = *x12_1
            
            int32_t x3_2 = x2_3 != 0xa00 ? 1 : 0
            int32_t x4_1 = entry_x5 == 0xa00 ? 1 : 0
            
            if (((x3_2 | (x0_3 ^ 1)) & 1) == 0)
                x3_2 = *(x12_1 - 0xc)
            
            if ((x4_1 & x1_3) != 0)
                x4_1 = *(x12_1 + 0x14)
            
            int32_t x17 = x1_3 & (entry_x5 != 0xa00 ? 1 : 0)
            entry_x5 = x14_5 == x22 ? 1 : 0
            entry_x15 = (entry_x5 & (entry_x15 != x19 ? 1 : 0)) | (x0_3 & (x2_3 != 0xa00 ? 1 : 0))
            entry_x17 = ((x16_3 == x22 ? 1 : 0) & (entry_x17 != x19 ? 1 : 0)) | x17
            int32_t x14_3
            
            if ((entry_x15 | (x14_5 != x22 ? 1 : 0)) != 0)
                x14_3 = 0
            else
                x14_3 = x3_2
            
            x10_1 += x14_3
            int32_t x14_4
            
            if ((entry_x17 | (x16_3 != x22 ? 1 : 0)) != 0)
                x14_4 = 0
            else
                x14_4 = x4_1
            
            i = i_6
            i_6 -= 2
            x11_1 += x14_4
            x12_1 += 0x40
        while (i != 2)
        x21 = x11_1 + x10_1
        
        if (i_8 != x8)
            goto label_bc19ec
    else
        i_8 = 0
        x21 = 0
    label_bc19ec:
        void* x10_4 = arg1 + (i_8 << 5) + 0x15f68
        int64_t i_4 = x8 - i_8
        int64_t i_1
        
        do
            if (*(x10_4 + 8) == x22 && *(x10_4 + 4) == x19 && *x10_4 == 0xa00)
                x21 += *(x10_4 + 0x14)
            
            i_1 = i_4
            i_4 -= 1
            x10_4 += 0x20
        while (i_1 != 1)

int32_t x0_5
int32_t x5_1
int32_t x15_1
int32_t x17_1
x0_5, x5_1, x15_1, x17_1 = CountOngoing(arg1, zx.q(x19), 0x29, 0, 0)

if (x0_5 s>= 1)
    uint64_t x8_1 = zx.q(*(arg1 + 0x19ac))
    int32_t x10_2
    
    if (x8_1.d s< 1)
        x10_2 = 0
    else
        int64_t i_9
        
        if (x8_1.d u>= 3)
            i_9 = x8_1 & 0xfffffffe
            int32_t x10_5 = 0
            int32_t x11_2 = 0
            void* __offset(DomGame, 0x15f88) x12_2 = arg1 + 0x15f88
            int64_t i_7 = i_9
            int64_t i_2
            
            do
                int32_t x14_10 = *(x12_2 - 0x18)
                
                if (x14_10 == x22)
                    x15_1 = *(x12_2 - 0x1c)
                
                int32_t x16_6 = *(x12_2 + 8)
                
                if (x16_6 == x22)
                    x17_1 = *(x12_2 + 4)
                
                int32_t x2_6 = x15_1 == x19 ? 1 : 0
                int32_t x0_9 = x2_6 & (x14_10 == x22 ? 1 : 0)
                
                if (x0_9 == 1)
                    x2_6 = *(x12_2 - 0x20)
                
                int32_t x1_8 = (x17_1 == x19 ? 1 : 0) & (x16_6 == x22 ? 1 : 0)
                
                if (x1_8 != 0)
                    x5_1 = *x12_2
                
                int32_t x3_4 = x2_6 != 0x601 ? 1 : 0
                int32_t x4_3 = x5_1 == 0x601 ? 1 : 0
                
                if (((x3_4 | (x0_9 ^ 1)) & 1) == 0)
                    x3_4 = *(x12_2 - 0xc)
                
                if ((x4_3 & x1_8) != 0)
                    x4_3 = *(x12_2 + 0x14)
                
                int32_t x17_2 = x1_8 & (x5_1 != 0x601 ? 1 : 0)
                x5_1 = x14_10 == x22 ? 1 : 0
                x15_1 = (x5_1 & (x15_1 != x19 ? 1 : 0)) | (x0_9 & (x2_6 != 0x601 ? 1 : 0))
                x17_1 = ((x16_6 == x22 ? 1 : 0) & (x17_1 != x19 ? 1 : 0)) | x17_2
                int32_t x14_8
                
                if ((x15_1 | (x14_10 != x22 ? 1 : 0)) != 0)
                    x14_8 = 0
                else
                    x14_8 = x3_4
                
                x10_5 += x14_8
                int32_t x14_9
                
                if ((x17_1 | (x16_6 != x22 ? 1 : 0)) != 0)
                    x14_9 = 0
                else
                    x14_9 = x4_3
                
                i_2 = i_7
                i_7 -= 2
                x11_2 += x14_9
                x12_2 += 0x40
            while (i_2 != 2)
            x10_2 = x11_2 + x10_5
            
            if (i_9 != x8_1)
                goto label_bc1b94
        else
            i_9 = 0
            x10_2 = 0
        label_bc1b94:
            void* x11_4 = arg1 + (i_9 << 5) + 0x15f68
            int64_t i_5 = x8_1 - i_9
            int64_t i_3
            
            do
                if (*(x11_4 + 8) == x22 && *(x11_4 + 4) == x19 && *x11_4 == 0x601)
                    x10_2 += *(x11_4 + 0x14)
                
                i_3 = i_5
                i_5 -= 1
                x11_4 += 0x20
            while (i_3 != 1)
    
    x21 += x10_2

return zx.q(x21)
