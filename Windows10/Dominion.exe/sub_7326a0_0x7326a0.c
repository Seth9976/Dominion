// 函数: sub_7326a0
// 地址: 0x7326a0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_772a3d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_cc = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
char* const _FileName = &data_801800
int32_t result_1
int32_t _FileName_7 = result_1

if (_FileName_7 != 0)
    _FileName = _FileName_7

FILE* _ElementSize_1 = fopen(_FileName, "rb")
FILE* _Stream = _ElementSize_1
int32_t var_d4_1
char const* const ecx

if (_Stream == 0)
    char const* const var_d0 = "ReadWav"
    var_d4_1 = 0xa1
    ecx = "file"
label_7329f8:
    sub_63b870(_ElementSize_1, &data_801800, ecx, "C:\x\ax2017\Engine\SoundImport.cpp", var_d4_1, 
        "ReadWav")
    
    if (sub_63bc30() == 0)
        sub_63bb00()
        noreturn
    
    breakpoint

void _Buffer_2
int32_t result
FILE* _Buffer

if (fread(&_Buffer_2, 0xc, 1, _Stream) == 1)
    if (fread(&_Buffer, 8, 1, _Stream) != 1)
    label_732819:
        char* const _FileName_2 = _FileName
        sub_63b5f0("failed to read wav file (wave): %s")
        fclose(_Stream)
        int32_t var_8_3 = 2
    else
        while (true)
            _ElementSize_1 = _Buffer
            FILE* _Offset
            
            if (_ElementSize_1 != 0x20746d66)
                if (_ElementSize_1 == 0x61746164)
                    if (arg1[6] != 0)
                        char const* const var_d0_10 = "ReadWav"
                        var_d4_1 = 0xcd
                        ecx = "pSoundData->bits == NULL"
                        goto label_7329f8
                    
                    arg1[4] = 1
                    arg1[5] = _Offset
                    arg1[3] = _Offset
                    int32_t _Buffer_3 = sub_687730(_Offset)
                    uint32_t _ElementSize = arg1[5]
                    arg1[6] = _Buffer_3
                    
                    if (fread(_Buffer_3, _ElementSize, 1, _Stream) != 1)
                        char* const _FileName_6 = _FileName
                        sub_63b5f0("failed to read wav data: %s")
                        int32_t eax_12 = arg1[6]
                        
                        if (eax_12 != 0)
                            _aligned_free(eax_12)
                        
                        fclose(_Stream)
                        int32_t var_8_7 = 5
                        break
                    
                    fclose(_Stream)
                    result = *arg2
                    
                    if (result != 1)
                        if (result == 2)
                            sub_6fe4c0()
                            noreturn
                        
                        int32_t result_2 = result_1
                        int32_t result_3 = &data_801800
                        
                        if (result_2 != 0)
                            result_3 = result_2
                        
                        int32_t result_4 = result_3
                        sub_63b5f0("can't convert sound storage type %s")
                    
                    int32_t var_8_8 = 7
                    
                    if (data_cf65bc != 0)
                        result = result_1
                        
                        if (result != 0 && *result != 0)
                            result = sub_63d4e0(&result_1)
                            int32_t temp1_1 = *(result + 4)
                            *(result + 4) -= 1
                            
                            if (temp1_1 == 1)
                                sub_64c080(result, *(result + 0xc) + 0x10)
                    
                    result.b = 1
                    goto label_73286a
                
                if (fseek(_Stream, _Offset, 1) != 0)
                    char* const _FileName_5 = _FileName
                    sub_63b5f0("failed to read unknown wav data: %s")
                    fclose(_Stream)
                    int32_t var_8_6 = 6
                    break
            else
                _ElementSize_1 = _Offset
                
                if (_ElementSize_1 u>= 0x90)
                    char const* const var_d0_5 = "ReadWav"
                    var_d4_1 = 0xb8
                    ecx = "sizeof(WAVE_FMT_HEADER) > wave.SubchunkSize"
                    goto label_7329f8
                
                int16_t _Buffer_1
                uint32_t eax_5 = fread(&_Buffer_1, _ElementSize_1, 1, _Stream)
                
                if (eax_5 != 1)
                    char* const _FileName_4 = _FileName
                    sub_63b5f0("failed to read wav format: %s")
                    fclose(_Stream)
                    int32_t var_8_5 = 3
                    break
                
                if (_Buffer_1 != eax_5.w)
                    char* const _FileName_3 = _FileName
                    sub_63b5f0("unsupported wav format: %s")
                    fclose(_Stream)
                    int32_t var_8_4 = 4
                    break
                
                int16_t var_a2
                arg1[1] = sx.d(var_a2)
                int16_t var_ae
                arg1[2] = sx.d(var_ae)
                int32_t var_ac
                *arg1 = var_ac
            
            if (fread(&_Buffer, 8, 1, _Stream) != 1)
                goto label_732819
else
    char* const _FileName_1 = _FileName
    sub_63b5f0("failed to read wav file (riff): %s")
    fclose(_Stream)
    int32_t var_8_2 = 1

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(result, *(result + 0xc) + 0x10)

result.b = 0
label_73286a:
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
