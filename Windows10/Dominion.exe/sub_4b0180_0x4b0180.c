// 函数: sub_4b0180
// 地址: 0x4b0180
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
sub_4af430()
*arg3 = sub_4afaf0(&data_19e3c20, arg2, arg1, &data_19e3c20)

if (*(data_cf65b4 + 0x18) != 0)
    int32_t eax_4 = *(arg2 + 4)
    void var_340
    void* ecx_1 = &var_340
    int32_t var_35c_1
    int32_t eax_5
    int32_t edx_2
    
    if (eax_4 != 1)
        if (eax_4 != 2)
            eax_5 = sub_694540(eax_4, arg1, ecx_1, &data_7ffb70, 9)
            edx_2 = 0
        else
            eax_5 = sub_694540(eax_4, arg1, ecx_1, &data_7ffb70, 9)
            edx_2 = *(arg2 + 0x10)
        
        var_35c_1 = 0
    else
        eax_5 = sub_694540(eax_4, arg1, ecx_1, &data_7ffb70, 9)
        var_35c_1 = *(arg2 + 0x14)
        edx_2 = *(arg2 + 0x10)
    
    int32_t ecx_3 = sub_67b3b0(eax_5, edx_2, &var_340, 1, var_35c_1)
    int32_t eax_6 = *(arg2 + 4)
    
    if (eax_6 u> 3)
        sub_63b870(eax_6, &data_801800, "Halt", 
            "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp", 0x465, "ClientMouseoverAction")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    switch (eax_6)
        case 0, 2, 3
            data_b7d410 = 0
            data_b7d414 = 0
        case 1
            sub_627ea0(ecx_3, *(arg2 + 8))
    
    int32_t eax_7 = *(arg2 + 4)
    
    if (eax_7 != 1)
        if (eax_7 == 2)
            uint32_t result = 0
            
            if (*(arg2 + 0x20) == 1)
                result = 2
            
            CookieCheckFunction(result)
            return result
    else if (*(arg2 + 0x10) == 0 || *(arg2 + 0x20) == eax_7)
        CookieCheckFunction(2)
        return 2

CookieCheckFunction(0)
return 0
