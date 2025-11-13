// 函数: _Z12RTreeAddNodeR5RTreeRK4BBoxi
// 地址: 0xfa3fe4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = *gRTreeGlobals
*(gRTreeGlobals + 0x14) += 1
int128_t v0

if (result == 0)
    int64_t* x0_1
    x0_1, v0 = XMalloc(8 | (0xfffffff & (*(gRTreeGlobals + 0x10) * 3)) << 4)
    *x0_1 = *(gRTreeGlobals + 8)
    int32_t x9_2 = *(gRTreeGlobals + 0x10)
    result = *gRTreeGlobals
    *(gRTreeGlobals + 8) = x0_1
    
    if (x9_2 s>= 1)
        int64_t i = 0
        void** result_2 = &x0_1[1]
        
        do
            void** result_1 = result_2
            *result_2 = result
            result_2 = &result_2[6]
            i += 1
            result = result_1
        while (i s< sx.q(*(gRTreeGlobals + 0x10)))
        
        result = result_2 - 0x30
    
    *gRTreeGlobals = result

*gRTreeGlobals = *result
v0 = *arg2
int64_t x8_6 = *(arg2 + 0x10)
*(result + 0x20) = 0
*(result + 0x24) = arg3
*result = v0
*(result + 0x10) = x8_6
*(result + 0x18) = 0
*(result + 0x20) = *(arg1 + 8)
*(arg1 + 8) = result
*(result + 0x18) = 0
return result
