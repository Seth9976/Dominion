// 函数: sub_66d750
// 地址: 0x66d750
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg1
int32_t* eax_1 = sub_64cc90(arg1)
char* edi = *arg2
int32_t* ebx = eax_1
char* const esi_1 = &data_801800
char* const edx = &data_801800
char* const ecx = &data_801800

if (edi != 0)
    edx = edi

int32_t eax_3

while (true)
    eax_1.b = *edx
    char temp0_1 = *ecx
    bool c_1 = eax_1.b u< temp0_1
    
    if (eax_1.b == temp0_1)
        if (eax_1.b == 0)
            eax_3 = 0
            break
        
        eax_1.b = edx[1]
        char temp1_1 = ecx[1]
        c_1 = eax_1.b u< temp1_1
        
        if (eax_1.b == temp1_1)
            edx = &edx[2]
            ecx = &ecx[2]
            
            if (eax_1.b != 0)
                continue
            
            eax_3 = 0
            break
    
    eax_3 = sbb.d(eax_1, eax_1, c_1) | 1
    break

if (eax_3 != 0)
    if (edi != 0)
        esi_1 = edi
    
    char* const var_18 = esi_1
    return sub_6dce10(eax_3, ebx, &data_8cae70, 0x6f)

char* eax_4 = *(arg1 + 0x1720)

if (eax_4 != 0 && eax_4 != &data_801800)
    if (data_cf65bc != 0 && *eax_4 != 0)
        eax_4 = sub_63d4e0(arg1 + 0x1720)
        int32_t temp2_1 = *(eax_4 + 4)
        *(eax_4 + 4) -= 1
        
        if (temp2_1 == 1)
            eax_4 = sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)
    
    *(arg1 + 0x1720) = &data_801800

return sub_6dcec0(eax_4, ebx, &data_8cae70, 0x6f)
