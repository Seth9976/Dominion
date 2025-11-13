// 函数: sub_69ddf0
// 地址: 0x69ddf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = *arg2
int32_t* var_8 = arg1

if (eax u> 3)
    sub_63b870(eax, &data_801800, "Halt", "C:\x\ax2017\Engine\xPlatformGeneric.cpp", 0x55, 
        "GenericHalGetFilePath")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

switch (eax)
    case 0
        char* eax_1 = arg2[1]
        char* const ecx = &data_801800
        
        if (eax_1 != 0)
            ecx = eax_1
        
        char* const var_14_1 = ecx
        int32_t var_18_1 = sub_63c090()
        sub_63df30(arg1, "%s%s")
        return arg1
    case 1
        char* eax_4 = arg2[1]
        char* const ecx_1 = &data_801800
        
        if (eax_4 != 0)
            ecx_1 = eax_4
        
        char* const var_14_2 = ecx_1
        char* var_18_2 = &data_147cf90
        sub_63df30(arg1, "%s/%s")
        return arg1
    case 2, 3
        char* eax_6 = arg2[1]
        *arg1 = eax_6
        
        if (eax_6 == 0 || *eax_6 == 0)
            return arg1
        
        char* eax_7 = sub_63d4e0(arg1)
        *(eax_7 + 4) += 1
        return arg1
