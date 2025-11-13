// 函数: sub_5c9f30
// 地址: 0x5c9f30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7699cd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_8c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
char* const _FileName = &data_801800
FILE* result_1
FILE* _FileName_1 = result_1
int32_t* esi_1 = *arg1

if (_FileName_1 != 0)
    _FileName = _FileName_1

FILE* _Stream_1 = fopen(_FileName, U"r")
FILE* _Stream = _Stream_1

if (_Stream_1 == 0)
label_5ca133:
    _Stream_1.b = 0
else
    int32_t* var_90_1 = &esi_1[2]
    void* var_94_1 = &esi_1[1]
    int32_t var_6c
    int32_t* var_98_1 = &var_6c
    
    if (_fprintf(_Stream_1, "%d %d %d\n") != 3)
    label_5ca133_1:
        _Stream_1.b = 0
    else
        int32_t ecx_2 = (esi_1[1] + 1) * esi_1[2]
        esi_1[0xa] = ecx_2
        esi_1[8] = sub_687730(ecx_2 << 3)
        int32_t i_4
        int32_t* var_90_2 = &i_4
        void* var_94_2 = &esi_1[0xb]
        
        if (_fprintf(_Stream_1, "%d %d\n") != 2)
        label_5ca133_2:
            _Stream_1.b = 0
        else
            void var_7c
            void* var_90_3 = &var_7c
            _fprintf(_Stream_1, "%d\n")
            int32_t edi_2 = 0
            int32_t i_2
            
            if (var_6c s> 0)
                do
                    int32_t* var_90_4 = &i_2
                    int32_t var_74
                    int32_t* var_94_3 = &var_74
                    _fprintf(_Stream_1, "%d %d\t")
                    char _Buffer[0x50]
                    fgets(&_Buffer, 0x50, _Stream_1)
                    int32_t edx_1 = var_74
                    int32_t eax_6
                    
                    if (edx_1 s< 0)
                        eax_6 = esi_1[0xc]
                    else
                        eax_6 = esi_1[edx_1 + 0xc]
                    
                    if (eax_6 s<= i_2)
                        int32_t i_3 = i_4
                        *esi_1 += 1
                        
                        if (edx_1 s>= 0)
                            esi_1[edx_1 + 0xc] += 1
                        else if (i_3 s> 0)
                            void* eax_7 = &esi_1[0xc]
                            int32_t i
                            
                            do
                                *eax_7 += 1
                                eax_7 += 4
                                i = i_3
                                i_3 -= 1
                            while (i != 1)
                        
                        if (edi_2 == var_6c - 1)
                            esi_1[0xc] += 1
                    
                    edi_2 += 1
                while (edi_2 s< var_6c)
            
            int32_t ecx_5 = esi_1[0xb] * esi_1[0xc]
            esi_1[6] = ecx_5
            esi_1[4] = sub_687730(ecx_5 << 3)
            int32_t i_1 = 0
            i_2 = 0
            
            if (esi_1[0xc] s> 0)
                do
                    int32_t ecx_9 = esi_1[0xb]
                    int32_t edi_3 = 0
                    
                    if (ecx_9 s> 0)
                        do
                            int32_t var_90_5 = esi_1[4] + ((ecx_9 * i_1 + edi_3) << 3)
                            
                            if (_fprintf(_Stream_1, "%lf\n") != 1)
                                goto label_5ca133_2
                            
                            ecx_9 = esi_1[0xb]
                            edi_3 += 1
                            i_1 = i_2
                        while (edi_3 s< ecx_9)
                    
                    i_1 += 1
                    i_2 = i_1
                while (i_1 s< esi_1[0xc])
            
            _Stream_1 = nullptr
            
            if (esi_1[2] s> 0)
                do
                    int32_t j = 0
                    
                    if (esi_1[1] + 1 s> 0)
                        do
                            int32_t var_90_6 = esi_1[8] + ((esi_1[2] * j + _Stream_1) << 3)
                            
                            if (_fprintf(_Stream, "%lf\n") != 1)
                                goto label_5ca133_2
                            
                            j += 1
                        while (j s< esi_1[1] + 1)
                    
                    _Stream_1 = &_Stream_1->_Placeholder + 1
                while (_Stream_1 s< esi_1[2])
            
            fclose(_Stream)
            _Stream_1.b = 1

int32_t var_8_2 = 1
FILE* result

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && result->_Placeholder.b != 0)
        result = sub_63d4e0(&result_1)
        
        if (result == 1)
            sub_64c080(result - 1, result + 0xf)

result.b = _Stream_1.b
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
