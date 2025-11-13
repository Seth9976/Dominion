// 函数: sub_5f8d20
// 地址: 0x5f8d20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = arg2
int32_t i = 0
int32_t var_14 = ebx
__builtin_memcpy(ebx, arg1, 0xa0)
int32_t* esi_1 = arg1

while (*esi_1 != 0)
    i += 1
    esi_1 = &esi_1[4]
    
    if (i s>= 0xa)
        i = 0xffffffff
        break

int32_t ecx = 0
void* esi_2 = &arg1[0x272]
int32_t var_c = 0

while (i s< 0xa)
    int32_t var_8_1 = 0
    
    if (*(esi_2 + 8) s> 0)
        int32_t* edx_3 = (i << 4) + ebx
        
        while (i s< 0xa)
            int32_t* ebx_1 = edx_3
            int32_t* var_10_1 = edx_3
            i += 1
            edx_3 = &edx_3[4]
            *ebx_1 = 2
            int32_t edi_1 = *esi_2
            int32_t ecx_3
            
            if (edi_1 != 2)
                ecx_3 = 0x1416
            
            if (edi_1 == 2 || edi_1 != 0x12)
                ecx_3 = edi_1 + 0x13fe
            
            var_10_1[1] = ecx_3
            ebx_1[2] = *esi_2
            int32_t ecx_6 = var_8_1 + 1
            var_8_1 = ecx_6
            
            if (ecx_6 s>= *(esi_2 + 8))
                break
        
        ecx = var_c
        ebx = var_14
    
    ecx += 1
    esi_2 += 0x10
    var_c = ecx
    
    if (ecx s>= 0x20)
        break

return i
