// 函数: sub_5e0720
// 地址: 0x5e0720
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_769eb5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_9c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* result_2 = arg2
int32_t* var_a0 = arg3
int128_t var_78
uint32_t* eax_3 = sub_576c00(&var_78, *(arg2 + 0x90))
char* result_3 = result_2
int128_t var_5c = *eax_3
int32_t esi_1 = *(result_3 + 0x8c)

if (data_b809dc != 0)
    int32_t var_2c
    sub_576e90(result_3, 0xb80ad8, &var_2c, data_b824a4, esi_1, 0)
    int32_t esi_2 = *(sub_571b30(esi_1, data_b81820) + 0x90)
    int96_t xmm1_1 = (*sub_576c00(&var_78, var_2c)).12
    uint32_t var_90[0x6]
    int128_t xmm0_1 = *sub_576c00(&var_90, esi_2)
    var_78 = xmm0_1
    
    if ((xmm1_1 != xmm0_1 || xmm1_1:8.d != var_78:8.d || xmm1_1:4.d != var_78:4.d)
            && (arg4 & 1) == 0)
        uint32_t eax_10 = sub_64e7a0(arg3)
        sub_665db0(eax_10, &data_be366c, eax_10, 0x3f800000, 0xffffffff, 0)
        int32_t eax_11 = var_2c
        int128_t var_48_2
        __builtin_memset(&var_48_2, 0, 0x14)
        var_48_2.d = zx.d(eax_11.b)
        var_48_2:4.d = eax_11 u>> 0x10 & 1
        var_48_2:8.d = eax_11 s>> 0x18
        int32_t ecx_11 = var_48_2:0xc.d
        
        if ((eax_11 & 0x80000) != 0)
            ecx_11 |= 0x80000
            var_48_2:0xc.d = ecx_11
        
        if ((eax_11 & 0x20000) != 0)
            ecx_11 |= 0x20000
            var_48_2:0xc.d = ecx_11
        
        if ((eax_11 & 0x100000) != 0)
            var_48_2:0xc.d = ecx_11 | 0x100000
        
        var_5c = var_48_2
    
    result_3 = result_2

int32_t esi_3 = var_5c:0xc.d
char* result
int32_t ecx_15

if (esi_3 != 0x100000)
    result = *(result_3 + 0x9c) & 0x40940
    ecx_15 = (*(result_3 + 0x98) & 0x37000000) | result

if (esi_3 == 0x100000 || ecx_15 != 0)
    uint32_t eax_23 = sub_64e7a0(arg3)
    sub_665db0(eax_23, &data_be35f4, eax_23, 0x3f800000, 0xffffffff, 0)
    result.b = 0
else
    int32_t var_a4_3
    
    if (var_5c.d != ecx_15)
    label_5e09fe:
        uint32_t eax_17 = sub_64e7a0(arg3)
        sub_665db0(eax_17, &data_be3600, eax_17, 0x3f800000, 0xffffffff, 0)
        int32_t var_a8_5 = var_5c.d
        sub_63df30(&result_2, "%d")
        int32_t var_14_5 = 0
        int32_t var_a0_7 = 0xffffffff
        result = sub_666380(&result_2, &data_be363c, arg3, &result_2)
        int32_t var_14_6 = 1
        
        if (data_cf65bc != 0)
            result = result_2
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_2)
                int32_t temp0_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp0_1 == 1)
                    result = sub_64c080(result, *(result + 0xc) + 0x10)
                    result_2 = &data_801800
        
        int32_t var_14_7 = 0xffffffff
        uint32_t eax_19
        
        if (esi_3 == 0x20000)
            eax_19 = sub_64e7a0(arg3)
            result = sub_665db0(eax_19, &data_be3624, eax_19, 0x3f800000, 0xffffffff, 0)
        else if (esi_3 == 0x80000)
            eax_19 = sub_64e7a0(arg3)
            result = sub_665db0(eax_19, &data_be3630, eax_19, 0x3f800000, 0xffffffff, 0)
        
        if (var_5c:4.d == 0)
            int32_t esi_5 = var_5c:8.d
            
            if (esi_5 != 0)
                uint32_t eax_21 = sub_64e7a0(arg3)
                sub_665db0(eax_21, &data_be3654, eax_21, 0x3f800000, 0xffffffff, 0)
                int32_t var_a8_6 = esi_5
                sub_63df30(&result_2, "%d")
                int32_t var_14_8 = 2
                int32_t var_a0_8 = 0xffffffff
                sub_666380(&result_2, &data_be3660, arg3, &result_2)
                int32_t var_14_9 = 3
                goto label_5e0b68
            
            result.b = 1
        else
            if (var_5c:8.d != 0)
                char const* const var_a0_9 = "DomDeclareCost"
                var_a4_3 = 0x41e9
                goto label_5e0be8
            
            uint32_t eax_20 = sub_64e7a0(arg3)
            sub_665db0(eax_20, &data_be3648, eax_20, 0x3f800000, 0xffffffff, 0)
            result.b = 1
    else
        char* ecx_16
        void** ecx_24
        
        if (var_5c:8.d != ecx_15)
            if (var_5c:4.d != 0)
                char const* const var_a0_4 = "DomDeclareCost"
                var_a4_3 = 0x41f6
            label_5e0be8:
                ecx_16 = "cost.debt == 0"
                goto label_5e0bf7
            
            if (esi_3 != 0)
                char const* const var_a0_5 = "DomDeclareCost"
                var_a4_3 = 0x41ff
                ecx_16 = "cost.special == 0"
            label_5e0bf7:
                sub_63b870(result, &data_801800, ecx_16, 
                    "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_a4_3, "DomDeclareCost")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            uint32_t eax_15 = sub_64e7a0(arg3)
            sub_665db0(eax_15, &data_be3618, eax_15, 0x3f800000, 0xffffffff, 0)
            int32_t var_a8_4 = var_5c:8.d
            char* result_1
            sub_63df30(&result_1, "%d")
            int32_t var_14_3 = 6
            int32_t var_a0_6 = 0xffffffff
            sub_666380(&result_1, &data_be363c, arg3, &result_1)
            int32_t var_14_4 = 7
            
            if (data_cf65bc == 0)
                result.b = 1
            else
                result = result_1
                
                if (result == 0 || *result == 0)
                    result.b = 1
                else
                    ecx_24 = &result_1
                label_5e0b80:
                    result = sub_63d4e0(ecx_24)
                    int32_t temp1_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_64c080(result, *(result + 0xc) + 0x10)
                    
                    result.b = 1
        else
            if (var_5c:4.d == ecx_15)
                goto label_5e09fe
            
            if (esi_3 != 0)
                char const* const var_a0_3 = "DomDeclareCost"
                var_a4_3 = 0x41f7
                ecx_16 = "cost.special == 0"
                goto label_5e0bf7
            
            uint32_t eax_13 = sub_64e7a0(arg3)
            sub_665db0(eax_13, &data_be360c, eax_13, 0x3f800000, 0xffffffff, 0)
            sub_63d720(&result_2, &data_801800)
            int32_t var_14_1 = 4
            int32_t var_a8_3 = 0xffffffff
            sub_666380(&result_2, &data_be3660, arg3, &result_2)
            int32_t var_14_2 = 5
        label_5e0b68:
            
            if (data_cf65bc == 0)
                result.b = 1
            else
                result = result_2
                
                if (result != 0 && *result != 0)
                    ecx_24 = &result_2
                    goto label_5e0b80
                
                result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
