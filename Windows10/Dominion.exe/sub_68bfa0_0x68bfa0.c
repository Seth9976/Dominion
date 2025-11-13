// 函数: sub_68bfa0
// 地址: 0x68bfa0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
char* _Source_1 = *arg3
char* const _Source = &data_801800
char* _Str2 = arg2

if (_Source_1 != 0)
    _Source = _Source_1

char _Destination[0x3ff]
strncpy(&_Destination, _Source, 0x400)
char var_9 = 0
char* result

for (char* _Str1 = strtok(&_Destination, &data_807234); _Str1 != 0; 
        _Str1 = strtok(nullptr, &data_807234))
    while (*_Str1 == 0x20)
        _Str1 = &_Str1[1]
    
    char* _Str1_1 = _Str1
    
    do
        result.b = *_Str1_1
        _Str1_1 = &_Str1_1[1]
    while (result.b != 0)
    
    char* eax_4 = _Str1_1 - &_Str1_1[1] - 1 + _Str1
    
    if (*eax_4 == 0x20)
        char* ecx_1 = eax_4
        
        do
            eax_4 -= 1
            *ecx_1 = 0
            ecx_1 = eax_4
        while (*eax_4 == 0x20)
    
    char* _Str2_1 = _Str2
    
    do
        eax_4.b = *_Str2_1
        _Str2_1 = &_Str2_1[1]
    while (eax_4.b != 0)
    
    if (strncmp(_Str1, _Str2, _Str2_1 - &_Str2_1[1]) == 0)
        char* _Str1_2 = _Str1
        
        do
            result.b = *_Str1_2
            _Str1_2 = &_Str1_2[1]
        while (result.b != 0)
        
        char* _Str2_3 = _Str2
        
        do
            result.b = *_Str2_3
            _Str2_3 = &_Str2_3[1]
        while (result.b != 0)
        
        if (_Str1_2 - &_Str1_2[1] == _Str2_3 - &_Str2_3[1])
            if (arg4 != 0)
                result = *arg4
                
                if (result != 0 && result != &data_801800)
                    if (data_cf65bc != 0 && *result != 0)
                        result = sub_63d4e0(arg4)
                        int32_t temp0_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp0_1 == 1)
                            sub_64c080(result, *(result + 0xc) + 0x10)
                    
                    *arg4 = &data_801800
                    result.b = 1
                    CookieCheckFunction(result)
                    return result
            
            goto label_68c13d
        
        char* _Str2_2 = _Str2
        
        do
            result.b = *_Str2_2
            _Str2_2 = &_Str2_2[1]
        while (result.b != 0)
        
        if (*(_Str2_2 - &_Str2_2[1] + _Str1) != 0x3a)
            break
        
        if (arg4 != 0)
            do
                result.b = *_Str2
                _Str2 = &_Str2[1]
            while (result.b != 0)
            
            sub_63d8d0(arg4, _Str2 - &_Str2[1] + 1 + _Str1)
        
    label_68c13d:
        result.b = 1
        CookieCheckFunction(result)
        return result

result.b = 0
CookieCheckFunction(result)
return result
