// 函数: sub_581060
// 地址: 0x581060
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result = 0
int32_t var_10 = 0

if (*(arg3 + 0x19b8) s<= 0)
    return 0

void* var_c_1 = arg3 + 0x3b568
void* edi_1 = arg3 + 0x3b580
void* var_28_1 = edi_1
void* var_8_1 = arg3 + 0x3b5bc
void* esi_1 = arg3 + 0x3b5b8
void* eax_3 = arg3 + 0x3b5b4
void* var_24_1 = esi_1
void* ecx = arg3 + 0x3b57c
void* var_20_1 = eax_3
void* var_1c_1 = ecx
int32_t edx
void* ebx_2

do
    uint32_t ebx_1 = *ecx
    edx = var_10
    ebx_2 = arg3
    
    if (ebx_1 == arg2 && *eax_3 == 3)
        ebx_2 = arg3
        
        if (*esi_1 == arg4)
            int32_t eax_4 = *(ebx_2 + 0x1504)
            uint32_t esi_2 = *edi_1
            
            if (eax_4 != 3 && eax_4 != 5 && eax_4 != 4 && eax_4 != 6)
                uint32_t ecx_2 = ebx_1
                
                if (esi_2 != 0xffffffff)
                    ecx_2 = esi_2
                
                uint32_t var_6c_1 = ecx_2
                ecx_2.b = eax_4 == 2
                sub_61b1b0(eax_4, 0x1c, ecx_2.b, var_6c_1, *esi_1, *var_8_1, nullptr, nullptr, 
                    nullptr, 0, 0, 0, 0, 0)
                edx = var_10
            
            *(ebx_2 + 0x19b8) -= 1
            edx -= 1
            void* edi_2 = var_c_1
            var_8_1 -= 0xa8
            eax_3 = var_20_1 - 0xa8
            var_c_1 -= 0xa8
            __builtin_memcpy(edi_2, *(ebx_2 + 0x19b8) * 0xa8 + 0x3b568 + ebx_2, 0xa8)
            ecx = var_1c_1 - 0xa8
            esi_1 = var_24_1 - 0xa8
            edi_1 = var_28_1 - 0xa8
            result += 1
    
    var_8_1 += 0xa8
    var_c_1 += 0xa8
    ecx += 0xa8
    eax_3 += 0xa8
    var_10 = edx + 1
    esi_1 += 0xa8
    var_1c_1 = ecx
    edi_1 += 0xa8
    var_20_1 = eax_3
    var_24_1 = esi_1
    var_28_1 = edi_1
while (edx + 1 s< *(ebx_2 + 0x19b8))
return result
