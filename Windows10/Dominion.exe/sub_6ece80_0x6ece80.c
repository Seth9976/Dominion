// 函数: sub_6ece80
// 地址: 0x6ece80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$parse_floating_point_possible_infinity@DV?$input_adapter_character_source@V?$console_input_adapter@D@__crt_stdio_input@@@__crt_strtox@@_K@__crt_strtox@@YA?AW4floating_point_parse_result@0@AADAAV?$input_adapter_character_source@V?$console_input_adapter@D@__crt_stdio_input@@@0@_K@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *(arg1 + 0x148)
int32_t var_2c
char const* const var_28

if (eax_3 s> 0)
    char* const ecx = &data_801800
    char* eax_5 = *(arg1 + (*(arg1 + (eax_3 << 2) + 0x104) << 3) + 4)
    
    if (eax_5 != 0)
        ecx = eax_5
    
    char* const var_28_1 = ecx
    int32_t var_8_1 = 0
    char* var_14
    sub_6ecd70(arg1, sub_63df30(&var_14, "float4 %s(float2 arg_uv, float4 diffuse)\n{\n"))
    int32_t var_8_2 = 1
    
    if (data_cf65bc != 0)
        char* eax_7 = var_14
        
        if (eax_7 != 0 && *eax_7 != 0)
            char* eax_8 = sub_63d4e0(&var_14)
            int32_t temp0_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
                var_14 = &data_801800
    
    int32_t var_8_3 = 0xffffffff
    sub_63d720(&var_14, "\treturn retval;\n}\n")
    int32_t var_8_4 = 2
    char* edx_4 = &data_801800
    int32_t eax_9 = *(arg1 + 0x148)
    
    if (eax_9 s<= 0)
        sub_63b870(eax_9, &data_801800, "emitResults.currentFunctionStackDepth > 0", 
            "C:\x\ax2017\Engine\MaterialFnDef.cpp", 0x3a8, "EmitFnEndLine")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    char* esi_1 = var_14
    
    if (esi_1 != 0)
        edx_4 = esi_1
    
    sub_63d960(arg1 + ((*(arg1 + (eax_9 << 2) + 0x104) + 1) << 3), edx_4)
    int32_t var_8_5 = 3
    
    if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
        char* eax_12 = sub_63d4e0(&var_14)
        int32_t temp1_1 = *(eax_12 + 4)
        *(eax_12 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
            var_14 = &data_801800
    
    int32_t var_8_6 = 0xffffffff
    eax_3 = *(arg1 + 0x148)
    
    if (eax_3 s> 0)
        *(arg1 + 0x148) = eax_3 - 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_3 - 1
    
    var_28 = "EmitFnEnd"
    var_2c = 0x39b
else
    var_28 = "EmitFnPostlude"
    var_2c = 0x3b6

sub_63b870(eax_3, &data_801800, "emitResults.currentFunctionStackDepth > 0", 
    "C:\x\ax2017\Engine\MaterialFnDef.cpp", var_2c, var_28)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
