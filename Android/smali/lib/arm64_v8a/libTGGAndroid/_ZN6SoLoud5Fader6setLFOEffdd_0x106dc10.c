// 函数: _ZN6SoLoud5Fader6setLFOEffdd
// 地址: 0x106dc10
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

float* entry_x0
*entry_x0 = arg1
entry_x0[1] = arg2
arg1 = arg2 - arg1
arg2 = fconvert.s(0.5f)
*(entry_x0 + 0x28) = 0x200000000
float v4 = arg1 * arg2

if (v4 < 0f)
    arg1 = fneg(arg1 * arg2)
else
    arg1 = v4

entry_x0[2] = arg1
*(entry_x0 + 0x10) = arg3
*(entry_x0 + 0x18) = arg4
*(entry_x0 + 0x20) = (6.2831854820251465 / arg3).d.q
