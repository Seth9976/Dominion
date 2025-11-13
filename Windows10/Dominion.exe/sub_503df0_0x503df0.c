// 函数: sub_503df0
// 地址: 0x503df0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
uint32_t edi = zx.d(arg1)
void* esi = *(eax + 4)

if (edi u>= 0x320)
    eax = sub_591930()

int32_t ebx = edi * 0x64
uint32_t result

if (sub_5754f0(eax, *(ebx + esi + 0x1a4c), esi, 4, 0).b != 0
        && *(sub_573400() + 0xc) == *(*(sub_573400() + 4) + 0x19cc))
    int32_t esi_2 = *(sub_573400() + 4)
    
    if (edi u>= 0x320)
        sub_591930()
    
    uint32_t eax_4 = *(ebx + esi_2 + 0x1a58)
    int32_t esi_3 = *(ebx + esi_2 + 0x1a5c)
    int32_t ecx_1 = *(sub_573400() + 4)
    
    if (edi u>= 0x320)
        sub_591930()
    
    if (eax_4 == *(ebx + ecx_1 + 0x1a50) && esi_3 == *(ebx + ecx_1 + 0x1a54))
        result.b = 1
        return result

result.b = 0
return result
