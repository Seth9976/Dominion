// 函数: spIkConstraintTimeline_setFrame
// 地址: 0xfb1b00
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t x8 = muls.dp.d(arg2, 6)
int64_t x10_1 = sx.q(x8.d) << 2
(*(arg1 + 0x20))[sx.q(x8.d)] = arg6
*(*(arg1 + 0x20) + (4 | (0x1fffffffffffffff & x8 u>> 1) << 3)) = arg7
arg7 = 0f
*(x10_1 + *(arg1 + 0x20) + 8) = arg8
*(x10_1 + *(arg1 + 0x20) + 0xc) = float.s(arg3)
arg6 = fconvert.s(1f)

arg8 = arg4 == 0 ? arg7 : arg6

*(x10_1 + *(arg1 + 0x20) + 0x10) = arg8

if (arg5 == 0)
    arg6 = arg7

*(x10_1 + *(arg1 + 0x20) + 0x14) = arg6
return arg6
