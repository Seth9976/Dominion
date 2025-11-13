// 函数: sub_724c50
// 地址: 0x724c50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx = arg4
uint32_t ecx_1 = zx.d(*arg2) * 3 + zx.d(*arg3)

if (edx == 1)
    uint8_t ecx_3 = ((ecx_1 + 2) u>> 2).b
    arg1[1] = ecx_3
    *arg1 = ecx_3
    return arg1

int32_t edi = 1
*arg1 = ((ecx_1 + 2) u>> 2).b

if (edx s> 1)
    void* eax_8 = arg2 - arg3
    void* ebx_1 = &arg3[1]
    arg2 = eax_8
    
    do
        uint32_t eax_9 = zx.d(*(eax_8 + ebx_1))
        ebx_1 += 1
        uint32_t edx_2 = ecx_1
        ecx_1 = eax_9 * 3 + zx.d(*(ebx_1 - 1))
        arg1[(edi << 1) - 1] = ((ecx_1 + ((edx_2 + 4) << 1) + edx_2) u>> 4).b
        edx = arg4
        arg1[edi << 1] = ((ecx_1 * 3 + edx_2 + 8) u>> 4).b
        edi += 1
        eax_8 = arg2
    while (edi s< edx)

arg1[(edx << 1) - 1] = ((ecx_1 + 2) u>> 2).b
return arg1
