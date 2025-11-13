// 函数: sub_66b2b0
// 地址: 0x66b2b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* var_c = arg2
uint32_t eax_1 = sub_64e7a0(arg3)
char* _Str1_1 = *(eax_1 + 0x15e0)

if (*(eax_1 + 0x16b0) == arg4 || arg4 == 0xffffffff)
    char* const _Str1 = &data_801800
    
    if (_Str1_1 != 0)
        _Str1 = _Str1_1
    
    if (_stricmp(_Str1, arg2) == 0)
        return arg3

int32_t eax_4 = eax_1 + 0x179c
int32_t esi_1 = 0
int32_t edi_1 = *(eax_1 + 0x189c)
int32_t var_10_1 = eax_4

if (edi_1 != 0)
    do
        *(eax_4 + (esi_1 << 2))
        int32_t eax_5 = sub_66b2b0(arg4)
        
        if (eax_5 != 0)
            return eax_5
        
        eax_4 = var_10_1
        esi_1 += 1
    while (esi_1 != edi_1)

return 0
