// 函数: sub_620b70
// 地址: 0x620b70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$parse_floating_point_possible_nan@DV?$input_adapter_character_source@V?$stream_input_adapter@D@__crt_stdio_input@@@__crt_strtox@@_K@__crt_strtox@@YA?AW4floating_point_parse_result@0@AADAAV?$input_adapter_character_source@V?$stream_input_adapter@D@__crt_stdio_input@@@0@_K@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_20 = arg1
int32_t var_1c = 0
*arg1 = &data_801800
int32_t var_8_1 = 0
int32_t var_1c_1 = 1
char* var_14

if (*arg2 != 1)
    void* eax_4 = sub_4e3950(*(arg2 + 4))
    sub_60dd30(eax_4, eax_4, &var_14, 0xffffffff)
    int32_t var_8_4 = 3
    var_8_4.b = 4
    char* var_18
    sub_63d850(arg1, 
        sub_4d48c0(&var_14, "dom_campaign_expansion_campaign", &var_18, "[exp]", &var_14))
    var_8_4.b = 5
    
    if (data_cf65bc != 0)
        char* eax_7 = var_18
        
        if (eax_7 != 0 && *eax_7 != 0)
            char* eax_8 = sub_63d4e0(&var_18)
            int32_t temp0_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
    
    int32_t var_8_5 = 6
else
    int32_t var_8_2 = 1
    sub_63d850(arg1, 
        public: struct `protected: int __thiscall GSI1::readHash(unsigned short, long, long)'::`2'::FileSymbolInfo * __thiscall std::vector<struct `protected: int __thiscall GSI1::readHash(unsigned short, long, long)'::`2'::FileSymbolInfo, class std::allocator<struct `protected: int __thiscall GSI1::readHash(unsigned short, long, long)'::`2'::FileSymbolInfo>>::_Emplace_reallocate<struct `protected: int __thiscall GSI1::readHash(unsigned short, long, long)'::`2'::FileSymbolInfo>(struct `protected: int __thiscall GSI1::readHash(unsigned short, long, long)'::`2'::FileSymbolInfo *const, struct `protected: int __thiscall GSI1::readHash(unsigned short, long, long)'::`2'::FileSymbolInfo &&)(
            &var_14, arg2))
    int32_t var_8_3 = 2

if (data_cf65bc != 0)
    char* eax_9 = var_14
    
    if (eax_9 != 0 && *eax_9 != 0)
        char* eax_10 = sub_63d4e0(&var_14)
        int32_t temp1_1 = *(eax_10 + 4)
        *(eax_10 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
