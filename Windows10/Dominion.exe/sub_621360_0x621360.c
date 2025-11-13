// 函数: sub_621360
// 地址: 0x621360
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76b648
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_bc = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_a8 = 0
uint32_t eax_3 = sub_4c89a0()
struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_c0)(struct _EXCEPTION_REGISTRATION_RECORD**
    * arg1) = sub_63d770
int32_t var_94[0x20]
int32_t eax_4 = `eh vector constructor iterator'(&var_94, 4, 0x20, 0x5a0be0)
int32_t var_8_1 = 0
void* esi = data_cc8d5c

if (esi == 0)
    sub_63b870(eax_4, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t esi_1 = *(esi + 0x7590)
int32_t* eax_5 = sub_4b9480()
uint32_t eax_6 = sub_5a0940(eax_5, eax_5, eax_3, 0xb80ad8, &var_94, esi_1)
uint32_t ebx

if (eax_6 != 0)
    sub_63d850(arg1, &var_94)
    ebx = 1
    
    if (eax_6 s> 1)
        do
            char* var_9c
            sub_63d720(&var_9c, "{br_power_sml}")
            var_8_1.b = 2
            char* esi_3 = var_9c
            char* var_98 = esi_3
            
            if (esi_3 != 0 && *esi_3 != 0)
                char* eax_7 = sub_63d4e0(&var_98)
                *(eax_7 + 4) += 1
            
            char* eax_8 = var_94[ebx]
            char* const ecx_4 = &data_801800
            int32_t var_a8_1 = 1
            
            if (eax_8 != 0)
                ecx_4 = eax_8
            
            sub_63d960(&var_98, ecx_4)
            char* edi_1 = var_98
            char* eax_9 = &data_801800
            
            if (edi_1 != 0)
                eax_9 = edi_1
            
            sub_63d960(arg1, eax_9)
            int32_t var_a8_2 = 0
            var_8_1.b = 3
            
            if (data_cf65bc != 0 && edi_1 != 0 && *edi_1 != 0)
                char* eax_10 = sub_63d4e0(&var_98)
                int32_t temp0_1 = *(eax_10 + 4)
                *(eax_10 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
            
            var_8_1.b = 4
            
            if (data_cf65bc != 0 && esi_3 != 0 && *esi_3 != 0)
                char* eax_11 = sub_63d4e0(&var_9c)
                int32_t temp1_1 = *(eax_11 + 4)
                *(eax_11 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
                    var_9c = &data_801800
            
            ebx += 1
            var_8_1.b = 0
        while (ebx s< eax_6)
    
    ebx.b = 1
else
    ebx.b = 0

int32_t var_8_2 = 0xffffffff
`eh vector vbase constructor iterator'(&var_94, 4, 0x20, sub_63d770)
uint32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
