// 函数: sub_542e30
// 地址: 0x542e30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_c = ecx
int32_t ebx = *(sub_573400() + 0x58)
void* eax_1 = sub_573400()
uint32_t edi = zx.d(ebx.w)
int32_t ecx_1 = *(eax_1 + 4)

if (edi u>= 0x320)
    sub_591930()

int32_t eax_2 = edi * 0x64
*(eax_2 + ecx_1 + 0x1a6c) &= 0xfffffffd
void* result = *(*(eax_1 + 4) + 0x1504)

if (result == 3 || result == 5 || result == 4 || result == 6)
    return result

ecx_1.b = result == 2
return sub_61b1b0(result, 0x16, ecx_1.b, *(eax_1 + 0xc), ebx, 4, nullptr, nullptr, nullptr, 0, 0, 
    0, 0, 0)
