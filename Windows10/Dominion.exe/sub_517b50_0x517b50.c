// 函数: sub_517b50
// 地址: 0x517b50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
int32_t ecx = data_cca790
int32_t* esi_2

if (ecx != 2)
    esi_2 = data_cca780 + ((ecx + 0xa02) << 3)
else
    esi_2 = data_cca780 + 0x540 + (data_cca784 << 0xb)

int32_t eax_12

while (true)
label_517b9f:
    int32_t eax_3 = sub_50af00(sub_516f30(0x848), &var_8)
    int32_t eax_4
    int32_t ecx_4
    eax_4, ecx_4 = sub_50af60(eax_3, var_8, &data_cc8de0, eax_3)
    *esi_2 = eax_4
    
    if (eax_4 == 0x866)
        esi_2[1] = sub_50ed40(0)
    else if (eax_4 == 0x898)
        esi_2[1] = sub_50ecc0(ecx_4)
    
    int32_t edi_1 = data_cca790
    int32_t edx_3 = 0
    
    if (edi_1 != 2)
        void* ebx_1 = data_cca780
        
        if (edi_1 s> 0)
            int32_t* ecx_6 = ebx_1 + 0x5014
            
            do
                int32_t eax_10 = ecx_6[-1]
                
                if (eax_10 == 0)
                    break
                
                if (eax_10 == *esi_2 && *ecx_6 == esi_2[1])
                    goto label_517b9f
                
                edx_3 += 1
                ecx_6 = &ecx_6[2]
            while (edx_3 s< edi_1)
        
        int32_t ecx_8 = data_cca784 << 0xb
        eax_12 = *(ecx_8 + ebx_1 + 0x540)
        
        if (eax_12 == 0)
            break
        
        if (eax_12 != *esi_2)
            break
        
        eax_12 = *(ecx_8 + ebx_1 + 0x544)
        
        if (eax_12 != esi_2[1])
            break
    else
        int32_t* eax_9 = data_cca780 + 0x5014
        
        while (eax_9[-1] != *esi_2 || *eax_9 != esi_2[1])
            edx_3 += 1
            eax_9 = &eax_9[2]
            
            if (edx_3 s>= 2)
                return eax_9

return eax_12
