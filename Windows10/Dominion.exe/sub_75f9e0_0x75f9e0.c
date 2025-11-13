// 函数: sub_75f9e0
// 地址: 0x75f9e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

sub_75ae50(arg1)
int32_t esi = arg2
int32_t* eax = sub_761e10(arg1, esi)

if (eax != 0)
    esi = *eax

if (esi != 0)
    int32_t ecx_2 = esi & 0xfff
    void* edx_1 = *(arg1 + (ecx_2 << 2) + 0x4c)
    
    if (edx_1 != 0 && (*(edx_1 + 8) & 0xfffff) == esi u>> 0xc && ecx_2 != 0)
        double xmm0 = *(edx_1 + 0x60)
        sub_75ec70(arg1)
        return fconvert.t(xmm0)

sub_75ec70(arg1)
return float.t(0)
