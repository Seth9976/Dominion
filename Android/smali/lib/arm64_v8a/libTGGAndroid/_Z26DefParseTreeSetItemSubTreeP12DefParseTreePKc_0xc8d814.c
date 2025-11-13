// 函数: _Z26DefParseTreeSetItemSubTreeP12DefParseTreePKc
// 地址: 0xc8d814
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

void* result = DefParseTreeGetOrCreateItem(arg1, arg2)
char var_28
XString::XString(&var_28)
operator==(&var_28, arg2)
XString::~XString()
uint64_t x22 = *gpDefParseTreeAppData
void* x21 = *(x22 + 0x18)
*(x22 + 0x2c) += 1

if (x21 == 0)
    int64_t* x0_3 = XMalloc(8 + *(x22 + 0x28) * 0x28)
    *x0_3 = *(x22 + 0x20)
    int32_t x8_4 = *(x22 + 0x28)
    x21 = *(x22 + 0x18)
    *(x22 + 0x20) = x0_3
    
    if (x8_4 s>= 1)
        int64_t i = 0
        void* x8_5 = &x0_3[1]
        
        do
            void* x10_1 = x8_5
            *x8_5 = x21
            x8_5 += 0x28
            i += 1
            x21 = x10_1
        while (i s< sx.q(*(x22 + 0x28)))
        
        x21 = x8_5 - 0x28
    
    *(x22 + 0x18) = x21

*(x22 + 0x18) = *x21
__builtin_memset(x21, 0, 0x28)
XString::XString()
__builtin_memset(x21 + 8, 0, 0x14)
*(result + 0x18) = x21
XString::operator=(x21)
return result
