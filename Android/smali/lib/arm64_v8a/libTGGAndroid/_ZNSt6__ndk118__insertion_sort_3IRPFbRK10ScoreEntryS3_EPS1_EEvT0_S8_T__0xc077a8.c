// 函数: _ZNSt6__ndk118__insertion_sort_3IRPFbRK10ScoreEntryS3_EPS1_EEvT0_S8_T_
// 地址: 0xc077a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(ScoreEntry, 0x38) x22 = arg1 + 0x38
int32_t x0_1 = (*arg3)(arg1 + 0x1c, arg1)
int32_t result
int128_t v0
int128_t v1
result, v0, v1 = (*arg3)(x22, arg1 + 0x1c)
int128_t var_60

if ((x0_1 & 1) == 0)
    if ((result & 1) != 0)
        int128_t var_54_2 = *(arg1 + 0x28)
        var_60 = *(arg1 + 0x1c)
        v1 = *x22
        *(arg1 + 0x28) = *(x22 + 0xc)
        *(arg1 + 0x1c) = v1
        v1 = var_60
        *(x22 + 0xc) = var_54_2
        *x22 = v1
        int128_t v0_1
        int128_t v1_1
        result, v0_1, v1_1 = (*arg3)(arg1 + 0x1c, arg1)
        
        if ((result & 1) != 0)
            int128_t var_54_3 = *(arg1 + 0xc)
            var_60 = *arg1
            v1_1 = *(arg1 + 0x1c)
            *(arg1 + 0xc) = *(arg1 + 0x28)
            *arg1 = v1_1
            v1_1 = var_60
            *(arg1 + 0x28) = var_54_3
            *(arg1 + 0x1c) = v1_1
else
    int128_t var_54_1
    
    if ((result & 1) == 0)
        int128_t var_54_4 = *(arg1 + 0xc)
        var_60 = *arg1
        v1 = *(arg1 + 0x1c)
        *(arg1 + 0xc) = *(arg1 + 0x28)
        *arg1 = v1
        v1 = var_60
        *(arg1 + 0x28) = var_54_4
        *(arg1 + 0x1c) = v1
        result, v0, v1 = (*arg3)(x22, arg1 + 0x1c)
        
        if ((result & 1) != 0)
            var_54_1 = *(arg1 + 0x28)
            var_60 = *(arg1 + 0x1c)
            v1 = *x22
            *(arg1 + 0x28) = *(x22 + 0xc)
            *(arg1 + 0x1c) = v1
            goto label_c07904
    else
        var_54_1 = *(arg1 + 0xc)
        var_60 = *arg1
        v1 = *x22
        *(arg1 + 0xc) = *(x22 + 0xc)
        *arg1 = v1
    label_c07904:
        v1 = var_60
        *(x22 + 0xc) = var_54_1
        *x22 = v1

void* __offset(ScoreEntry, 0x54) x8_5 = arg1 + 0x54

if (x8_5 != arg2)
    int64_t x23_1 = 0
    
    do
        void* __offset(ScoreEntry, 0x38) x1_4 = x22
        x22 = x8_5
        int128_t v0_2
        int128_t v1_2
        result, v0_2, v1_2 = (*arg3)(x8_5, x1_4)
        
        if ((result & 1) != 0)
            int64_t x24_1 = x23_1
            int128_t var_54_5 = *(x22 + 0xc)
            var_60 = *x22
            void* x8_4
            
            while (true)
                void* x8_6 = arg1 + x24_1
                v1_2 = *(x8_6 + 0x44)
                *(x8_6 + 0x54) = *(x8_6 + 0x38)
                *(x8_6 + 0x60) = v1_2
                
                if (x24_1 == -0x38)
                    x8_4 = arg1
                    break
                
                result, v0_2, v1_2 = (*arg3)(&var_60, x8_6 + 0x1c)
                x24_1 -= 0x1c
                
                if ((result & 1) == 0)
                    x8_4 = arg1 + x24_1 + 0x54
                    break
            
            v1_2 = var_60
            *(x8_4 + 0xc) = var_54_5
            *x8_4 = v1_2
        
        x8_5 = x22 + 0x1c
        x23_1 += 0x1c
    while (x8_5 != arg2)

return result
