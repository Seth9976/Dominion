// 函数: sub_69fce0
// 地址: 0x69fce0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t result

if (*arg1 != 0)
    if (strstr(arg1, &data_879be0) != 0)
        result.b = 0
        return result
    
    result = strstr(arg1, &data_879bdc)
    
    if (result != 0)
        result.b = 0
        return result
    
    char* _Str1 = strrchr(arg1, 0x2e)
    
    if (_Str1 != 0)
        result = _stricmp(_Str1, ".xpack")
    
    if ((_Str1 == 0 || result != 0) && sub_6b7ef0(arg1) == 0)
        result.b = 0
        return result

result.b = 1
return result
