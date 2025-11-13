// 函数: _ZNSt6__ndk118__insertion_sort_3IRPFbRK16CardHandSortInfoS3_EPS1_EEvT0_S8_T_
// 地址: 0xbadacc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(CardHandSortInfo, 0x20) x22 = arg1 + 0x20
int32_t x0_1 = (*arg3)(arg1 + 0x10, arg1)
int32_t result
int128_t v0
result, v0 = (*arg3)(x22, arg1 + 0x10)
int128_t var_50

if ((x0_1 & 1) == 0)
    if ((result & 1) != 0)
        var_50 = *(arg1 + 0x10)
        *(arg1 + 0x10) = *x22
        *x22 = var_50
        int128_t v0_1
        result, v0_1 = (*arg3)(arg1 + 0x10, arg1)
        
        if ((result & 1) != 0)
            var_50 = *arg1
            *arg1 = *(arg1 + 0x10)
            *(arg1 + 0x10) = var_50
else if ((result & 1) == 0)
    var_50 = *arg1
    *arg1 = *(arg1 + 0x10)
    *(arg1 + 0x10) = var_50
    result, v0 = (*arg3)(x22, arg1 + 0x10)
    
    if ((result & 1) != 0)
        var_50 = *(arg1 + 0x10)
        *(arg1 + 0x10) = *x22
        *x22 = var_50
else
    var_50 = *arg1
    *arg1 = *x22
    *x22 = var_50

void* __offset(CardHandSortInfo, 0x30) x8_5 = arg1 + 0x30

if (x8_5 != arg2)
    int64_t x23_1 = 0
    
    do
        void* __offset(CardHandSortInfo, 0x20) x1_4 = x22
        x22 = x8_5
        int128_t v0_2
        result, v0_2 = (*arg3)(x8_5, x1_4)
        
        if ((result & 1) != 0)
            int64_t x24_1 = x23_1
            var_50 = *x22
            void* x8_4
            
            while (true)
                void* x8_6 = arg1 + x24_1
                *(x8_6 + 0x30) = *(x8_6 + 0x20)
                
                if (x24_1 == -0x20)
                    x8_4 = arg1
                    break
                
                result, v0_2 = (*arg3)(&var_50, x8_6 + 0x10)
                x24_1 -= 0x10
                
                if ((result & 1) == 0)
                    x8_4 = arg1 + x24_1 + 0x30
                    break
            
            *x8_4 = var_50
        
        x8_5 = x22 + 0x10
        x23_1 += 0x10
    while (x8_5 != arg2)

return result
