// 函数: _Z30DefParseTreeMakeFromDefinitionPvPK6DefMap
// 地址: 0xc8f9b8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x22 = *gpDefParseTreeAppData
void* result = *(x22 + 0x18)
*(x22 + 0x2c) += 1

if (result == 0)
    int64_t* x0_1 = XMalloc(8 + *(x22 + 0x28) * 0x28)
    *x0_1 = *(x22 + 0x20)
    int32_t x8_4 = *(x22 + 0x28)
    result = *(x22 + 0x18)
    *(x22 + 0x20) = x0_1
    
    if (x8_4 s>= 1)
        int64_t i = 0
        void* result_2 = &x0_1[1]
        
        do
            void* result_1 = result_2
            *result_2 = result
            result_2 += 0x28
            i += 1
            result = result_1
        while (i s< sx.q(*(x22 + 0x28)))
        
        result = result_2 - 0x28
    
    *(x22 + 0x18) = result

*(x22 + 0x18) = *result
__builtin_memset(result, 0, 0x28)
XString::XString()
__builtin_memset(result + 8, 0, 0x14)
*arg2
XString::operator=(result)
int32_t i_2 = DefIterGetFirst(arg2)
int32_t i_1 = i_2

if (i_2 != 0xffffffff)
    do
        DefField* x0_6 = DefIterGetNext(arg2, &i_1)
        DefParseTreeMakeFromDefinitionSubField(result, arg1, *(x0_6 + 0x18), x0_6, nullptr)
    while (i_1 != 0xffffffff)

return result
