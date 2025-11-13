// 函数: _Z25DefParseTreeAppendItemIntP12DefParseTreePKci
// 地址: 0xc8d114
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

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
int32_t x9_1 = *(arg1 + 0x18)
*(arg1 + 0x10) = x0_1
*(arg1 + 0x18) = x9_1 + 1
return XString::Format(&x0[8]) __tailcall
