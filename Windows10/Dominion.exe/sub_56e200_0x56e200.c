// 函数: sub_56e200
// 地址: 0x56e200
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = sub_573400()
int32_t esi = 0
void* eax_2 = *(sub_573400() + 4)
int32_t edx = *(eax_2 + 0x1520)
void* result
uint32_t ecx
uint32_t edi_1

if (edx s<= 0)
label_56e240:
    esi = 0
    edi_1 = 0
    ecx = 0
    result = *(sub_573400() + 4)
else
    void* eax_3 = eax_2 + 0x1a4c
    
    while (*eax_3 != arg1)
        esi += 1
        eax_3 += 0x64
        
        if (esi s>= edx)
            goto label_56e240
    
    edi_1 = zx.d(esi.w)
    ecx = edi_1
    result = *(sub_573400() + 4)
    
    if (edi_1 u>= 0x320)
        sub_591930()
        ecx = edi_1

int32_t ecx_1 = ecx * 0x64
uint32_t edx_2 = *(eax + 0xc)

if (*(ecx_1 + result + 0x1a70) == edx_2)
    return result

int32_t eax_6 = *(sub_573400() + 4)

if (edi_1 u>= 0x320)
    sub_591930()

return sub_565ff0(eax_6, *(ecx_1 + eax_6 + 0x1a50), esi, edx_2, 0x3f1, nullptr, nullptr, 0xb, 
    nullptr, nullptr)
