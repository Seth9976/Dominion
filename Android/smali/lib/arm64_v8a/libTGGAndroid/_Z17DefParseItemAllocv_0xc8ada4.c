// 函数: _Z17DefParseItemAllocv
// 地址: 0xc8ada4
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* x20 = *gpDefParseTreeAppData
void* result = *x20
*(x20 + 0x14) += 1

if (result == 0)
    int64_t* x0_2 = XMalloc(8 | (0xfffffff & (x20[2].d * 3)) << 4)
    *x0_2 = x20[1]
    int32_t x8_5 = x20[2].d
    result = *x20
    x20[1] = x0_2
    
    if (x8_5 s>= 1)
        int64_t i = 0
        void* result_2 = &x0_2[1]
        
        do
            void* result_1 = result_2
            *result_2 = result
            result_2 += 0x30
            i += 1
            result = result_1
        while (i s< sx.q(x20[2].d))
        
        result = result_2 - 0x30
    
    *x20 = result

*x20 = *result
__builtin_memset(result, 0, 0x30)
XString::XString()
XString::XString()
XString::XString()
return result
