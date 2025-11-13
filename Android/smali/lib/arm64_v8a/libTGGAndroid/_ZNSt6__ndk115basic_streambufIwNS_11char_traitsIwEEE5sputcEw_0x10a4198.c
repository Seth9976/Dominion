// 函数: _ZNSt6__ndk115basic_streambufIwNS_11char_traitsIwEEE5sputcEw
// 地址: 0x10a4198
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
int32_t* x8 = *(arg1 + 0x30)

if (x8 == *(arg1 + 0x38))
    jump(*(*arg1 + 0x68))

*(arg1 + 0x30) = &x8[1]
int32_t entry_x1
*x8 = entry_x1
return zx.q(entry_x1)
