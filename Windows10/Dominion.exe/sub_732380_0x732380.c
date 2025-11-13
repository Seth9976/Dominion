// 函数: sub_732380
// 地址: 0x732380
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_772a0d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
var_8_1.b = 1
char* const _FileName_2 = &data_801800
char* const _Stream_1
char* eax_4 = *sub_6c48e0(&_Stream_1, arg1)
char* ecx_1 = &data_801800

if (eax_4 != 0)
    ecx_1 = eax_4

char* var_38 = ecx_1
char* result_3
sub_63df30(&result_3, "%s.mp3")
var_8_1.b = 4

if (data_cf65bc != 0)
    char* _Stream_4 = _Stream_1
    
    if (_Stream_4 != 0 && *_Stream_4 != 0)
        char* eax_5 = sub_63d4e0(&_Stream_1)
        int32_t temp0_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)
            _Stream_1 = &data_801800

int32_t var_38_1 = 0x147d098
var_8_1.b = 3
char* result_1
sub_63df30(&result_1, "%s/ExternalCode/lame/lame.exe")
var_8_1.b = 5
char* const _FileName = &data_801800
char* _FileName_4 = result_3

if (_FileName_4 != 0)
    _FileName = _FileName_4

_unlink(_FileName)
char* result_5 = result_3
char* const result_11 = &data_801800

if (result_5 != 0)
    result_11 = result_5

sub_69db50(result_11)
char* result_4
char* result_6 = result_4
char* const result_12 = &data_801800

if (result_6 != 0)
    result_12 = result_6

char* const result_20 = result_12
sub_63b5f0("converting to mp3: %s")
char* result_7 = result_3
char* const result_16 = &data_801800
char* const result_15 = &data_801800
char* const result_13 = &data_801800

if (result_7 != 0)
    result_16 = result_7

char* result_8 = result_4
char* const result_19 = result_16

if (result_8 != 0)
    result_15 = result_8

char* result_9 = result_1
char* const result_18 = result_15

if (result_9 != 0)
    result_13 = result_9

char* const result_17 = result_13
int32_t result_2
sub_63df30(&result_2, ""%s" "%s" "%s"")
var_8_1.b = 6
char* const result_14 = &data_801800
char* result_10 = result_2

if (result_10 != 0)
    result_14 = result_10

sub_69e0a0(result_14)
char* _FileName_5 = result_3
char* const _FileName_1 = &data_801800

if (_FileName_5 != 0)
    _FileName_1 = _FileName_5

FILE* _Stream_2 = fopen(_FileName_1, "rb")
_Stream_1 = _Stream_2
int32_t* ebx

if (_Stream_2 != 0)
    fseek(_Stream_2, 0, 2)
    int32_t eax_6 = ftell(_Stream_1)
    fseek(_Stream_1, 0, 0)
    char* const _Stream
    
    if (eax_6 != 0)
        arg2[4] = 5
        arg2[5] = eax_6
        int32_t _Buffer = sub_687730(eax_6)
        char* _Stream_3 = _Stream_1
        uint32_t _ElementSize = arg2[5]
        arg2[6] = _Buffer
        _Stream = _Stream_3
        
        if (fread(_Buffer, _ElementSize, 1, _Stream_3) != 1)
            goto label_732543
        
        arg2[1] = 0
        arg2[2] = 0
        *arg2 = 0
        arg2[3] = 0
        fclose(_Stream)
        char* _FileName_8 = result_3
        
        if (_FileName_8 != 0)
            _FileName_2 = _FileName_8
        
        _unlink(_FileName_2)
        ebx.b = 1
    else
        _Stream = _Stream_1
    label_732543:
        fclose(_Stream)
        char* _FileName_7 = result_3
        
        if (_FileName_7 != 0)
            _FileName_2 = _FileName_7
        
        _unlink(_FileName_2)
        ebx.b = 0
else
    char* _FileName_6 = result_4
    
    if (_FileName_6 != 0)
        _FileName_2 = _FileName_6
    
    char* const _FileName_3 = _FileName_2
    sub_63b5f0("failed to convert to mp3: %s")
    ebx.b = 0

var_8_1.b = 7
int32_t result

if (data_cf65bc != 0)
    result = result_2
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_2)
        int32_t temp1_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(result, *(result + 0xc) + 0x10)
            result_2 = &data_801800

var_8_1.b = 8

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp2_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(result, *(result + 0xc) + 0x10)
            result_1 = &data_801800

var_8_1.b = 9

if (data_cf65bc != 0)
    result = result_3
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_3)
        int32_t temp3_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp3_1 == 1)
            sub_64c080(result, *(result + 0xc) + 0x10)
            result_3 = &data_801800

int32_t var_8_2 = 0xa

if (data_cf65bc != 0)
    result = result_4
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_4)
        int32_t temp4_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp4_1 == 1)
            sub_64c080(result, *(result + 0xc) + 0x10)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
