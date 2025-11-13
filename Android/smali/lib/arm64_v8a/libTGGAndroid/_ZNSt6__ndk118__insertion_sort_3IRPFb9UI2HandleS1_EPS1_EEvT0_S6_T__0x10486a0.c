// 函数: _ZNSt6__ndk118__insertion_sort_3IRPFb9UI2HandleS1_EPS1_EEvT0_S6_T_
// 地址: 0x10486a0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = (*arg3)(zx.q(*(arg1 + 4)), zx.q(*arg1))
void* __offset(UI2Handle, 0x8) x23_1 = arg1 + 8
int32_t result
int128_t v0
result, v0 = (*arg3)(zx.q(*x23_1), zx.q(*(arg1 + 4)))

if ((x0_1 & 1) != 0)
    int32_t x1_2 = *arg1
    
    if ((result & 1) == 0)
        uint64_t x0_4 = zx.q(*(arg1 + 8))
        *arg1 = *(arg1 + 4)
        *(arg1 + 4) = x1_2
        int128_t v0_3
        result, v0_3 = (*arg3)(x0_4)
        
        if ((result & 1) != 0)
            v0_3.q = *(arg1 + 4)
            *(arg1 + 4) = vrev64_s32(v0_3)
    else
        int32_t x8_2 = *(arg1 + 8)
        *(arg1 + 8) = x1_2
        *arg1 = x8_2
else if ((result & 1) != 0)
    v0.q = *(arg1 + 4)
    uint64_t x1_3 = zx.q(*arg1)
    *(arg1 + 4) = vrev64_s32(v0)
    int128_t v0_1
    result, v0_1 = (*arg3)(zx.q(v0:4.d), x1_3)
    
    if ((result & 1) != 0)
        v0_1.q = *arg1
        *arg1 = vrev64_s32(v0_1)

void* __offset(UI2Handle, 0xc) x8_7 = arg1 + 0xc

if (x8_7 != arg2)
    int64_t x24_1 = 0
    
    do
        uint64_t x1_4 = zx.q(*x23_1)
        x23_1 = x8_7
        result = (*arg3)(zx.q(*x23_1), x1_4)
        
        if ((result & 1) != 0)
            int32_t x22_1 = *x23_1
            int64_t x25_1 = x24_1
            void* x8_6
            
            while (true)
                void* x8_9 = arg1 + x25_1
                *(x8_9 + 0xc) = *(x8_9 + 8)
                
                if (x25_1 == -8)
                    x8_6 = arg1
                    break
                
                result = (*arg3)(zx.q(x22_1), zx.q(*(x8_9 + 4)))
                x25_1 -= 4
                
                if ((result & 1) == 0)
                    x8_6 = arg1 + x25_1 + 0xc
                    break
            
            *x8_6 = x22_1
        
        x8_7 = x23_1 + 4
        x24_1 += 4
    while (x8_7 != arg2)

return result
