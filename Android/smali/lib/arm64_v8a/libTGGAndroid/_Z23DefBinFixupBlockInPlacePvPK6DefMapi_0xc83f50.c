// 函数: _Z23DefBinFixupBlockInPlacePvPK6DefMapi
// 地址: 0xc83f50
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((DefTypeIsBuiltIn(arg2) & 1) != 0)
    return 1

if (*(arg2 + 0x14) s<= arg3)
    return DefBinReadFixupField(arg1, arg1, arg2, nullptr, arg3) __tailcall

return 0
