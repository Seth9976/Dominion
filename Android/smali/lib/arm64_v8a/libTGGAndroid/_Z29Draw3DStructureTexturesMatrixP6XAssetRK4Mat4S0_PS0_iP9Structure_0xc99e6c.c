// 函数: _Z29Draw3DStructureTexturesMatrixP6XAssetRK4Mat4S0_PS0_iP9Structure
// 地址: 0xc99e6c
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int64_t* result = StructureDefGet(arg1)
int32_t* x8 = *result

if (x8 == 0)
    return result

if (*x8 s>= 1)
    int64_t x26_1 = 0
    int64_t i = 0
    
    do
        Draw3DSubMeshMatrix(*(x8 + 8) + x26_1, arg2, arg3, arg4, arg5, arg6)
        x8 = *result
        i += 1
        x26_1 += 0x150
    while (i s< sx.q(*x8))

return Structure3DDebugDraw(arg1, arg2, arg6) __tailcall
