// 函数: sub_6384d0
// 地址: 0x6384d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?realloc_dbg_nolock@@YAPAXQAXQAIHQBDH_N@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = arg2
int32_t* i_5 = arg3
int32_t* i_2 = i_5

if (i_5 != arg2)
    int32_t* i_4 = &i_5[3]
    
    while (i_4 != arg2)
        int32_t* i_1 = i_4
        int32_t var_28 = *i_4
        char* eax_4 = i_4[1]
        char* var_24 = eax_4
        
        if (eax_4 != 0 && *eax_4 != 0)
            char* eax_5 = sub_63d4e0(&var_24)
            *(eax_5 + 4) += 1
        
        int32_t eax_6 = i_4[2]
        int32_t var_8_1 = 0
        
        if (arg4(&var_28, i_5, eax_2) == 0)
            void* i_3 = &i_4[-3]
            
            if (arg4(&var_28, i_3) != 0)
                char i
                
                do
                    *i_1 = *i_3
                    sub_63d850(&i_1[1], i_3 + 4)
                    i_1[2] = *(i_3 + 8)
                    i_1 = i_3
                    i_3 -= 0xc
                    i = arg4(&var_28, i_3)
                while (i != 0)
        else
            i_1 = i_2
            
            if (i_4 != i_1)
                void* esi = &i_4[5]
                
                do
                    int32_t eax_8 = *(esi - 0x20)
                    esi -= 0xc
                    *(esi - 8) = eax_8
                    sub_63d850(esi - 4, esi - 0x10)
                    *esi = *(esi - 0xc)
                while (esi - 0x14 != i_1)
        
        *i_1 = var_28
        sub_63d850(&i_1[1], &var_24)
        i_1[2] = eax_6
        int32_t var_8_2 = 1
        
        if (data_cf65bc != 0)
            char* eax_18 = var_24
            
            if (eax_18 != 0 && *eax_18 != 0)
                char* eax_19 = sub_63d4e0(&var_24)
                int32_t temp0_1 = *(eax_19 + 4)
                *(eax_19 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)
                    var_24 = &data_801800
        
        arg2 = var_18
        i_4 = &i_4[3]
        i_5 = i_2
        int32_t var_8_3 = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
return arg2
