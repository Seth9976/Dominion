// 函数: sub_4de120
// 地址: 0x4de120
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* ecx = arg2
char i

do
    i = *ecx
    ecx = &ecx[1]
while (i != 0)
char* var_68 = arg2
char* _Str1_1
sub_4dc550(&_Str1_1, &var_68)
var_68.q = 0
int32_t var_20
int32_t result = sub_4dc830(&var_20, var_68, ecx - &ecx[1])

for (char* _Str1 = _Str1_1; _Str1 != var_20; _Str1 = _Str1_1)
    uint32_t _MaxCount
    int32_t eax = _strnicmp(_Str1, "Landscapes", _MaxCount)
    void var_30
    
    if (eax != 0)
        int32_t eax_2 = _strnicmp(_Str1, "Events", _MaxCount)
        
        if (eax_2 != 0)
            int32_t eax_4 = _strnicmp(_Str1, "Landmarks", _MaxCount)
            
            if (eax_4 != 0)
                int32_t eax_6 = _strnicmp(_Str1, "Projects", _MaxCount)
                
                if (eax_6 != 0)
                    int32_t eax_8 = _strnicmp(_Str1, "Ways", _MaxCount)
                    
                    if (eax_8 != 0)
                        int32_t eax_10 = _strnicmp(_Str1, "Traits", _MaxCount)
                        
                        if (eax_10 != 0)
                            if (_strnicmp(_Str1, "Ally", _MaxCount) != 0)
                                if (_strnicmp(_Str1, "Prophecy", _MaxCount) != 0)
                                    if (_strnicmp(_Str1, "Colonies", _MaxCount) != 0)
                                        if (_strnicmp(_Str1, "NoColonies", _MaxCount) != 0)
                                            if (_strnicmp(_Str1, "Shelters", _MaxCount) != 0)
                                                if (_strnicmp(_Str1, "NoShelters", _MaxCount) != 0)
                                                    if (_strnicmp(_Str1, "Attacks", _MaxCount) != 0)
                                                        if (_strnicmp(_Str1, "NoAttacks", _MaxCount)
                                                                != 0)
                                                            if (_strnicmp(_Str1, "AttackReaction", 
                                                                    _MaxCount) != 0)
                                                                if (_strnicmp(_Str1, "ExtraActions", 
                                                                        _MaxCount) != 0)
                                                                    if (_strnicmp(_Str1, "ExtraCards", 
                                                                            _MaxCount) != 0)
                                                                        if (
                                                                                _strnicmp(_Str1, "ExtraBuys", _MaxCount)
                                                                                != 0)
                                                                            if (
                                                                                    _strnicmp(_Str1, "Trashing", _MaxCount)
                                                                                    == 0)
                                                                                *(arg1 + 0x16f4) |= 0x40
                                                                        else
                                                                            *(arg1 + 0x16f4) |= 0x20
                                                                    else
                                                                        *(arg1 + 0x16f4) |= 0x10
                                                                else
                                                                    *(arg1 + 0x16f4) |= 8
                                                            else
                                                                *(arg1 + 0x16f4) =
                                                                    (*(arg1 + 0x16f4) & 0xfffffffd) | 4
                                                        else
                                                            *(arg1 + 0x16f4) =
                                                                (*(arg1 + 0x16f4) & 0xfffffffa) | 2
                                                    else
                                                        *(arg1 + 0x16f4) =
                                                            (*(arg1 + 0x16f4) & 0xfffffffd) | 1
                                                else
                                                    *(arg1 + 0xc00) = 2
                                            else
                                                *(arg1 + 0xc00) = 1
                                        else
                                            *(arg1 + 0xbfc) = 2
                                    else
                                        *(arg1 + 0xbfc) = 1
                                else
                                    *(arg1 + 0xbf9) = 1
                            else
                                *(arg1 + 0xbf8) = 1
                        else
                            int32_t var_40 = eax_10
                            int32_t var_3c_1 = 2
                            int32_t eax_11
                            int32_t edx_11
                            eax_11, edx_11 = sub_4de040(&var_30, &var_40)
                            *(arg1 + 0xbf0) = eax_11
                            *(arg1 + 0xbf4) = edx_11
                    else
                        int32_t var_48 = eax_8
                        int32_t var_44_1 = 1
                        int32_t eax_9
                        int32_t edx_9
                        eax_9, edx_9 = sub_4de040(&var_30, &var_48)
                        *(arg1 + 0xbe8) = eax_9
                        *(arg1 + 0xbec) = edx_9
                else
                    int32_t var_50 = eax_6
                    int32_t var_4c_1 = 2
                    int32_t eax_7
                    int32_t edx_7
                    eax_7, edx_7 = sub_4de040(&var_30, &var_50)
                    *(arg1 + 0xbe0) = eax_7
                    *(arg1 + 0xbe4) = edx_7
            else
                int32_t var_58 = eax_4
                int32_t var_54_1 = 2
                int32_t eax_5
                int32_t edx_5
                eax_5, edx_5 = sub_4de040(&var_30, &var_58)
                *(arg1 + 0xbd8) = eax_5
                *(arg1 + 0xbdc) = edx_5
        else
            int32_t var_60 = eax_2
            int32_t var_5c_1 = 2
            int32_t eax_3
            int32_t edx_3
            eax_3, edx_3 = sub_4de040(&var_30, &var_60)
            *(arg1 + 0xbd0) = eax_3
            *(arg1 + 0xbd4) = edx_3
    else
        var_68 = eax
        int32_t var_64_1 = 2
        int32_t eax_1
        int32_t edx_1
        eax_1, edx_1 = sub_4de040(&var_30, &var_68)
        *(arg1 + 0xbc8) = eax_1
        *(arg1 + 0xbcc) = edx_1
    int32_t var_28
    int32_t var_24
    result = sub_4dc830(&_Str1_1, var_28, var_24)

return result
