// 函数: sub_530c20
// 地址: 0x530c20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int16_t edi = (*arg1).w
uint32_t esi = zx.d(edi)
void* ebx = *(sub_573400() + 4)

if (esi u>= 0x320)
    sub_591930()

int32_t eax_2 = esi * 0x64
int32_t var_1c = 0
char eax_3
int32_t ecx_2
int32_t edx_1
eax_3, ecx_2, edx_1 = sub_5754f0(eax_2, *(eax_2 + ebx + 0x1a4c), ebx, 4, var_1c)

if (eax_3 != 0)
    var_1c = ecx_2
    var_1c = 5
    
    if (sub_568470(&var_1c, edx_1, edi, var_1c) != 0)
        void* eax_5 = sub_573400()
        void* edi_1 = *(eax_5 + 4)
        
        if (esi u>= 0x320)
            eax_5 = sub_591930()
        
        var_1c = 0x4000
        
        if (sub_5754f0(eax_5, *(eax_2 + edi_1 + 0x1a4c), edi_1, 0, var_1c) == 0)
            return 1

return 0
