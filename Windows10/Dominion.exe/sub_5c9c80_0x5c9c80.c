// 函数: sub_5c9c80
// 地址: 0x5c9c80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76998d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_138 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
char* const _FileName = &data_801800
FILE* result_1
FILE* _FileName_1 = result_1

if (_FileName_1 != 0)
    _FileName = _FileName_1

FILE* _Stream = fopen(_FileName, U"r")
FILE* _Stream_1 = _Stream
FILE* result

if (_Stream != 0)
    int32_t* eax_3 = *arg1
    int32_t (* const var_11c_1)(FILE* _Stream) = feof
    
    if (feof(_Stream) == 0)
        void* (* const var_128_1)(void* _Block, uint32_t _Size) = realloc
        char* (* const var_12c_1)(char const* _Source) = _strdup
        
        while (true)
            char _Source[0x100]
            _Source[0] = 0
            char (* var_13c_2)[0x100] = &_Source
            
            if (_fprintf(_Stream, "%s") != 0)
                if (feof(_Stream) != 0)
                    goto label_5c9eb0
                
                int32_t eax_8 = eax_3[2] + 1
                eax_3[2] = eax_8
                int32_t eax_11 = realloc(*eax_3, eax_8 * 0x28)
                int32_t ecx_2 = eax_3[2]
                *eax_3 = eax_11
                void* edi_2 = eax_11 + ecx_2 * 0x28
                __builtin_memset(edi_2 - 0x28, 0, 0x28)
                *(edi_2 - 0x28) = _strdup(&_Source)
                void* var_148_1 = edi_2 - 0x18
                
                if (_fprintf(_Stream, "%d") != 0)
                    int32_t ecx_4 = *(edi_2 - 0x18)
                    int32_t ecx_6
                    
                    if (ecx_4 == 0)
                        ecx_6 = 0
                    else
                        ecx_6 = sub_687730(ecx_4 << 2)
                    
                    int32_t esi = 0
                    *(edi_2 - 0x20) = ecx_6
                    int32_t eax_16 = 1
                    int32_t var_120_1 = 1
                    
                    if (*(edi_2 - 0x18) s<= 0)
                    label_5c9e5f:
                        *(edi_2 - 8) = eax_16
                        int32_t esi_1 = 0
                        *(edi_2 - 0x10) = sub_687730(eax_16 << 2)
                        
                        if (*(edi_2 - 8) s<= 0)
                        label_5c9e95:
                            _Stream = _Stream_1
                            
                            if (feof(_Stream) != 0)
                                goto label_5c9eb0
                            
                            continue
                        else
                            while (true)
                                int32_t var_13c_6 = *(edi_2 - 0x10) + (esi_1 << 2)
                                
                                if (_fprintf(_Stream_1, "%f") == 0)
                                    break
                                
                                esi_1 += 1
                                
                                if (esi_1 s>= *(edi_2 - 8))
                                    goto label_5c9e95
                    else
                        while (true)
                            int32_t var_13c_5 = ecx_6 + (esi << 2)
                            
                            if (_fprintf(_Stream_1, "%d") == 0)
                                break
                            
                            ecx_6 = *(edi_2 - 0x20)
                            int32_t eax_19 = *(ecx_6 + (esi << 2))
                            esi += 1
                            eax_16 = eax_19 * var_120_1
                            var_120_1 = eax_16
                            
                            if (esi s>= *(edi_2 - 0x18))
                                goto label_5c9e5f
                    
                    _Stream = _Stream_1
            
            fclose(_Stream)
            int32_t var_8_4 = 3
            break
        
        goto label_5c9ced
    
label_5c9eb0:
    fclose(_Stream)
    int32_t var_8_3 = 2
    
    if (data_cf65bc != 0)
        result = result_1
        
        if (result != 0 && result->_Placeholder.b != 0)
            result = sub_63d4e0(&result_1)
            
            if (result == 1)
                sub_64c080(result - 1, result + 0xf)
    
    result.b = 1
else
    int32_t var_8_2 = 1
label_5c9ced:
    
    if (data_cf65bc != 0)
        result = result_1
        
        if (result != 0 && result->_Placeholder.b != 0)
            result = sub_63d4e0(&result_1)
            
            if (result == 1)
                sub_64c080(result - 1, result + 0xf)
    
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
