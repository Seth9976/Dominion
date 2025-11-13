// 函数: sub_64bba0
// 地址: 0x64bba0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?tzset_from_system_nolock@@YAXXZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = data_bf23b8

if (eax_3 == 1 || eax_3 == 0)
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

char* var_14

if (eax_3 == 3)
    var_14 = *(arg1 + 0x14)
else
    if (eax_3 != 4)
        sub_63b870(eax_3 - 4, &data_801800, "Halt", "C:\x\ax2017\Engine\GameCenter.cpp", 0x572, 
            "GamecenterGetDLCSku")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    var_14 = *(arg1 + 0x10)

EnterCriticalSection(&data_bf23e8)
int32_t var_8_1 = 0
int32_t esi = 0
int32_t ebx = data_c21008
char** eax_7

if (ebx s<= 0)
label_64bc59:
    ebx.b = 0
else
    void* edi_2 = &data_c1c808
    
    while (true)
        char* ecx = var_14
        void* eax_8 = edi_2
        
        while (true)
            char edx = *ecx
            char temp2_1 = *eax_8
            bool c_1 = edx u< temp2_1
            
            if (edx == temp2_1)
                if (edx == 0)
                    eax_7 = nullptr
                    break
                
                edx = ecx[1]
                char temp3_1 = *(eax_8 + 1)
                c_1 = edx u< temp3_1
                
                if (edx == temp3_1)
                    ecx = &ecx[2]
                    eax_8 += 2
                    
                    if (edx != 0)
                        continue
                    
                    eax_7 = nullptr
                    break
            
            eax_7 = sbb.d(eax_8, eax_8, c_1) | 1
            break
        
        if (eax_7 == 0)
            sub_63d8d0(arg2, esi * 0x90 + 0xc1c848)
            ebx.b = 1
            break
        
        esi += 1
        edi_2 += 0x90
        
        if (esi s>= ebx)
            goto label_64bc59

if (data_bf23b8 != 0)
    LeaveCriticalSection(&data_bf23e8)

eax_7.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_7
