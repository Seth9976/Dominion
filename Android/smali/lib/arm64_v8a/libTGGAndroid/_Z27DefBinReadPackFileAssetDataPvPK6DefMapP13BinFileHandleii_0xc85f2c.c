// 函数: _Z27DefBinReadPackFileAssetDataPvPK6DefMapP13BinFileHandleii
// 地址: 0xc85f2c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if ((HalReadAtOffset(arg3, arg4, arg5, arg1) & 1) != 0)
    if ((DefTypeIsBuiltIn(arg2) & 1) != 0)
        return 1
    
    if (*(arg2 + 0x14) s<= arg5)
        return DefBinReadFixupField(arg1, arg1, arg2, nullptr, arg5) __tailcall

return 0
