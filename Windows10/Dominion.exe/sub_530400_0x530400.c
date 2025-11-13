// 函数: sub_530400
// 地址: 0x530400
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int16_t ebx = (*arg2).w
int16_t esi = (**(arg1 + 4)).w
void* eax_2 = sub_573400()
uint32_t esi_1 = zx.d(esi)
int32_t* ecx = *(eax_2 + 0xc)
void* edi = *(eax_2 + 4)
arg2 = ecx

if (esi_1 u>= 0x320)
    sub_591930()
    ecx = arg2

int32_t eax_3 = esi_1 * 0x64
uint32_t eax_4
int32_t edx_1
eax_4, edx_1 = sub_576e90(eax_3, edi, &arg2, ecx, *(eax_3 + edi + 0x1a4c), 0)
uint32_t result

if (sub_5682c0(eax_4, edx_1, ebx, arg2).b != 0)
    uint32_t esi_3 = zx.d((**(arg1 + 4)).w)
    int32_t edi_1 = *(sub_573400() + 4)
    
    if (esi_3 u>= 0x320)
        sub_591930()
    
    int32_t edi_2 = *(esi_3 * 0x64 + edi_1 + 0x1a4c)
    int32_t ebx_1 = *(sub_573400() + 4)
    uint32_t esi_4 = zx.d(ebx)
    
    if (esi_4 u>= 0x320)
        sub_591930()
    
    if (*(esi_4 * 0x64 + ebx_1 + 0x1a4c) != edi_2)
        result.b = 1
        return result

result.b = 0
return result
