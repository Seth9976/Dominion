// 函数: sub_4d8f80
// 地址: 0x4d8f80
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?cancel@agent@Concurrency@@QAE_NXZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_48 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ecx = arg2[7]

if (ecx != 0)
    char* edx = arg2[4]
    int32_t var_34_1 = *(arg1 + 0x4250)
    int32_t var_30_1 = arg2[6]
    int32_t var_2c_1 = ecx
    int32_t var_28_1 = arg2[8]
    int32_t var_24_1 = *arg2
    int32_t eax_7 = arg2[2]
    int32_t var_20_1 = arg2[1]
    int32_t var_1c_1 = eax_7
    int32_t var_18_1 = arg2[3]
    
    if (edx == 0)
        sub_63b870(eax_7, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
            "XString::XString")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    struct _EXCEPTION_REGISTRATION_RECORD** result_1
    sub_63d720(&result_1, edx)
    int32_t var_8_1 = 0
    result = sub_6a7200(&result_1, 
        "MFkwEwYHKoZIzj0CAQYIKoZIzj0DAQcDQgAEQj3MqmxxzVMQdAQf/S/Wmta0aqcKyHpoPNJL8X4YKkQVW4dAMQv1rvkwOvZd3ck4Yyrrzl//Xdruzu7o6dLnBA==")
    
    if (result.b != 0)
        int32_t ecx_4 = *(arg1 + 0x56d8)
        int32_t eax_8 = 0
        *(arg1 + 0x7450) = 0
        void* edx_1
        
        if (ecx_4 s> 0)
            edx_1 = arg1 + 0x42d8
            
            do
                if (*edx_1 == arg2[6])
                    goto label_4d9076
                
                eax_8 += 1
                edx_1 += 0x28
            while (eax_8 s< ecx_4)
        
        if (ecx_4 s>= 0x80)
            sub_63b870(eax_8, &data_801800, "profile.numEntitlements < MAX_PROFILE_ENTITLEMENTS", 
                "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp", 0x5ae, 
                "ProfileAddEntitlement")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        edx_1 = arg1 + ((ecx_4 * 5 + 0x85b) << 3)
        *(arg1 + 0x56d8) = ecx_4 + 1
    label_4d9076:
        *edx_1 = arg2[6]
        *(edx_1 + 4) = arg2[7]
        *(edx_1 + 8) = arg2[8]
        *(edx_1 + 0xc) = arg2[9]
        int32_t eax_16 = *arg2
        *(edx_1 + 0x14) = arg2[1]
        *(edx_1 + 0x10) = eax_16
        int32_t eax_17 = arg2[2]
        *(edx_1 + 0x1c) = arg2[3]
        *(edx_1 + 0x18) = eax_17
        result = sub_63d8d0(edx_1 + 0x20, arg2[4])
        int32_t var_8_3 = 2
    else
        int32_t var_8_2 = 1
    
    if (data_cf65bc != 0)
        result = result_1
        
        if (result != 0 && *result != 0)
            result = sub_63d4e0(&result_1)
            int32_t temp0_1 = result[1]
            result[1] -= 1
            
            if (temp0_1 == 1)
                result = sub_64c080(result, &result[3][2])

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
