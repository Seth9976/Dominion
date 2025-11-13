// 函数: sub_53c660
// 地址: 0x53c660
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76632b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_cdc = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
uint32_t result

if (sub_563820(0x100, 4) == 1)
label_53c7c2:
    result = 0
else
    int32_t i = 0
    
    if (*(*(sub_573400() + 4) + 0xd38) s> 0)
        void* eax_16
        
        do
            if (i != *(sub_573400() + 0xc))
                int32_t var_c9c = 0x100
                void* eax_7 = sub_573400()
                void var_c98
                int32_t eax_8 = sub_590990(eax_7, i, *(eax_7 + 4), 0x462, &var_c98)
                struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_49d75f4efc8fd7809ac3f7ea885f7ade>,bool,enum CardID>::VTable
                    * const var_ccc = &std::_Func_impl_no_alloc<class <lambda_49d75f4efc8fd7809ac3f7ea885f7ade>,bool,enum CardID>::`vftable'{for `std::_Func_base<bool,enum CardID>'}
                int32_t var_18_1 = eax_8
                int32_t* var_cc8_1 = &var_c9c
                struct std::_Func_base<bool,enum CardID>::std::_Func_impl_no_alloc<class <lambda_49d75f4efc8fd7809ac3f7ea885f7ade>,bool,enum CardID>::VTable
                    * const* var_ca8_1 = &var_ccc
                int32_t var_8_1 = 0
                void var_ca4
                void* var_ce0_2 = &var_ca4
                int32_t var_ce4_2 = 0
                void* eax_9 = &var_c98
                void var_d0c
                void* var_ca0_1 = &var_d0c
                int32_t var_ce8_1 = 0
                var_8_1.b = 2
                
                if (var_ca8_1 != 0)
                    int32_t var_ce8_2 = (*var_ca8_1)->vFunc_0(&var_d0c)
                    eax_9 = &var_c98
                
                var_8_1.b = 0
                int32_t eax_12 = GSI1::OffForSym(eax_9, eax_8, &var_c98)
                int32_t var_8_2 = 0xffffffff
                
                if (var_ca8_1 != 0)
                    (*var_ca8_1)->vFunc_4(var_ca8_1 != &var_ccc)
                    int32_t var_ca8_2 = 0
                
                if (eax_12 != 0)
                    goto label_53c7c2
            
            i += 1
            eax_16 = *(sub_573400() + 4)
        while (i s< *(eax_16 + 0xd38))
    
    result = 1

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
