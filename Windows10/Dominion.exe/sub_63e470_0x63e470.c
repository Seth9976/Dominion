// 函数: sub_63e470
// 地址: 0x63e470
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* esi = nullptr
int32_t result

while (true)
    char* eax_1 = *arg1
    
    if (eax_1 == 0 || *eax_1 == 0)
        result = 0
    else
        result = *(sub_63d4e0(arg1) + 8)
    
    if (esi s>= result)
        break
    
    char* eax_3 = *arg1
    char* const ecx_1 = &data_801800
    
    if (eax_3 != 0)
        ecx_1 = eax_3
    
    sub_63dc00(arg1, esi, tolower(*(ecx_1 + esi)))
    esi = &esi[1]

return result
