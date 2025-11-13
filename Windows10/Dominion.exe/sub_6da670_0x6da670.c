// 函数: sub_6da670
// 地址: 0x6da670
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_ellint_2@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[0x1a]
int32_t* eax_3 = sub_6d97a0()
int32_t* ecx_1 = arg1[0xb]

if (ecx_1 != 0)
    eax_3 = sub_6dd7c0(ecx_1)

int32_t* edi = data_147abe8

if (edi == 0)
    sub_63b870(eax_3, &data_801800, "gpGameData", "C:\x\ax2017\Engine\Game.h", 0x45, "GetGameData")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* edi_1 = *edi
sub_6db570(&arg1[0xe])
int32_t var_8_1 = 0

if (data_cf65bc != 0)
    char* eax_4 = *arg1
    
    if (eax_4 != 0 && *eax_4 != 0)
        char* eax_5 = sub_63d4e0(arg1)
        int32_t temp0_1 = *(eax_5 + 4)
        *(eax_5 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)
            *arg1 = &data_801800

uint32_t result = zx.d(arg1[0x1a].w)
int32_t ecx_5 = *(edi_1 + 0xc)
*(edi_1 + 0xc) = result
arg1[0x1a] = ecx_5
*(edi_1 + 0x10) -= 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
