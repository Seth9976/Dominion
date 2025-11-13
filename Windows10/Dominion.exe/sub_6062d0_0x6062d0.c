// 函数: sub_6062d0
// 地址: 0x6062d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = 0

if (arg3 != 2)
    void* const eax = &data_7ea630
    
    do
        eax += 0x1044
        esi += 1
    while (*eax != arg3)

int32_t ebx = 0
int32_t var_8 = 0
int32_t edi = 0
void* ecx = esi * 0x1044 + &data_7ea630
void* var_c = ecx

while (true)
    int32_t edx = *(ecx + ((ebx * 0x41 + edi) << 2) + 8)
    
    if (edx == 0 && *(ecx + ebx * 0x104 + 0x10c) == edx)
        return 0
    
    int32_t eax_9 = 0
    
    if (edx != 0)
        eax_9 = edi
    
    int32_t edi_1 = eax_9
    int32_t eax_10 = ebx + 1
    
    if (edx != 0)
        eax_10 = ebx
    
    ebx = eax_10
    int32_t esi_3 = ebx * 0x41
    void* eax_12 = sub_571b30(*(ecx + ((esi_3 + edi_1) << 2) + 8), 0x18)
    int32_t var_14_1 = 8
    
    if (((*(eax_12 + 0x98) & 0x7f000400) | (*(eax_12 + 0x9c) & 0x940)) != 0)
        var_14_1 = 9
    
    int32_t result = 0
    int32_t var_10_1 = 0
    int32_t edx_4
    
    while (true)
        if (*(var_c + ((esi_3 + edi_1) << 2) + 8) == 0)
            edx_4 = var_8
            
            if (arg2 != edx_4)
                edi_1 = 0
                result = 0
                ebx += 1
                break
        else
            int32_t edx_3 = var_10_1 + 1
            result += 1
            esi_3 += 1
            var_10_1 = edx_3
            
            if (edx_3 s< var_14_1)
                continue
            else
                edx_4 = var_8
                
                if (arg2 != edx_4)
                    break
        
        *arg4 = var_c + (((ebx << 6) + 2 + edi_1 + ebx) << 2)
        *arg5 = *(var_c + ebx * 0x104 + 4)
        return result
    
    ecx = var_c
    var_8 = edx_4 + 1
    edi = edi_1 + result
