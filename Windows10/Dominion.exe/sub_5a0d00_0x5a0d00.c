// 函数: sub_5a0d00
// 地址: 0x5a0d00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* edx = *arg1
int32_t ebx
ebx.b = *edx
uint32_t result = zx.d(ebx.b)

if (ebx.b u>= 0x80)
    if ((ebx.b & 0xe0) == 0xc0)
        edx = &edx[1]
        *arg1 = edx
        result = ((result & 0x1f) << 6) + (sx.d(*edx) & 0x3f)
    else
        if ((ebx.b & 0xf0) == 0xe0)
            *arg1 = &edx[1]
            int32_t eax_10 = zx.d(edx[1]) & 0x3f
            *arg1 = &edx[2]
            int32_t eax_12 = sx.d(edx[2]) & 0x3f
            *arg1 = &edx[3]
            return ((((result & 0xf) << 6) + eax_10) << 6) + eax_12
        
        ebx.b &= 0xf8
        
        if (ebx.b == 0xf0)
            *arg1 = &edx[1]
            int32_t eax_2 = zx.d(edx[1]) & 0x3f
            *arg1 = &edx[2]
            int32_t eax_4 = zx.d(edx[2]) & 0x3f
            *arg1 = &edx[3]
            int32_t eax_7 = sx.d(edx[3]) & 0x3f
            *arg1 = &edx[4]
            return ((((result & 7) << 6) + eax_2) << 0xc) + (eax_4 << 6) + eax_7

*arg1 = &edx[1]
return result
