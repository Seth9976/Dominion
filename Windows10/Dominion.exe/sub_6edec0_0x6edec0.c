// 函数: sub_6edec0
// 地址: 0x6edec0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_771ccb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_31c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[4] == 0)
    char* const var_300 = &data_801800
    int32_t var_14_1 = 0
    void var_2fc
    memset(&var_2fc, 0, 0x100)
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_320_1)(char** arg1) = sub_4d6960
    `eh vector constructor iterator'(&var_2fc, 8, 0x20, sub_4d6950)
    int32_t var_1fc_1 = 0
    void var_1f8
    memset(&var_1f8, 0, 0x40)
    int32_t var_1b8
    __builtin_memset(&var_1b8, 0, 0x18)
    void var_1a0
    memset(&var_1a0, 0, 0xc0)
    void var_e0
    memset(&var_e0, 0, 0x80)
    int32_t var_60
    __builtin_memset(&var_60, 0, 0x15)
    int32_t var_14_2 = 1
    char* const* var_320_2 = &var_300
    void* var_324_1 = arg1[2]
    char* var_328_5 = *arg1
    int32_t var_304 = 0xffffffff
    char* var_308
    sub_6ed680(&var_304, "main", &var_308, &var_304, var_328_5, var_324_1)
    var_14_2.b = 2
    
    if (data_cf65bc != 0)
        char* eax_4 = var_308
        
        if (eax_4 != 0 && *eax_4 != 0)
            char* eax_5 = sub_63d4e0(&var_308)
            int32_t temp0_1 = *(eax_5 + 4)
            *(eax_5 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)
                var_308 = &data_801800
    
    var_14_2.b = 1
    int32_t eax_6 = sub_6ed9a0(&var_300)
    var_304 = eax_6
    arg1[6] = eax_6
    int32_t var_1a4
    
    if (var_1a4 s> 8)
        sub_63b870(eax_6, &data_801800, "results.numSamplers <= NUM_DIFFUSE", 
            "C:\x\ax2017\Engine\MaterialFnDef.cpp", 0x6ae, "MakeMaterial")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int128_t var_44
    __builtin_memset(&var_44, 0, 0x20)
    int128_t var_1b4
    
    if (var_1a4 s> 0)
        __builtin_memcpy(&var_44, &var_1b4, var_1a4 << 2)
    uint32_t var_320_3 = zx.d(arg1[3].b)
    int128_t var_5c
    char var_4c
    arg1[4] = sub_6d8b40(&var_e0, &var_44, var_304, var_1a4, &var_e0, var_60, &var_5c, var_4c)
    int32_t var_14_3 = 3
    `eh vector vbase constructor iterator'(&var_2fc, 8, 0x20, sub_4d6960)
    var_14_3.b = 4
    
    if (data_cf65bc != 0)
        char* const eax_10 = var_300
        
        if (eax_10 != 0 && *eax_10 != 0)
            char* eax_11 = sub_63d4e0(&var_300)
            int32_t temp1_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)

uint32_t result = arg1[4]
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
