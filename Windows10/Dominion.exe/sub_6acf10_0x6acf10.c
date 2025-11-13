// 函数: sub_6acf10
// 地址: 0x6acf10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0ScheduleGroupBase@details@Concurrency@@QAE@PAVSchedulerBase@12@PAVlocation@2@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_147abe8

if (esi == 0)
    sub_63b870(result, &data_801800, "gpGameData", "C:\x\ax2017\Engine\Game.h", 0x45, "GetGameData")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (not(*(esi + 0x30) f<= 0))
    if (data_1a9a298 s> *(*fsbase->ThreadLocalStoragePointer + 8))
        sub_75970e(&data_1a9a298)
        
        if (data_1a9a298 == 0xffffffff)
            int32_t var_8_1 = 0
            data_1a9a29c = sub_69f030("sys/DebugFont.font", 0x12)
            __Init_thread_footer(&data_1a9a298)
    
    char* const var_14 = &data_801800
    int32_t var_8_2 = 1
    float xmm0_1 = *(esi + 0x30)
    int32_t ecx_2 = *(data_cf65b4 + 0x14)
    float xmm0_2
    
    if (0f <= xmm0_1)
        xmm0_2 = xmm0_1 + 0.5f
    else
        xmm0_2 = xmm0_1 - 0.5f
    
    int32_t eax_7 = int.d(xmm0_2)
    int32_t* eax_9
    int32_t edx_1
    
    if (ecx_2 s> 1)
        int32_t var_28_3 = ecx_2
        int32_t var_2c_1 = eax_7
        var_8_2.b = 4
        int32_t* var_1c
        eax_9, edx_1 = sub_63d850(&var_14, sub_63df30(&var_1c, "%d stall %d"))
        var_8_2.b = 5
        
        if (data_cf65bc != 0)
            eax_9 = var_1c
            
            if (eax_9 != 0 && *eax_9 != 0)
                eax_9 = sub_63d4e0(&var_1c)
                int32_t temp0_1 = eax_9[1]
                eax_9[1] -= 1
                
                if (temp0_1 == 1)
                    eax_9, edx_1 = sub_64c080(eax_9, eax_9[3] + 0x10)
                    var_1c = &data_801800
    else
        int32_t var_28_1 = eax_7
        var_8_2.b = 2
        int32_t* var_18
        eax_9, edx_1 = sub_63d850(&var_14, sub_63df30(&var_18, "%d"))
        var_8_2.b = 3
        
        if (data_cf65bc != 0)
            eax_9 = var_18
            
            if (eax_9 != 0 && *eax_9 != 0)
                eax_9 = sub_63d4e0(&var_18)
                int32_t temp1_1 = eax_9[1]
                eax_9[1] -= 1
                
                if (temp1_1 == 1)
                    eax_9, edx_1 = sub_64c080(eax_9, eax_9[3] + 0x10)
                    var_18 = &data_801800
    
    var_8_2.b = 1
    char* ecx_9 = &data_801800
    char* const esi_1 = var_14
    
    if (esi_1 != 0)
        ecx_9 = esi_1
    
    char* var_28_5 = ecx_9
    result = sub_6b3f10(eax_9, edx_1, ecx_9, data_1a9a29c, 0xffffffff, 1, 1f)
    int32_t var_8_3 = 6
    
    if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
        result = sub_63d4e0(&var_14)
        int32_t temp2_1 = result[1]
        result[1] -= 1
        
        if (temp2_1 == 1)
            result = sub_64c080(result, &result[3][2])

fsbase->NtTib.ExceptionList = ExceptionList
return result
