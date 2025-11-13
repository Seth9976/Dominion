// 函数: sub_5afa40
// 地址: 0x5afa40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg3 != 0)
    int32_t* edx
    
    if (arg2 == 0xc27)
        edx = data_171dc04
    label_5afa6f:
        int32_t var_1c_1 = 0
        int32_t ecx
        int32_t var_20_1 = ecx
        sub_5af930(arg1, edx, ecx.b)
    else if (arg2 == 0xf1a)
        edx = data_171dc08
        goto label_5afa6f

void* eax_1 = sub_571b30(arg2, sub_5cf7e0())
void* esi = eax_1
int32_t ecx_4 = *(esi + 0x98) & 0x400

if (ecx_4 != 0)
    if (arg3 == 0)
        int32_t** edx_2 = *(esi + 0x64)
        
        if (edx_2 != 0)
            int32_t var_1c_2 = 0
            int32_t var_20_2 = ecx_4
            eax_1, ecx_4 = sub_5af930(eax_1, *edx_2, ecx_4.b)
    
    int32_t var_1c_3 = 0
    int32_t var_20_3 = ecx_4
    ecx_4 = sub_5af930(eax_1, data_171e6e0, ecx_4.b)

uint32_t eax_4 = *(esi + 0x98) & 0x8000000

if (eax_4 != 0)
    int32_t var_1c_4 = 0
    int32_t var_20_4 = ecx_4
    eax_4 = sub_5af930(eax_4, **(esi + 0x64), ecx_4.b)

int32_t result = sub_571ee0(eax_4, data_b824a4, 0xb80ad8, 0xb00)

if (result != 0xffffffff)
label_5afb36:
    int32_t ecx_5 = sub_57da30(0xb80ad8, arg2)
    int32_t edi_1 = 7
    arg3.d = ecx_5
    void* esi_1 = &data_b8206c
    int32_t edi_2
    
    while (true)
        if (edi_1 s>= 0x48)
            sub_591930()
            ecx_5 = arg3.d
        
        int32_t eax_7 = *esi_1
        
        if (eax_7 != arg2 && *(esi_1 + 4) != arg2 && eax_7 != ecx_5)
            esi_1 += 0x10
            edi_1 += 1
            
            if (esi_1 s< 0xb8247c)
                continue
        else if (eax_7 != 0)
            edi_2 = 7
            void* esi_2 = &data_b8206c
            
            while (true)
                if (edi_2 s>= 0x48)
                    sub_591930()
                
                if (*esi_2 == eax_7)
                    break
                
                if (*(esi_2 + 4) == eax_7)
                    break
                
                esi_2 += 0x10
                edi_2 += 1
                
                if (esi_2 s>= 0xb8247c)
                    goto label_5afb9f
            
            break
        
    label_5afb9f:
        edi_2 = 0
        break
    
    result <<= 5
    
    if (edi_2 == *(result + 0xb95da8))
        int32_t var_1c_5 = 0
        int32_t var_20_5 = ecx_5
        return sub_5af930(result, data_171db28, ecx_5.b)
else
    result = sub_571ee0(result, data_b824a4, 0xb80ad8, 0xb0a)
    
    if (result != 0xffffffff)
        goto label_5afb36

return result
