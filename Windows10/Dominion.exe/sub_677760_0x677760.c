// 函数: sub_677760
// 地址: 0x677760
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76d925
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_3c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = arg1
int32_t* var_28 = edi
int32_t* ebx = *edi
int32_t* eax_3 = ebx[1]
int32_t* var_40

if ((ebx[2] & 0x800) != 0)
    var_40 = "AssetSave"
    sub_63b870(eax_3, &data_801800, 
        "(pDefHeader->defFlags & DEF_FIELD_FLAG_DO_NOT_WRITE_TO_PARSETREE) == 0", 
        "C:\x\ax2017\Engine\UI2.cpp", 0x53bc, var_40)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char* result_5 = *data_147d094
char* result_7 = result_5

if (result_5 != 0 && *result_5 != 0)
    arg1 = &result_7
    char* eax_4 = sub_63d4e0(arg1)
    *(eax_4 + 4) += 1

var_40 = arg1
int32_t var_8_1 = 0
int32_t* eax_5 = edi[8]
var_40 = eax_5

if (eax_5 != 0 && *eax_5 != 0)
    char* eax_6 = sub_63d4e0(&var_40)
    *(eax_6 + 4) += 1

enum MESSAGEBOX_RESULT result_2
sub_6c5250(&result_2)
var_8_1.b = 1
char* result_6 = result_2
char* result_1 = result_6

if (result_6 != 0 && *result_6 != 0)
    char* eax_7 = sub_63d4e0(&result_1)
    *(eax_7 + 4) += 1

var_8_1.b = 2
int32_t* ecx_3 = data_147d094
var_40 = &result_1
sub_63d850(ecx_3, var_40)
var_8_1.b = 3

if (data_cf65bc != 0 && result_6 != 0 && *result_6 != 0)
    char* eax_8 = sub_63d4e0(&result_1)
    int32_t temp0_1 = *(eax_8 + 4)
    *(eax_8 + 4) -= 1
    
    if (temp0_1 == 1)
        sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)

var_8_1.b = 1
int32_t* edi_1 = ebx[3]
*ebx
int32_t* result_3 = sub_6a2fa0()
var_40 = nullptr
result_1 = result_3
sub_6a6290(edi_1, var_40)
char* result_4 = result_1
result_1 = result_5
ebx[1] = result_4

if (result_5 != 0 && *result_5 != 0)
    char* eax_9 = sub_63d4e0(&result_1)
    *(eax_9 + 4) += 1

var_8_1.b = 4
int32_t* ecx_8 = data_147d094
var_40 = &result_1
int32_t* eax_10
int32_t edx_4
eax_10, edx_4 = sub_63d850(ecx_8, var_40)
var_8_1.b = 5

if (data_cf65bc != 0 && result_5 != 0 && *result_5 != 0)
    eax_10 = sub_63d4e0(&result_1)
    int32_t temp1_1 = eax_10[1]
    eax_10[1] -= 1
    
    if (temp1_1 == 1)
        eax_10, edx_4 = sub_64c080(eax_10, eax_10[3] + 0x10)

var_8_1.b = 1

if (eax_3 != 0)
    void* ecx_11 = ebx[1]
    var_40 = eax_3
    sub_6f9e10(eax_10, edx_4, ecx_11, var_40)
    sub_6a3220(eax_3)

int32_t* edi_3 = var_28
enum MESSAGEBOX_RESULT result = sub_69fc10(edi_3)

if (result.b == 0)
    char* eax_11 = edi_3[8]
    char* const lpText = &data_801800
    char* const ecx_14 = &data_801800
    
    if (eax_11 != 0)
        ecx_14 = eax_11
    
    var_40 = ecx_14
    char* lpText_1 = *sub_63df30(&result_1, "Failed to save '%s'.")
    
    if (lpText_1 != 0)
        lpText = lpText_1
    
    HWND hWnd = GetForegroundWindow()
    var_40 = &var_28
    GetWindowThreadProcessId(hWnd, var_40)
    uint32_t eax_14 = GetCurrentProcessId()
    bool cond:2_1 = var_28 != eax_14
    var_40 = nullptr
    
    if (cond:2_1)
        hWnd = nullptr
    
    result = MessageBoxA(hWnd, lpText, "Can't save", var_40)
    var_8_1.b = 6
    
    if (data_cf65bc != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_63d4e0(&result_1)
            int32_t temp4_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp4_1 == 1)
                result = sub_64c080(result, *(result + 0xc) + 0x10)

var_8_1.b = 7

if (data_cf65bc != 0)
    result = result_2
    
    if (result != 0 && *result != 0)
        result = sub_63d4e0(&result_2)
        int32_t temp2_1 = *(result + 4)
        *(result + 4) -= 1
        
        if (temp2_1 == 1)
            result = sub_64c080(result, *(result + 0xc) + 0x10)
            result_2 = &data_801800

int32_t var_8_2 = 8

if (data_cf65bc != 0 && result_5 != 0 && *result_5 != 0)
    result = sub_63d4e0(&result_7)
    int32_t temp3_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp3_1 == 1)
        result = sub_64c080(result, *(result + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return result
