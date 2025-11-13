// 函数: sub_52f550
// 地址: 0x52f550
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
uint32_t esi = zx.d(arg1)
int32_t edi = *(sub_573400() + 4)

if (esi u>= 0x320)
    sub_591930()

uint32_t result

if (*(esi * 0x64 + edi + 0x1a4c) == 0x103)
    void* eax_1 = sub_573400()
    uint32_t esi_2 = zx.d(sub_56b800())
    int32_t ebx_1 = *(sub_573400() + 4)
    
    if (esi_2 u>= 0x320)
        sub_591930()
    
    int32_t eax_4 = esi_2 * 0x64
    
    if (sub_576b30(eax_4, 0xffffffff, *(eax_1 + 4), 7, *(eax_4 + ebx_1 + 0x1a4c), 0, 0) s<= 0)
        result.b = 1
        return result

result.b = 0
return result
