// 函数: sub_4d2150
// 地址: 0x4d2150
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0_Blocking_recipient@?1???$_Receive_impl@I@Concurrency@@YAIPAV?$ISource@I@1@IPBV?$function@$$A6A_NABI@Z@std@@@Z@QAE@0I@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* const arg_4
char* esi = *(arg_4 + 4)
sub_63d720(&arg_4, "btnNotification")
char* eax_4 = arg_4
char* const ecx_1 = &data_801800

if (eax_4 != 0)
    ecx_1 = eax_4

int32_t esi_2

while (true)
    char edx_1 = *ecx_1
    char temp0_1 = *esi
    bool c_1 = edx_1 u< temp0_1
    
    if (edx_1 == temp0_1)
        if (edx_1 == 0)
            esi_2 = 0
            break
        
        edx_1 = ecx_1[1]
        char temp1_1 = esi[1]
        c_1 = edx_1 u< temp1_1
        
        if (edx_1 == temp1_1)
            ecx_1 = &ecx_1[2]
            esi = &esi[2]
            
            if (edx_1 != 0)
                continue
            
            esi_2 = 0
            break
    
    esi_2 = sbb.d(esi, esi, c_1) | 1
    break

int32_t var_8_1 = 0

if (data_cf65bc != 0 && eax_4 != 0 && *eax_4 != 0)
    eax_4 = sub_63d4e0(&arg_4)
    int32_t temp2_1 = *(eax_4 + 4)
    *(eax_4 + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)
        arg_4 = &data_801800

int32_t var_8_2 = 0xffffffff

if (esi_2 == 0)
    eax_4 = sub_4b50b0(data_8dc8c8)
    
    if (eax_4 != 0)
        void* ecx_5 = data_cc8d5c
        
        if (ecx_5 == 0)
            sub_63b870(eax_4, &data_801800, "gClient", 
                "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        if (sub_4bb050(ecx_5 + 0x507c, eax_4)[0xb] == 1)
            sub_4b0e60(eax_4)
            char** eax_6
            eax_6.b = 0
            fsbase->NtTib.ExceptionList = ExceptionList
            return eax_6
        
        memset(&data_8dbf38, 0, 0x78)
        data_8dbf48 = eax_4
        data_8dbf38 = 2
        data_8dbf40.d = 0
        *(sub_4bbdb0() + 0x28) = 0x17
        sub_62b4e0()
        data_8db660 = 0x10

eax_4.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_4
