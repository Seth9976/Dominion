// 函数: sub_6aa980
// 地址: 0x6aa980
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??$initialize_tmpfile_buffer_nolock@_W@@YA_NW4buffer_id@?A0x5b9a7937@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_50 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t var_44
__builtin_memset(&var_44, 0, 0x14)
char eax_3 = sub_6aacf0(&var_44, arg5)

if (eax_3 == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

int32_t eax_4 = var_44.d

if (eax_4 != 0)
    _aligned_free(eax_4)

int32_t var_8_1 = 0
char* const _FileName_2 = &data_801800
char* const _Stream
char* eax_6 = *sub_6c48e0(&_Stream, arg3)
char* ecx_4 = &data_801800

if (eax_6 != 0)
    ecx_4 = eax_6

char* var_54_2 = ecx_4
char* _FileName_7
sub_63df30(&_FileName_7, "%s.astc")
var_8_1.b = 3

if (data_cf65bc != 0)
    char* _Stream_2 = _Stream
    
    if (_Stream_2 != 0 && *_Stream_2 != 0)
        char* eax_7 = sub_63d4e0(&_Stream)
        int32_t temp0_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
            _Stream = &data_801800

int32_t var_54_3 = 0x147d098
var_8_1.b = 2
char* _FileName_11
sub_63df30(&_FileName_11, "%s/ExternalCode/astc/astcenc.exe")
var_8_1.b = 4
char* const _FileName = &data_801800
char* _FileName_3 = _FileName_7

if (_FileName_3 != 0)
    _FileName = _FileName_3

_unlink(_FileName)
char* _FileName_8 = _FileName_7
char* const _FileName_13 = &data_801800

if (_FileName_8 != 0)
    _FileName_13 = _FileName_8

sub_69db50(_FileName_13)
FILE* var_64 = arg5
sub_63b5f0("compressing to astc: %s")
char* _FileName_9 = _FileName_7
char* const _FileName_14 = &data_801800
char* const _FileName_18 = &data_801800

if (_FileName_9 != 0)
    _FileName_14 = _FileName_9

char* _FileName_16 = _FileName_11
char* const _FileName_15 = _FileName_14
FILE* var_70 = arg5

if (_FileName_16 != 0)
    _FileName_18 = _FileName_16

char* const _FileName_20 = _FileName_18
int32_t _FileName_12
sub_63df30(&_FileName_12, ""%s" -c "%s" "%s" 4x4 -medium -alphablend")
var_8_1.b = 5
char* const _FileName_19 = &data_801800
char* _FileName_17 = _FileName_12

if (_FileName_17 != 0)
    _FileName_19 = _FileName_17

sub_69e0a0(_FileName_19)
char* _FileName_4 = _FileName_7
char* const _FileName_1 = &data_801800

if (_FileName_4 != 0)
    _FileName_1 = _FileName_4

FILE* _Stream_1 = fopen(_FileName_1, "rb")
_Stream = _Stream_1
char var_11

if (_Stream_1 != 0)
    fseek(_Stream_1, 0, 2)
    int32_t _ElementCount = ftell(_Stream)
    fseek(_Stream, 0, 0)
    
    if (_ElementCount != 0)
        int32_t _Buffer = sub_687730(_ElementCount)
        uint32_t eax_8 = fread(_Buffer, 1, _ElementCount, _Stream)
        fclose(_Stream)
        char* _FileName_6 = _FileName_7
        
        if (_FileName_6 != 0)
            _FileName_2 = _FileName_6
        
        _unlink(_FileName_2)
        
        if (eax_8 == _ElementCount)
            *arg4 = var_44:4.d
            arg4[1] = var_44:8.d
            arg4[4] = 1
            arg4[0xf] = 1
            uint32_t* eax_11 = sub_687730(0x10)
            var_11 = 1
            *eax_11 = zx.o(0)
            arg4[0x12] = eax_11
            arg4[5] = 9
            arg4[6] = 0x15
            arg4[7] = 0
            *eax_11 = _ElementCount
            *(arg4[0x12] + 8) = _Buffer
            arg4[8] = *(arg2 + 8)
            arg4[9] = *(arg2 + 0xc)
        else
            FILE* var_54_7 = arg5
            sub_63b5f0("failed to read: %s")
            
            if (_Buffer != 0)
                _aligned_free(_Buffer)
            
            var_11 = 0
    else
        fclose(_Stream)
        char* _FileName_5 = _FileName_7
        
        if (_FileName_5 != 0)
            _FileName_2 = _FileName_5
        
        _unlink(_FileName_2)
        var_11 = 0
else
    FILE* var_54_4 = arg5
    sub_63b5f0("failed to convert to astc: %s")
    var_11 = 0

var_8_1.b = 6
int32_t _FileName_10

if (data_cf65bc != 0)
    _FileName_10 = _FileName_12
    
    if (_FileName_10 != 0 && *_FileName_10 != 0)
        _FileName_10 = sub_63d4e0(&_FileName_12)
        int32_t temp1_1 = *(_FileName_10 + 4)
        *(_FileName_10 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(_FileName_10, *(_FileName_10 + 0xc) + 0x10)
            _FileName_12 = &data_801800

var_8_1.b = 7

if (data_cf65bc != 0)
    _FileName_10 = _FileName_11
    
    if (_FileName_10 != 0 && *_FileName_10 != 0)
        _FileName_10 = sub_63d4e0(&_FileName_11)
        int32_t temp2_1 = *(_FileName_10 + 4)
        *(_FileName_10 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(_FileName_10, *(_FileName_10 + 0xc) + 0x10)
            _FileName_11 = &data_801800

int32_t var_8_2 = 8

if (data_cf65bc != 0)
    _FileName_10 = _FileName_7
    
    if (_FileName_10 != 0 && *_FileName_10 != 0)
        _FileName_10 = sub_63d4e0(&_FileName_7)
        int32_t temp3_1 = *(_FileName_10 + 4)
        *(_FileName_10 + 4) -= 1
        
        if (temp3_1 == 1)
            sub_64c080(_FileName_10, *(_FileName_10 + 0xc) + 0x10)

_FileName_10.b = var_11
fsbase->NtTib.ExceptionList = ExceptionList
return _FileName_10
