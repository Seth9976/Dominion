// 函数: sub_fda750
// 地址: 0xfda750
// 来自: E:\torrent\Cursor\Dominion_1.0.3315\split_config.arm64_v8a\lib\arm64-v8a\libTGGAndroid.so

int32_t x23 = *(arg1 + 4)

if (x23 == 0)
    x23 = *(arg3 + 0x14)

*arg2 = arg3[1].d
int32_t x8_1 = *(arg3 + 0xc)
arg2[4] = 1
arg2[0xf] = 1
arg2[1] = x8_1
*(arg2 + 0x48) = XCalloc(0x10)
int32_t x0_1 = *arg2
int32_t x1 = arg2[1]
arg2[5] = 8
arg2[6] = x23
arg2[7] = 0
int32_t x0_2 = TextureFormatLinearImageSize(x0_1, x1, zx.q(x23))
int32_t* x25 = *(arg2 + 0x48)
*x25 = x0_2
int64_t result

if (arg5 == 2 || *(arg3 + 0x14) != x23)
    int64_t x0_4 = XMalloc(x0_2)
    *(x25 + 8) = x0_4
    int64_t var_58 = x0_4
    int64_t v0_1 = *arg2
    int64_t var_50_1 = v0_1
    int32_t var_48_1 = TextureFormatPitch(v0_1.d, zx.q(x23))
    int32_t var_44_1 = x23
    ImageBufferCopyToNewFormat(arg3, &var_58)
    
    if (arg5 != 2)
        sub_fd93b0(&var_58)
    
    result = XFree(*arg3)
    *arg3 = 0
    
    if (*(arg1 + 8) == 0)
        return XTrace("Autogeneration of mipmaps is not implemented for %s")
else
    *(x25 + 8) = *arg3
    result = sub_fd93b0(arg3)
    
    if (*(arg1 + 8) == 0)
        return XTrace("Autogeneration of mipmaps is not implemented for %s")

return result
