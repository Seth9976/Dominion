// 函数: _Z21FlanimGetActionFramesP6FlanimPKcPiS3_
// 地址: 0xf64a38
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x0_1 = FlanimGetDef(*arg1)
int64_t result
int32_t x8_2

if (arg2 == 0)
    *arg3 = 0
    x8_2 = x0_1[0xb].d
    result = 1
else
    uint64_t x23_1 = zx.q(x0_1[1].d)
    
    if (x23_1.d s< 1)
    label_f64a94:
        *arg3 = 0
        x8_2 = x0_1[0xb].d
        result = 0
    else
        void* x24_1 = *x0_1 + 8
        
        while (true)
            if (strcasecmp(arg2, *(x24_1 - 8)) == 0)
                result = 1
                *arg3 = *x24_1
                x8_2 = *(x24_1 + 4) - *x24_1 + 1
                break
            
            uint64_t temp0_1 = x23_1
            x23_1 -= 1
            x24_1 += 0x18
            
            if (temp0_1 == 1)
                goto label_f64a94

*arg4 = x8_2
return result
