// 函数: _Z16DefParseTreeFreeP12DefParseTree
// 地址: 0xc8ae8c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = *gpDefParseTreeAppData
int64_t* x8 = *(x20 + 0x20)

if (x8 != 0)
    while (true)
        int64_t* x12_1 = x8
        x8 = *x12_1
        
        if (&x12_1[1] u<= arg1 && &x12_1[1 + sx.q(*(x20 + 0x28)) * 5] u> arg1)
            if (x8 == 0)
                break
            
            if ((arg1 - &x12_1[1]) s% 0x28 == 0)
                break
            
            continue
        
        if (x8 == 0)
            break

*(x20 + 0x2c) -= 1
void* i = *(arg1 + 8)

while (i != 0)
    void* i_1 = i
    i = *(i + 8)
    XPooledFree(i_1, 0x18)

__builtin_memset(arg1 + 8, 0, 0x14)
int64_t result = XString::~XString()
*arg1 = *(x20 + 0x18)
*(x20 + 0x18) = arg1
return result
