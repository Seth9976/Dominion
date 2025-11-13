// 函数: sub_4e5ff0
// 地址: 0x4e5ff0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?_Getcat@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@SAIPAPBVfacet@locale@2@PBV42@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_64 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg3
int32_t esi = 0
memset(edi, 0, 0x280)
int32_t* i = arg5
char* edx = *i

if (edx != 0 && *edx != 0)
    char* var_20 = edx
    
    do
        i.b = *edx
        edx = &edx[1]
    while (i.b != 0)
    
    void* var_1c_1 = edx - &edx[1]
    int32_t var_38
    sub_4dc550(&var_38, &var_20)
    int32_t* i_1
    sub_4dc900(&i_1)
    
    for (i = i_1; var_38 != i; i = i_1)
        char* eax_3 = sub_4e5db0(&var_38)
        
        if (eax_3 != 0)
            char const* const var_70_2
            int32_t var_6c_4
            char const* const var_68_9
            char* ecx_15
            
            if (esi s>= 0x20)
                var_68_9 = "FromExtrasStr"
                var_6c_4 = 0x1683
                ecx_15 = "numExtras < maxExtras"
            label_4e6264:
                var_70_2 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp"
            label_4e626e:
                sub_63b870(eax_3, &data_801800, ecx_15, var_70_2, var_6c_4, var_68_9)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            esi += 1
            *edi = eax_3
            edi[1] = 0
            edi[2] = 0xffffffff
            uint32_t var_2c
            
            if (var_2c == 0)
                edi = &edi[5]
            else
                char* var_30
                
                if (eax_3 == 0x17e3)
                    *edi = eax_3
                    sub_4e5ee0(eax_3, arg4, &var_30, 0x55, 0x14)
                    edi = &edi[5]
                else if (eax_3 != 0x17d8)
                    char* esi_1 = var_30
                    void* eax_4
                    int32_t ecx_5
                    eax_4, ecx_5 = memchr(esi_1, 0x2c, var_2c)
                    char* var_18
                    uint32_t edx_4
                    uint32_t edi_3
                    
                    if (eax_4 != 0)
                        eax_3 = eax_4 + 1
                        edx_4 = eax_4 - esi_1
                        var_18 = eax_3
                        edi_3 = var_2c - edx_4 - 1
                    else
                        eax_3 = var_18
                        edx_4 = var_2c
                        edi_3 = 0
                    
                    if (edx_4 != 0 && esi_1[edx_4 - 1] == 0x29)
                        edx_4 -= 1
                    
                    if (edi_3 != 0 && eax_3[edi_3 - 1] == 0x29)
                        edi_3 -= 1
                    
                    if (edx_4 == 0)
                        var_68_9 = "FromExtrasStr"
                        var_6c_4 = 0x169f
                        ecx_15 = "strCard.len"
                        goto label_4e6264
                    
                    int32_t var_68_4 = 3
                    edi[1] = sub_4dd260(eax_3, edx_4, esi_1, ecx_5)
                    
                    if (edi_3 == 0)
                        edi = &edi[5]
                    else
                        eax_3 = var_18
                        
                        if (eax_3 == 0)
                            var_68_9 = "XString::XString"
                            var_6c_4 = 0x9a
                            var_70_2 = "C:\x\ax2017\Engine\xString.cpp"
                            ecx_15 = &data_871e0c
                            goto label_4e626e
                        
                        char* const _String_2 = &data_801800
                        sub_63db30(&_String_2, eax_3, edi_3)
                        int32_t var_8_1 = 0
                        char* const _String_3 = &data_801800
                        char* const _String_1 = _String_2
                        
                        if (_String_1 != 0)
                            _String_3 = _String_1
                        
                        int32_t eax_7
                        int32_t ecx_8
                        eax_7, ecx_8 = isdigit(sx.d(*_String_3))
                        
                        if (eax_7 == 0)
                            int32_t var_68_8 = 3
                            edi[4] = sub_4dd260(eax_7, edi_3, var_18, ecx_8)
                        else
                            char* const _String = &data_801800
                            
                            if (_String_1 != 0)
                                _String = _String_1
                            
                            edi[2] = atoi(_String)
                        
                        int32_t var_8_2 = 1
                        
                        if (data_cf65bc != 0 && _String_1 != 0 && *_String_1 != 0)
                            char* eax_10 = sub_63d4e0(&_String_2)
                            int32_t temp0_1 = *(eax_10 + 4)
                            *(eax_10 + 4) -= 1
                            
                            if (temp0_1 == 1)
                                sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
                                _String_2 = &data_801800
                        
                        int32_t var_8_3 = 0xffffffff
                        edi = &edi[5]
                else
                    *edi = eax_3
                    sub_4e5ee0(eax_3, arg4, &var_30, 0x6a, 1)
                    edi = &edi[5]
        
        sub_4dc8e0(&var_38)

fsbase->NtTib.ExceptionList = ExceptionList
return i
