// 函数: sub_563c40
// 地址: 0x563c40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* ecx
int32_t edx
ecx, edx = __chkstk(0x1914)

if (ecx[0x320] == 0)
    return nullptr

int32_t* result = sub_563a80(ecx)

if (result == 0 || (arg3 & 1) != 0)
    int32_t var_10_1 = 0
    void var_1918
    result = sub_563960(&var_1918, 1, ecx, &var_1918, 1, edx, arg1, arg2, arg3, var_10_1)
    int32_t* result_1
    __builtin_memcpy(&result_1, result, 0xc84)
    int32_t var_14_2
    char const* const var_10_2
    char* ecx_3
    
    if (var_10_1 == 0)
        var_10_2 = "ChooseCard"
        var_14_2 = 0x3c3
        ecx_3 = "Halt"
    label_563ce0:
        sub_63b870(result, &data_801800, ecx_3, "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp", 
            var_14_2, var_10_2)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    result = result_1
    
    if (result == 0)
        var_10_2 = "ChooseCard"
        var_14_2 = 0x3c6
        ecx_3 = "retval.cards[0] != CARDID_NULL"
        goto label_563ce0

return result
