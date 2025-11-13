// 函数: _Z29AndroidDisplayKeyboard_nativeb
// 地址: 0x106a1a8
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8_2 = *(**gNativeActivityEngine + 0x18)

if ((arg1.d & 1) == 0)
    return ANativeActivity_hideSoftInput(x8_2, 1) __tailcall

return ANativeActivity_showSoftInput(x8_2, 1) __tailcall
