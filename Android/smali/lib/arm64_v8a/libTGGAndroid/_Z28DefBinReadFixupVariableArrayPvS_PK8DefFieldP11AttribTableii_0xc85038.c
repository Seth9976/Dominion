// 函数: _Z28DefBinReadFixupVariableArrayPvS_PK8DefFieldP11AttribTableii
// 地址: 0xc85038
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

if (arg5 u<= 0x5f5e100)
    void** x0_1 = DefinitionGetFieldData(arg2, arg3)
    
    if (arg5 == 0)
        *x0_1 = nullptr
        return 1
    
    int32_t x8_1 = *(arg3 + 0x50)
    
    if ((x8_1 & 0x10) != 0)
        return 1
    
    void* x26_1 = sx.q(*x0_1)
    
    if (x26_1.d s>= arg6 && (x8_1 & 0x100) != 0)
        *x0_1 = x26_1
        return 1
    
    *x0_1 = arg1 + x26_1
    
    if (x26_1.d + DefinitionGetSize(*(arg3 + 0x30)) * arg5 s<= arg6 && x26_1 + arg1 s> arg2)
        return DefBinReadFixupArray(arg1, *x0_1, arg5, arg3, arg4, arg6) __tailcall

return 0
