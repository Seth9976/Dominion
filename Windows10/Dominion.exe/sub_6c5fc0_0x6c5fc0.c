// 函数: sub_6c5fc0
// 地址: 0x6c5fc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7704d5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_20 = ebx
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
enum MESSAGEBOX_RESULT result
char const* const result_8
char* const var_18
char** ecx

if (*(data_147ac2c + 0x24) == 0)
    char* result_9 = *(arg1 + 0x20)
    int32_t esi = *(arg1 + 4)
    result_8 = arg1
    result_8 = result_9
    
    if (result_9 != 0 && *result_9 != 0)
        char* eax_7 = sub_63d4e0(&result_8)
        *(eax_7 + 4) += 1
    
    char* result_2
    sub_6c5090(&result_2, esi)
    int32_t var_8_2 = 1
    char* result_7 = &data_801800
    char* result_3 = result_2
    char* result_5 = &data_801800
    char* const edx_2 = &data_801800
    
    if (result_3 != 0)
        result_5 = result_3
    
    char* result_11
    
    while (true)
        ebx.b = *result_5
        char temp0_1 = *edx_2
        bool c_1 = ebx.b u< temp0_1
        
        if (ebx.b == temp0_1)
            if (ebx.b == 0)
                result_11 = nullptr
                break
            
            ebx.b = result_5[1]
            char temp1_1 = edx_2[1]
            c_1 = ebx.b u< temp1_1
            
            if (ebx.b == temp1_1)
                result_5 = &result_5[2]
                edx_2 = &edx_2[2]
                
                if (ebx.b != 0)
                    continue
                
                result_11 = nullptr
                break
        
        result_11 = sbb.d(result_5, result_5, c_1) | 1
        break
    
    if (result_11 == 0)
        char* result_10 = *(arg1 + 0x20)
        int32_t ebx_1 = *(arg1 + 4)
        result_8 = result_11
        result_8 = result_10
        
        if (result_10 != 0 && *result_10 != 0)
            char* eax_8 = sub_63d4e0(&result_8)
            *(eax_8 + 4) += 1
        
        result_8 = sub_6c4b90(&var_18, ebx_1)
        var_8_2.b = 2
        sub_63d850(&result_2, result_8)
        var_8_2.b = 3
        
        if (data_cf65bc != 0)
            char* eax_10 = var_18
            
            if (eax_10 != 0 && *eax_10 != 0)
                char* eax_11 = sub_63d4e0(&var_18)
                int32_t temp3_1 = *(eax_11 + 4)
                *(eax_11 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
                    var_18 = &data_801800
        
        var_8_2.b = 1
        result_3 = result_2
    
    void* edx_6 = *arg1
    void* ecx_9 = *(edx_6 + 4)
    
    if (ecx_9 == 0)
        result_8 = "DefinitionSaveAsset"
        sub_63b870(result_3, &data_801800, "pDefHeader->pParseTree", 
            "C:\x\ax2017\Engine\DefLoad.cpp", 0x2a6, result_8)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t* edx_7 = *(edx_6 + 0xc)
    
    if (result_3 != 0)
        result_7 = result_3
    
    result_8 = result_7
    
    if (sub_6a6650(result_3, edx_7, ecx_9, result_8) != 0)
        if (sub_6960b0(arg1).b != 0)
            int32_t var_8_5 = 6
            
            if (data_cf65bc != 0)
                result = result_2
                
                if (result != 0 && *result != 0)
                    result = sub_63d4e0(&result_2)
                    int32_t temp4_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp4_1 == 1)
                        sub_64c080(result, *(result + 0xc) + 0x10)
            
            result.b = 1
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        int32_t var_8_4 = 5
    else
        char* result_4 = result_2
        char* result_6 = &data_801800
        
        if (result_4 != 0)
            result_6 = result_4
        
        result_8 = result_6
        sub_63b5f0("Failed to write xml file: '%s'")
        int32_t var_8_3 = 4
    
    if (data_cf65bc != 0)
        result = result_2
        
        if (result != 0 && *result != 0)
            ecx = &result_2
            goto label_6c61c3
else
    result_8 = "Can't save, current build settings elide data labels."
    char* const lpText = &data_801800
    char* result_1
    char* lpText_1 = *sub_63df30(&result_1, result_8)
    
    if (lpText_1 != 0)
        lpText = lpText_1
    
    HWND hWnd = GetForegroundWindow()
    result_8 = &var_18
    GetWindowThreadProcessId(hWnd, result_8)
    uint32_t eax_6 = GetCurrentProcessId()
    bool cond:0_1 = var_18 != eax_6
    result_8 = nullptr
    
    if (cond:0_1)
        hWnd = nullptr
    
    MessageBoxA(hWnd, lpText, "Can't save", result_8)
    int32_t var_8_1 = 0
    
    if (data_cf65bc != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            ecx = &result_1
        label_6c61c3:
            result = sub_63d4e0(ecx)
            int32_t temp2_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(result, *(result + 0xc) + 0x10)
result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
