// 函数: sub_62e860
// 地址: 0x62e860
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??$construct_command_line@_W@@YAHQBQB_WQAPA_W@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* ebx
char* var_34 = ebx
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_18 = arg2

if (arg3 == 0)
    sub_63b870(&ExceptionList, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
        "XString::XString")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char* _Destination_1
sub_63d720(&_Destination_1, arg3)
int32_t var_8_1 = 0
char* _Destination = _Destination_1
char* _Str1_1 = strtok(_Destination, &data_807234)
char* result

if (_Str1_1 == 0)
label_62e96d:
    ebx.b = 0
else
    while (true)
        void* eax_4 = strchr(_Str1_1, 0x3a)
        char* _Str1 = _Str1_1
        void* _MaxCount
        void* var_1c_1
        
        if (eax_4 == 0)
            do
                eax_4.b = *_Str1_1
                _Str1_1 = &_Str1_1[1]
            while (eax_4.b != 0)
            
            ebx = nullptr
            _MaxCount = _Str1_1 - &_Str1_1[1]
            var_1c_1 = nullptr
            sub_63e5a0(&_Str1)
        else
            _MaxCount = eax_4 - _Str1_1
            char* ecx_3 = eax_4 + 1
            char* var_30 = ecx_3
            
            do
                eax_4.b = *ecx_3
                ecx_3 = &ecx_3[1]
            while (eax_4.b != 0)
            
            sub_63e5a0(&_Str1)
            sub_63e5a0(&var_30)
            ebx = var_30
            var_1c_1 = ecx_3 - &ecx_3[1]
        
        char* _Str2 = var_18
        char* _Str2_1 = _Str2
        char i
        
        do
            i = *_Str2_1
            _Str2_1 = &_Str2_1[1]
        while (i != 0)
        
        if (_MaxCount == _Str2_1 - &_Str2_1[1] && strncmp(_Str1, _Str2, _MaxCount) == 0)
            if (arg4 == 0)
                ebx.b = 1
            else if (ebx == 0)
                result = *arg4
                
                if (result != 0 && result != &data_801800)
                    if (data_cf65bc != 0 && *result != 0)
                        result = sub_63d4e0(arg4)
                        int32_t temp2_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp2_1 == 1)
                            sub_64c080(result, *(result + 0xc) + 0x10)
                    
                    *arg4 = &data_801800
                
                ebx.b = 1
            else
                var_18 = &data_801800
                sub_63db30(&var_18, ebx, var_1c_1)
                var_8_1.b = 1
                sub_63d850(arg4, &var_18)
                var_8_1.b = 2
                
                if (data_cf65bc == 0)
                    ebx.b = 1
                else
                    result = var_18
                    
                    if (result == 0 || *result == 0)
                        ebx.b = 1
                    else
                        result = sub_63d4e0(&var_18)
                        int32_t temp1_1 = *(result + 4)
                        *(result + 4) -= 1
                        
                        if (temp1_1 != 1)
                            ebx.b = 1
                        else
                            sub_64c080(result, *(result + 0xc) + 0x10)
                            ebx.b = 1
            
            break
        
        _Str1_1 = strtok(nullptr, &data_807234)
        
        if (_Str1_1 == 0)
            goto label_62e96d

int32_t var_8_2 = 3

if (data_cf65bc != 0 && _Destination != 0 && *_Destination != 0)
    result = sub_63d4e0(&_Destination_1)
    int32_t temp0_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp0_1 == 1)
        sub_64c080(result, *(result + 0xc) + 0x10)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
