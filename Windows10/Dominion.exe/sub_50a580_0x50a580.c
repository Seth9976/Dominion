// 函数: sub_50a580
// 地址: 0x50a580
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t esi = 0x27
void* ebx = *(sub_573400() + 4)
int32_t* result = ebx + 0x1794
int32_t* result_1 = result

while (*result_1 != arg1)
    esi += 1
    result_1 = &result_1[4]
    
    if (esi s>= 0x47)
        int32_t edx = 0x27
        
        while (*result != 0)
            edx += 1
            result = &result[4]
            
            if (edx s>= 0x47)
                sub_63b870(result, &data_801800, "Halt", 
                    "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp", 0x625, 
                    "NextAvailableNonSupplyPile")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
        
        void var_60
        sub_573c80(arg1, &var_60, 0, nullptr)
        result = sub_5735a0(&var_60, arg1, ebx, &var_60, 0)
        break

CookieCheckFunction(result)
return result
