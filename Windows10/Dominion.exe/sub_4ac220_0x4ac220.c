// 函数: sub_4ac220
// 地址: 0x4ac220
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?GetResourceForNewSubscription@SchedulerProxy@details@Concurrency@@QAEPAVExecutionResource@23@PAV423@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg1
int32_t* var_18 = ebx

if (*ebx != 0)
    int32_t eax_3 = 0
    int32_t var_14_1 = 0
    int32_t edx_3
    
    do
        int32_t* eax_4 = eax_3 << 2
        int32_t* i = *(eax_4 + *ebx)
        
        if (i != 0)
            do
                int32_t* i_1 = i
                i = i[6]
                int32_t var_8_1 = 0
                
                if (data_cf65bc != 0)
                    char* eax_5 = i_1[4]
                    
                    if (eax_5 != 0 && *eax_5 != 0)
                        char* eax_6 = sub_63d4e0(&i_1[4])
                        int32_t temp0_1 = *(eax_6 + 4)
                        *(eax_6 + 4) -= 1
                        
                        if (temp0_1 == 1)
                            sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)
                            i_1[4] = &data_801800
                
                int32_t var_8_2 = 0xffffffff
                sub_64c080(i_1, 0x1c)
            while (i != 0)
            
            ebx = var_18
        
        *(eax_4 + *ebx) = 0
        edx_3 = ebx[1]
        eax_3 = var_14_1 + 1
        var_14_1 = eax_3
    while (eax_3 u<= edx_3)
    
    int32_t* ecx_4 = *ebx
    ebx[2] = 0
    result = sub_64c080(ecx_4, (edx_3 << 2) + 4)
    *ebx = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
