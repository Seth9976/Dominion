// 函数: sub_4fc900
// 地址: 0x4fc900
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int16_t ebx = (*arg1).w
uint32_t esi = zx.d(ebx)
void* edi = *(sub_573400() + 4)

if (esi u>= 0x320)
    sub_591930()

int32_t eax_2 = esi * 0x64
int32_t var_1c = 0

if (sub_5754f0(eax_2, *(eax_2 + edi + 0x1a4c), edi, 4, var_1c) != 0)
    void* eax_4 = sub_573400()
    void* edi_1 = *(eax_4 + 4)
    
    if (esi u>= 0x320)
        eax_4 = sub_591930()
    
    var_1c = 0x4000
    char eax_3
    int32_t ecx_3
    int32_t edx_3
    eax_3, ecx_3, edx_3 = sub_5754f0(eax_4, *(eax_2 + edi_1 + 0x1a4c), edi_1, 0, var_1c)
    
    if (eax_3 == 0)
        var_1c = ecx_3
        var_1c = 4
        
        if (sub_568470(&var_1c, edx_3, ebx, var_1c) != 0)
            return 1

return 0
