// 函数: sub_557dd0
// 地址: 0x557dd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_14 = ecx
int32_t var_18 = 0
int32_t eax

if (sub_568960(eax, 0, 0x3ea, 0) == 0)
    uint32_t eax_1
    eax_1.b = 0
    return eax_1

void* eax_2
int32_t edx
eax_2, edx = sub_573540()

if (eax_2 != 0)
    int32_t ecx_1 = *eax_2
    void* esi_1
    
    if (ecx_1 == 2)
        esi_1 = *(eax_2 + 0x10)
    label_557e22:
        
        if (esi_1 != 0)
            uint32_t esi_2 = zx.d(esi_1.w)
            int32_t edi = *(sub_573400() + 4)
            
            if (esi_2 u>= 0x320)
                sub_591930()
            
            int32_t eax_4
            eax_4.b = *(esi_2 * 0x64 + edi + 0x1a4c) != 0xe21
            return eax_4
    else if (ecx_1 == 3)
        esi_1 = sub_5916d0(eax_2, edx, *(eax_2 + 4), *(eax_2 + 0x10))
        goto label_557e22

eax_2.b = 1
return eax_2
