// 函数: _Z21FlanimActionIsPlayingP6FlanimPKc
// 地址: 0xf64980
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0_1 = FlanimGetDef(*arg1)
int32_t x8_2

if (arg2 == 0)
    x8_2 = x0_1[0xb].d
    
    if (*(arg1 + 0x10) == 0)
    label_f64a08:
        
        if (*(arg1 + 0x14) == x8_2)
            return 1
else
    uint64_t x21_1 = zx.q(x0_1[1].d)
    
    if (x21_1.d s>= 1)
        void* x22_1 = *x0_1 + 0xc
        
        while (strcasecmp(arg2, *(x22_1 - 0xc)) != 0)
            uint64_t temp0_1 = x21_1
            x21_1 -= 1
            x22_1 += 0x18
            
            if (temp0_1 == 1)
                return 0
        
        int32_t x9_1 = *(x22_1 - 4)
        x8_2 = *x22_1 - x9_1 + 1
        
        if (*(arg1 + 0x10) == x9_1)
            goto label_f64a08
return 0
