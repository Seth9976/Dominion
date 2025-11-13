// 函数: sub_4dd810
// 地址: 0x4dd810
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void var_108
int32_t var_14 = __security_cookie ^ &var_108
char* edi = arg2
char* ecx = arg4
char* var_104 = edi
int32_t var_ec = 0
int32_t var_f4 = 0
int32_t eax_1

do
    eax_1.b = *ecx
    ecx = &ecx[1]
while (eax_1.b != 0)
char* var_fc = arg4
char* _Str1
sub_4dc550(&_Str1, &var_fc)
var_fc.q = 0
int32_t var_88
sub_4dc830(&var_88, var_fc, ecx - &ecx[1])
char* _Str1_1 = _Str1

if (_Str1_1 != var_88)
    var_fc = edi
    void* var_f0_1 = &edi[0xa0]
    
    do
        uint32_t _MaxCount
        
        if (_strnicmp(_Str1_1, "colonies", _MaxCount) != 0)
            int32_t eax_3
            int32_t ecx_5
            eax_3, ecx_5 = _strnicmp(_Str1, "shelters", _MaxCount)
            
            if (eax_3 != 0)
                int32_t var_114_4 = 2
                struct _EXCEPTION_REGISTRATION_RECORD* eax_4 =
                    sub_4dd260(eax_3, _MaxCount, _Str1, ecx_5)
                
                if (eax_4 != 0)
                    void* eax_5 = sub_571b30(eax_4, arg3)
                    void var_e0
                    
                    if (((*(eax_5 + 0x98) & 0x7f000400) | (*(eax_5 + 0x9c) & 0x940)) != 0
                            && var_f4 s< 4)
                        int128_t* ecx_11 = var_f0_1
                        int64_t var_c8_1 = 0
                        struct _EXCEPTION_REGISTRATION_RECORD* var_cc_1 = eax_4
                        var_f4 += 1
                        var_f0_1 = ecx_11 + 0x48
                        *ecx_11 = 1.o
                        __builtin_memset(&ecx_11[1], 0, 0x38)
                        
                        if (eax_4 == 0xf3a)
                            edi = var_104
                            sub_4dd660(&var_e0, edi, arg3, eax_4, &var_e0)
                        else if (eax_4 == 0x121a)
                            edi = var_104
                            sub_4dd660(&var_e0, edi, arg3, eax_4, &var_e0)
                        else
                            int128_t var_60
                            
                            if (eax_4 != 0x121c)
                                memset(&var_60, 0, 0x38)
                                int32_t var_114_7 = 0
                                sub_4dd440(&var_e0, 0xe, &var_60, arg3, var_104, &var_e0, 4, 0)
                                void* eax_13 = ecx_11 + 0x14
                                
                                for (int32_t i = 0; i s< 0xe; )
                                    int32_t edx_6 = *(&var_60 + (i << 2))
                                    
                                    if (edx_6 == 0)
                                        break
                                    
                                    *(eax_13 - 4) = edx_6
                                    int32_t edx_7 = *(&var_60:4 + (i << 2))
                                    
                                    if (edx_7 == 0)
                                        break
                                    
                                    *eax_13 = edx_7
                                    i += 2
                                    eax_13 += 8
                                
                                edi = var_104
                            else
                                edi = var_104
                                int32_t var_114_6 = 4
                                int128_t var_70
                                __builtin_memset(&var_70, 0, 0x38)
                                sub_4dd440(&var_e0, 0xa, &var_60, arg3, edi, &var_e0, 1, &var_70)
                                void* edx_4 = &edi[0x220]
                                
                                for (int32_t i_1 = 0; i_1 s< 0xa; )
                                    int32_t ecx_15 = *(&var_60 + (i_1 << 2))
                                    
                                    if (ecx_15 == 0)
                                        break
                                    
                                    int32_t var_bc_1 = ecx_15
                                    i_1 += 1
                                    int64_t var_b8_1 = 0
                                    *edx_4 = 1.o
                                    edx_4 += 0x10
                                
                                int32_t i_2 = 0
                                void* edx_5 = &edi[0x2d0]
                                
                                do
                                    int32_t ecx_16 = *(&var_70 + (i_2 << 2))
                                    
                                    if (ecx_16 == 0)
                                        break
                                    
                                    int32_t var_ac_1 = ecx_16
                                    i_2 += 1
                                    int64_t var_a8_1 = 0
                                    *edx_5 = 1.o
                                    edx_5 += 0x10
                                while (i_2 s< 4)
                    else if (var_ec s< 0xa)
                        char* ecx_21 = var_fc
                        int64_t var_98_1 = 0
                        struct _EXCEPTION_REGISTRATION_RECORD* var_9c_1 = eax_4
                        var_ec += 1
                        *ecx_21 = 1.o
                        var_fc = &ecx_21[0x10]
                        sub_4dd660(&var_e0, edi, arg3, eax_4, &var_e0)
            else
                *(edi + 0xc00) = 1
        else
            *(edi + 0xbfc) = 1
        
        int32_t var_d8
        int32_t var_d4
        sub_4dc830(&_Str1, var_d8, var_d4)
        _Str1_1 = _Str1
    while (_Str1_1 != var_88)

CookieCheckFunction(_Str1_1)
return _Str1_1
