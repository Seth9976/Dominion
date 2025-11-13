// 函数: _Z19FlanimGetLayerIndexP6FlanimPKc
// 地址: 0xf64fb8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0_1 = FlanimGetDef(*arg1)
int64_t x21 = sx.q(*(x0_1 + 0x28))

if (x21.d s>= 1)
    char** x22_1 = *(x0_1 + 0x20)
    int64_t x20_1 = 0
    
    do
        if (strcasecmp(*x22_1, arg2) == 0)
            return zx.q(x20_1.d)
        
        x20_1 += 1
        x22_1 = &x22_1[3]
    while (x20_1 s< x21)

return zx.q(0xffffffff.d)
