// 函数: sub_572710
// 地址: 0x572710
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t i_1 = arg6

if (i_1 == 0)
    return sub_572660(arg2, arg2, arg3, arg4, arg5)

int32_t* esi = sub_5722c0(arg2, arg4, arg3, arg5)

if (i_1 s> 0)
    uint32_t i
    
    do
        uint32_t esi_2 = zx.d((*esi).w)
        
        if (esi_2 u>= 0x320)
            sub_591930()
        
        esi = esi_2 * 0x64 + 0x1aa4 + arg3
        i = i_1
        i_1 -= 1
    while (i != 1)

uint32_t eax_3 = zx.d(arg2.w)

if (eax_3 u>= 0x320)
    sub_591930()

void* edx_2 = eax_3 * 0x64 + arg3
*(edx_2 + 0x1a50) = arg4
int32_t ecx = *(arg3 + 0x19ac)
*(arg3 + 0x19ac) = ecx + 1
*(edx_2 + 0x1a54) = ecx

if (arg5 != 0xffffffff)
    *(edx_2 + 0x1a74) = arg5

*(edx_2 + 0x1a70) = arg5
*(edx_2 + 0x1a78) = arg5
int32_t result = *esi
*(edx_2 + 0x1aa4) = result
*esi = arg2
return result
