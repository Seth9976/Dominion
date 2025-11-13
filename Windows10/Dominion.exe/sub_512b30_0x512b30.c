// 函数: sub_512b30
// 地址: 0x512b30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
void* eax = sub_573400()
uint32_t esi = zx.d(arg1)
void* edi = *(eax + 4)

if (esi u>= 0x320)
    eax = sub_591930()

int32_t ebx = esi * 0x64

if (sub_5754f0(eax, *(ebx + edi + 0x1a4c), edi, 4, 0) == 0)
    void* eax_1 = sub_573400()
    void* edi_1 = *(eax_1 + 4)
    
    if (esi u>= 0x320)
        eax_1 = sub_591930()
    
    char result = sub_5754f0(eax_1, *(ebx + edi_1 + 0x1a4c), edi_1, 2, 0)
    
    if (result == 0)
        return result

return 1
