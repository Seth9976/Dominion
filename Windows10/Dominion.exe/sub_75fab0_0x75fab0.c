// 函数: sub_75fab0
// 地址: 0x75fab0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi = arg2

if ((esi & 0xfffff000) != 0xfffff000)
    sub_75ae50(arg1)
    int32_t* eax_2 = sub_761e10(arg1, esi)
    
    if (eax_2 != 0)
        esi = *eax_2
    
    if (esi != 0)
        int32_t ecx_2 = esi & 0xfff
        void* eax_3 = *(arg1 + (ecx_2 << 2) + 0x4c)
        
        if (eax_3 != 0 && (*(eax_3 + 8) & 0xfffff) == esi u>> 0xc && ecx_2 != 0)
            sub_75ec70(arg1)
            CRITICAL_SECTION* eax_6
            eax_6.b = 1
            return eax_6
    
    sub_75ec70(arg1)

CRITICAL_SECTION* eax_1
eax_1.b = 0
return eax_1
