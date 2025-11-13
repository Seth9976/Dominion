// 函数: sub_603f10
// 地址: 0x603f10
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?_Tidy@ios_base@std@@AAEXXZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_18 = arg1
void* ecx = data_cc8d5c

if (ecx == 0)
    sub_63b870(&ExceptionList, &data_801800, "gClient", 
        "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_4 = *(arg2 + 0x50)
int32_t ebx_1

if (eax_4 == *(ecx + 0x7590))
    ebx_1 = *(arg2 + 0x4c)

if (eax_4 != *(ecx + 0x7590) || eax_4 == ebx_1)
    sub_63d720(arg1, &data_801800)
else
    void* esi_1 = &sub_4b9480()[2]
    void* eax_6 = sub_4b9680(esi_1, ebx_1)
    void var_20
    char* var_14
    sub_4b06c0(eax_6, esi_1, &var_14, eax_6, &var_20)
    int32_t var_8_1 = 0
    sub_4d48c0(&var_14, "dom_prompt_possession_prefix", arg1, "[player]", &var_14)
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0)
        char* eax_8 = var_14
        
        if (eax_8 != 0 && *eax_8 != 0)
            char* eax_9 = sub_63d4e0(&var_14)
            int32_t temp0_1 = *(eax_9 + 4)
            *(eax_9 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg1

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
