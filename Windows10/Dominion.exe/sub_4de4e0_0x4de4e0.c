// 函数: sub_4de4e0
// 地址: 0x4de4e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* _Str1 = arg2

while (*_Str1 == 0x20)
    _Str1 = &_Str1[1]

char* _Str1_3 = _Str1
char i

do
    i = *_Str1_3
    _Str1_3 = &_Str1_3[1]
while (i != 0)
char* eax_1 = _Str1_3 - &_Str1_3[1] - 1 + _Str1

if (*eax_1 == 0x20)
    char* ecx_1 = eax_1
    
    do
        eax_1 -= 1
        *ecx_1 = 0
        ecx_1 = eax_1
    while (*eax_1 == 0x20)

int32_t eax_2 = _stricmp(_Str1, "Standard")

if (eax_2 == 0)
    *(arg1 + 0x16f8) = eax_2
    return eax_2

int32_t eax_3 = _stricmp(_Str1, "Learning")

if (eax_3 == 0)
    *(arg1 + 0x16f8) = 1
    return eax_3

int32_t eax_4 = _stricmp(_Str1, "Friendly")

if (eax_4 == 0)
    *(arg1 + 0x16f8) = 2
    return eax_4

int32_t eax_5 = _stricmp(_Str1, "Strict")

if (eax_5 == 0)
    *(arg1 + 0x16f8) = 3
    return eax_5

char* _Str1_2 = _strnicmp(_Str1, "Custom", 6)

if (_Str1_2 == 0)
    *(arg1 + 0x16f8) = 4
    
    if (_Str1[6] == 0x3a)
        _Str1_2 = strtok(&_Str1[7], &data_807234)
        
        for (char* _Str1_1 = _Str1_2; _Str1_1 != 0; _Str1_1 = _Str1_2)
            while (*_Str1_1 == 0x20)
                _Str1_1 = &_Str1_1[1]
            
            char* _Str1_4 = _Str1_1
            
            do
                _Str1_2.b = *_Str1_4
                _Str1_4 = &_Str1_4[1]
            while (_Str1_2.b != 0)
            
            char* eax_8 = _Str1_4 - &_Str1_4[1] - 1 + _Str1_1
            
            if (*eax_8 == 0x20)
                char* ecx_3 = eax_8
                
                do
                    eax_8 -= 1
                    *ecx_3 = 0
                    ecx_3 = eax_8
                while (*eax_8 == 0x20)
            
            int32_t eax_9 = _stricmp(_Str1_1, "LogRound")
            
            if (eax_9 != 0)
                if (_stricmp(_Str1_1, "LogFull") != 0)
                    int32_t eax_11 = _stricmp(_Str1_1, "ScoreHidden")
                    
                    if (eax_11 != 0)
                        if (_stricmp(_Str1_1, "ScoreTotal") != 0)
                            if (_stricmp(_Str1_1, "ScoreTracked") != 0)
                                int32_t eax_14 = _stricmp(_Str1_1, "CardsNone")
                                
                                if (eax_14 != 0)
                                    if (_stricmp(_Str1_1, "CardsTracked") != 0)
                                        if (_stricmp(_Str1_1, "CardsVisible") != 0)
                                            int32_t eax_17 = _stricmp(_Str1_1, "UndosNone")
                                            
                                            if (eax_17 != 0)
                                                if (_stricmp(_Str1_1, "UndosNoRed") != 0)
                                                    if (_stricmp(_Str1_1, "UndosVerified") != 0)
                                                        if (_stricmp(_Str1_1, "UndosUnlimited")
                                                                == 0)
                                                            *(arg1 + 0x1700) = 3
                                                            *(arg1 + 0x16f8) = 4
                                                    else
                                                        *(arg1 + 0x1700) = 2
                                                        *(arg1 + 0x16f8) = 4
                                                else
                                                    *(arg1 + 0x1700) = 1
                                                    *(arg1 + 0x16f8) = 4
                                            else
                                                *(arg1 + 0x1700) = eax_17
                                                *(arg1 + 0x16f8) = 4
                                        else
                                            *(arg1 + 0x16fc) = 2
                                            *(arg1 + 0x16f8) = 4
                                    else
                                        *(arg1 + 0x16fc) = 1
                                        *(arg1 + 0x16f8) = 4
                                else
                                    *(arg1 + 0x16fc) = eax_14
                                    *(arg1 + 0x16f8) = 4
                            else
                                *(arg1 + 0x1708) = 2
                                *(arg1 + 0x16f8) = 4
                        else
                            *(arg1 + 0x1708) = 1
                            *(arg1 + 0x16f8) = 4
                    else
                        *(arg1 + 0x1708) = eax_11
                        *(arg1 + 0x16f8) = 4
                else
                    *(arg1 + 0x1704) = 1
                    *(arg1 + 0x16f8) = 4
            else
                *(arg1 + 0x1704) = eax_9
                *(arg1 + 0x16f8) = 4
            
            _Str1_2 = strtok(nullptr, &data_807234)

return _Str1_2
