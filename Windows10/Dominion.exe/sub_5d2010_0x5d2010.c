// 函数: sub_5d2010
// 地址: 0x5d2010
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx
int32_t var_8 = ecx
void* eax = sub_5cc410(arg1, arg2, ecx, arg3, arg4)
int32_t ecx_1

if (eax != 0)
    ecx_1 = *(eax + 0x1ba0)

if (eax == 0 || ecx_1 == 0)
    int32_t eax_3 = sub_5d1d00(arg2, nullptr)
    
    if (eax_3 != 0)
        int32_t result = sub_67bd70(eax_3, "tbl_card")
        
        if (result != 0)
            result = sub_64c870(sub_64e7a0(result), nullptr)
            
            if (result != 0)
                return result
        
        sub_63b870(result, &data_801800, "hCard", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
            0x1b2d, "GetPlayerPodCard")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
else
    int32_t eax_1 = sub_67bd70(ecx_1, "tbl_card")
    
    if (eax_1 != 0)
        return sub_64c870(sub_64e7a0(eax_1), nullptr)

return 0
