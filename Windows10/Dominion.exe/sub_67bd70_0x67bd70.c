// 函数: sub_67bd70
// 地址: 0x67bd70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax_1 = sub_64e7a0(arg1)
char* const _Str1 = &data_801800
char* _Str1_1 = *(eax_1 + 0x15e0)

if (_Str1_1 != 0)
    _Str1 = _Str1_1

if (_stricmp(_Str1, arg2) == 0)
    return arg1

if (*(eax_1 + 0x15f8) != 2 || *(eax_1 + 0x189c) == 0)
    int32_t edi = *(eax_1 + 0x189c)
    int32_t eax_5 = eax_1 + 0x179c
    int32_t esi_1 = 0
    int32_t var_c_1 = eax_5
    
    if (edi != 0)
        do
            *(eax_5 + (esi_1 << 2))
            int32_t eax_6 = sub_67bd70()
            
            if (eax_6 != 0)
                return eax_6
            
            eax_5 = var_c_1
            esi_1 += 1
        while (esi_1 != edi)
else
    *(eax_1 + 0x179c)
    int32_t eax_4 = sub_67bd70()
    
    if (eax_4 != 0)
        return eax_4

return 0
