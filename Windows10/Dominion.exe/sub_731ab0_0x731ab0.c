// 函数: sub_731ab0
// 地址: 0x731ab0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_77298d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t _Size = 0x10
int32_t var_8_1 = 0
int32_t* eax_3 = _aligned_malloc(0x40, _Size)

if (eax_3 == 0)
    _Size = "XMalloc"
    sub_63b870(eax_3, &data_801800, "pBuffer", "C:\x\ax2017\Engine\xMemory.cpp", 0x57, _Size)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* edx = data_1777520
*arg2 = eax_3
sub_69ca80(eax_3, edx)
char* ecx_1 = arg1
int32_t eax_5

do
    eax_5.b = *ecx_1
    ecx_1 = &ecx_1[1]
while (eax_5.b != 0)

if (arg1 == 0)
    _Size = "XString::XString"
    sub_63b870(eax_5, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x9a, _Size)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char* const var_28 = &data_801800
_Size = ecx_1 - &ecx_1[1] - 4
sub_63db30(&var_28, arg1, _Size)
var_8_1.b = 1
char* const _Size_2
sub_63d720(&_Size_2, ".texture")
var_8_1.b = 2
_Size = &_Size_2
char* result_1
sub_63dde0(&var_28, &result_1, _Size)
var_8_1.b = 5

if (data_cf65bc != 0)
    char* _Size_7 = _Size_2
    
    if (_Size_7 != 0 && *_Size_7 != 0)
        char* eax_7 = sub_63d4e0(&_Size_2)
        int32_t temp0_1 = *(eax_7 + 4)
        *(eax_7 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
            _Size_2 = &data_801800

var_8_1.b = 4
uint32_t* edi = *(data_147b07c + 0x7c)
int32_t* eax_9 = sub_6a2fa0()
eax_9[4] = edi
_Size = *edi
sub_63d8d0(eax_9, _Size)
int128_t* _Size_8 = sub_687730(0x10)
int128_t* _Size_1 = _Size_8
*_Size_8 = zx.o(0)
*(_Size_8 + 0xc) = edi
*(_Size_8 + 4) = eax_9
int32_t* eax_10 = sub_6a4880(eax_9, edi)
int32_t** _Size_5 = _Size_1
_Size = _Size_5
*_Size_5 = eax_10
uint32_t result_2
uint32_t _Size_3 = result_2
_Size = _Size_3

if (_Size_3 != 0 && *_Size_3 != 0)
    char* eax_11 = sub_63d4e0(&_Size)
    _Size_5 = _Size_1
    *(eax_11 + 4) += 1

char* const esi_2 = var_28
char* const eax_12 = &data_801800

if (esi_2 != 0)
    eax_12 = esi_2

char* result = sub_6ac740(eax_12, _Size_5)
char var_11

if (result.b != 0)
    _Size = _Size_1
    char* _Size_9 = sub_69f810(_Size)
    _Size_2 = _Size_9
    char* _Size_13
    
    if (_Size_9 != 0)
        if (*(_Size_9 + 4) != 3)
            _Size = "DefAutoLock::DefAutoLock"
            sub_63b870(_Size_9, &data_801800, "assetPtr && assetPtr->assetType == assetType", 
                "C:\x\ax2017\Engine\DefLoad.h", 0x19, _Size)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        _Size_13 = _Size_9
    else
        _Size = 3
        sub_69fd50(_Size_9, "!Null\Null", &_Size_1, _Size)
        var_8_1.b = 6
        int128_t* _Size_12 = &data_801800
        int128_t* _Size_10 = _Size_1
        
        if (_Size_10 != 0)
            _Size_12 = _Size_10
        
        _Size_9 = sub_69f030(_Size_12, 3)
        _Size_13 = _Size_9
        var_8_1.b = 7
        
        if (data_cf65bc != 0)
            _Size_9 = _Size_1
            
            if (_Size_9 != 0 && *_Size_9 != 0)
                _Size_9 = sub_63d4e0(&_Size_1)
                int32_t temp3_1 = *(_Size_9 + 4)
                *(_Size_9 + 4) -= 1
                
                if (temp3_1 == 1)
                    _Size_9 = sub_64c080(_Size_9, *(_Size_9 + 0xc) + 0x10)
                    _Size_1 = &data_801800
        
        var_8_1.b = 4
    
    if (*_Size_13 == 0)
        _Size = 1
        sub_69f4a0(_Size_9, 0, _Size_13, _Size.b)
    
    int32_t ecx_17 = *(_Size_13 + 0x1c)
    *(_Size_13 + 0x1c) = ecx_17 + 1
    int32_t eax_18 = *(***_Size_13 + 0x1c)
    *(_Size_13 + 0x1c) = ecx_17
    char* const edi_1 = &data_801800
    int32_t _Size_11
    
    if (eax_18 != 1)
        _Size = _Size_2
        char* const edx_9 = &data_801800
        
        if (esi_2 != 0)
            edx_9 = esi_2
        
        _Size_11 = sub_730240(eax_18, edx_9, eax_3)
        _Size_2 = _Size_11
    else
        _Size_11 = _Size_2
    
    struct _EXCEPTION_REGISTRATION_RECORD** _Size_4 = sub_6a0f60(_Size_11)
    int32_t* ecx_20 = data_147b070
    _Size = _Size_4
    (*(*ecx_20 + 0x24))(_Size)
    _Size = _Size_2
    int32_t* edx_11 = &data_801800
    
    if (esi_2 != 0)
        edx_11 = esi_2
    
    eax_3[0xa] = 0
    int32_t eax_20 = sub_7303e0(eax_3, edx_11, eax_3)
    char* const _Size_6 = _Size_2
    
    if (esi_2 != 0)
        edi_1 = esi_2
    
    eax_3[0xc] = eax_20
    var_11 = 1
    eax_3[0xe] = sub_7311b0(eax_20, edi_1, eax_3, _Size_6)
else
    var_11 = result.b

var_8_1.b = 8

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp1_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(result, *(result + 0xc) + 0x10)
            result_1 = &data_801800

var_8_1.b = 9

if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
    result = sub_63d4e0(&var_28)
    int32_t temp2_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(result, *(result + 0xc) + 0x10)

int32_t var_8_2 = 0xa

if (data_cf65bc != 0)
    result = result_2
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_2)
        int32_t temp4_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp4_1 == 1)
            sub_64c080(result, *(result + 0xc) + 0x10)

result.b = var_11
fsbase->NtTib.ExceptionList = ExceptionList
return result
