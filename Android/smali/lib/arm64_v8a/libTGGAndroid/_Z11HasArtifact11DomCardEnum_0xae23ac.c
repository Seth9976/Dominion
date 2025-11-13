// 函数: _Z11HasArtifact11DomCardEnum
// 地址: 0xae23ac
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x20 = *(DomGetContext() + 0x18)
void* x10 = *(DomGetContext() + 8)
uint64_t x8 = zx.q(*(x10 + 0x1528))

if (x8.d s>= 1)
    int64_t x9_1 = 0
    void* x10_1 = x10 + 0x1a94
    
    do
        if (*(x10_1 - 0x24) == arg1 && *x10_1 == x20)
            return zx.q(x9_1.d != 0 ? 1 : 0)
        
        x9_1 += 1
        x10_1 += 0x68
    while (x8 != x9_1)

return 0
