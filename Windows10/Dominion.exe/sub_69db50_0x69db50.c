// 函数: sub_69db50
// 地址: 0x69db50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?find_next_state@?$output_processor@_WV?$console_output_adapter@_W@__crt_stdio_output@@V?$format_validation_base@_WV?$console_output_adapter@_W@__crt_stdio_output@@@2@@__crt_stdio_output@@ABE?AW4state@2@_WW432@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* _Str_1 = arg1
char* _Str_2 = _Str_1
char eax_3 = *_Str_1
char* _Str = _Str_1

if (eax_3 == 0x2f || eax_3 == 0x5c)
    _Str = &_Str_1[1]

uint32_t result = strcspn(_Str, "/\")
void* edi = &_Str[result]

if (*edi != 0)
    char* const ebx_1 = &data_801800
    
    while (true)
        uint32_t eax_5 = edi - _Str_1
        
        if (eax_5 s<= 0)
            sub_63b870(eax_5, &data_801800, "len > 0", "C:\x\ax2017\Engine\Definition.cpp", 0x45b, 
                "MakeDirectoriesInFullPath")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        char* const var_14 = &data_801800
        int32_t var_8_1 = 0
        sub_63db30(&var_14, _Str_1, eax_5)
        char* esi = var_14
        char* const lpFileName = &data_801800
        
        if (esi != 0)
            lpFileName = esi
        
        if (GetFileAttributesA(lpFileName) != 0xffffffff)
            int32_t var_8_3 = 1
        else
            char* _Path = &data_801800
            
            if (esi != 0)
                _Path = esi
            
            if (_mkdir(_Path) == 0xffffffff)
                if (esi != 0)
                    ebx_1 = esi
                
                char* const var_2c_4 = ebx_1
                result = sub_63b5f0("Failed to create directory '%s'")
                int32_t var_8_5 = 2
                
                if (data_cf65bc != 0 && esi != 0 && *esi != 0)
                    result = sub_63d4e0(&var_14)
                    int32_t temp1_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp1_1 == 1)
                        result = sub_64c080(result, *(result + 0xc) + 0x10)
                
                break
            
            int32_t var_8_2 = 3
        
        if (data_cf65bc != 0 && esi != 0 && *esi != 0)
            char* eax_8 = sub_63d4e0(&var_14)
            int32_t temp0_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
                var_14 = &data_801800
        
        int32_t var_8_4 = 0xffffffff
        result = strcspn(edi + 1, "/\")
        edi = edi + 1 + result
        
        if (*edi == 0)
            break
        
        _Str_1 = _Str_2

fsbase->NtTib.ExceptionList = ExceptionList
return result
