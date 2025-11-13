// 函数: sub_681540
// 地址: 0x681540
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi = arg3
int32_t ebx = arg2
void* ecx = arg4
int32_t esi = ebx
int32_t var_8 = edi
int32_t var_c = ebx
void* eax = ecx - 1
int32_t eax_1 = eax s>> 1
int32_t var_14 = eax_1

if (ebx s< eax_1)
    while (true)
        int32_t ecx_1 = esi * 2
        void* esi_1 = edi + ecx_1 * 0x1c
        void* edi_1 = *(esi_1 + 0x1c)
        char* ecx_2 = *(edi_1 + 8)
        char* eax_5 = *(*(esi_1 + 0x38) + 8)
        int32_t eax_7
        
        while (true)
            arg2.b = *eax_5
            char temp0_1 = *ecx_2
            bool c_1 = arg2.b u< temp0_1
            
            if (arg2.b == temp0_1)
                if (arg2.b == 0)
                    eax_7 = 0
                    break
                
                arg2.b = eax_5[1]
                char temp3_1 = ecx_2[1]
                c_1 = arg2.b u< temp3_1
                
                if (arg2.b == temp3_1)
                    eax_5 = &eax_5[2]
                    ecx_2 = &ecx_2[2]
                    
                    if (arg2.b != 0)
                        continue
                    
                    eax_7 = 0
                    break
            
            eax_7 = sbb.d(eax_5, eax_5, c_1) | 1
            break
        
        int32_t eax_8
        
        if (eax_7 s< 0)
            eax_8 = 0
        else if (eax_7 s<= 0)
            int32_t eax_9 = *(esi_1 + 0x3c)
            int32_t temp6_1 = *(esi_1 + 0x20)
            
            if (eax_9 s< temp6_1)
                eax_8 = 0
            else if (eax_9 s<= temp6_1)
                eax_8 = sbb.d(eax_9, eax_9, *(esi_1 + 0x38) u< edi_1) + 1
            else
                eax_8 = 1
        else
            eax_8 = 1
        
        edi = var_8
        esi = ecx_1 + 1 + eax_8
        int32_t eax_12 = esi * 7
        arg2 = edi + (eax_12 << 2)
        int32_t eax_14 = ebx * 7
        ebx = esi
        int128_t* ecx_3 = edi + (eax_14 << 2)
        *ecx_3 = *(edi + (eax_12 << 2))
        ecx_3[1].q = *(arg2 + 0x10)
        *(ecx_3 + 0x18) = *(arg2 + 0x18)
        eax_1 = var_14
        
        if (esi s>= eax_1)
            break
    
    ecx = arg4

if (esi == eax_1 && (ecx.b & 1) == 0)
    void* eax_17 = ecx * 7
    arg2 = edi + (eax_17 << 2)
    int32_t eax_19 = ebx * 7
    ebx = eax
    int128_t* ecx_4 = edi + (eax_19 << 2)
    *ecx_4 = *(edi + (eax_17 << 2) - 0x1c)
    ecx_4[1].q = *(arg2 - 0xc)
    *(ecx_4 + 0x18) = *(arg2 - 4)

if (var_c s< ebx)
    while (true)
        int32_t edi_3 = (ebx - 1) s>> 1
        void** esi_4 = var_8 + edi_3 * 0x1c
        void* eax_24 = *arg5
        void* ecx_7 = *(*esi_4 + 8)
        char* eax_25 = *(eax_24 + 8)
        int32_t eax_27
        
        while (true)
            arg2.b = *ecx_7
            char temp1_1 = *eax_25
            bool c_3 = arg2.b u< temp1_1
            
            if (arg2.b == temp1_1)
                if (arg2.b == 0)
                    eax_27 = 0
                    break
                
                arg2.b = *(ecx_7 + 1)
                char temp5_1 = eax_25[1]
                c_3 = arg2.b u< temp5_1
                
                if (arg2.b == temp5_1)
                    ecx_7 += 2
                    eax_25 = &eax_25[2]
                    
                    if (arg2.b != 0)
                        continue
                    
                    eax_27 = 0
                    break
            
            eax_27 = sbb.d(eax_25, eax_25, c_3) | 1
            break
        
        if (eax_27 s>= 0)
            if (eax_27 s> 0)
                break
            
            int32_t eax_28 = esi_4[1]
            int32_t temp7_1 = arg5[1]
            
            if (eax_28 s>= temp7_1)
                if (eax_28 s> temp7_1)
                    break
                
                if (*esi_4 u>= eax_24)
                    break
        
        int32_t eax_31 = ebx * 7
        ebx = edi_3
        int128_t* ecx_10 = var_8 + (eax_31 << 2)
        *ecx_10 = *esi_4
        ecx_10[1].q = *(esi_4 + 0x10)
        *(ecx_10 + 0x18) = esi_4[6]
        
        if (var_c s>= edi_3)
            break

int128_t* ecx_12 = var_8 + ebx * 0x1c
*ecx_12 = *arg5
ecx_12[1].q = *(arg5 + 0x10)
int32_t result = arg5[6]
*(ecx_12 + 0x18) = result
return result
