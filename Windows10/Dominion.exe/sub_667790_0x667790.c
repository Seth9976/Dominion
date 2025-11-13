// 函数: sub_667790
// 地址: 0x667790
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

*arg2 = sub_667720(arg1)
char* _Str2

if (*(arg1 + 0x1718) != 0)
    int32_t* eax_1 = sub_64cc90(arg1)
    _Str2 = sub_6dd140(eax_1, eax_1, &data_8cae70, 0x6f)
else
    _Str2 = nullptr

char* _Str2_1 = *arg2

if (_Str2_1 != 0 && *_Str2_1 != 0)
    int32_t* eax_2 = sub_64cc90(arg1)
    int32_t* eax_3 = sub_6dd1e0(eax_2, eax_2, &data_8cae70, data_1724a80, 0x69)
    
    if (eax_3 != 0)
        int32_t i = 0
        
        if (eax_3[2] s> 0)
            int32_t edi_1 = 0
            
            do
                if (_stricmp(*(*eax_3 + edi_1), _Str2_1) == 0)
                    if (_Str2 == 0 || *_Str2 == 0)
                        return 1
                    
                    int32_t eax_9 = _stricmp(*arg2, _Str2)
                    int32_t eax_10 = neg.d(eax_9)
                    return neg.d(sbb.d(eax_10, eax_10, eax_9 != 0)) + 1
                
                i += 1
                edi_1 += 0x30
            while (i s< eax_3[2])

return 0
