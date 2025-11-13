// 函数: _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE9sputbackcEw
// 地址: 0x10a4134
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
void* x8 = *(arg1 + 0x18)
int32_t entry_x1

if (*(arg1 + 0x10) == x8 || *(x8 - 4) != entry_x1)
    jump(*(*arg1 + 0x58))

*(arg1 + 0x18) = x8 - 4
return zx.q(entry_x1)
