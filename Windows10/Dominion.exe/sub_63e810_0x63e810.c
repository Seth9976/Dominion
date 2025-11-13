// 函数: sub_63e810
// 地址: 0x63e810
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$copy_wide_to_narrow_find_data@U_wfinddata64i32_t@@U_finddata64i32_t@@@@YA_NABU_wfinddata64i32_t@@AAU_finddata64i32_t@@I@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 0
char* var_18
int32_t* edx
char** eax_3 = sub_63e630(&var_18, edx)
int32_t ebx = 0
int32_t var_8_1 = 1
int32_t esi = 0

while (true)
    char* eax_4 = *eax_3
    int32_t eax_6
    
    if (eax_4 == 0 || *eax_4 == 0)
        eax_6 = 0
    else
        eax_6 = *(sub_63d4e0(eax_3) + 8)
    
    if (esi s>= eax_6)
        break
    
    char* eax_7 = *eax_3
    char* ecx_2 = &data_801800
    
    if (eax_7 != 0)
        ecx_2 = eax_7
    
    if (strchr(" \t\r\n", ecx_2[esi]) == 0)
        break
    
    ebx += 1
    esi += 1

char* eax_10 = *eax_3
char** result

if (ebx != 0)
    char* edx_1 = &data_801800
    
    if (eax_10 != 0)
        edx_1 = eax_10
    
    if (edx_1 == neg.d(ebx))
        sub_63b870(eax_10, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
            "XString::XString")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    result = arg1
    sub_63d720(result, &edx_1[ebx])
else
    result = arg1
    *result = eax_10
    
    if (eax_10 != 0 && *eax_10 != ebx.b)
        char* eax_11 = sub_63d4e0(result)
        *(eax_11 + 4) += 1

int32_t var_1c_1 = 3
int32_t var_8_2 = 2

if (data_cf65bc != 0)
    char* eax_12 = var_18
    
    if (eax_12 != 0 && *eax_12 != 0)
        char* eax_13 = sub_63d4e0(&var_18)
        int32_t temp1_1 = *(eax_13 + 4)
        *(eax_13 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
