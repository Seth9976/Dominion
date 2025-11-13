// 函数: sub_552aa0
// 地址: 0x552aa0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int16_t ebx = (*arg1).w
void* eax_1 = sub_573400()
uint32_t esi = zx.d(ebx)
void* edi = *(eax_1 + 4)

if (esi u>= 0x320)
    eax_1 = sub_591930()

int32_t ebx_1 = esi * 0x64
int32_t var_1c = 0

if (sub_5754f0(eax_1, *(ebx_1 + edi + 0x1a4c), edi, 4, var_1c) != 0)
    void* eax_3 = sub_573400()
    void* edi_1 = *(eax_3 + 4)
    
    if (esi u>= 0x320)
        eax_3 = sub_591930()
    
    int32_t edx_1 = *(ebx_1 + edi_1 + 0x1a4c)
    var_1c = 0
    
    if (sub_5754f0(eax_3, edx_1, edi_1, 0x80, var_1c) == 0)
        void* eax_4 = sub_573400()
        void* edi_2 = *(eax_4 + 4)
        
        if (esi u>= 0x320)
            eax_4 = sub_591930()
        
        int32_t edx_2 = *(ebx_1 + edi_2 + 0x1a4c)
        var_1c = 0x4000
        char eax_2
        int32_t ecx_4
        int32_t edx_3
        eax_2, ecx_4, edx_3 = sub_5754f0(eax_4, edx_2, edi_2, 0, var_1c)
        
        if (eax_2 == 0)
            var_1c = ecx_4
            var_1c = 4
            
            if (sub_568470(&var_1c, edx_3, ebx, var_1c) != 0)
                return 1

return 0
