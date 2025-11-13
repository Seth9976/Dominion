// 函数: sub_6673f0
// 地址: 0x6673f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_8 = arg3
uint32_t result = 0
int32_t edx = *(arg3 + 0x18c8)
int32_t esi = *arg4
void* var_8_1 = arg3

if (arg5 == 0)
    if (esi s> 0)
        do
            if (*(arg2 + (result << 2)) == edx)
                arg5 = 1
                break
            
            result += 1
        while (result s< esi)
else if (esi s> 0)
    while (true)
        uint32_t* ecx = arg2 + (result << 2)
        
        if (*(arg2 + (result << 2)) == edx)
            *arg4 = esi - 1
            result = *(arg2 + ((esi - 1) << 2))
            *ecx = result
            arg3 = var_8_1
            break
        
        result += 1
        
        if (result s>= esi)
            arg3 = var_8_1
            break

int32_t ebx_1 = *(arg3 + 0x189c)
int32_t esi_1 = 0

if (ebx_1 != 0)
    while (true)
        int32_t edx_1 = *(arg3 + (esi_1 << 2) + 0x179c)
        int32_t var_1c_2
        char* ecx_3
        
        if (edx_1 == 0)
            char const* const var_18_3 = "DataArray<struct UI2>::DataArrayGet"
            var_1c_2 = 0x6c
            ecx_3 = "id != DATAID_NULL"
        else
            result = zx.d(edx_1.w)
            
            if (result u< data_c23bac && *(result * 0x18d0 + data_c23ba8 + 0x18c8) == edx_1)
                result = sub_6673f0(arg4, arg5.d)
                esi_1 += 1
                
                if (esi_1 == ebx_1)
                    break
                
                arg3 = var_8_1
                continue
            
            char const* const var_18_2 = "DataArray<struct UI2>::DataArrayGet"
            var_1c_2 = 0x6d
            ecx_3 = "DataArrayTryToGet(id) != NULL"
        
        sub_63b870(result, &data_801800, ecx_3, "C:\x\ax2017\Engine\DataArray.h", var_1c_2, 
            "DataArray<struct UI2>::DataArrayGet")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

return result
