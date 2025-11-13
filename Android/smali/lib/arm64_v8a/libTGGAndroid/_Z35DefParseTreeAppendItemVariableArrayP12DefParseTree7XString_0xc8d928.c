// 函数: _Z35DefParseTreeAppendItemVariableArrayP12DefParseTree7XString
// 地址: 0xc8d928
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

XString* x0 = DefParseItemAlloc()
int64_t* x0_1 = XPooledCalloc(0x18)
*x0_1 = x0
x0_1[1] = 0
x0_1[2] = *(arg1 + 0x10)
void* x8_1 = *(arg1 + 0x10)
int64_t** x8_2

if (x8_1 == 0)
    x8_2 = arg1 + 8
else
    x8_2 = x8_1 + 8

*x8_2 = x0_1
int32_t x8_3 = *(arg1 + 0x18)
*(arg1 + 0x10) = x0_1
*(arg1 + 0x18) = x8_3 + 1
XString::operator=(x0)
uint64_t x21_1 = *gpDefParseTreeAppData
void* __saved_x1 = *(x21_1 + 0x18)
*(x21_1 + 0x2c) += 1

if (__saved_x1 == 0)
    int64_t* x0_4 = XMalloc(8 + *(x21_1 + 0x28) * 0x28)
    *x0_4 = *(x21_1 + 0x20)
    int32_t x8_9 = *(x21_1 + 0x28)
    __saved_x1 = *(x21_1 + 0x18)
    *(x21_1 + 0x20) = x0_4
    
    if (x8_9 s>= 1)
        int64_t i = 0
        void* __saved_x1_2 = &x0_4[1]
        
        do
            void* __saved_x1_1 = __saved_x1_2
            *__saved_x1_2 = __saved_x1
            __saved_x1_2 += 0x28
            i += 1
            __saved_x1 = __saved_x1_1
        while (i s< sx.q(*(x21_1 + 0x28)))
        
        __saved_x1 = __saved_x1_2 - 0x28
    
    *(x21_1 + 0x18) = __saved_x1

*(x21_1 + 0x18) = *__saved_x1
__builtin_memset(__saved_x1, 0, 0x28)
XString::XString()
__builtin_memset(__saved_x1 + 8, 0, 0x14)
*(x0 + 0x18) = __saved_x1
return __saved_x1
