// 函数: sub_6406e0
// 地址: 0x6406e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edi = *arg2
int32_t ebx = arg2[1]
int32_t* i

for (i = *(*(arg1 + 0x38) + (((edi << 8 | ebx) & *(arg1 + 0x3c)) << 2)); i != 0; i = i[4])
    if (edi == *i && ebx == i[1] && arg2[2] == i[2])
        if (i == 0xfffffff4)
            break
        
        int32_t edx_5 = i[3]
        int32_t var_20
        char* ecx_1
        
        if (edx_5 != 0)
            i = zx.d(edx_5.w)
            
            if (i u< *(arg1 + 0x20))
                void* ecx_2 = i * 9
                i = *(arg1 + 0x1c)
                void* ecx_3 = &i[ecx_2 * 2]
                
                if (i[ecx_2 * 2 + 0x11] == edx_5)
                    *(ecx_3 + 0x24) = *(arg1 + 0x44)
                    *(arg1 + 0x44) += 1
                    sub_640b10(arg1, *(ecx_3 + 0x28), *(ecx_3 + 0x24))
                    int32_t eax_2
                    eax_2.b = 1
                    return eax_2
            
            char const* const var_1c_2 = "DataArray<struct RegionAllocator::Region>::DataArrayGet"
            var_20 = 0x6d
            ecx_1 = "DataArrayTryToGet(id) != NULL"
        else
            char const* const var_1c = "DataArray<struct RegionAllocator::Region>::DataArrayGet"
            var_20 = 0x6c
            ecx_1 = "id != DATAID_NULL"
        
        sub_63b870(i, &data_801800, ecx_1, "C:\x\ax2017\Engine\DataArray.h", var_20, 
            "DataArray<struct RegionAllocator::Region>::DataArrayGet")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

i.b = 0
return i
