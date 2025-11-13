// 函数: sub_677a50
// 地址: 0x677a50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76d9a7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_20 = arg2
int32_t var_1c = 0
char* eax_3 = *arg3
char const* const var_4c
int32_t var_48
char const* const var_44
char* ecx_1

if (eax_3 == 0 || (eax_3[8] & 1) != 0)
    eax_3, arg2 = sub_69f4a0(sub_69ec60(arg3), 1, arg3, 1)
    
    if (eax_3.b != 0)
        goto label_677ac3
    
    var_44 = "AssetCatalogReloadAsWritable"
    var_48 = 0x149
    var_4c = "C:\x\ax2017\Engine\AssetCatalog.cpp"
    ecx_1 = "result"
else
label_677ac3:
    
    if (*arg3 == 0)
        arg2.b = 0
        eax_3 = sub_69f4a0(eax_3, arg2.b, arg3, 1)
    
    arg3[7] += 1
    
    if (arg3[1] == 0x22)
        int32_t* eax_5 = sub_5af880(arg3)
        int32_t* eax_6 = sub_677630(eax_5, "txt_header")
        int32_t* eax_7 = sub_677630(eax_5, "txtInstruction")
        char* esi_1 = var_20
        void* eax_8 = sub_6776c0(eax_6, esi_1)
        char* var_24
        sub_63d720(&var_24, "_header")
        int32_t var_8_1 = 0
        char* var_44_1 = esi_1
        int32_t var_48_1 = data_c27c20
        var_8_1.b = 2
        char* const var_18
        char* eax_10 = *sub_676e70(&var_18, "dom_taptip_")
        char* var_14 = eax_10
        
        if (eax_10 != 0 && *eax_10 != 0)
            char* eax_11 = sub_63d4e0(&var_14)
            *(eax_11 + 4) += 1
        
        char* esi_2 = var_24
        char* const edi_1 = &data_801800
        int32_t var_1c_1 = 1
        char* const eax_12 = &data_801800
        
        if (esi_2 != 0)
            eax_12 = esi_2
        
        sub_6771a0(sub_63d960(&var_14, eax_12), eax_8, &var_14, arg4)
        int32_t var_1c_2 = 0
        var_8_1.b = 3
        
        if (data_cf65bc != 0)
            char* eax_14 = var_14
            
            if (eax_14 != 0 && *eax_14 != 0)
                char* eax_15 = sub_63d4e0(&var_14)
                int32_t temp0_1 = *(eax_15 + 4)
                *(eax_15 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
        
        var_8_1.b = 4
        
        if (data_cf65bc != 0)
            char* eax_16 = var_18
            
            if (eax_16 != 0 && *eax_16 != 0)
                char* eax_17 = sub_63d4e0(&var_18)
                int32_t temp1_1 = *(eax_17 + 4)
                *(eax_17 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
                    var_18 = &data_801800
        
        int32_t var_8_2 = 5
        
        if (data_cf65bc != 0 && esi_2 != 0 && *esi_2 != 0)
            char* eax_18 = sub_63d4e0(&var_24)
            int32_t temp2_1 = *(eax_18 + 4)
            *(eax_18 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
        
        int32_t var_8_3 = 0xffffffff
        char* esi_3 = var_20
        void* eax_19 = sub_6776c0(eax_7, esi_3)
        sub_63d720(&var_24, "_body")
        int32_t var_8_4 = 6
        char* var_44_4 = esi_3
        int32_t var_48_2 = data_c27c20
        var_8_4.b = 8
        char* eax_21 = *sub_676e70(&var_20, "dom_taptip_")
        var_14 = eax_21
        
        if (eax_21 != 0 && *eax_21 != 0)
            char* eax_22 = sub_63d4e0(&var_14)
            *(eax_22 + 4) += 1
        
        char* esi_4 = var_24
        int32_t var_1c_3 = 2
        
        if (esi_4 != 0)
            edi_1 = esi_4
        
        sub_6771a0(sub_63d960(&var_14, edi_1), eax_19, &var_14, arg4)
        var_8_4.b = 9
        
        if (data_cf65bc != 0)
            char* eax_24 = var_14
            
            if (eax_24 != 0 && *eax_24 != 0)
                char* eax_25 = sub_63d4e0(&var_14)
                int32_t temp3_1 = *(eax_25 + 4)
                *(eax_25 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
        
        var_8_4.b = 0xa
        
        if (data_cf65bc != 0)
            char* eax_26 = var_20
            
            if (eax_26 != 0 && *eax_26 != 0)
                char* eax_27 = sub_63d4e0(&var_20)
                int32_t temp4_1 = *(eax_27 + 4)
                *(eax_27 + 4) -= 1
                
                if (temp4_1 == 1)
                    sub_64c080(eax_27, *(eax_27 + 0xc) + 0x10)
                    var_20 = &data_801800
        
        int32_t var_8_5 = 0xb
        
        if (data_cf65bc != 0 && esi_4 != 0 && *esi_4 != 0)
            char* eax_28 = sub_63d4e0(&var_24)
            int32_t temp5_1 = *(eax_28 + 4)
            *(eax_28 + 4) -= 1
            
            if (temp5_1 == 1)
                sub_64c080(eax_28, *(eax_28 + 0xc) + 0x10)
        
        int32_t var_8_6 = 0xffffffff
        enum MESSAGEBOX_RESULT result = sub_677760(arg3)
        arg3[7] -= 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    var_44 = "UI2DefGet"
    var_48 = 0xc17
    var_4c = "C:\x\ax2017\Engine\UI2.cpp"
    ecx_1 = "ptr->assetType == ASSET_TYPE_UI2"

sub_63b870(eax_3, &data_801800, ecx_1, var_4c, var_48, var_44)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
