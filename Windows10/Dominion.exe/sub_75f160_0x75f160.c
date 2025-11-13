// 函数: sub_75f160
// 地址: 0x75f160
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

*(arg1 + 8) = arg3
int32_t xmm0 = *(arg2 + 0xc)
*(arg1 + 0x40) = xmm0
*(arg1 + 0x44) = xmm0
int32_t result = *(arg2 + 0x14)
*(arg1 + 0x48) = result
*(arg1 + 0x58) = zx.o(0)
*(arg1 + 0x1b8) = *(arg2 + 0x60)
void* esi

if ((*(arg2 + 8) & 1) == 0)
    esi = arg2 + 8
else
    *(arg1 + 0x10) |= 1
    esi = arg2 + 8

void* edx_1 = arg1 + 0x10

if ((*(arg2 + 8) & 8) == 0)
    esi = arg2 + 8
else
    *(arg1 + 0x10) |= 8

void* edi_2

if ((*(arg2 + 8) & 0x10) == 0)
    edx_1 = arg1 + 0x10
    edi_2 = esi
else
    *(arg1 + 0x10) |= 0x10
    edi_2 = arg2 + 8

void* ecx

if ((*esi & 0x40) == 0)
    edi_2 = esi
    ecx = edx_1
else
    ecx = arg1 + 0x10
    result = *(arg1 + 0x10) | 0x40
    *edx_1 = result

if ((*esi & 0x80) == 0)
    ecx = edx_1
else
    *edx_1 |= 0x80

if ((*edi_2 & 0x100) != 0)
    result = *edx_1 | 0x100
    *ecx = result

return result
