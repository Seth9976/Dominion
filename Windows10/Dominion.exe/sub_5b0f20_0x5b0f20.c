// 函数: sub_5b0f20
// 地址: 0x5b0f20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx = &arg1

if (arg3 u> 0xf)
    ecx = arg1

int64_t var_c = 0
int64_t var_14 = 0
sub_63a3b0(&var_c, arg2, ecx, &var_c, &var_14)

if (arg3 u> 0xf)
    int32_t* edx_1 = arg1
    int32_t ecx_2 = arg3 + 1
    int32_t* eax_1 = edx_1
    
    if (ecx_2 u>= 0x1000)
        edx_1 = eax_1[-1]
        ecx_2 += 0x23
        
        if (eax_1 - edx_1 - 4 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    int32_t var_18_1 = ecx_2
    operator new(edx_1)

return var_c.d
