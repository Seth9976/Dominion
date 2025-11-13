// 函数: sub_56eb20
// 地址: 0x56eb20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* result_1 = arg1
int32_t esi = *(*(sub_573400() + 4) + 0x19cc)
void* result = sub_573400()

if (esi == *(result + 0xc))
    void* eax_2 = sub_573400()
    int32_t esi_1 = *(eax_2 + 0xc)
    int32_t* edi_1 = *(eax_2 + 4)
    int128_t* eax_3 = sub_583fc0(eax_2, esi_1, edi_1, 0xa00)
    uint32_t eax_4 = sub_576b30(eax_3, esi_1, edi_1, 0x29, 0, 0, 0)
    int128_t* ecx_4
    
    if (eax_4 s<= 0)
        ecx_4 = eax_3
    else
        ecx_4 = eax_3 + sub_583fc0(eax_4, esi_1, edi_1, 0x601)
    
    result = result_1
    int64_t var_6c
    __builtin_memset(&var_6c, 0, 0x2c)
    int128_t var_40 = result.o
    int32_t var_60
    int128_t var_30_1 = var_60.o
    int64_t var_50
    int128_t var_20_1 = var_50.o
    result_1 = nullptr
    int32_t var_78_1 = 0
    
    if (ecx_4 != 0)
        int32_t eax_6
        
        if (esi_1 != edi_1[0x673])
            eax_6 = esi_1
        else
            eax_6 = edi_1[0x674]
        
        int32_t var_94_1 = 0
        result = sub_623940(eax_6, &result_1, edi_1, esi_1, eax_6, ecx_4, ecx_4, &var_40, 0x2b)
        result_1 = result
        
        if (result != 0)
            uint32_t esi_2 = *(eax_2 + 0xc)
            uint32_t edi_3 = *(eax_2 + 4)
            return sub_590760(sub_586550(result, esi_2, edi_3, result, 0), esi_2, edi_3, 0, 
                result_1, 0, 2)

return result
