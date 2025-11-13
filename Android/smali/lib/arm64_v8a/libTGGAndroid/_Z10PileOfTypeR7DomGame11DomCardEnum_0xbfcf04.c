// 函数: _Z10PileOfTypeR7DomGame11DomCardEnum
// 地址: 0xbfcf04
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x19 = arg2
int64_t i = 0
int64_t x23 = 7

do
    int32_t x26_1 = *(arg1 + 0x159c + i)
    void* result = arg1 + (x23 << 4) + 0x152c
    
    if (x26_1 == x19)
        return result
    
    void* x8_2 = arg1 + i
    
    if (*(x8_2 + 0x15a0) == x19)
        return x8_2 + 0x159c
    
    if (PileSource(arg1, zx.q(x19)) == x26_1)
        return result
    
    i += 0x10
    x23 += 1
while (i != 0x1a0)

return nullptr
