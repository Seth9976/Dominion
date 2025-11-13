// 函数: _ZNSt6__ndk118__insertion_sort_3IRPFbPK6DomGfxS3_EPPS1_EEvT0_S9_T_
// 地址: 0xbb4adc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x0_1 = (*arg3)(arg1[1], *arg1)
void* x23_1 = &arg1[2]
int32_t result
uint128_t v0
result, v0 = (*arg3)(*x23_1, arg1[1])

if ((x0_1 & 1) != 0)
    DomGfx* x1_2 = *arg1
    
    if ((result & 1) == 0)
        int64_t x0_4 = arg1[2]
        *arg1 = arg1[1]
        arg1[1] = x1_2
        uint128_t v0_3
        result, v0_3 = (*arg3)(x0_4)
        
        if ((result & 1) != 0)
            v0_3 = *(arg1 + 8)
            *(arg1 + 8) = vextq_s8(v0_3, v0_3, 8)
    else
        DomGfx* x8_2 = arg1[2]
        arg1[2] = x1_2
        *arg1 = x8_2
else if ((result & 1) != 0)
    v0 = *(arg1 + 8)
    DomGfx* x1_3 = *arg1
    *(arg1 + 8) = vextq_s8(v0, v0, 8)
    uint128_t v0_1
    result, v0_1 = (*arg3)(v0:8.q, x1_3)
    
    if ((result & 1) != 0)
        v0_1 = *arg1
        *arg1 = vextq_s8(v0_1, v0_1, 8)

void* x8_7 = &arg1[3]

if (x8_7 != arg2)
    int64_t x24_1 = 0
    
    do
        int64_t x1_4 = *x23_1
        x23_1 = x8_7
        result = (*arg3)(*x23_1, x1_4)
        
        if ((result & 1) != 0)
            int64_t x22_1 = *x23_1
            int64_t x25_1 = x24_1
            void* x8_6
            
            while (true)
                void* x8_9 = arg1 + x25_1
                *(x8_9 + 0x18) = *(x8_9 + 0x10)
                
                if (x25_1 == -0x10)
                    x8_6 = arg1
                    break
                
                result = (*arg3)(x22_1, *(x8_9 + 8))
                x25_1 -= 8
                
                if ((result & 1) == 0)
                    x8_6 = arg1 + x25_1 + 0x18
                    break
            
            *x8_6 = x22_1
        
        x8_7 = x23_1 + 8
        x24_1 += 8
    while (x8_7 != arg2)

return result
