// 函数: sub_66d5b0
// 地址: 0x66d5b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_comp_ellint_3@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* eax_3 = sub_64cc90(arg1)
int32_t* ebx = eax_3

if (arg2 == 0xffffffff)
    char* ecx = *(arg1 + 0x1720)
    
    if (ecx != 0 && ecx != &data_801800)
        if (data_cf65bc != 0 && *ecx != 0)
            eax_3 = sub_63d4e0(&arg1[0x1720])
            int32_t temp0_1 = *(eax_3 + 4)
            *(eax_3 + 4) += arg2
            
            if (temp0_1 == neg.d(arg2))
                eax_3 = sub_64c080(eax_3, *(eax_3 + 0xc) + 0x10)
        
        *(arg1 + 0x1720) = &data_801800
    
    uint32_t eax_4 = sub_6dcec0(eax_3, ebx, &data_8cae70, 0x6f)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4

int32_t var_2c = data_1724a80
int32_t* eax_5 = sub_64cc90(arg1)
int32_t* eax_6 = sub_6dd1e0(eax_5, eax_5, &data_8cae70, var_2c, 0x69)
char* edx_4

if (eax_6 == 0 || eax_6[2] s<= arg2 || arg2 s< 0)
    edx_4 = &data_801800
else
    int32_t eax_7 = *eax_6
    edx_4 = *(eax_7 + arg2 * 0x30)
    
    if (edx_4 == 0)
        sub_63b870(eax_7, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
            "XString::XString")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn

sub_63d720(&var_14, edx_4)
int32_t var_8_1 = 0
char* const edi_1 = &data_801800
char* esi_1 = var_14
char* const eax_8 = &data_801800

if (esi_1 != 0)
    eax_8 = esi_1

char* const var_28 = eax_8
uint32_t eax_9 = sub_63b5f0("set state %s")

if (esi_1 != 0)
    edi_1 = esi_1

char* const var_30 = edi_1
int32_t* eax_10 = sub_6dce10(eax_9, ebx, &data_8cae70, 0x6f)
int32_t var_8_2 = 1

if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
    eax_10 = sub_63d4e0(&var_14)
    int32_t temp1_1 = eax_10[1]
    eax_10[1] -= 1
    
    if (temp1_1 == 1)
        eax_10 = sub_64c080(eax_10, eax_10[3] + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return eax_10
