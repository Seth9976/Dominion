// 函数: sub_6a7ad0
// 地址: 0x6a7ad0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76f91d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result_1
int32_t* result_3 = result_1
char* esi = arg4
char* _Size = arg3
result_3[8] = 0

if (esi == 0)
    sub_63b870(&ExceptionList, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
        "XString::XString")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

sub_63d720(&_Size, esi)
sub_6a7580(&result_1)
int32_t var_8_1 = 0
char* _Size_1 = *result_3
int32_t* eax_12

if (_Size_1 == 0 || *_Size_1 == 0)
    int32_t eax_13 = data_147ded8
    int32_t var_20 = 0
    int32_t var_1c_1 = 0
    char* var_14_1 = esi
    int128_t* eax_14
    
    if (eax_13 == 0)
        _Size = 0x10
        eax_14 = malloc(_Size)
    else
        _Size = 0x30
        eax_14 = eax_13(0x10, 
            "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\AttachmentLoader.c", _Size, eax_2)
    
    if (eax_14 != 0)
        *eax_14 = zx.o(0)
    
    *(eax_14 + 0xc) = sub_4bfb50
    *eax_14 = sub_6a7920
    *(eax_14 + 4) = sub_6a7a50
    *(eax_14 + 8) = sub_6a7a90
    
    if (result_3[4] == 0)
        _Size = "SpineLoad"
        sub_63b870(eax_14, &data_801800, "Halt", "C:\x\ax2017\Engine\Spine.cpp", 0x136, _Size)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    eax_12 = sub_708770(&var_20)
else
    char* _Size_2 = _Size_1
    char i
    
    do
        i = *_Size_2
        _Size_2 = &_Size_2[1]
    while (i != 0)
    char* result_2 = result_1
    char* const result_4 = &data_801800
    _Size = _Size_1
    
    if (result_2 != 0)
        result_4 = result_2
    
    int32_t** eax_4 = sub_707dc0(result_2, _Size_2 - &_Size_2[1], _Size_1, result_4)
    result_3[8] = eax_4
    
    if (result_3[4] == 0)
        _Size = "SpineLoad"
        sub_63b870(eax_4, &data_801800, "Halt", "C:\x\ax2017\Engine\Spine.cpp", 0x123, _Size)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t ecx_2 = data_147ded8
    int128_t* eax_5
    
    if (ecx_2 == 0)
        _Size = 0x10
        eax_5 = malloc(_Size)
    else
        _Size = 0x60
        eax_5 = ecx_2(0x10, 
            "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\AtlasAttachmentLoader.c", _Size, 
            eax_2)
    
    if (eax_5 != 0)
        *eax_5 = zx.o(0)
    
    int32_t eax_6 = data_147ded8
    int128_t* eax_7
    
    if (eax_6 == 0)
        _Size = 0x10
        eax_7 = malloc(_Size)
    else
        _Size = 0x30
        eax_7 = eax_6(0x10, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\AttachmentLoader.c", 
            _Size, eax_2)
    
    if (eax_7 != 0)
        *eax_7 = zx.o(0)
    
    *(eax_5 + 8) = eax_7
    *(eax_7 + 0xc) = sub_707af0
    **(eax_5 + 8) = sub_7528b0
    *(*(eax_5 + 8) + 4) = 0
    *(*(eax_5 + 8) + 8) = 0
    *(eax_5 + 0xc) = eax_4
    eax_12 = sub_708770(eax_5)
    eax_12[3] = 1

_Size = result_3[6]
int32_t* eax_18 = sub_70d9f0(eax_12, result_3[4], eax_12, _Size)
result_3[0xa] = eax_18
int32_t eax_19 = data_147ded8
int32_t** result

if (eax_19 == 0)
    _Size = 0xc
    result = malloc(_Size)
else
    _Size = 0x49
    result = eax_19(0xc, "C:\x\ax2017\Engine\ExternalCode\spine-c\src\spine\AnimationStateData.c", 
        _Size, eax_2)

if (result != 0)
    result[2] = 0

*result = eax_18
result_3[0xc] = result
result[1] = 0x3dcccccd
int32_t var_8_2 = 1

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp0_1 = result[1]
        result[1] -= 1
        
        if (temp0_1 == 1)
            result = sub_64c080(result, &result[3][4])

fsbase->NtTib.ExceptionList = ExceptionList
return result
