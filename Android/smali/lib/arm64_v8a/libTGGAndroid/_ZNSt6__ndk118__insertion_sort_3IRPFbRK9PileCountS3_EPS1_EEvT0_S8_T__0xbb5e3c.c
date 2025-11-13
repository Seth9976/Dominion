// 函数: _ZNSt6__ndk118__insertion_sort_3IRPFbRK9PileCountS3_EPS1_EEvT0_S8_T_
// 地址: 0xbb5e3c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* __offset(PileCount, 0x70) x22 = arg1 + 0x70
int32_t x0_1 = (*arg3)(arg1 + 0x38, arg1)
int32_t result
int128_t v0
int128_t v1
int128_t v2
result, v0, v1, v2 = (*arg3)(x22, arg1 + 0x38)
int128_t var_80

if ((x0_1 & 1) == 0)
    if ((result & 1) != 0)
        int64_t x8_4 = *(arg1 + 0x68)
        int128_t var_70_2 = *(arg1 + 0x48)
        int128_t var_60_2 = *(arg1 + 0x58)
        var_80 = *(arg1 + 0x38)
        v1 = *(x22 + 0x10)
        v0 = *(x22 + 0x20)
        v2 = *x22
        *(arg1 + 0x68) = *(x22 + 0x30)
        *(arg1 + 0x48) = v1
        *(arg1 + 0x58) = v0
        *(arg1 + 0x38) = v2
        v2 = var_80
        *(x22 + 0x30) = x8_4
        *(x22 + 0x10) = var_70_2
        *(x22 + 0x20) = var_60_2
        *x22 = v2
        int128_t v0_1
        int128_t v1_1
        int128_t v2_1
        result, v0_1, v1_1, v2_1 = (*arg3)(arg1 + 0x38, arg1)
        
        if ((result & 1) != 0)
            int64_t x8_8 = *(arg1 + 0x30)
            int128_t var_70_3 = *(arg1 + 0x10)
            int128_t var_60_3 = *(arg1 + 0x20)
            var_80 = *arg1
            v1_1 = *(arg1 + 0x48)
            v0_1 = *(arg1 + 0x58)
            v2_1 = *(arg1 + 0x38)
            *(arg1 + 0x30) = *(arg1 + 0x68)
            *(arg1 + 0x10) = v1_1
            *(arg1 + 0x20) = v0_1
            *arg1 = v2_1
            v2_1 = var_80
            *(arg1 + 0x68) = x8_8
            *(arg1 + 0x48) = var_70_3
            *(arg1 + 0x58) = var_60_3
            *(arg1 + 0x38) = v2_1
else
    int128_t var_70_1
    int128_t var_60_1
    int64_t var_50_1
    
    if ((result & 1) == 0)
        int64_t x8_11 = *(arg1 + 0x30)
        int128_t var_70_4 = *(arg1 + 0x10)
        int128_t var_60_4 = *(arg1 + 0x20)
        var_80 = *arg1
        v1 = *(arg1 + 0x48)
        v0 = *(arg1 + 0x58)
        v2 = *(arg1 + 0x38)
        *(arg1 + 0x30) = *(arg1 + 0x68)
        *(arg1 + 0x10) = v1
        *(arg1 + 0x20) = v0
        *arg1 = v2
        v2 = var_80
        *(arg1 + 0x68) = x8_11
        *(arg1 + 0x48) = var_70_4
        *(arg1 + 0x58) = var_60_4
        *(arg1 + 0x38) = v2
        result, v0, v1, v2 = (*arg3)(x22, arg1 + 0x38)
        
        if ((result & 1) != 0)
            var_50_1 = *(arg1 + 0x68)
            var_70_1 = *(arg1 + 0x48)
            var_60_1 = *(arg1 + 0x58)
            var_80 = *(arg1 + 0x38)
            v1 = *(x22 + 0x10)
            v0 = *(x22 + 0x20)
            v2 = *x22
            *(arg1 + 0x68) = *(x22 + 0x30)
            *(arg1 + 0x48) = v1
            *(arg1 + 0x58) = v0
            *(arg1 + 0x38) = v2
            goto label_bb6004
    else
        var_50_1 = *(arg1 + 0x30)
        var_70_1 = *(arg1 + 0x10)
        var_60_1 = *(arg1 + 0x20)
        var_80 = *arg1
        v1 = *(x22 + 0x10)
        v0 = *(x22 + 0x20)
        v2 = *x22
        *(arg1 + 0x30) = *(x22 + 0x30)
        *(arg1 + 0x10) = v1
        *(arg1 + 0x20) = v0
        *arg1 = v2
    label_bb6004:
        v2 = var_80
        *(x22 + 0x30) = var_50_1
        *(x22 + 0x10) = var_70_1
        *(x22 + 0x20) = var_60_1
        *x22 = v2

void* __offset(PileCount, 0xa8) x8_19 = arg1 + 0xa8

if (x8_19 != arg2)
    int64_t x23_1 = 0
    
    do
        void* __offset(PileCount, 0x70) x1_4 = x22
        x22 = x8_19
        int128_t v0_2
        int128_t v1_2
        int128_t v2_2
        result, v0_2, v1_2, v2_2 = (*arg3)(x8_19, x1_4)
        
        if ((result & 1) != 0)
            int64_t x8_20 = *(x22 + 0x30)
            int64_t x24_1 = x23_1
            int128_t var_70_5 = *(x22 + 0x10)
            int128_t var_60_5 = *(x22 + 0x20)
            var_80 = *x22
            void* x8_18
            
            while (true)
                void* x8_21 = arg1 + x24_1
                v1_2 = *(x8_21 + 0x80)
                v2_2 = *(x8_21 + 0x90)
                int64_t x9_3 = *(x8_21 + 0xa0)
                *(x8_21 + 0xa8) = *(x8_21 + 0x70)
                *(x8_21 + 0xb8) = v1_2
                *(x8_21 + 0xc8) = v2_2
                *(x8_21 + 0xd8) = x9_3
                
                if (x24_1 == -0x70)
                    x8_18 = arg1
                    break
                
                result, v0_2, v1_2, v2_2 = (*arg3)(&var_80, x8_21 + 0x38)
                x24_1 -= 0x38
                
                if ((result & 1) == 0)
                    x8_18 = arg1 + x24_1 + 0xa8
                    break
            
            v2_2 = var_80
            *(x8_18 + 0x30) = x8_20
            *(x8_18 + 0x10) = var_70_5
            *(x8_18 + 0x20) = var_60_5
            *x8_18 = v2_2
        
        x8_19 = x22 + 0x38
        x23_1 += 0x38
    while (x8_19 != arg2)

return result
