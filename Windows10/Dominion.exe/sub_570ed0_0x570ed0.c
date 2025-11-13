// 函数: sub_570ed0
// 地址: 0x570ed0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx = *(arg1 + 0x10)
int32_t eax_1 = *(arg1 + 0x14)
int32_t eax_2 = *(arg1 + 8)
int32_t eax_3 = *(arg1 + 0xc)
uint32_t esi_1 = zx.d((*arg2).w)
void* edi = *(sub_573400() + 4)

if (esi_1 u>= 0x320)
    sub_591930()

int32_t edx = *(esi_1 * 0x64 + edi + 0x1a4c)
uint32_t result

if (edx != 0)
    int32_t eax_6 = eax_3 | eax_1
    int32_t edx_1
    result, edx_1 = sub_573890(eax_6, edx, edi, 1, eax_2 | ebx, eax_6)
    
    if (((result & eax_2) | (edx_1 & eax_3)) != 0 && ((result & ebx) | (edx_1 & eax_1)) == 0)
        result.b = 1
        return result

result.b = 0
return result
