// 函数: _Z20FlanimSetRenderGroupP6FlanimPKci
// 地址: 0xf6887c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = FlanimGetDef(*arg1)
int32_t x24 = *(result + 0x28)

if (x24 s>= 1)
    void* result_1 = result
    
    if (arg2 == 0)
        int64_t i = 0
        int64_t x9_1 = 0x60
        
        do
            i += 1
            *(*(arg1 + 0x70) + x9_1) = arg3
            x9_1 += 0x70
        while (i s< sx.q(*(result_1 + 0x28)))
    else
        int64_t x25_1 = 0
        int64_t i_1 = 0
        int64_t x27_1 = 0x60
        
        do
            if (zx.d(*arg2) != 0)
                result = strncmp(*(*(result_1 + 0x20) + x25_1), arg2, strlen(arg2))
            
            if (zx.d(*arg2) == 0 || result.d == 0)
                *(*(arg1 + 0x70) + x27_1) = arg3
                x24 = *(result_1 + 0x28)
            
            i_1 += 1
            x27_1 += 0x70
            x25_1 += 0x18
        while (i_1 s< sx.q(x24))

return result
