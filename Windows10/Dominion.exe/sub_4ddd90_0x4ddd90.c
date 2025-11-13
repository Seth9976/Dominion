// 函数: sub_4ddd90
// 地址: 0x4ddd90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char* esi = arg2
int32_t var_90 = 0

do
    arg1 = *esi
    esi = &esi[1]
while (arg1 != 0)

char* var_98 = arg2
void* esi_1 = esi - &esi[1]
char* _Str1_3
sub_4dc550(&_Str1_3, &var_98)
var_98.q = 0
int32_t var_20
int32_t result = sub_4dc830(&var_20, var_98, esi_1)

for (char* _Str1_1 = _Str1_3; _Str1_1 != var_20; _Str1_1 = _Str1_3)
    void* const j = &data_77fca8
    void* const j_1 = &data_77fca8
    void* var_88_1 = (var_90 << 4) + arg3 + 0x9c8
    
    do
        char* _Str2 = *(j + 0x10)
        char* _Str2_3 = _Str2
        int32_t eax_2
        
        do
            eax_2.b = *_Str2_3
            _Str2_3 = &_Str2_3[1]
        while (eax_2.b != 0)
        
        void* _MaxCount_1 = _Str2_3 - &_Str2_3[1]
        
        if (_strnicmp(_Str1_1, _Str2, _MaxCount_1) == 0)
            void* esi_2 = var_88_1
            var_90 += 1
            var_88_1 += 0x10
            *esi_2 = *j_1
            int32_t edx_4 = *j_1
            int32_t var_70
            
            if (edx_4 != 0x13)
                void* _Str1 = _Str1_3 + _MaxCount_1
                *(esi_2 + 4) = sub_4dc4a0(arg4, edx_4)
                
                for (void** const k = &data_8087d4; k != "MoveToLinear"; k = &k[2])
                    void* _Str2_1 = *k
                    var_98 = k[1]
                    void* _Str2_2 = _Str2_1
                    void* var_80_1 = _Str2_2 + 1
                    void* ecx_6
                    
                    do
                        ecx_6.b = *_Str2_2
                        _Str2_2 += 1
                    while (ecx_6.b != 0)
                    
                    if (_strnicmp(_Str1, _Str2_1, _Str2_2 - var_80_1) == 0)
                        *(esi_2 + 4) = var_98
                        break
                
                int32_t var_58 = 0
                int32_t var_54_1 = 0xa
                int32_t edx_6
                eax_2, edx_6 = sub_4de040(&var_70, &var_58)
                *(esi_2 + 8) = eax_2
                *(esi_2 + 0xc) = edx_6
            else
                int32_t var_60 = var_70
                int32_t var_6c
                int32_t var_5c_1 = var_6c
                *(esi_2 + 4) = 0
                char* _Str1_4
                sub_4dc550(&_Str1_4, &var_60)
                var_98.q = 0
                int32_t var_38
                sub_4dc830(&var_38, var_98, esi_1)
                
                for (char* _Str1_2 = _Str1_4; _Str1_2 != var_38; _Str1_2 = _Str1_4)
                    uint32_t _MaxCount
                    
                    if (_strnicmp(_Str1_2, "Black Market", _MaxCount) != 0)
                        if (_strnicmp(_Str1_2, "Promo Pack 1", _MaxCount) != 0)
                            if (_strnicmp(_Str1_2, "Promo Pack 2", _MaxCount) != 0)
                                if (_strnicmp(_Str1_2, "Promo Marchland", _MaxCount) == 0)
                                    *(esi_2 + 4) |= 8
                            else
                                *(esi_2 + 4) |= 4
                        else
                            *(esi_2 + 4) |= 2
                    else
                        *(esi_2 + 4) |= 1
                    
                    int32_t var_40
                    int32_t var_3c
                    sub_4dc830(&_Str1_4, var_40, var_3c)
                
                *(esi_2 + 8) = 0
                *(esi_2 + 0xc) = 0xa
            _Str1_1 = _Str1_3
        
        j = j_1 + 0x1c
        j_1 = j
    while (j s< &data_77fea0)
    
    int32_t var_68
    int32_t var_64
    result = sub_4dc830(&_Str1_3, var_68, var_64)

return result
