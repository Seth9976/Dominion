// 函数: sub_640c40
// 地址: 0x640c40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg2 == 0)
    return 

uint32_t eax = zx.d(arg2.w)
char const* const var_14
int32_t var_10
char const* const var_c
char* ecx_2

if (eax u>= *(arg1 + 0x20))
label_640ce4:
    var_c = "DataArray<struct RegionAllocator::Region>::DataArrayGet"
    var_10 = 0x6d
    var_14 = "C:\x\ax2017\Engine\DataArray.h"
    ecx_2 = "DataArrayTryToGet(id) != NULL"
label_640cfa:
    sub_63b870(eax, &data_801800, ecx_2, var_14, var_10, var_c)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

uint32_t ecx = eax * 9
eax = *(arg1 + 0x1c)
uint32_t ecx_1 = eax + (ecx << 3)

if (*(eax + (ecx << 3) + 0x44) != arg2)
    goto label_640ce4

int32_t eax_1 = *(ecx_1 + 0x20)

if (eax_1 != 0)
    if (eax_1 == 1)
        return sub_640ba0(arg1, ecx_1) __tailcall
    
    eax = eax_1 - 2
    
    if (eax_1 == 2)
        return sub_640d20(arg1, ecx_1) __tailcall
    
    var_c = "RegionAllocator::Dealloc"
    var_10 = 0xcd
    var_14 = "C:\x\ax2017\Engine\TTFont.cpp"
    ecx_2 = "Halt"
    goto label_640cfa

eax = *(ecx_1 + 0x14)

if (eax != 0)
label_640cce:
    var_c = "RegionAllocator::Dealloc"
    var_10 = 0xc4
    var_14 = "C:\x\ax2017\Engine\TTFont.cpp"
    ecx_2 = "r.key == TTFKEY_NULL"
    goto label_640cfa

eax = *(ecx_1 + 0x18)

if (eax != 0)
    goto label_640cce

eax = *(ecx_1 + 0x1c)

if (eax != 0)
    goto label_640cce
