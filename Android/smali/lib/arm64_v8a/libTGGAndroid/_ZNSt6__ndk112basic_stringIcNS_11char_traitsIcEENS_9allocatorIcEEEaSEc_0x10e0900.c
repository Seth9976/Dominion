// 函数: _ZNSt6__ndk112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEaSEc
// 地址: 0x10e0900
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
void* x8_2

if ((zx.d(*arg1) & 1) != 0)
    x8_2 = *(arg1 + 0x10)
    *(arg1 + 8) = 1
else
    char* x8_1 = arg1
    *x8_1 = 2
    x8_2 = &x8_1[1]

char entry_x1
*x8_2 = entry_x1
*(x8_2 + 1) = 0
