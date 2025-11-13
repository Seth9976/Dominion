// 函数: sub_66ed70
// 地址: 0x66ed70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) =
    __ehhandler$??$common_vfscanf@_W@@YAH_KQAU_iobuf@@QB_WQAU__crt_locale_pointers@@QAD@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_4c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_3 = sub_667870(arg1)
char* result_1
void* edi

if (eax_3 == 0)
    int32_t eax_4 = sub_667790(arg1, &result_1)
    
    if (eax_4 != 1)
        eax_3 = sub_64cc90(arg1)
        edi = eax_3
    else
        char* result_4 = result_1
        
        if (result_4 == 0)
            sub_63b870(eax_4, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
                "XString::XString")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        sub_63d720(&result_1, result_4)
        int32_t var_14_1 = 0
        eax_3 = sub_667680(arg1, &result_1)
        int32_t* edi_1 = eax_3
        int32_t var_14_2 = 1
        
        if (data_cf65bc != 0)
            char* result_3 = result_1
            
            if (result_3 != 0 && *result_3 != 0)
                eax_3 = sub_63d4e0(&result_1)
                int32_t temp0_1 = eax_3[1]
                eax_3[1] -= 1
                
                if (temp0_1 == 1)
                    eax_3 = sub_64c080(eax_3, eax_3[3] + 0x10)
        
        int32_t var_14_3 = 0xffffffff
        edi = &edi_1[6]
else
    edi = &eax_3[6]

int32_t var_54 = data_1724a88
*(arg1 + 0x1360) = 0
char* result = sub_6dd1e0(eax_3, edi, &data_8cae70, var_54, 0x71)
result_1 = result
char* result_2

if (result != 0)
    result_2 = result_1
else
    int128_t var_40
    int32_t* eax_5
    int32_t edx_6
    edx_6:eax_5 = &var_40
    __builtin_memset(&var_40, 0, 0x18)
    result = sub_6dd1e0(sub_6dcc50(eax_5, edi, &data_8cae70, 0x71, eax_5, edx_6), edi, 
        &data_8cae70, data_1724a88, 0x71)
    result_2 = result

if (*(result_2 + 0x10) != 3)
    uint32_t eax_7
    int32_t ecx_7
    eax_7, ecx_7 = sub_66ebb0(arg1)
    int32_t var_50_2 = *(result_2 + 0x10)
    int32_t var_54_3 = ecx_7
    int32_t* eax_8 = sub_69dd00(data_1724a88, 8)
    sub_6fb630(eax_8, eax_8, result_2, var_50_2)
    *(*(result_2 + 8) + *(result_2 + 0x10) * 0x10 - 0x10) = eax_7
    int32_t ecx_11
    ecx_11.b = 1
    result = sub_665770(ecx_11)

fsbase->NtTib.ExceptionList = ExceptionList
return result
