// 函数: sub_597480
// 地址: 0x597480
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = arg5
int32_t ecx = esi
int32_t edx = *arg3
int32_t var_8 = edx
int32_t eax = *arg2
uint32_t eax_1 = zx.d(eax.w)

if (eax_1 u>= 0x320)
    sub_591930()
    esi = arg5
    edx = var_8

int32_t var_14 = esi
int32_t ecx_1 = *(eax_1 * 0x64 + ecx + 0x1a4c)
uint32_t eax_3 = zx.d(edx.w)

if (eax_3 u>= 0x320)
    sub_591930()
    esi = arg5

int32_t temp0 = *(eax_3 * 0x64 + var_14 + 0x1a4c)

if (ecx_1 s>= temp0 && (ecx_1 s> temp0 || eax s< var_8))
    int32_t ecx_2 = *arg2
    *arg2 = *arg3
    *arg3 = ecx_2

int32_t ecx_3 = esi
int32_t edx_3 = *arg2
int32_t var_8_1 = edx_3
int32_t eax_7 = *arg4
uint32_t eax_8 = zx.d(eax_7.w)

if (eax_8 u>= 0x320)
    sub_591930()
    esi = arg5
    edx_3 = var_8_1

int32_t var_10_2 = esi
int32_t ecx_4 = *(eax_8 * 0x64 + ecx_3 + 0x1a4c)
uint32_t eax_10 = zx.d(edx_3.w)

if (eax_10 u>= 0x320)
    sub_591930()
    esi = arg5

int32_t result = eax_10 * 0x64
int32_t temp1 = *(result + var_10_2 + 0x1a4c)

if (ecx_4 s>= temp1 && (ecx_4 s> temp1 || eax_7 s< var_8_1))
    int32_t var_14_3 = esi
    int32_t ecx_5 = *arg4
    *arg4 = *arg2
    uint32_t eax_12 = zx.d(ecx_5.w)
    *arg2 = ecx_5
    int32_t* edx_7 = *arg3
    arg4 = edx_7
    
    if (eax_12 u>= 0x320)
        sub_591930()
        esi = arg5
        edx_7 = arg4
    
    int32_t ecx_7 = *(eax_12 * 0x64 + var_14_3 + 0x1a4c)
    uint32_t eax_14 = zx.d(edx_7.w)
    
    if (eax_14 u>= 0x320)
        sub_591930()
        edx_7 = arg4
    
    result = eax_14 * 0x64
    int32_t temp2_1 = *(result + esi + 0x1a4c)
    
    if (ecx_7 s>= temp2_1 && (ecx_7 s> temp2_1 || ecx_5 s< edx_7))
        int32_t ecx_8 = *arg2
        result = *arg3
        *arg2 = result
        *arg3 = ecx_8

return result
