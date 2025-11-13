// 函数: sub_557be0
// 地址: 0x557be0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
void* eax = sub_573400()
uint32_t esi_1 = zx.d(sub_56b800())
int32_t ebx = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t eax_3 = esi_1 * 0x64
uint32_t result

if (sub_576b30(eax_3, *(eax + 0xc), *(eax + 4), 7, *(eax_3 + ebx + 0x1a4c), 0, 0) s<= 0)
    uint32_t esi_2 = zx.d(arg1)
    int32_t edi_1 = *(sub_573400() + 4)
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    if (*(esi_2 * 0x64 + edi_1 + 0x1a4c) == 0xe00)
        result.b = 1
        return result

result.b = 0
return result
