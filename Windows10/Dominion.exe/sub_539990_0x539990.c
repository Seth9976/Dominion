// 函数: sub_539990
// 地址: 0x539990
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx

if (arg2 == 4)
    int32_t esi_1 = 0
    
    while (true)
        uint32_t edi_2 = zx.d((*(arg1 + (esi_1 << 2))).w)
        void* ebx_1 = *(sub_573400() + 4)
        
        if (edi_2 u>= 0x320)
            sub_591930()
        
        int32_t eax_3 = edi_2 * 0x64
        
        if (sub_5754f0(eax_3, *(eax_3 + ebx_1 + 0x1a4c), ebx_1, 8, 0) == 0)
            break
        
        esi_1 += 1
        
        if (esi_1 s>= 4)
            return 1

return 0
