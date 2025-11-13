// 函数: sub_639560
// 地址: 0x639560
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = arg3
int32_t ecx = arg4
int32_t esi = arg2
int32_t var_8 = ebx
int32_t edi = ecx - 1
int32_t var_c = esi
int32_t eax_1 = edi s>> 1
int32_t var_14 = eax_1

if (esi s< eax_1)
    do
        int32_t eax_2 = arg2 * 2
        void* ecx_1 = ebx + eax_2 * 0x18
        int32_t eax_4 = *(ecx_1 + 0x30)
        int32_t temp0_1 = *(ecx_1 + 0x18)
        int32_t eax_5
        
        if (eax_4 s< temp0_1)
            eax_5 = 0
        else if (eax_4 s<= temp0_1)
            int32_t edi_1 = *(ecx_1 + 0x24)
            int32_t edx = *(ecx_1 + 0x38)
            int32_t eax_6 = *(ecx_1 + 0x20)
            int32_t temp2_1 = *(ecx_1 + 0x3c)
            
            if (temp2_1 u> edi_1)
                eax_5 = 1
            else if (temp2_1 u< edi_1 || edx u< eax_6)
                eax_5 = 0
            else
                int32_t temp5_1 = *(ecx_1 + 0x3c)
                
                if (temp5_1 u< edi_1 || (temp5_1 u<= edi_1 && edx u<= eax_6))
                    int32_t eax_7 = *(ecx_1 + 0x40)
                    eax_5 = sbb.d(eax_7, eax_7, eax_7 u< *(ecx_1 + 0x28)) + 1
                else
                    eax_5 = 1
        else
            eax_5 = 1
        
        arg2 = eax_2 + 1 + eax_5
        int32_t eax_9 = arg2 * 3
        int32_t eax_10 = esi * 3
        esi = arg2
        *(ebx + (eax_10 << 3)) = *(ebx + (eax_9 << 3))
        *(ebx + (eax_10 << 3) + 0x10) = *(ebx + (eax_9 << 3) + 0x10)
        eax_1 = var_14
    while (arg2 s< eax_1)
    
    ecx = arg4

if (arg2 == eax_1 && (ecx.b & 1) == 0)
    int32_t eax_11 = ecx * 3
    int32_t eax_12 = esi * 3
    esi = edi
    *(ebx + (eax_12 << 3)) = *(ebx + (eax_11 << 3) - 0x18)
    *(ebx + (eax_12 << 3) + 0x10) = *(ebx + (eax_11 << 3) - 8)

if (var_c s< esi)
    int32_t edx_4
    
    do
        edx_4 = (esi - 1) s>> 1
        int32_t* ecx_4 = ebx + edx_4 * 0x18
        int32_t eax_14 = *ecx_4
        int32_t temp1_1 = *arg5
        
        if (eax_14 s>= temp1_1)
            if (eax_14 s> temp1_1)
                ebx = var_8
                break
            
            int32_t ebx_1 = ecx_4[3]
            int32_t temp3_1 = arg5[3]
            int32_t ebx_2 = ecx_4[2]
            
            if (ebx_1 u>= temp3_1 && (ebx_1 u> temp3_1 || ebx_2 u>= arg5[2]))
                int32_t eax_16 = ecx_4[3]
                int32_t temp4_1 = arg5[3]
                
                if (eax_16 u> temp4_1)
                    ebx = var_8
                    break
                
                if (eax_16 u< temp4_1)
                    if (ecx_4[4] u>= arg5[4])
                        ebx = var_8
                        break
                else if (ebx_2 u> arg5[2] || ecx_4[4] u>= arg5[4])
                    ebx = var_8
                    break
        
        int32_t eax_19 = esi * 3
        ebx = var_8
        esi = edx_4
        *(ebx + (eax_19 << 3)) = *ecx_4
        *(ebx + (eax_19 << 3) + 0x10) = *(ecx_4 + 0x10)
    while (var_c s< edx_4)

int32_t result = esi * 3
*(ebx + (result << 3)) = *arg5
*(ebx + (result << 3) + 0x10) = *(arg5 + 0x10)
return result
