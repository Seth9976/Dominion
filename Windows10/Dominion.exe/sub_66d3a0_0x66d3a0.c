// 函数: sub_66d3a0
// 地址: 0x66d3a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* _Str1
int32_t result = sub_667790(arg3, &_Str1)

if (result != 0)
    result = _stricmp(_Str1, arg5)
    
    if (result == 0)
        int32_t eax = *arg2
        int32_t esi_1 = 0
        *(arg4 + (eax << 2)) = arg3
        *arg2 = eax + 1
        result = *(arg3 + 0x189c)
        _Str1 = result
        
        if (result != 0)
            do
                sub_64e7a0(*(arg3 + (esi_1 << 2) + 0x179c))
                result = sub_66d3a0(arg4, 0x400, arg5)
                esi_1 += 1
            while (esi_1 != _Str1)

return result
