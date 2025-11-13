// 函数: sub_5fd670
// 地址: 0x5fd670
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76a73d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*(sub_64e7a0(arg1) + 0x18bc) = sub_5fd110
*(sub_64e7a0(arg1) + 0x18c0) = sub_5fd0b0
int32_t eax_5 = data_be4a3c
void** esi

if (eax_5 == 0 || eax_5 == 1)
    esi = &data_be4a44
else
    if (eax_5 != 2)
        sub_63b870(eax_5 - 2, &data_801800, "Halt", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
            0x8da9, "DomSetSaveUpdate")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    esi = &data_be4a50

uint32_t eax_9 = sub_64e7a0(arg1)
sub_665db0(eax_9, esi, eax_9, 0x3f800000, 0xffffffff, 0)
char* const _Str2_1 = &data_801800
int32_t var_8_1 = 0

if (sub_67c0d0(arg1, &_Str2_1) == 0)
    sub_63d850(&_Str2_1, &data_be4a38)

int32_t var_34 = 0xffffffff
sub_666380(&_Str2_1, &data_be4a68, arg1, &_Str2_1)
int32_t ecx_7 = data_be4a40
char* const edx_2

if (ecx_7 s>= 0)
    edx_2 = *sub_5fd600(ecx_7)

if (ecx_7 s< 0 || edx_2 == 0)
    edx_2 = &data_801800

char* var_1c
char* i = sub_63d720(&var_1c, edx_2)
char* const _Str2 = _Str2_1
char* edi = var_1c
int32_t* ebx

if (_Str2 == 0 || *_Str2 == 0)
label_5fd810:
    ebx.b = 1
else
    char* const eax_13 = &data_801800
    char* const _Str2_2 = _Str2
    
    if (edi != 0)
        eax_13 = edi
    
    while (true)
        char edx_3 = *_Str2_2
        char temp3_1 = *eax_13
        bool c_1 = edx_3 u< temp3_1
        
        if (edx_3 == temp3_1)
            if (edx_3 == 0)
                i = nullptr
                break
            
            edx_3 = _Str2_2[1]
            char temp5_1 = eax_13[1]
            c_1 = edx_3 u< temp5_1
            
            if (edx_3 == temp5_1)
                _Str2_2 = &_Str2_2[2]
                eax_13 = &eax_13[2]
                
                if (edx_3 != 0)
                    continue
                
                i = nullptr
                break
        
        i = sbb.d(eax_13, eax_13, c_1) | 1
        break
    
    if (i != 0)
        char* i_2 = nullptr
        ebx = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x6edc
        i = &ebx[0xc0]
        int32_t* i_1 = i
        
        if (ebx[0xc0] s> 0)
            do
                char* _Str1_1 = *ebx
                char* _Str1 = &data_801800
                
                if (_Str1_1 != 0)
                    _Str1 = _Str1_1
                
                i = _stricmp(_Str1, _Str2)
                
                if (i == 0)
                    goto label_5fd810
                
                ebx = &ebx[3]
                i = &i_2[1]
                i_2 = i
            while (i s< *i_1)
        
        ebx.b = 0
    else
        ebx.b = 0

var_8_1.b = 1

if (data_cf65bc != 0 && edi != 0 && *edi != 0)
    i = sub_63d4e0(&var_1c)
    int32_t temp4_1 = *(i + 4)
    *(i + 4) -= 1
    
    if (temp4_1 == 1)
        i = sub_64c080(i, *(i + 0xc) + 0x10)

var_8_1.b = 0

if (ebx.b != 0)
    uint32_t eax_17 = sub_64e7a0(arg1)
    i = sub_665db0(eax_17, &data_be4a5c, eax_17, 0x3f800000, 0xffffffff, 0)

int32_t var_8_2 = 2

if (data_cf65bc != 0 && _Str2 != 0 && *_Str2 != 0)
    i = sub_63d4e0(&_Str2_1)
    int32_t temp6_1 = *(i + 4)
    *(i + 4) -= 1
    
    if (temp6_1 == 1)
        i = sub_64c080(i, *(i + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return i
