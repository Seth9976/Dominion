// 函数: sub_63d040
// 地址: 0x63d040
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = arg1[5]

if (ecx u> 7)
    void* eax_1 = *arg1
    void* ecx_1 = (ecx << 1) + 2
    
    if (ecx_1 u>= 0x1000)
        void* edx_1 = *(eax_1 - 4)
        ecx_1 += 0x23
        
        if (eax_1 - edx_1 - 4 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        eax_1 = edx_1
    
    void* var_8_1 = ecx_1
    operator new(eax_1)

arg1[4] = 0
arg1[5] = 7
*arg1 = 0
return 0
