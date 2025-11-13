// 函数: _Z22FlanimCompressParamIntP9DefFlanimP19DefMayaFlanimVertexP23DefFlanimCompressedDatai
// 地址: 0xf6790c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23 = *(arg2 + 8)
int32_t x0 = FlanimCompressGetSizeConstantInt(arg1, arg2, arg4)

if (x0 s>= x23 << 2)
    return FlanimCompressAllInt(arg1, arg2, arg3, arg4) __tailcall

return FlanimCompressConstantInt(arg1, arg2, arg3, arg4, x0) __tailcall
