// 函数: _Z16DefParseTreeCopyP12DefParseTree
// 地址: 0xc8dae8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint64_t x21 = *gpDefParseTreeAppData
void* result = *(x21 + 0x18)
*(x21 + 0x2c) += 1

if (result == 0)
    int64_t* x0_1 = XMalloc(8 + *(x21 + 0x28) * 0x28)
    *x0_1 = *(x21 + 0x20)
    int32_t x8_4 = *(x21 + 0x28)
    result = *(x21 + 0x18)
    *(x21 + 0x20) = x0_1
    
    if (x8_4 s>= 1)
        int64_t i = 0
        void* result_2 = &x0_1[1]
        
        do
            void* result_1 = result_2
            *result_2 = result
            result_2 += 0x28
            i += 1
            result = result_1
        while (i s< sx.q(*(x21 + 0x28)))
        
        result = result_2 - 0x28
    
    *(x21 + 0x18) = result

*(x21 + 0x18) = *result
__builtin_memset(result, 0, 0x28)
XString::XString()
*(result + 0x10) = 0
*(result + 8) = 0
*(result + 0x18) = 0
*(result + 0x20) = *(arg1 + 0x20)
XString::operator=(result)
int64_t* i_1 = *(arg1 + 8)

if (i_1 != 0)
    do
        void* x21_1 = *i_1
        i_1 = i_1[1]
        XString* x0_6 = DefParseItemAlloc()
        XString::operator=(x0_6)
        XString::operator=(x0_6 + 8)
        XString::operator=(x0_6 + 0x10)
        *(x0_6 + 0x20) = *(x21_1 + 0x20)
        *(x0_6 + 0x28) = *(x21_1 + 0x28)
        *(x0_6 + 0x29) = *(x21_1 + 0x29)
        DefParseTree* x0_9 = *(x21_1 + 0x18)
        
        if (x0_9 != 0)
            *(x0_6 + 0x18) = DefParseTreeCopy(x0_9)
        
        XString** x0_5 = XPooledCalloc(0x18)
        *x0_5 = x0_6
        x0_5[1] = 0
        x0_5[2] = *(result + 0x10)
        void* x8_8 = *(result + 0x10)
        void* x8_9
        
        if (x8_8 == 0)
            x8_9 = result + 8
        else
            x8_9 = x8_8 + 8
        
        *x8_9 = x0_5
        int32_t x8_10 = *(result + 0x18)
        *(result + 0x10) = x0_5
        *(result + 0x18) = x8_10 + 1
    while (i_1 != 0)

return result
