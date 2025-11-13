// 函数: _ZNSt6__ndk115basic_streambufIcNS_11char_traitsIcEEE5sputcEc
// 地址: 0x10a3a60
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

SystemHintOp_BTI()
char* x9 = *(arg1 + 0x30)

if (x9 == *(arg1 + 0x38))
    jump(*(*arg1 + 0x68))

*(arg1 + 0x30) = &x9[1]
char entry_x1
*x9 = entry_x1
return zx.q(entry_x1)
