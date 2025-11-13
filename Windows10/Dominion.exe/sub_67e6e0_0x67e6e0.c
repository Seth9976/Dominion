// 函数: sub_67e6e0
// 地址: 0x67e6e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??_EGlobalCore@details@Concurrency@@QAEPAXI@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0

if (data_cf65bc != 0)
    char* eax_3 = *(arg1 + 0x1720)
    
    if (eax_3 != 0 && *eax_3 != 0)
        char* eax_4 = sub_63d4e0(arg1 + 0x1720)
        int32_t temp0_1 = *(eax_4 + 4)
        *(eax_4 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)
            *(arg1 + 0x1720) = &data_801800

int32_t var_8_2 = 1

if (data_cf65bc != 0)
    int32_t* ecx_2 = *(arg1 + 0x1708)
    
    if (ecx_2 != 0)
        int32_t eax_5 = *(arg1 + 0x1710)
        *(arg1 + 0x170c) = 0
        sub_64c080(ecx_2, eax_5 * 0x18)

int32_t var_8_3 = 2

if (data_cf65bc != 0)
    int32_t* ecx_3 = *(arg1 + 0x16fc)
    
    if (ecx_3 != 0)
        int32_t eax_6 = *(arg1 + 0x1704)
        *(arg1 + 0x1700) = 0
        sub_64c080(ecx_3, eax_6 * 0x1c)

int32_t var_8_4 = 3

if (data_cf65bc != 0)
    int32_t* ecx_4 = *(arg1 + 0x16f0)
    
    if (ecx_4 != 0)
        int32_t eax_7 = *(arg1 + 0x16f8)
        *(arg1 + 0x16f4) = 0
        sub_64c080(ecx_4, eax_7 * 0x1c)

int32_t var_8_5 = 4

if (data_cf65bc != 0)
    char* eax_8 = *(arg1 + 0x15fc)
    
    if (eax_8 != 0 && *eax_8 != 0)
        char* eax_9 = sub_63d4e0(arg1 + 0x15fc)
        int32_t temp1_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
            *(arg1 + 0x15fc) = &data_801800

int32_t var_8_6 = 5
int32_t* ecx_7 = *(arg1 + 0x15e8)

if (ecx_7 != 0)
    sub_64c080(ecx_7, *(arg1 + 0x15ec) - ecx_7)

*(arg1 + 0x15e8) = 0
*(arg1 + 0x15ec) = 0
*(arg1 + 0x15f0) = 0
int32_t var_8_7 = 6

if (data_cf65bc != 0)
    char* eax_10 = *(arg1 + 0x15e0)
    
    if (eax_10 != 0 && *eax_10 != 0)
        char* eax_11 = sub_63d4e0(arg1 + 0x15e0)
        int32_t temp2_1 = *(eax_11 + 4)
        *(eax_11 + 4) -= 1
        
        if (temp2_1 == 1)
            sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
            *(arg1 + 0x15e0) = &data_801800

sub_6532f0(arg1 + 0x13f8)
char* result = sub_67e610(arg1 + 0x1344)
fsbase->NtTib.ExceptionList = ExceptionList
return result
