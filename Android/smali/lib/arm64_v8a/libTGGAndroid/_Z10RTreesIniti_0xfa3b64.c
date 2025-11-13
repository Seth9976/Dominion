// 函数: _Z10RTreesIniti
// 地址: 0xfa3b64
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

*(gRTreeGlobals + 0x10) = arg1
*(gRTreeGlobals + 0x14) = 0
*gRTreeGlobals = 0
*(gRTreeGlobals + 8) = 0
int64_t* result = XMalloc(8 | (0xfffffff & (arg1 * 3)) << 4)
*result = *(gRTreeGlobals + 8)
int32_t x9_1 = *(gRTreeGlobals + 0x10)
void* x8_2 = *gRTreeGlobals
*(gRTreeGlobals + 8) = result

if (x9_1 s>= 1)
    int64_t i = 0
    void* x9_2 = &result[1]
    
    do
        void* x11_1 = x9_2
        *x9_2 = x8_2
        x9_2 += 0x30
        i += 1
        x8_2 = x11_1
    while (i s< sx.q(*(gRTreeGlobals + 0x10)))
    
    x8_2 = x9_2 - 0x30

*gRTreeGlobals = x8_2
return result
