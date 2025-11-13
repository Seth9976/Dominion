// 函数: sub_4d6b50
// 地址: 0x4d6b50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?SyncPop@?$WorkStealingQueue@V_UnrealizedChore@details@Concurrency@@V_CriticalNonReentrantLock@23@@details@Concurrency@@AAEPAV_UnrealizedChore@23@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_30 = arg1
sub_63d720(&var_30, "localsettings.xml")
void var_1c
int32_t* eax_3 = sub_69e000(&var_1c, 0)
int32_t var_8_1 = 0
char const* const var_38
int32_t var_34
char* ecx_2

if (*arg1 == 0)
    int32_t* esi_1 = data_1597d80
    eax_3 = sub_6a6e70(esi_1, &var_1c)
    
    if (eax_3 != 0)
        int32_t* eax_4 = sub_6a4880(eax_3, esi_1)
        eax_3 = sub_6a3220(eax_3)
        *arg1 = eax_4
        
        if (eax_4 != 0)
            goto label_4d6c15
        
        goto label_4d6beb
    
    *arg1 = eax_3
label_4d6beb:
    void* ebx_2 = data_1597d80
    uint32_t ecx_6 = *(ebx_2 + 0xc)
    
    if (ecx_6 != 0)
        int32_t* eax_5 = sub_687730(ecx_6)
        sub_69ca80(eax_5, ebx_2)
        *arg1 = eax_5
        eax_5[9] = 3
    label_4d6c15:
        var_30 = nullptr
        HDC hdc = GetDC(var_30)
        var_30 = 0x5a
        int32_t edx_5 = divs.dp.d(0x12000, GetDeviceCaps(hdc, var_30))
        int32_t eax_9 = *(*arg1 + 0x1c)
        
        if (eax_9 s>= edx_5)
            edx_5 = eax_9
            
            if (eax_9 s> 0x1000)
                edx_5 = 0x1000
        
        void* esi_4 = data_cf65b8
        *(esi_4 + 0x18) = edx_5
        int32_t edx_8
        int32_t eax_12
        
        if (*(*arg1 + 0x14) == 0)
            edx_8:eax_12 = muls.dp.d(0x55555556, edx_5 << 2)
        else
            int32_t eax_11
            int32_t edx_7
            edx_7:eax_11 = muls.dp.d(0x38e38e39, edx_5 << 4)
            edx_8 = edx_7 s>> 1
        *(esi_4 + 0x14) = (edx_8 u>> 0x1f) + edx_8
        void* eax_16
        eax_16.b = *(*arg1 + 0x18)
        *(esi_4 + 0x24) = eax_16.b
        int32_t* result
        result.b = (*arg1)[8].b
        *(esi_4 + 0x23) = result.b
        int32_t var_8_2 = 1
        
        if (data_cf65bc != 0)
            int32_t* result_1
            result = result_1
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_1)
                int32_t temp2_1 = result[1]
                result[1] -= 1
                
                if (temp2_1 == 1)
                    result = sub_64c080(result, result[3] + 0x10)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    var_30 = "DefinitionGetSize"
    var_34 = 0x6d
    var_38 = "C:\x\ax2017\Engine\Definition.cpp"
    ecx_2 = "pDefMap->definitionSize != 0"
else
    var_30 = "LocalSettingsLoad"
    var_34 = 0x266
    var_38 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
    ecx_2 = "gLocalSettings == NULL"

sub_63b870(eax_3, &data_801800, ecx_2, var_38, var_34, var_30)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
