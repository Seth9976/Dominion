// 函数: sub_4e3fa0
// 地址: 0x4e3fa0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$_Emplace_reallocate@UGSISymbolEntry@@@?$vector@UGSISymbolEntry@@V?$allocator@UGSISymbolEntry@@@std@@@std@@QAEPAUGSISymbolEntry@@QAU2@$$QAU2@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_1c = arg2
char** var_24 = arg3
int32_t var_20 = 0
char* const var_14 = &data_801800
int32_t var_8_1 = 1
int32_t esi = *(arg2 + 0x9c)
char* edx = *(arg2 + 0x58)
char* const var_18

if (*(arg2 + 0x98) != 0 || esi != 0x40000)
    if ((esi & 0x40000) != 0)
        var_8_1.b = 4
        sub_63d850(&var_14, sub_63df30(&var_18, "dom_card_type_%s"))
        var_8_1.b = 5
        goto label_4e4098
    
    if ((esi & 0x100000) == 0)
        var_8_1.b = 6
        sub_63d850(&var_14, sub_63df30(&var_18, "dom_card_title_%s"))
        var_8_1.b = 7
        goto label_4e4098
    
    sub_63d8d0(&var_14, edx)
else
    char* var_3c = edx
    var_8_1.b = 2
    sub_63d850(&var_14, sub_63df30(&var_18, "dom_expansion_name_%s"))
    var_8_1.b = 3
label_4e4098:
    
    if (data_cf65bc != 0)
        char* eax_9 = var_18
        
        if (eax_9 != 0 && *eax_9 != 0)
            char* eax_10 = sub_63d4e0(&var_18)
            int32_t temp0_1 = *(eax_10 + 4)
            *(eax_10 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
                var_18 = &data_801800
    
    var_8_1.b = 1

char* const edi = var_14
char* const ecx_8 = &data_801800

if (edi != 0)
    ecx_8 = edi

void* eax_11 = sub_68c730(ecx_8, arg4, arg4)

if (eax_11 == 0)
    char* ecx_9 = &data_801800
    
    if (edi != 0)
        ecx_9 = edi
    
    eax_11 = sub_68c730(ecx_9, eax_11 + 1, arg4)

var_18 = &data_801800
var_8_1.b = 8

if (eax_11 != 0)
    int32_t var_3c_7 = arg5
    char* eax_18 = sub_693050(arg4, eax_11)
    
    if (eax_18 == 0)
        sub_63b870(eax_18, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
            "XString::XString")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    sub_63d720(arg3, eax_18)
    int32_t var_20_2 = 1
    int32_t var_8_3 = 0xc
else
    int32_t var_3c_5 = *(var_1c + 0x58)
    var_8_1.b = 9
    sub_63d850(&var_18, sub_63df30(&var_1c, "**missing:%s**"))
    var_8_1.b = 0xa
    
    if (data_cf65bc != 0)
        char* eax_14 = var_1c
        
        if (eax_14 != 0 && *eax_14 != 0)
            char* eax_15 = sub_63d4e0(&var_1c)
            int32_t temp1_1 = *(eax_15 + 4)
            *(eax_15 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
    
    var_8_1.b = 8
    char* const esi_3 = var_18
    *arg3 = esi_3
    
    if (esi_3 != 0 && *esi_3 != 0)
        char* eax_16 = sub_63d4e0(arg3)
        *(eax_16 + 4) += 1
    
    int32_t var_20_1 = 1
    var_8_1.b = 0xd
    
    if (data_cf65bc != 0 && esi_3 != 0 && *esi_3 != 0)
        char* eax_17 = sub_63d4e0(&var_18)
        int32_t temp3_1 = *(eax_17 + 4)
        *(eax_17 + 4) -= 1
        
        if (temp3_1 == 1)
            sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
    
    int32_t var_8_2 = 0xe

if (data_cf65bc != 0 && edi != 0 && *edi != 0)
    char* eax_19 = sub_63d4e0(&var_14)
    int32_t temp2_1 = *(eax_19 + 4)
    *(eax_19 + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)

fsbase->NtTib.ExceptionList = ExceptionList
return arg3
