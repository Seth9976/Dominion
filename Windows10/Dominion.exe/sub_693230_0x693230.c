// 函数: sub_693230
// 地址: 0x693230
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_8 = arg1
char* const ecx = &data_801800
char* eax = *arg2

if (eax != 0)
    ecx = eax

int32_t eax_1 = sub_69c4d0(ecx, 0)
int32_t ecx_3 = (arg1[1] & eax_1) << 2
int32_t* edi = *(ecx_3 + *arg1)

if (edi != 0)
    char* esi_1 = *arg2
    
    while (true)
        char* eax_3 = *edi
        char* const ecx_4 = &data_801800
        
        if (eax_3 != 0)
            ecx_4 = eax_3
        
        char* const eax_4 = &data_801800
        
        if (esi_1 != 0)
            eax_4 = esi_1
        
        int32_t eax_6
        
        while (true)
            char edx_1 = *eax_4
            char temp1_1 = *ecx_4
            bool c_1 = edx_1 u< temp1_1
            
            if (edx_1 == temp1_1)
                if (edx_1 == 0)
                    eax_6 = 0
                    break
                
                edx_1 = eax_4[1]
                char temp2_1 = ecx_4[1]
                c_1 = edx_1 u< temp2_1
                
                if (edx_1 == temp2_1)
                    eax_4 = &eax_4[2]
                    ecx_4 = &ecx_4[2]
                    
                    if (edx_1 != 0)
                        continue
                    
                    eax_6 = 0
                    break
            
            eax_6 = sbb.d(eax_4, eax_4, c_1) | 1
            break
        
        if (eax_6 == 0)
            sub_63d850(&edi[1], arg3)
            sub_63d850(&edi[2], &arg3[1])
            sub_63d850(&edi[3], &arg3[2])
            edi[4] = arg3[3]
            edi[5] = arg3[4]
            edi[6] = arg3[5]
            edi[7].b = arg3[6].b
            *(edi + 0x1d) = *(arg3 + 0x19)
            char eax_22 = *(arg3 + 0x1a)
            *(edi + 0x1e) = eax_22
            return eax_22
        
        edi = edi[8]
        
        if (edi == 0)
            break

int32_t* eax_7 = sub_64bfd0(0x24)
eax_7[3] += 1

if (*eax_7 == 0)
    sub_64be70(eax_7)

int32_t* edi_1 = *eax_7
*eax_7 = *edi_1
char* eax_10 = *arg2
*edi_1 = eax_10

if (eax_10 != 0 && *eax_10 != 0)
    char* eax_11 = sub_63d4e0(edi_1)
    *(eax_11 + 4) += 1

sub_68ca30(&edi_1[1], arg3)
edi_1[8] = *(ecx_3 + *arg1)
int32_t eax_14 = *arg1
*(ecx_3 + eax_14) = edi_1
arg1[2] += 1
return eax_14
