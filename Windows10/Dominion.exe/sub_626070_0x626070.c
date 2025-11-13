// 函数: sub_626070
// 地址: 0x626070
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0?$clone_impl@U?$error_info_injector@Vrounding_error@math@boost@@@exception_detail@boost@@@exception_detail@boost@@QAE@ABV012@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = sub_5cf7e0()
void* eax_4 = sub_571b30(*(arg2 + 4), eax_3)
uint32_t eax_5 = sub_64e7a0(arg1)
sub_5e0df0(
    sub_5e01b0(sub_665db0(eax_5, eax_4 + 0x74, eax_5, 0x3f800000, 0xffffffff, 0), eax_4, arg1, 
        nullptr, 0, 0), 
    eax_4, arg1, nullptr)
sub_5defb0(arg1, eax_4)
int32_t eax_8 = sub_5cf7e0()
void* eax_9 = sub_571b30(*(arg2 + 4), eax_8)
int32_t eax_11 = *(eax_9 + 0x9c) & 0x940

if (((*(eax_9 + 0x98) & 0x7f000400) | eax_11) != 0)
    sub_63b870(eax_11, &data_801800, "!IsLandscape(entry.card.what, DomCurrentGameVersion())", 
        "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0xeedd, "DeclareCardEntry")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

uint32_t eax_12 = sub_64e7a0(arg1)
sub_665db0(eax_12, &data_be34c0, eax_12, 0x3f800000, 0xffffffff, 0)
int32_t var_34 = *(arg2 + 8)
int32_t* result_1
sub_63df30(&result_1, "%d")
int32_t var_8_1 = 0
int32_t var_40 = 0xffffffff
int32_t* result = sub_666380(&result_1, &data_be34cc, arg1, &result_1)
int32_t var_8_2 = 1

if (data_cf65bc != 0)
    result = result_1
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_1)
        int32_t temp0_1 = result[1]
        result[1] -= 1
        
        if (temp0_1 == 1)
            result = sub_64c080(result, result[3] + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
