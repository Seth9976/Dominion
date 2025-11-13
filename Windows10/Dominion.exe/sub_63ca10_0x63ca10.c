// 函数: sub_63ca10
// 地址: 0x63ca10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

*arg1 = &data_871d1c
int32_t* result = sub_63d040(&arg1[0xa])
int32_t ecx_1 = arg1[9]

if (ecx_1 u> 0xf)
    void* eax = arg1[4]
    int32_t ecx_2 = ecx_1 + 1
    
    if (ecx_2 u>= 0x1000)
        void* edx_1 = *(eax - 4)
        ecx_2 += 0x23
        
        if (eax - edx_1 - 4 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        eax = edx_1
    
    int32_t var_8_1 = ecx_2
    result = operator new(eax)

arg1[8] = 0
arg1[9] = 0xf
arg1[4].b = 0
int32_t* ecx_3 = arg1[3]

if (ecx_3 != 0)
    result = (*(*ecx_3 + 8))()
    
    if (result != 0)
        return (**result)(1)

return result
