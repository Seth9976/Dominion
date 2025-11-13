// 函数: sub_5608c0
// 地址: 0x5608c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
uint32_t result

if (sub_567520().b == 0)
    void* eax = sub_573400()
    uint32_t esi_1 = zx.d(arg1.w)
    void* ebx_1 = *(eax + 4)
    
    if (esi_1 u>= 0x320)
        eax = sub_591930()
    
    int32_t edi_1 = esi_1 * 0x64
    
    if (sub_5754f0(eax, *(edi_1 + ebx_1 + 0x1a4c), ebx_1, 0x80, 0).b != 0)
        int32_t ebx_2 = *(sub_573400() + 4)
        int32_t ebx_3
        int32_t esi_2
        
        if (esi_1 u< 0x320)
            esi_2 = *(ebx_2 + edi_1 + 0x1a58)
            ebx_3 = *(sub_573400() + 4)
        else
            sub_591930()
            esi_2 = *(ebx_2 + edi_1 + 0x1a58)
            ebx_3 = *(sub_573400() + 4)
            sub_591930()
        
        if (*(edi_1 + ebx_3 + 0x1a50) == esi_2)
            result.b = 1
            return result

result.b = 0
return result
