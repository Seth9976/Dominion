// 函数: sub_540ef0
// 地址: 0x540ef0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int32_t ebx_1 = *(sub_573400() + 4) + 0xe68
int32_t i = 0
int32_t var_c_1 = ebx_1
int32_t result

do
    void* eax_1 = sub_573400()
    *(eax_1 + 4)
    uint32_t edi_2 = zx.d(sub_589750(i, 0xffffffff, 3, *(eax_1 + 0x28), *(eax_1 + 0x2c), 
        *(eax_1 + 0x30), *(ebx_1 + (i << 2)), 0, 0xffffffff, nullptr))
    int32_t ebx_2 = *(sub_573400() + 4)
    
    if (edi_2 u>= 0x320)
        sub_591930()
    
    result = *(edi_2 * 0x64 + ebx_2 + 0x1a4c)
    ebx_1 = var_c_1
    *(ebx_1 + (i << 2)) = result
    i += 1
while (i s< 3)

return result
