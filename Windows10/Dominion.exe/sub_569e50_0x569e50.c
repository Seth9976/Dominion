// 函数: sub_569e50
// 地址: 0x569e50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
void* ebx = *(eax + 4)
int32_t i = 0
int32_t i_1 = 0

if (*(ebx + 0x19b8) s> 0)
    void* var_18_1 = ebx + 0x3b568
    void* edi_1 = ebx + 0x3b57c
    void* var_2c_1 = edi_1
    void* var_14_1 = ebx + 0x3b5e8
    void* edx_1 = ebx + 0x3b580
    void* var_1c_1 = edx_1
    void* var_10_1 = ebx + 0x3b5e4
    void* esi_1 = ebx + 0x3b5a8
    void* var_24_1 = esi_1
    void* var_c_1 = ebx + 0x3b5b8
    void* var_8_1 = ebx + 0x3b5bc
    void* ecx_5 = ebx + 0x3b5b4
    void* var_28_1 = ecx_5
    
    do
        if (*esi_1 == arg1)
            if (*ecx_5 == 3)
                int32_t eax_1 = *(ebx + 0x1504)
                
                if (eax_1 != 3 && eax_1 != 5 && eax_1 != 4 && eax_1 != 6)
                    void* ecx_7
                    ecx_7.b = eax_1 == 2
                    sub_61b1b0(eax_1, 0x1c, ecx_7.b, *edx_1, *var_c_1, *var_8_1, nullptr, nullptr, 
                        nullptr, 0, 0, 0, 0, 0)
                    edx_1 = var_1c_1
            
            uint32_t ecx_8 = *edx_1
            
            if (ecx_8 == 0xffffffff)
                ecx_8 = *edi_1
            
            int32_t* esi_2 = *var_10_1
            
            if (esi_2 != 0)
                int32_t eax_5 = *(*(eax + 4) + 0x1504)
                
                if (eax_5 != 3 && eax_5 != 5 && eax_5 != 4 && eax_5 != 6)
                    uint32_t var_70_2 = ecx_8
                    ecx_8.b = eax_5 == 2
                    sub_61b1b0(eax_5, 0x1c, ecx_8.b, var_70_2, 0x14, esi_2, *var_14_1, nullptr, 
                        nullptr, 0, 0, 0, 0, 0)
                    edx_1 = var_1c_1
            
            *(ebx + 0x19b8) -= 1
            edx_1 -= 0xa8
            var_8_1 -= 0xa8
            i = i_1 - 1
            var_c_1 -= 0xa8
            var_10_1 -= 0xa8
            var_14_1 -= 0xa8
            __builtin_memcpy(var_18_1, *(ebx + 0x19b8) * 0xa8 + 0x3b568 + ebx, 0xa8)
            esi_1 = var_24_1 - 0xa8
            ecx_5 = var_28_1 - 0xa8
            edi_1 = var_2c_1 - 0xa8
            var_18_1 -= 0xa8
        
        var_8_1 += 0xa8
        i += 1
        var_c_1 += 0xa8
        esi_1 += 0xa8
        var_10_1 += 0xa8
        ecx_5 += 0xa8
        var_14_1 += 0xa8
        edx_1 += 0xa8
        var_18_1 += 0xa8
        edi_1 += 0xa8
        i_1 = i
        var_24_1 = esi_1
        var_28_1 = ecx_5
        var_1c_1 = edx_1
        var_2c_1 = edi_1
    while (i s< *(ebx + 0x19b8))

return i
