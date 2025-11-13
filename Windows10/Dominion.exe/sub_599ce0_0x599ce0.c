// 函数: sub_599ce0
// 地址: 0x599ce0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7679fe
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_64 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_2c = arg3
int32_t var_14_1 = 0
int32_t var_28 = 0
uint32_t var_58[0x6]
uint128_t xmm0 = *sub_576c00(&var_58, arg4)
int64_t var_40 = xmm0.q
int32_t eax_4 = _mm_bsrli_si128(xmm0, 8)
int32_t var_6c_1
char const* const ecx

if (eax_4 == 0)
    eax_4 = var_40.d
    
    if (eax_4 s>= 0)
        if (eax_4 u> 0xa)
            int32_t var_68_2 = eax_4
            sub_63df30(arg3, "%d{coin_N}")
        else
            switch (eax_4)
                case 0
                    sub_63d720(arg3, "{coin_0}")
                case 1
                    sub_63d720(arg3, "{coin_1}")
                case 2
                    sub_63d720(arg3, "{coin_2}")
                case 3
                    sub_63d720(arg3, "{coin_3}")
                case 4
                    sub_63d720(arg3, "{coin_4}")
                case 5
                    sub_63d720(arg3, "{coin_5}")
                case 6
                    sub_63d720(arg3, "{coin_6}")
                case 7
                    sub_63d720(arg3, "{coin_7}")
                case 8
                    sub_63d720(arg3, "{coin_8}")
                case 9
                    sub_63d720(arg3, "{coin_9}")
                case 0xa
                    sub_63d720(arg3, "{coin_10}")
        
        int32_t var_14_2 = 0
        int32_t eax_5 = var_40:4.d
        int32_t var_28_1 = 3
        
        if (eax_5 s> 0)
            if (eax_5 != 1)
                sub_63b870(eax_5, &data_801800, "costParsed.potions == 1", 
                    "C:\x\ax2017\Jams\Dominion\code\DomLog.cpp", 0x609, "GetCostStr")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            char* eax_6 = *arg3
            
            if (eax_6 == 0 || *eax_6 == 0)
                int32_t** eax_8 = sub_64bfd0(0x19)
                eax_8[3] += 1
                
                if (*eax_8 == 0)
                    sub_64be70(eax_8)
                
                int32_t* ecx_16 = *eax_8
                *eax_8 = *ecx_16
                *ecx_16 = 0xfafafafa
                ecx_16[1] = 1
                ecx_16[2] = 8
                ecx_16[3] = 9
                char* ecx_17 = "{potion}"
                *arg3 = &ecx_16[4]
                int32_t* eax_9
                
                do
                    eax_9.b = *ecx_17
                    ecx_17 = &ecx_17[1]
                    ecx_17[ecx_16 + 0xff7db317] = eax_9.b
                while (eax_9.b != 0)
            else
                char* eax_7 = sub_63d4e0(arg3)
                int32_t esi_1 = *(eax_7 + 8)
                sub_63d5e0(eax_7, esi_1 + 8, arg3, 1)
                __builtin_strncpy(&(*arg3)[esi_1], "{potion}", 9)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(arg3)
        return arg3
    
    char const* const var_68_3 = "GetCostStr"
    var_6c_1 = 0x603
    ecx = "costParsed.money >= 0"
else
    char const* const var_68_1 = "GetCostStr"
    var_6c_1 = 0x602
    ecx = "costParsed.debt == 0"

sub_63b870(eax_4, &data_801800, ecx, "C:\x\ax2017\Jams\Dominion\code\DomLog.cpp", var_6c_1, 
    "GetCostStr")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
