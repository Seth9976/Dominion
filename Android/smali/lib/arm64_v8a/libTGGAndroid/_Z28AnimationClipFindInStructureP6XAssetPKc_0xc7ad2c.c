// 函数: _Z28AnimationClipFindInStructureP6XAssetPKc
// 地址: 0xc7ad2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* x8 = *StructureGetDef(arg1)
int64_t x21 = sx.q(*(x8 + 0x60))

if (x21.d s>= 1)
    int64_t x19_1 = 0
    int64_t* x22_1 = *(x8 + 0x68) + 8
    
    do
        if (strcmp(*x22_1, arg2) == 0)
            return zx.q(x19_1.d)
        
        x19_1 += 1
        x22_1 = &x22_1[3]
    while (x19_1 s< x21)

return zx.q(0xffffffff.d)
