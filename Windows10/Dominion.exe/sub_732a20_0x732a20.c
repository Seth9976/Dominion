// 函数: sub_732a20
// 地址: 0x732a20
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_772a85
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
char* const _Stream_7 = &data_801800
char* result_1
char* result_2 = result_1
char* const result_9 = &data_801800
FILE* _Stream_1 = 0x2e

if (result_2 != 0)
    result_9 = result_2

char* const var_3c = result_9
void* eax_3 = strrchr(var_3c, _Stream_1.b)
void* const esi_1

if (eax_3 != 0)
    esi_1 = &data_7ff55c
    
    while (true)
        _Stream_1 = eax_3 + 1
        var_3c = *(esi_1 + 4)
        
        if (_stricmp(var_3c, _Stream_1) == 0)
            break
        
        esi_1 += 8
        
        if (*(esi_1 + 4) == 0)
            goto label_732a90

int32_t* _Stream
int32_t esi_2

if (eax_3 == 0 || esi_1 == 0)
label_732a90:
    esi_2 = 0
label_732a92:
    _Stream_1 = 0x10
    var_3c = 0x20
    int32_t* _Stream_3 = _aligned_malloc(var_3c, _Stream_1)
    _Stream = _Stream_3
    int32_t* _Stream_2 = _Stream
    
    if (_Stream == 0)
        _Stream_1 = "XMalloc"
        var_3c = 0x57
        sub_63b870(_Stream_3, &data_801800, "pBuffer", "C:\x\ax2017\Engine\xMemory.cpp", var_3c, 
            _Stream_1)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    sub_69ca80(_Stream, data_1724b10)
    int32_t* eax_7
    FILE* _Stream_6
    eax_7, _Stream_6 = sub_6a4880(arg2[1], data_1724b14)
    int32_t* var_20_1 = eax_7
    int32_t* esi_4
    int32_t* _Stream_8
    
    if (data_cc8ddc == 0)
        if (esi_2 == 3)
            char* eax_10 = result_1
            _Stream_1 = _Stream_6
            _Stream_1 = eax_10
            
            if (eax_10 != 0 && *eax_10 != 0)
                char* eax_11 = sub_63d4e0(&_Stream_1)
                *(eax_11 + 4) += 1
            
            esi_4 = var_20_1
            _Stream_8 = _Stream_2
            _Stream.b = sub_7326a0(_Stream, esi_4)
            goto label_732d49
        
        if (esi_2 != 2)
            char* result_6 = result_1
            
            if (result_6 != 0)
                _Stream_7 = result_6
            
            _Stream_1 = _Stream_7
            var_3c = "unknown sound file type %s"
            sub_63b5f0(var_3c)
            sub_69cee0(var_20_1, data_1724b14)
            goto label_732d87
        
        char* result_7 = result_1
        char* result_8 = result_7
        
        if (result_7 != 0 && *result_7 != 0)
            char* eax_13 = sub_63d4e0(&result_8)
            *(eax_13 + 4) += 1
            eax_7 = var_20_1
        
        var_8_1.b = 1
        
        if (*eax_7 != 2)
            char* const _Stream_5 = &data_801800
            
            if (result_7 != 0)
                _Stream_5 = result_7
            
            _Stream_1 = _Stream_5
            var_3c = "unsupported ogg format conversion: %s"
            sub_63b5f0(var_3c)
        
        _Stream_1 = &data_8723c4
        
        if (result_7 != 0)
            _Stream_7 = result_7
        
        var_3c = _Stream_7
        _Stream = fopen(var_3c)
        
        if (_Stream != 0)
            _Stream_1 = 2
            var_3c = nullptr
            fseek(_Stream, var_3c, _Stream_1)
            int32_t eax_16 = ftell(_Stream)
            fseek(_Stream, 0, 0)
            
            if (eax_16 == 0)
                _Stream_1 = _Stream
                fclose(_Stream_1)
                var_8_1.b = 3
                goto label_732c28
            
            _Stream_8 = _Stream_2
            _Stream_8[4] = 2
            _Stream_8[5] = eax_16
            int32_t _Buffer = sub_687730(eax_16)
            _Stream_1 = _Stream
            var_3c = 1
            uint32_t _ElementSize = _Stream_8[5]
            _Stream_8[6] = _Buffer
            uint32_t eax_18
            int32_t edx_7
            eax_18, edx_7 = fread(_Buffer, _ElementSize, var_3c, _Stream_1)
            
            if (eax_18 == 1)
                char eax_20 = sub_6fe6a0(eax_18, edx_7, _Stream_8, eax_2)
                _Stream_1 = _Stream
                fclose(_Stream_1)
                var_8_1.b = 5
                
                if (data_cf65bc != 0 && result_7 != 0 && *result_7 != 0)
                    char* eax_21 = sub_63d4e0(&result_8)
                    int32_t temp2_1 = *(eax_21 + 4)
                    *(eax_21 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
                
                _Stream.b = eax_20
            else
                _Stream_1 = _Stream
                fclose(_Stream_1)
                var_8_1.b = 4
                
                if (data_cf65bc != 0 && result_7 != 0 && *result_7 != 0)
                    char* eax_19 = sub_63d4e0(&result_8)
                    int32_t temp3_1 = *(eax_19 + 4)
                    *(eax_19 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)
                
                _Stream.b = 0
        else
            var_8_1.b = 2
        label_732c28:
            
            if (data_cf65bc != 0 && result_7 != 0 && *result_7 != 0)
                char* eax_15 = sub_63d4e0(&result_8)
                int32_t temp1_1 = *(eax_15 + 4)
                *(eax_15 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
            
            _Stream_8 = _Stream_2
            _Stream.b = 0
        
        var_8_1.b = 0
        goto label_732d3e
    
    char* result_5 = result_1
    var_3c = result_5
    
    if (result_5 != 0 && *result_5 != 0)
        char* eax_8 = sub_63d4e0(&var_3c)
        *(eax_8 + 4) += 1
    
    _Stream_8 = _Stream_2
    _Stream.b = sub_732380(arg1, _Stream)
label_732d3e:
    esi_4 = var_20_1
label_732d49:
    sub_69cee0(esi_4, data_1724b14)
    
    if (_Stream.b == 0)
        _Stream = _Stream_2
    label_732d87:
        _Stream_1 = _Stream
        _aligned_free(_Stream_1)
        _Stream.b = 0
    else
        _Stream.b = 1
        *(*arg2 + 0x38) = _Stream_8
else
    esi_2 = *esi_1
    
    if (esi_2 != 4)
        goto label_732a92
    
    char* result_3 = result_1
    char* result_10 = &data_801800
    _Stream_1 = nullptr
    
    if (result_3 != 0)
        result_10 = result_3
    
    var_3c = nullptr
    int32_t* _Stream_4 = sub_6a70c0(result_3, result_10, arg2[3], var_3c)
    
    if (_Stream_4 != 0)
        sub_69cee0(*arg2, arg2[3])
        sub_6a3220(arg2[1])
        arg2[1] = _Stream_4[1]
        char* eax_6 = *_Stream_4
        _Stream_1 = _Stream_4
        *arg2 = eax_6
        _aligned_free(_Stream_1)
        _Stream.b = 1
    else
        char* result_4 = result_1
        
        if (result_4 != 0)
            _Stream_7 = result_4
        
        _Stream_1 = _Stream_7
        var_3c = "failed to read xmlsound %s"
        sub_63b5f0(var_3c)
        _Stream.b = 0
int32_t var_8_2 = 6
char* result

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(result, *(result + 0xc) + 0x10)

result.b = _Stream.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
