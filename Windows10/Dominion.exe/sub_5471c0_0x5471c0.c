// 函数: sub_5471c0
// 地址: 0x5471c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
uint32_t esi_1 = zx.d((*arg1).w)
int32_t ebx = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t edi = esi_1 * 0x64

if ((not.b((*(edi + ebx + 0x1a6c) u>> 1).b) & 1) != 0)
    void* eax_4 = sub_573400()
    void* ebx_1 = *(eax_4 + 4)
    
    if (esi_1 u>= 0x320)
        eax_4 = sub_591930()
    
    if (sub_5754f0(eax_4, *(edi + ebx_1 + 0x1a4c), ebx_1, 0x80, 0) == 0)
        void* eax_5 = sub_573400()
        void* ebx_2 = *(eax_5 + 4)
        
        if (esi_1 u>= 0x320)
            eax_5 = sub_591930()
        
        if (sub_5754f0(eax_5, *(edi + ebx_2 + 0x1a4c), ebx_2, 4, 0) != 0)
            return 1

return 0
