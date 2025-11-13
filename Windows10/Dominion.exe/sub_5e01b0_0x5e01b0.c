// 函数: sub_5e01b0
// 地址: 0x5e01b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0?$clone_impl@U?$error_info_injector@Vrounding_error@math@boost@@@exception_detail@boost@@@exception_detail@boost@@QAE@ABV012@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_3 = sub_5dffe0(arg2)
int32_t var_2c = 0xffffffff
int32_t var_34 = 0xffffffff
sub_666380(sub_666380(eax_3, &data_be3544, arg3, eax_3), &data_be3550, arg3, eax_3 + 4)
void* eax_5 = data_cc8dc0

if (eax_5 == 0)
    sub_63b870(eax_5, &data_801800, "gGameSettings.localSettings", 
        "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp", 0x5fb, "GetLocalSettings")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

if (*(eax_5 + 0x28) == 0)
    int32_t eax_6 = *(eax_3 + 8)
    uint32_t eax_9
    
    if (eax_6 == 1)
        eax_9 = sub_64e7a0(arg3)
        sub_665db0(eax_9, &data_be3568, eax_9, 0x3f800000, 0xffffffff, 0)
    else if (eax_6 == 2)
        eax_9 = sub_64e7a0(arg3)
        sub_665db0(eax_9, &data_be3574, eax_9, 0x3f800000, 0xffffffff, 0)

char* const result_1 = &data_801800
int32_t var_8_1 = 0
uint32_t eax_10 = sub_5df190(arg2, &result_1)

if (eax_10.b != 0)
    uint32_t eax_11 = sub_64e7a0(arg3)
    sub_665db0(eax_11, &data_be3580, eax_11, 0x3f800000, 0xffffffff, 0)
    int32_t var_34_1 = 0xffffffff
    eax_10 = sub_666380(&result_1, &data_be358c, arg3, &result_1)

char eax_13 = sub_5e0720(eax_10, arg2, arg3, arg5)
char* ecx_12 = arg4

if (ecx_12 != 0)
    *ecx_12 = eax_13

int32_t* result

if (arg6 != 0)
    void* eax_15
    eax_15, ecx_12 = sub_571b30(arg6, sub_5cf7e0())
    result = *(eax_15 + 0x60)
    
    if (result != 0)
        goto label_5e02ea
    
    sub_63b870(result, &data_801800, "defArt.art", "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 
        0x4127, "DomDeclareCardComponents")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

result = *(arg2 + 0x60)

if (result != 0)
label_5e02ea:
    char* var_2c_2 = ecx_12
    int32_t var_30_1 = *result
    result = sub_666250(result, &data_be35c4, arg3)

int32_t var_8_2 = 1

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp2_1 = result[1]
        result[1] -= 1
        
        if (temp2_1 == 1)
            result = sub_64c080(result, result[3] + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
