// 函数: sub_509590
// 地址: 0x509590
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int32_t ebx = 0
int32_t edi = 0

if (arg2 s> 0)
    do
        uint32_t esi_2 = zx.d((*(arg1 + (ebx << 2))).w)
        void* eax_3 = *(sub_573400() + 4)
        
        if (esi_2 u>= 0x320)
            sub_591930()
        
        int32_t ecx_2 = edi + 1
        
        if (sub_5754f0(eax_3, *(esi_2 * 0x64 + eax_3 + 0x1a4c), eax_3, 4, 0) == 0)
            ecx_2 = edi
        
        ebx += 1
        edi = ecx_2
    while (ebx s< arg2)

void* eax_5 = sub_573400()
int32_t result

if (*(*(eax_5 + 0xc) * 0x5a30 + *(eax_5 + 4) + 0x174f8) == 0 && edi s>= 3)
    result.b = 1
    return result

result.b = 0
return result
