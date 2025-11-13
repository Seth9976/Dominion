// 函数: sub_4b4440
// 地址: 0x4b4440
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?send_message@?$single_assignment@I@Concurrency@@MAE?AW4message_status@2@PAV?$message@I@2@PAV?$ISource@I@2@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_50 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 0
void* result_1 = data_cc8d5c

if (result_1 == 0)
    sub_63b870(&ExceptionList, &data_801800, "gClient", 
        "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* result = sub_4b3f20(arg1[1])
char* const var_38

if (result != 0xffffffff)
    int32_t var_8_1 = 0
    int32_t ecx_1 = *arg1
    int32_t eax_4 = arg1[1]
    char* var_54_1 = arg1[2]
    var_38 = &data_801800
    int32_t var_1c_1 = 1
    sub_63d8d0(&var_38, var_54_1)
    int32_t edi_1 = arg1[4]
    int32_t eax_5 = arg1[7]
    int32_t ebx_1 = arg1[6]
    int32_t esi_1 = arg1[5]
    int32_t edx_2 = result << 5
    int32_t var_24_1 = eax_5
    *(edx_2 + result_1 + 0x28) = ecx_1
    *(edx_2 + result_1 + 0x2c) = eax_4
    int32_t var_34_1 = edi_1
    int32_t var_28_1 = ebx_1
    int32_t var_30_1 = esi_1
    sub_63d850(result_1 + 0x30 + edx_2, &var_38)
    *(edx_2 + result_1 + 0x34) = edi_1
    *(edx_2 + result_1 + 0x38) = esi_1
    *(edx_2 + result_1 + 0x40) = ebx_1
    *(edx_2 + result_1 + 0x44) = eax_5
    int32_t var_8_2 = 1
label_4b45de:
    
    if (data_cf65bc != 0)
        char* const eax_20 = var_38
        
        if (eax_20 != 0 && *eax_20 != 0)
            char* eax_21 = sub_63d4e0(&var_38)
            int32_t temp0_1 = *(eax_21 + 4)
            *(eax_21 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
    
    result = result_1
    *(result + 0x502c) = 0
else if (*(result_1 + 0x5028) != 0x280)
    int32_t var_8_3 = 2
    int32_t eax_10 = *arg1
    char* var_54_3 = arg1[2]
    int32_t eax_11 = arg1[1]
    var_38 = &data_801800
    int32_t var_1c_2 = 2
    sub_63d8d0(&var_38, var_54_3)
    int32_t ecx_8 = arg1[7]
    int32_t eax_12 = arg1[6]
    int32_t ebx_2 = arg1[4]
    int32_t edi_2 = arg1[5]
    int32_t var_28_2 = eax_12
    int32_t var_24_2 = ecx_8
    int32_t ecx_9 = *(result_1 + 0x5028)
    void* esi_2 = result_1 + (ecx_9 << 5)
    int32_t var_34_2 = ebx_2
    int32_t var_30_2 = edi_2
    *(result_1 + 0x5028) = ecx_9 + 1
    *(esi_2 + 0x28) = eax_10
    *(esi_2 + 0x2c) = eax_11
    sub_63d850(esi_2 + 0x30, &var_38)
    *(esi_2 + 0x40) = eax_12
    *(esi_2 + 0x34) = ebx_2
    *(esi_2 + 0x38) = edi_2
    *(esi_2 + 0x44) = ecx_8
    int32_t var_8_4 = 3
    goto label_4b45de
fsbase->NtTib.ExceptionList = ExceptionList
return result
