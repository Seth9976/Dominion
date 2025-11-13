// 函数: sub_5a7e40
// 地址: 0x5a7e40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax_1 = (arg5 - 1) * 0x11c

if (*(eax_1 + 0xb4a620) != arg5)
    sub_63b870(eax_1, &data_801800, "TERRAIN_ELEMENT_DEFS[idx].terrain == element", 
        "C:\x\ax2017\Jams\Dominion\code\DomMap.cpp", 0x9b0, "TerrainElementDefGet")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t ebx = 0
void* eax_2 = eax_1 + &data_b4a648

while (*(eax_2 - 0x10) != 0)
    if (*eax_2 == 0)
        ebx += 1
        break
    
    if (*(eax_2 + 0x10) == 0)
        ebx += 2
        break
    
    if (*(eax_2 + 0x20) == 0)
        ebx += 3
        break
    
    ebx += 4
    eax_2 += 0x40
    
    if (ebx s>= 0x10)
        break

int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(*arg6)
int32_t esi_1 = (eax_4 - edx) s>> 1

if (*(arg3 + 0xc) != 5)
    esi_1 = *arg6

int32_t eax_7
int32_t edx_1
edx_1:eax_7 = sx.q(esi_1)
int32_t ecx_3 = ((edx_1 & 3) + eax_7) s>> 2

if (*(arg3 + 0xc) != 6)
    ecx_3 = esi_1

uint32_t result = 0
uint32_t result_1 = 0

if (ecx_3 s> 0)
    int32_t* esi_2 = arg2
    int32_t ecx_4
    ecx_4.b = ebx == 0
    int32_t var_34_1 = ecx_4
    
    do
        int32_t var_14_1
        int32_t eax_8
        
        if (ecx_4 != result)
            int32_t temp1_1 = mods.dp.d(sx.q(result), ebx)
            eax_8 = temp1_1
            var_14_1 = temp1_1
        else
            eax_8 = 0
            var_14_1 = 0
        
        float xmm0_1 = *(eax_1 + eax_8 * 0x10 + 0xb4a644)
        xmm0_1 f- 0
        float var_18_1 = xmm0_1
        int32_t eax_10
        eax_10:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
            | (xmm0_1 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        
        if (not(p_2))
            xmm0_1 = 1f
            var_18_1 = 1f
        
        result = sub_5a7d30(0.0199999996f f/ arg6[1] * xmm0_1)
        
        if (result == 0xffffffff)
            break
        
        int32_t edi_2 = *esi_2
        int32_t esi_3 = esi_2[1]
        int32_t eax_12
        int32_t edx_6
        eax_12, edx_6 = __allmul(edi_2, esi_3, 0x4c957f2d, 0x5851f42d)
        int32_t var_24_1 = 0
        bool c_2 = eax_12 + arg2[2] u< eax_12
        *arg2 = eax_12 + arg2[2]
        arg2[1] = adc.d(edx_6, arg2[3], c_2)
        int32_t edi_4 = (edi_2 u>> 0x1b | esi_3 << 5) ^ esi_3 u>> 0xd
        uint32_t esi_4 = esi_3 u>> 0x1b
        esi_2 = arg2
        
        if (not(*(eax_1 + 0xb4a634) f< (((edi_4 << ((neg.d(esi_4)).b & 0x1f) | edi_4 u>> esi_4.b)
                & 0x7fffff) | 0x3f800000) - 1f))
            int32_t ecx_14 = esi_2[0x5d7f2]
            esi_2[0x5d7f2] = ecx_14 + 1
            esi_2[ecx_14 * 3 + 0x5bff2] = result
            int32_t eax_23 = ecx_14 * 3
            esi_2[eax_23 + 0x5bff4] = var_14_1
            esi_2[eax_23 + 0x5bff3] = arg5
            uint32_t eax_24 = result * 3
            int32_t xmm1_3 = esi_2[eax_24 + 5]
            int32_t var_3c = esi_2[eax_24 + 4]
            int32_t var_38_1 = xmm1_3
            sub_5a1010(eax_24, &var_3c, arg4, var_18_1 * 0.0199999996f, 3)
        
        ecx_4 = var_34_1
        result = result_1 + 1
        result_1 = result
    while (result s< ecx_3)

return result
