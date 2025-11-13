// 函数: sub_6ec520
// 地址: 0x6ec520
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$__acrt_lowio_lock_fh_and_call@V<lambda_7253ddea65725dd1b0d958044d9596be>@@@@YAHH$$QAV<lambda_7253ddea65725dd1b0d958044d9596be>@@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** result = arg1
int32_t* result_1 = result
int32_t var_8_1 = 0
int32_t var_1c = 0
sub_63d720(arg1, &data_801800)
void* eax_3 = arg2
int32_t i = 0
int32_t var_8_2 = 0
int32_t var_1c_1 = 1

if (*(eax_3 + 0x28) s> 0)
    do
        int32_t eax_4 = *(eax_3 + 0x20)
        
        if (*(eax_4 + (i << 2)) != 0)
            sub_63b870(eax_4, &data_801800, "Halt", "C:\x\ax2017\Engine\MaterialFnDef.cpp", 0x2fa, 
                "EmitUVModifiers")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        char* eax_5 = *result
        
        if (eax_5 == 0 || *eax_5 == 0)
            int32_t* eax_8 = sub_64bfd0(0x25)
            eax_8[3] += 1
            
            if (*eax_8 == 0)
                sub_64be70(eax_8)
            
            int32_t* ecx_4 = *eax_8
            *eax_8 = *ecx_4
            char* eax_10 = "\tuv = Spherize(uv);\n"
            result = result_1
            *ecx_4 = 0xfafafafa
            ecx_4[1] = 1
            ecx_4[2] = 0x14
            ecx_4[3] = 0x15
            *result = &ecx_4[4]
            int32_t edx_2 = ecx_4 - "lerFn_layer%d"
            
            do
                ecx_4.b = *eax_10
                eax_10 = &eax_10[1]
                eax_10[edx_2 - 1] = ecx_4.b
            while (ecx_4.b != 0)
        else
            char* eax_6 = sub_63d4e0(result)
            int32_t esi = *(eax_6 + 8)
            sub_63d5e0(eax_6, esi + 0x14, result_1, 1)
            __builtin_strncpy(*result_1 + esi, "\tuv = Spherize(uv);\n", 0x15)
            result = result_1
        
        eax_3 = arg2
        i += 1
    while (i s< *(eax_3 + 0x28))

fsbase->NtTib.ExceptionList = ExceptionList
return result
