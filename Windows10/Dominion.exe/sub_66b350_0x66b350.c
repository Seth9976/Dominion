// 函数: sub_66b350
// 地址: 0x66b350
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = arg4
int32_t var_30
char const* const ecx

if (arg2 s<= eax)
    int32_t ecx_1 = *(arg3 + 0x189c)
    void* result = eax - arg2
    
    if (ecx_1 s<= result)
        return result
    
    int32_t esi_1 = 0
    result = arg3 + 0x179c
    void* result_1 = result
    int32_t var_14_1 = 0
    
    if (ecx_1 == 0)
        return result
    
    while (true)
        int32_t eax_2 = *(sub_64e7a0(*(result + (esi_1 << 2))) + 0x15e4)
        
        if (eax_2 s< arg2 || eax_2 s>= arg4)
            eax = *(result + (esi_1 << 2))
            int32_t var_10 = eax
            
            if (eax == 0)
                break
            
            sub_64c7e0(arg3, &result_1)
            sub_64e810(&var_10)
            esi_1 = var_14_1
        
        result = result_1
        esi_1 += 1
        var_14_1 = esi_1
        
        if (esi_1 == *(arg3 + 0x189c))
            return result
    
    char const* const var_2c_3 = "UI2ClearChildrenOutsideRange"
    var_30 = 0x3f00
    ecx = "hChild != UI2_NULL"
else
    char const* const var_2c_1 = "UI2ClearChildrenOutsideRange"
    var_30 = 0x3ef6
    ecx = "start <= end"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Engine\UI2.cpp", var_30, 
    "UI2ClearChildrenOutsideRange")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
