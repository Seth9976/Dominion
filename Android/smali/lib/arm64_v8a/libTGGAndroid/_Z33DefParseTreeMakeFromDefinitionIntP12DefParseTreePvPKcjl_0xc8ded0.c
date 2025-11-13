// 函数: _Z33DefParseTreeMakeFromDefinitionIntP12DefParseTreePvPKcjl
// 地址: 0xc8ded0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

uint32_t x20 = *arg2

if ((arg4 & 2) != 0)
    SymbolMapLookupName(arg5, x20)
else
    if ((arg4 & 0x20) == 0)
        char* x0 = DefParseItemAlloc()
        XString::operator=(x0)
        char** x0_1 = XPooledCalloc(0x18)
        *x0_1 = x0
        x0_1[1] = 0
        x0_1[2] = *(arg1 + 0x10)
        void* x8_1 = *(arg1 + 0x10)
        char*** x8_2
        
        if (x8_1 == 0)
            x8_2 = arg1 + 8
        else
            x8_2 = x8_1 + 8
        
        *x8_2 = x0_1
        int32_t x8_3 = *(arg1 + 0x18)
        *(arg1 + 0x10) = x0_1
        *(arg1 + 0x18) = x8_3 + 1
        return XString::Format(&x0[8])
    
    AttribTagGetTagName(arg5, x20)

char* x0_7 = DefParseItemAlloc()
XString::operator=(x0_7)
char** x0_8 = XPooledCalloc(0x18)
*x0_8 = x0_7
x0_8[1] = 0
x0_8[2] = *(arg1 + 0x10)
void* x8_6 = *(arg1 + 0x10)
void* __offset(DefParseTree, 0x8) x8_7

if (x8_6 == 0)
    x8_7 = arg1 + 8
else
    x8_7 = x8_6 + 8

*x8_7 = x0_8
int32_t x8_8 = *(arg1 + 0x18)
*(arg1 + 0x10) = x0_8
*(arg1 + 0x18) = x8_8 + 1
return XString::operator=(&x0_7[8])
