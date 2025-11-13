// 函数: sub_4e9e00
// 地址: 0x4e9e00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (*arg1 != 0)
    int32_t eax
    sub_63b870(eax, &data_801800, "mNodeBuckets == NULL", "C:\x\ax2017\Engine\xMap.h", 0x74, 
        "XMap<class XString,enum DomCardEnum>::SetNumBuckets")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t ecx_2 = (arg2 - 1) | (arg2 - 1) u>> 1
int32_t ecx_3 = ecx_2 | ecx_2 u>> 2
int32_t ecx_4 = ecx_3 | ecx_3 u>> 4
int32_t ecx_5 = ecx_4 | ecx_4 u>> 8
int32_t esi_2 = ecx_5 u>> 0x10 | ecx_5
int32_t* result = sub_64c020((esi_2 << 2) + 4)
arg1[1] = esi_2
*arg1 = result
return result
