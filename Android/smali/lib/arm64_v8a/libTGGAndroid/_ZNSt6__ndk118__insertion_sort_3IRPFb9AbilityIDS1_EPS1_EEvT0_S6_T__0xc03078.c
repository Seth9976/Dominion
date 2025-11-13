// 函数: _ZNSt6__ndk118__insertion_sort_3IRPFb9AbilityIDS1_EPS1_EEvT0_S6_T_
// 地址: 0xc03078
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = (*arg3)(zx.q(*(arg1 + 4)), zx.q(*arg1))
void* __offset(AbilityID, 0x8) x23_1 = arg1 + 8
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

void* x24 = arg1 + 0xc

if (x24 != arg2)
    int64_t x25_1 = 0xc
    
    do
        result = (*arg3)(zx.q(*x24), zx.q(*x23_1))
        
        if ((result & 1) != 0)
            uint64_t x22_1 = zx.q(*x24)
            int64_t x23_2 = x25_1
            void* x8_6
            
            while (true)
                void* x8_8 = arg1 + x23_2
                int64_t temp0_1 = x23_2
                x23_2 -= 4
                *x8_8 = *(x8_8 - 4)
                
                if (temp0_1 == 4)
                    x8_6 = arg1
                    break
                
                result = (*arg3)(x22_1, zx.q(*(x8_8 - 8)))
                
                if ((result & 1) == 0)
                    x8_6 = arg1 + x23_2
                    break
            
            *x8_6 = x22_1.d
        
        x23_1 = x24
        x24 += 4
        x25_1 += 4
    while (x24 != arg2)

return result
