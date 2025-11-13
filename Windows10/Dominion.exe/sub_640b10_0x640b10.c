// 函数: sub_640b10
// 地址: 0x640b10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx = arg2

if (edx == 0)
    return 

while (true)
    uint32_t eax = zx.d(edx.w)
    char const* const var_18
    int32_t var_14
    char const* const var_10
    char* ecx_1
    
    if (eax u>= *(arg1 + 0x20))
    label_640b72:
        var_10 = "DataArray<struct RegionAllocator::Region>::DataArrayGet"
        var_14 = 0x6d
        var_18 = "C:\x\ax2017\Engine\DataArray.h"
        ecx_1 = "DataArrayTryToGet(id) != NULL"
    else
        uint32_t ecx = eax * 9
        eax = *(arg1 + 0x1c)
        
        if (*(eax + (ecx << 3) + 0x44) != edx)
            goto label_640b72
        
        int32_t edx_1 = *(eax + (ecx << 3) + 0x20)
        
        if (edx_1 == 2)
            break
        
        if (edx_1 != 0)
            var_10 = "RegionAllocator::MarkParentAlloc"
            var_14 = 0xad
            var_18 = "C:\x\ax2017\Engine\TTFont.cpp"
            ecx_1 = "r.alloc == ALLOC_NONE"
        else
            edx = *(eax + (ecx << 3) + 0x28)
            *(eax + (ecx << 3) + 0x20) = 2
            *(eax + (ecx << 3) + 0x24) = arg3
            
            if (edx == 0)
                break
            
            continue
    
    sub_63b870(eax, &data_801800, ecx_1, var_18, var_14, var_10)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn
