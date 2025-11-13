// 函数: _Z24FlanimSetDrawOffsetLayerP6FlanimPKc
// 地址: 0xf68d9c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = FlanimGetDef(*arg1)
uint64_t x23 = zx.q(*(result + 0x28))
int64_t x22_1

if (x23.d s>= 1)
    int32_t x0_2 = strlen(arg2)
    int64_t* x24_1 = *(result + 0x20)
    x22_1 = 0
    
    do
        result = strncmp(*x24_1, arg2, sx.q(x0_2))
        
        if (result.d == 0)
            goto label_f68e08
        
        x22_1 += 1
        x24_1 = &x24_1[3]
    while (x23 != x22_1)

x22_1 = 0xffffffff
label_f68e08:
*(arg1 + 0x84) = x22_1.d
return result
