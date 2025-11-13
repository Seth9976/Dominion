// 函数: _Z19DefParseTreeAddItemP12DefParseTreeP12DefParseItem
// 地址: 0xc8ce98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

DefParseItem** result = XPooledCalloc(0x18)
*result = arg2
result[1] = 0
result[2] = *(arg1 + 0x10)
void* x8_1 = *(arg1 + 0x10)
DefParseItem*** x8_2

if (x8_1 == 0)
    x8_2 = arg1 + 8
else
    x8_2 = x8_1 + 8

*x8_2 = result
int32_t x8_3 = *(arg1 + 0x18)
*(arg1 + 0x10) = result
*(arg1 + 0x18) = x8_3 + 1
return result
