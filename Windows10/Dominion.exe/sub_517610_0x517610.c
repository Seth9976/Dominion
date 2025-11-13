// 函数: sub_517610
// 地址: 0x517610
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_571b30(arg1, 0x18)
int32_t result

if (((*(eax + 0x98) & 0x7f000400) | (*(eax + 0x9c) & 0x940)) == 0)
    int32_t edi_1 = 0
    int32_t* esi_3 = data_cca780 + 0x34 + (data_cca784 << 0xb)
    
    while (true)
        int32_t ecx_6 = *esi_3
        
        if (ecx_6 != 0)
            if ((*(sub_571b30(ecx_6, 0x17) + 0x9c) & 0x100) != 0 && *esi_3 == arg1)
                break
            
            edi_1 += 1
            esi_3 = &esi_3[0xf]
            
            if (edi_1 s< 4)
                continue
        
        result.b = 1
        return result

result.b = 0
return result
