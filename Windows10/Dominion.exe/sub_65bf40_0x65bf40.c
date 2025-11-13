// 函数: sub_65bf40
// 地址: 0x65bf40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_c = arg1
int32_t edi = *(arg1 + 0x189c)
int32_t esi = 0
*(arg1 + 0x136c) = 2

if (edi == 0)
    return 

while (true)
    int32_t edx_1 = *(arg1 + 0x179c + (esi << 2))
    int32_t var_20
    uint32_t eax
    char* ecx_2
    
    if (edx_1 == 0)
        char const* const var_1c_1 = "DataArray<struct UI2>::DataArrayGet"
        var_20 = 0x6c
        ecx_2 = "id != DATAID_NULL"
    else
        eax = zx.d(edx_1.w)
        
        if (eax u< data_c23bac && *(eax * 0x18d0 + data_c23ba8 + 0x18c8) == edx_1)
            eax = sub_65bf40()
            esi += 1
            
            if (esi == edi)
                break
            
            continue
        
        char const* const var_1c = "DataArray<struct UI2>::DataArrayGet"
        var_20 = 0x6d
        ecx_2 = "DataArrayTryToGet(id) != NULL"
    
    sub_63b870(eax, &data_801800, ecx_2, "C:\x\ax2017\Engine\DataArray.h", var_20, 
        "DataArray<struct UI2>::DataArrayGet")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn
