// 函数: sub_6f6b00
// 地址: 0x6f6b00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_77211f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 0
HWND hWnd = GetDlgItem(data_147d470, 0xab)
LRESULT eax_3 = SendMessageA(hWnd, 0x184, 0, 0)
char const* const var_50
int32_t var_4c_1
char const* const var_48_1
char* ecx

if (arg1[1] == 0x20)
    LRESULT result = sub_5af880(arg1)
    LRESULT* result_1 = result
    int32_t var_28_1 = 0
    LRESULT* result_2 = result_1
    
    if (result_1[2] s<= 0)
    label_6f6de2:
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    int32_t ebx_1 = 0
    
    while (true)
        eax_3 = *result_1
        char* edx_1 = *(ebx_1 + eax_3 + 8)
        
        if (edx_1 == 0)
            var_48_1 = "XString::XString"
            var_4c_1 = 0x94
            var_50 = "C:\x\ax2017\Engine\xString.cpp"
            ecx = &data_871e0c
            break
        
        char* lParam_2
        sub_63d720(&lParam_2, edx_1)
        int32_t var_8_1 = 0
        char* const var_18
        
        if (*(ebx_1 + *result_1 + 0x38) != 0)
            char* const var_20
            sub_63d720(&var_20, U"-")
            var_8_1.b = 2
            char* esi_1 = var_20
            var_18 = esi_1
            
            if (esi_1 != 0 && *esi_1 != 0)
                char* eax_5 = sub_63d4e0(&var_18)
                *(eax_5 + 4) += 1
            
            char* lParam_3 = lParam_2
            int32_t var_1c_1 = 1
            char* const lParam_5 = &data_801800
            
            if (lParam_3 != 0)
                lParam_5 = lParam_3
            
            sub_63d960(&var_18, lParam_5)
            sub_63d850(&lParam_2, &var_18)
            int32_t var_1c_2 = 0
            var_8_1.b = 3
            
            if (data_cf65bc != 0)
                char* eax_6 = var_18
                
                if (eax_6 != 0 && *eax_6 != 0)
                    char* eax_7 = sub_63d4e0(&var_18)
                    int32_t temp1_1 = *(eax_7 + 4)
                    *(eax_7 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
                        var_18 = &data_801800
            
            var_8_1.b = 4
            
            if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
                char* eax_8 = sub_63d4e0(&var_20)
                int32_t temp3_1 = *(eax_8 + 4)
                *(eax_8 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
                    var_20 = &data_801800
            
            result_1 = result_2
            var_8_1.b = 0
        
        if (*(ebx_1 + *result_1 + 0x39) != 0)
            char* var_24
            sub_63d720(&var_24, U"*")
            var_8_1.b = 6
            char* esi_2 = var_24
            var_18 = esi_2
            
            if (esi_2 != 0 && *esi_2 != 0)
                char* eax_10 = sub_63d4e0(&var_18)
                *(eax_10 + 4) += 1
            
            char* lParam_4 = lParam_2
            int32_t var_1c_3 = 2
            char* const lParam_6 = &data_801800
            
            if (lParam_4 != 0)
                lParam_6 = lParam_4
            
            sub_63d960(&var_18, lParam_6)
            sub_63d850(&lParam_2, &var_18)
            int32_t var_1c_4 = 0
            var_8_1.b = 7
            
            if (data_cf65bc != 0)
                char* const eax_11 = var_18
                
                if (eax_11 != 0 && *eax_11 != 0)
                    char* eax_12 = sub_63d4e0(&var_18)
                    int32_t temp2_1 = *(eax_12 + 4)
                    *(eax_12 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
                        var_18 = &data_801800
            
            var_8_1.b = 8
            
            if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
                char* eax_13 = sub_63d4e0(&var_24)
                int32_t temp4_1 = *(eax_13 + 4)
                *(eax_13 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
                    var_24 = &data_801800
        
        char* lParam_1 = lParam_2
        char* lParam = &data_801800
        
        if (lParam_1 != 0)
            lParam = lParam_1
        
        result = SendMessageA(hWnd, 0x180, 0, lParam)
        int32_t var_8_2 = 9
        
        if (data_cf65bc != 0 && lParam_1 != 0 && *lParam_1 != 0)
            result = sub_63d4e0(&lParam_2)
            int32_t temp0_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp0_1 == 1)
                result = sub_64c080(result, *(result + 0xc) + 0x10)
                lParam_2 = &data_801800
        
        ebx_1 += 0xe0
        result_1 = result_2
        int32_t ecx_22 = var_28_1 + 1
        int32_t var_8_3 = 0xffffffff
        var_28_1 = ecx_22
        
        if (ecx_22 s>= result_1[2])
            goto label_6f6de2
else
    var_48_1 = "FabDefGet"
    var_4c_1 = 0xeb
    var_50 = "C:\x\ax2017\Engine\FabDef.cpp"
    ecx = "ptr->assetType == ASSET_TYPE_FAB"

sub_63b870(eax_3, &data_801800, ecx, var_50, var_4c_1, var_48_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
