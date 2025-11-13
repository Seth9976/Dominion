// 函数: _Z27FlanimGetLayerIndexByPrefixP6XAssetPKc
// 地址: 0xf64ecc
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x0 = FlanimGetDef(arg1)
int64_t x22 = sx.q(*(x0 + 0x28))

if (x22.d s>= 1)
    int32_t x0_2 = strlen(arg2)
    int64_t* x23_1 = *(x0 + 0x20)
    int64_t x20_1 = 0
    
    do
        if (strncmp(*x23_1, arg2, sx.q(x0_2)) == 0)
            return zx.q(x20_1.d)
        
        x20_1 += 1
        x23_1 = &x23_1[3]
    while (x20_1 s< x22)

return zx.q(0xffffffff.d)
