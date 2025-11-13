// 函数: _Z23FlanimCompressParamVec2P19DefMayaFlanimVertexP23DefFlanimCompressedDatai
// 地址: 0xf67374
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x22 = *(arg1 + 8)
int32_t x0 = FlanimCompressGetSizeConstantVec2(arg1, arg3)

if (x0 s>= x22 << 3)
    return FlanimCompressAllVec2(arg1, arg2, arg3) __tailcall

return FlanimCompressConstantVec2(arg1, arg2, arg3, x0) __tailcall
