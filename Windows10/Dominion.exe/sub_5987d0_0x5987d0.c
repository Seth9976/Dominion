// 函数: sub_5987d0
// 地址: 0x5987d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?unlink_sources@?$propagator_block@V?$multi_link_registry@V?$ITarget@I@Concurrency@@@Concurrency@@V?$multi_link_registry@V?$ISource@I@Concurrency@@@2@V?$ordered_message_processor@I@2@@Concurrency@@MAEXXZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_4 = sub_598510(arg2, arg4)
void* eax_6 = sub_571b30(arg4, sub_5cf7e0())
char* arg_4
char* ebx = arg_4
uint32_t var_40 = ebx != 1
char* eax_7 = sub_693050(arg2, eax_4)
void* const eax_8 = &data_878254
char* const esi = &data_801800

if (arg2 != 0x11)
    eax_8 = &data_801800

if (ebx s> 1)
    char* var_40_1 = ebx
    sub_63df30(&arg_4, "%d")
    int32_t var_8_1 = 0
    char* eax_9 = arg_4
    
    if (eax_9 != 0)
        esi = eax_9
    
    sub_598670(eax_9, arg2, arg3, esi, 1, eax_7, eax_8)
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0)
        char* eax_10 = arg_4
        
        if (eax_10 != 0 && *eax_10 != 0)
            char* eax_11 = sub_63d4e0(&arg_4)
            int32_t temp0_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
    
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg3

int32_t esi_2 = arg5

if (esi_2 == 0)
    char* ecx_10 = *(eax_6 + 0x98)
    esi_2 = 2
    int32_t edx_6 = *(eax_6 + 0x9c)
    void* eax_14 = ecx_10 & 0x10000000
    int32_t edi_1 = edx_6
    
    if (arg2 != 3)
        if (eax_14 != 0)
            esi_2 = 1
        
        arg_4 = ecx_10
        
        if ((ecx_10 & &data_1000000) == 0)
            edi_1 = edx_6
        else
            esi_2 = 1
            arg_4 = ecx_10
        
        int32_t var_18_2 = edx_6
        char* ebx_3 = ecx_10
        
        if ((ecx_10 & 0x2000000) != 0)
            ebx_3 = arg_4
            esi_2 = 1
            var_18_2 = edi_1
        
        char* edi_5 = ecx_10
        
        if ((ecx_10 & 0x4000000) != 0)
            edx_6 = var_18_2
            esi_2 = 3
            edi_5 = ebx_3
        
        if ((ecx_10 & 0x40000000) != 0)
            esi_2 = 1
        
        if ((edi_5 & 0x400) != 0)
            esi_2 = 1
        
        if ((edi_5 & 0x8000000) != 0)
            esi_2 = 1
        
        if ((edi_5 & 0x20000000) != 0)
            esi_2 = 1
        
        if ((edx_6 & 0x800) != 0)
            esi_2 = 1
    else
        if (eax_14 != 0)
            esi_2 = 3
        
        arg_4 = ecx_10
        
        if ((ecx_10 & &data_1000000) == 0)
            edi_1 = edx_6
        else
            esi_2 = 3
            arg_4 = ecx_10
        
        int32_t var_18_1 = edx_6
        char* ebx_2 = ecx_10
        
        if ((ecx_10 & 0x2000000) != 0)
            ebx_2 = arg_4
            esi_2 = 1
            var_18_1 = edi_1
        
        char* edi_2 = ecx_10
        
        if ((ecx_10 & 0x4000000) != 0)
            edx_6 = var_18_1
            esi_2 = 3
            edi_2 = ebx_2
        
        if ((ecx_10 & 0x40000000) != 0)
            esi_2 = 1
        
        if ((edi_2 & 0x400) != 0)
            esi_2 = 2
        
        if ((edi_2 & 0x8000000) != 0)
            esi_2 = 1
        
        if ((edi_2 & 0x20000000) != 0)
            esi_2 = 3
        
        if ((edx_6 & 0x800) != 0)
            esi_2 = 3
    
    if ((edx_6 & 0x100000) != 0)
        esi_2 = 1
    
    if ((edx_6 & 0x200000) != 0)
        esi_2 = 1

void* eax_51 = sub_693100(esi_2, 2, 0)
sub_598670(eax_51, arg2, arg3, eax_51, esi_2, eax_7, eax_8)
fsbase->NtTib.ExceptionList = ExceptionList
return arg3
