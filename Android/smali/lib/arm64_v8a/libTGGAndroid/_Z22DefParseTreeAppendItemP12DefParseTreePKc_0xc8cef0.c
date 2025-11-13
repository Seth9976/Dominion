// 函数: _Z22DefParseTreeAppendItemP12DefParseTreePKc
// 地址: 0xc8cef0
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

char* result = DefParseItemAlloc()
XString::operator=(result)
char** x0 = XPooledCalloc(0x18)
*x0 = result
x0[1] = 0
x0[2] = *(arg1 + 0x10)
void* x8_1 = *(arg1 + 0x10)
char*** x8_2

if (x8_1 == 0)
    x8_2 = arg1 + 8
else
    x8_2 = x8_1 + 8

*x8_2 = x0
int32_t x8_3 = *(arg1 + 0x18)
*(arg1 + 0x10) = x0
*(arg1 + 0x18) = x8_3 + 1
return result
