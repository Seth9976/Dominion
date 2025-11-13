// 函数: sub_108c4dc
// 地址: 0x108c4dc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x8 = _ReadMSR(tpidr_el0)
int64_t x9 = *(x8 + 0x28)
void var_20
void* x9_4 = &var_20 - (((arg3 << 3) + 0xf) & 0xfffffffffffffff0)
void* x10_3 = x9_4 - (((arg3 << 2) + 0xf) & 0xfffffffffffffff0)

if (arg3 s>= 1)
    int64_t i = 0
    int64_t x12_1 = 0
    int64_t x14_1 = sx.q(arg2)
    int64_t x11_2
    int128_t v0
    
    do
        if (x12_1 s>= 2)
            v0.d = *(arg1 + (i << 2))
            void* x17_1 = x10_3 + (x12_1 << 2)
            void* x18_1 = x9_4 + (x12_1 << 3)
            void* x15_1
            void* x16_1
            
            do
                int32_t v1 = *(x17_1 - 4)
                x15_1 = x17_1
                x11_2 = x12_1
                x16_1 = x18_1
                
                if (v0.d f< v1)
                    break
                
                if (x11_2 s< 2)
                    break
                
                if (i s>= *(x16_1 - 8) + x14_1)
                    break
                
                if (v1 f> *(x15_1 - 8))
                    break
                
                x12_1 = x11_2 - 1
                x17_1 = x15_1 - 4
                x18_1 = x16_1 - 8
            while (i s< *(x16_1 - 0x10) + x14_1)
            
            *x16_1 = i
            *x15_1 = v0.d
        else
            *(x9_4 + (x12_1 << 3)) = i
            *(x10_3 + (x12_1 << 2)) = *(arg1 + (i << 2))
            x11_2 = x12_1
        
        i += 1
        x12_1 = x11_2 + 1
    while (i != arg3)
    
    if ((x11_2 & 0xffffffff80000000) == 0)
        int64_t x13_1 = 0
        int64_t x16_2 = 0
        
        do
            if (x13_1 s< x11_2)
                v0.d = *(x10_3 + ((x13_1 + 1) << 2))
            
            int64_t x1
            
            if (x13_1 s>= x11_2 || v0.d f<= *(x10_3 + (x13_1 << 2)))
                x1 = sx.q(arg2) + 1 + *(x9_4 + (x13_1 << 3))
            else
                x1 = *(x9_4 + ((x13_1 + 1) << 3))
            
            int64_t x17_5
            
            x17_5 = x1 s> arg3 ? arg3 : x1
            
            if (x16_2 s< x17_5)
                int32_t x18_3 = *(x10_3 + (x13_1 << 2))
                int64_t x1_1
                
                x1_1 = x1 s> arg3 ? arg3 : x1
                
                int64_t x3_1 = x1_1 - x16_2
                int64_t x1_2
                
                if (x3_1 u>= 8)
                    int64_t i_3 = x3_1 & 0xfffffffffffffff8
                    v0.d = x18_3
                    v0:4.d = x18_3
                    v0:8.d = x18_3
                    v0:0xc.d = x18_3
                    x1_2 = x16_2 + i_3
                    int128_t* x16_3 = arg1 + 0x10 + (x16_2 << 2)
                    int64_t i_2 = i_3
                    int64_t i_1
                    
                    do
                        x16_3[-1] = v0
                        *x16_3 = v0
                        i_1 = i_2
                        i_2 -= 8
                        x16_3 = &x16_3[2]
                    while (i_1 != 8)
                    
                    if (x3_1 != i_3)
                        goto label_108c67c
                else
                    x1_2 = x16_2
                label_108c67c:
                    
                    do
                        *(arg1 + (x1_2 << 2)) = x18_3
                        x1_2 += 1
                    while (x1_2 s< x17_5)
                x16_2 = x17_5
            
            x13_1 += 1
        while (x13_1 != x12_1)

if (*(x8 + 0x28) == x9)
    return 

__stack_chk_fail()
noreturn
