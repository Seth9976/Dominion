// 函数: sub_4d9320
// 地址: 0x4d9320
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?SyncPop@?$WorkStealingQueue@V_UnrealizedChore@details@Concurrency@@V_CriticalNonReentrantLock@23@@details@Concurrency@@AAEPAV_UnrealizedChore@23@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = sub_64bfd0(0x1e1b0)
eax_3[3] += 1
void* edi

if (eax_3[4] != 0xffffffff)
    if (*eax_3 == 0)
        sub_64be70(eax_3)
    
    edi = *eax_3
    *eax_3 = *edi
else
    edi = sub_687730(0x1e1b0)

char* count = 0x1e1b0
memset(edi, 0, count)
count = sub_4d6d10
count = `eh vector constructor iterator'(edi, 0x7868, 4, sub_4d6430)
*arg1 = edi
sub_63d720(&count, "profiles.xml")
void var_1c
sub_69e000(&var_1c, 0)
int32_t var_8_1 = 0
int32_t* esi_1 = data_1597d90
int32_t* eax_6 = sub_6a6e70(esi_1, &var_1c)
int32_t* i

if (eax_6 == 0)
label_4d93f5:
    void* edi_2 = data_1597d90
    uint32_t ecx_7 = *(edi_2 + 0xc)
    
    if (ecx_7 == 0)
        count = "DefinitionGetSize"
        sub_63b870(eax_6, &data_801800, "pDefMap->definitionSize != 0", 
            "C:\x\ax2017\Engine\Definition.cpp", 0x6d, count)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    i = sub_687730(ecx_7)
    sub_69ca80(i, edi_2)
else
    i = sub_6a4880(eax_6, esi_1)
    eax_6 = sub_6a3220(eax_6)
    
    if (i == 0)
        goto label_4d93f5

*arg1
sub_4d80b0()
sub_69cee0(i, data_1597d90)
void* edi_3 = data_cc8dc8
int32_t ecx_11 = 0
int32_t edx_5 = *(edi_3 + 0x1e1a0)

if (edx_5 s<= 0)
label_4d9464:
    sub_4d9500()
    *arg1
    sub_4d8ad0(i)
    edi_3 = data_cc8dc8
else
    i = *(*arg1 + 0x1e1a4)
    void* eax_10 = edi_3
    
    while (*(eax_10 + 0x42b0) != i)
        ecx_11 += 1
        eax_10 += 0x7868
        
        if (ecx_11 s>= edx_5)
            goto label_4d9483
    
    if (eax_10 == 0 && edx_5 s<= 0)
        goto label_4d9464

label_4d9483:
char* result = sub_4d9160(sub_4d8f30(*(edi_3 + 0x1e1a4)))
int32_t var_8_2 = 1

if (data_cf65bc != 0)
    char* result_1
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp0_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp0_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
