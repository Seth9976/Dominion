// 函数: sub_5fb990
// 地址: 0x5fb990
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = 0
int32_t i_2 = 0xffffffff
int128_t* var_c = arg2

for (int32_t i = 0; i s< 0x20; )
    int32_t* eax_2 = &arg2[i * 4]
    int32_t eax_3 = *eax_2
    
    if (eax_3 == 0)
        break
    
    int32_t i_1 = i
    
    if (eax_3 != arg3)
        i_1 = i_2
    
    int32_t edi_1 = eax_2[4]
    
    if (edi_1 == 0)
        ebx += 1
        i_2 = i_1
        break
    
    i_2 = i + 1
    
    if (edi_1 != arg3)
        i_2 = i_1
    
    int32_t eax_6 = arg2[(i + 2) * 4]
    
    if (eax_6 == 0)
        ebx += 2
        break
    
    int32_t i_3 = i + 2
    
    if (eax_6 != arg3)
        i_3 = i_2
    
    i_2 = i + 3
    int32_t eax_9 = arg2[i_2 * 4]
    
    if (eax_9 == 0)
        i_2 = i_3
        ebx += 3
        break
    
    if (eax_9 != arg3)
        i_2 = i_3
    
    i += 4
    ebx += 4

if (i_2 != 0xffffffff)
    int32_t edi_5 = i_2 * 2
    
    if (arg3 == 0x13)
        goto label_5fbac9
    
    void* esi_1 = &arg2[edi_5 * 2]
    
    if (arg2[edi_5 * 2 + 3] == 0xa)
        int32_t esi_2 = *(esi_1 + 4)
        void* eax_12 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        arg2 = var_c
        *(eax_12 + (arg3 << 2) + 0x7310) = 1
        *(eax_12 + (arg3 << 2) + 0x73b0) = esi_2
    label_5fbac9:
        ebx -= 1
        int32_t eax_14 = ebx * 2
        *(arg2 + (edi_5 << 3)) = *(arg2 + (eax_14 << 3))
        arg2[eax_14 * 2] = 0
    else
        *(esi_1 + 0xc) = 0xa
else
    int32_t edi_2 = ebx
    ebx += 1
    int32_t* edi_4 = &arg2[edi_2 * 4]
    *edi_4 = arg3
    uint32_t eax_10
    
    if (arg3 != 0x13)
        void* eax_11 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
        
        if (*(eax_11 + (arg3 << 2) + 0x7310) == 0)
            eax_10 = sub_4dc4a0(0x17, arg3)
        else
            eax_10 = *(eax_11 + (arg3 << 2) + 0x73b0)
    else
        eax_10 = sub_5f6fa0()
    
    arg2 = var_c
    edi_4[1] = eax_10
    edi_4[2] = 0
    edi_4[3] = 0xa

sub_5f6360(arg4, arg2)
int32_t eax_16 = ebx << 4 s>> 4
return sub_594410(eax_16, &var_c[ebx], var_c, eax_16, sub_5fb770)
