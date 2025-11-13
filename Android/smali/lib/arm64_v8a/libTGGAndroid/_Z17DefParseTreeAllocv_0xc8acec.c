// 函数: _Z17DefParseTreeAllocv
// 地址: 0xc8acec
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x20 = *gpDefParseTreeAppData
void* result = *(x20 + 0x18)
*(x20 + 0x2c) += 1

if (result == 0)
    int64_t* x0_2 = XMalloc(8 + *(x20 + 0x28) * 0x28)
    *x0_2 = *(x20 + 0x20)
    int32_t x8_4 = *(x20 + 0x28)
    result = *(x20 + 0x18)
    *(x20 + 0x20) = x0_2
    
    if (x8_4 s>= 1)
        int64_t i = 0
        void* result_2 = &x0_2[1]
        
        do
            void* result_1 = result_2
            *result_2 = result
            result_2 += 0x28
            i += 1
            result = result_1
        while (i s< sx.q(*(x20 + 0x28)))
        
        result = result_2 - 0x28
    
    *(x20 + 0x18) = result

*(x20 + 0x18) = *result
__builtin_memset(result, 0, 0x28)
XString::XString()
__builtin_memset(result + 8, 0, 0x14)
return result
