// 函数: sub_667870
// 地址: 0x667870
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?common_flush_all@@YAH_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1
void* var_14 = esi
int32_t* eax_3 = sub_64cc90(arg1)
int32_t edx = 0
int32_t edi = *eax_3

if (edi s<= 0)
    goto label_6678ce

int32_t* esi_1 = eax_3[2]

while (*esi_1 != 0x6f)
    edx += 1
    esi_1 = &esi_1[4]
    
    if (edx s>= edi)
        goto label_6678bd

char* _Str2_1
char* ebx_1

if (esi_1 == 0)
label_6678bd:
    esi = var_14
label_6678ce:
    ebx_1 = sub_667720(esi)
    char* _Str2_2
    
    if (*(esi + 0x1718) != 0)
        int32_t* eax_6 = sub_64cc90(esi)
        _Str2_2 = sub_6dd140(eax_6, eax_6, &data_8cae70, 0x6f)
    else
        _Str2_2 = nullptr
    
    _Str2_1 = _Str2_2
    
    if (ebx_1 == 0 || *ebx_1 == 0)
    label_667994:
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0
    
    int32_t* eax_7 = sub_64cc90(esi)
    int32_t* eax_8 = sub_6dd1e0(eax_7, eax_7, &data_8cae70, data_1724a80, 0x69)
    int32_t* var_1c_1 = eax_8
    
    if (eax_8 == 0)
        goto label_667994
    
    int32_t esi_2 = 0
    
    if (eax_8[2] s<= 0)
        goto label_667994
    
    int32_t edi_1 = 0
    
    while (_stricmp(*(*eax_8 + edi_1), ebx_1) != 0)
        eax_8 = var_1c_1
        esi_2 += 1
        edi_1 += 0x30
        
        if (esi_2 s>= eax_8[2])
            goto label_667994
    
    char* _Str2 = _Str2_1
    
    if (_Str2 != 0 && *_Str2 != 0 && _stricmp(ebx_1, _Str2) != 0)
        goto label_667994
else
    void* eax_5 = sub_6dd320(&data_8cae70, 0x6f)
    char const* const var_38
    int32_t var_34_1
    char const* const var_30_1
    char* ecx_1
    
    if (*(eax_5 + 0x10) != 8)
        var_30_1 = "AttribAsString"
        var_34_1 = 0xc6b
        var_38 = "C:\x\ax2017\Engine\UI2.cpp"
        ecx_1 = "AttribTagGetDefMap((AttribTable *)table, tag)->defType == DT_STRING"
    label_667a40:
        sub_63b870(eax_5, &data_801800, ecx_1, var_38, var_34_1, var_30_1)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    ebx_1 = esi_1[2]
    
    if (ebx_1 == 0)
        var_30_1 = "XString::XString"
        var_34_1 = 0x94
        var_38 = "C:\x\ax2017\Engine\xString.cpp"
        ecx_1 = &data_871e0c
        goto label_667a40

sub_63d720(&_Str2_1, ebx_1)
int32_t var_8_1 = 0
int32_t* result = sub_667680(var_14, &_Str2_1)
int32_t var_8_2 = 1

if (data_cf65bc != 0)
    char* _Str2_3 = _Str2_1
    
    if (_Str2_3 != 0 && *_Str2_3 != 0)
        char* eax_13 = sub_63d4e0(&_Str2_1)
        int32_t temp0_1 = *(eax_13 + 4)
        *(eax_13 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
