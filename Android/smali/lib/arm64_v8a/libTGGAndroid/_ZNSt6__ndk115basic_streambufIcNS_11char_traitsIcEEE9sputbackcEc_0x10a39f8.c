// 函数: _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE9sputbackcEc
// 地址: 0x10a39f8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
void* x8 = *(arg1 + 0x18)
char entry_x1

if (*(arg1 + 0x10) == x8 || zx.d(*(x8 - 1)) != zx.d(entry_x1))
    jump(*(*arg1 + 0x58))

*(arg1 + 0x18) = x8 - 1
return zx.q(*(x8 - 1))
