// 函数: _Z20DefBinReadFixupBlockPvS_PK6DefMapP11AttribTablei
// 地址: 0xc84f98
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((DefTypeIsBuiltIn(arg3) & 1) != 0)
    return 1

if (arg2 + sx.q(*(arg3 + 0x14)) u<= arg1 + sx.q(arg5))
    return DefBinReadFixupField(arg1, arg2, arg3, arg4, arg5) __tailcall

return 0
