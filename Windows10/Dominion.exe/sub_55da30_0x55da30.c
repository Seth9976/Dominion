// 函数: sub_55da30
// 地址: 0x55da30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int16_t ebx = (*arg2).w
uint32_t esi = zx.d(ebx)
void* edi = *(sub_573400() + 4)

if (esi u>= 0x320)
    sub_591930()

int32_t eax_2 = esi * 0x64

if (sub_5754f0(eax_2, *(eax_2 + edi + 0x1a4c), edi, 4, 0) != 0)
    void* eax_4 = sub_573400()
    void* edi_1 = *(eax_4 + 4)
    
    if (esi u>= 0x320)
        eax_4 = sub_591930()
    
    char eax_3
    int32_t edx_3
    eax_3, edx_3 = sub_5754f0(eax_4, *(eax_2 + edi_1 + 0x1a4c), edi_1, 0x20, 0)
    
    if (eax_3 == 0)
        int32_t* eax_6 = *(arg1 + 4)
        
        if (sub_568470(eax_6, edx_3, ebx, *eax_6) != 0)
            return 1

return 0
