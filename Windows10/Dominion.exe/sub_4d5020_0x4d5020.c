// 函数: sub_4d5020
// 地址: 0x4d5020
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?propagate_message@?$single_assignment@I@Concurrency@@MAE?AW4message_status@2@PAV?$message@I@2@PAV?$ISource@I@2@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = arg2
int32_t* i_5 = arg3
int32_t* i_2 = i_5

if (i_5 != arg2)
    int32_t* i_3 = &i_5[8]
    
    while (i_3 != arg2)
        int32_t* i_1 = i_3
        int32_t var_40 = *i_3
        int32_t eax_4 = i_3[1]
        char* eax_5 = i_3[2]
        char* var_38 = eax_5
        
        if (eax_5 != 0 && *eax_5 != 0)
            char* eax_6 = sub_63d4e0(&var_38)
            *(eax_6 + 4) += 1
        
        int32_t eax_7 = i_3[3]
        int32_t ecx_1 = i_3[7]
        int32_t eax_8 = i_3[4]
        int32_t eax_9 = i_3[6]
        int32_t var_8_1 = 0
        
        if (arg4(&var_40, i_5, eax_2) == 0)
            void* i_4 = &i_3[-8]
            
            if (arg4(&var_40, i_4) != 0)
                char i
                
                do
                    *i_1 = *i_4
                    i_1[1] = *(i_4 + 4)
                    sub_63d850(&i_1[2], i_4 + 8)
                    i_1[3] = *(i_4 + 0xc)
                    i_1[4] = *(i_4 + 0x10)
                    int32_t ecx_5 = *(i_4 + 0x1c)
                    i_1[6] = *(i_4 + 0x18)
                    i_1[7] = ecx_5
                    i_1 = i_4
                    i_4 -= 0x20
                    i = arg4(&var_40, i_4)
                while (i != 0)
        else
            i_1 = i_2
            
            if (i_3 != i_1)
                void* esi = &i_3[0xa]
                
                do
                    int32_t eax_11 = *(esi - 0x48)
                    esi -= 0x20
                    *(esi - 8) = eax_11
                    *(esi - 4) = *(esi - 0x24)
                    sub_63d850(esi, esi - 0x20)
                    *(esi + 4) = *(esi - 0x1c)
                    *(esi + 8) = *(esi - 0x18)
                    int32_t ecx_3 = *(esi - 0xc)
                    *(esi + 0x10) = *(esi - 0x10)
                    *(esi + 0x14) = ecx_3
                while (esi - 0x28 != i_1)
        
        *i_1 = var_40
        i_1[1] = eax_4
        sub_63d850(&i_1[2], &var_38)
        i_1[3] = eax_7
        i_1[4] = eax_8
        i_1[7] = ecx_1
        i_1[6] = eax_9
        int32_t var_8_2 = 1
        
        if (data_cf65bc != 0)
            char* eax_30 = var_38
            
            if (eax_30 != 0 && *eax_30 != 0)
                char* eax_31 = sub_63d4e0(&var_38)
                int32_t temp0_1 = *(eax_31 + 4)
                *(eax_31 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_31, *(eax_31 + 0xc) + 0x10)
        
        arg2 = var_1c
        i_3 = &i_3[8]
        i_5 = i_2
        int32_t var_8_3 = 0xffffffff

fsbase->NtTib.ExceptionList = ExceptionList
return arg2
