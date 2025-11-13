// 函数: sub_6a39e0
// 地址: 0x6a39e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* i = *(arg3 + 4)
char* var_8 = arg2

if (i != 0)
    char* const edi_1 = &data_801800
    
    do
        int32_t* ebx_1 = *i
        char* const _Str1 = &data_801800
        i = i[1]
        char* _Str1_1 = *ebx_1
        
        if (_Str1_1 != 0)
            _Str1 = _Str1_1
        
        va_list ecx
        int32_t edx
        arg1, edx, ecx = _stricmp(_Str1, arg2)
        
        if (arg1 == 0)
            char* eax = ebx_1[1]
            int32_t var_1c_2 = arg4
            
            if (eax != 0)
                edi_1 = eax
            
            sub_64b6d0(eax, edx, ecx, edi_1, "%d")
            int32_t eax_1
            eax_1.b = 1
            return eax_1
        
        arg2 = var_8
    while (i != 0)

arg1.b = 0
return arg1
