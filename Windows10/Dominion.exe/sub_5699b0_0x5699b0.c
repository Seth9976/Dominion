// 函数: sub_5699b0
// 地址: 0x5699b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$?_mbstowcs_l_helper@@YAIPA_WPBDIAAV__crt_cached_ptd_host@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void* eax_3
int32_t edx
eax_3, edx = sub_573400()
uint32_t result = *eax_3
char const* const var_38
int32_t var_34
char const* const var_30_3
uint32_t eax_4
char* ecx_8

if (result != 2)
    if (result == 3)
        *(eax_3 + 4)
        eax_4, edx = sub_5916b0(*(eax_3 + 0x10))
        int32_t var_18_2 = 0
        goto label_569a1c
    
    if (result != 4)
        var_30_3 = "OtherPlayers"
        var_34 = 0xc98
        var_38 = "C:\x\ax2017\Jams\Dominion\code\DomCardUtils.cpp"
        ecx_8 = "Halt"
    label_569b11:
        sub_63b870(result, &data_801800, ecx_8, var_38, var_34, var_30_3)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
else
    eax_4 = *(eax_3 + 0x10)
    int32_t var_18_1 = *(eax_3 + 0x14)
label_569a1c:
    uint32_t var_1c = eax_4
    result = sub_5696d0(eax_4, edx, eax_4.w, 0x20, 0)
    void* ecx_4 = *(eax_3 + 4)
    int32_t i = 0
    char var_11_1 = result.b
    
    if (*(ecx_4 + 0xd38) s> 0)
        do
            int32_t eax_7
            int32_t edx_1
            edx_1:eax_7 = sx.q(*(ecx_4 + 0x19cc) + i)
            int32_t temp1_1 = mods.dp.d(edx_1:eax_7, *(ecx_4 + 0xd38))
            result = divs.dp.d(edx_1:eax_7, *(ecx_4 + 0xd38))
            
            if (temp1_1 != *(eax_3 + 0xc))
                if (var_11_1 == 0)
                label_569a76:
                    *(sub_573050(&var_1c, temp1_1, *(eax_3 + 4), &var_1c) + 0x6c) = 1
                    
                    if (arg1 == 0)
                        std::_Xbad_function_call()
                        noreturn
                    
                    (*(*arg1 + 8))(eax_2)
                    void* ecx_7 = *fsbase->ThreadLocalStoragePointer
                    result = *(ecx_7 + 0xf010)
                    
                    if (result s<= 0)
                        var_30_3 = "DomPopContext"
                        var_34 = 0x792
                        var_38 = "C:\x\ax2017\Jams\Dominion\code\DomGame.cpp"
                        ecx_8 = "cs.numContexts > 0"
                        goto label_569b11
                    
                    result -= 1
                    *(ecx_7 + 0xf010) = result
                else
                    result = sub_569890()
                    
                    if (result.b == 0)
                        goto label_569a76
            
            ecx_4 = *(eax_3 + 4)
            i += 1
        while (i s< *(ecx_4 + 0xd38))
void arg_4

if (arg1 != 0)
    result = (*(*arg1 + 0x10))(arg1 != &arg_4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
