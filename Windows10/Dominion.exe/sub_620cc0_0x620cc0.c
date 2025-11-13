// 函数: sub_620cc0
// 地址: 0x620cc0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??$construct_command_line@D@@YAHQBQBDQAPAD@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_40 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_24 = 0
int32_t eax_3 = data_171efd0
void* esi_3

if (eax_3 == 0)
    esi_3 = nullptr
else
    uint32_t ecx_1 = zx.d(eax_3.w)
    
    if (ecx_1 u>= data_b4a5c4)
        esi_3 = nullptr
    else
        int32_t* esi_2 = ecx_1 * 0x510c + data_b4a5c0
        
        if (esi_2[0x1442] != eax_3 || esi_2 == 0 || *esi_2 != 2)
            esi_3 = nullptr
        else
            esi_3 = &esi_2[1]
            
            if (esi_2 != 0xfffffffc)
                uint32_t var_44_1 = ecx_1
                int32_t var_48_1 = *(esi_3 + 0x5078)
                sub_666250(eax_3, &data_bf00ec, arg1)
                sub_6208c0(arg1, esi_3)

*(sub_64e7a0(arg1) + 0x18bc) = sub_61eb90

if (data_1724030 != 0)
    uint32_t eax_5 = sub_64e7a0(arg1)
    sub_665db0(eax_5, &data_bf00f8, eax_5, 0x3f800000, 0xffffffff, 0)

void* eax_7 = *(sub_61dad0() + 0x78)

if (eax_7 == 4 || eax_7 == 5)
    uint32_t eax_8 = sub_64e7a0(arg1)
    eax_7 = sub_665db0(eax_8, &data_bf0110, eax_8, 0x3f800000, 0xffffffff, 0)

char const* const var_4c
int32_t var_48_2
char const* const var_44_2
char* ecx_10

if (data_171efd4 != 0)
label_620e41:
    
    if (data_1723fe0 != 0)
        int32_t* result_1
        sub_620b70(&result_1, &data_171efd4)
        int32_t var_8_1 = 0
        int32_t var_44_3 = 0xffffffff
        sub_666380(&result_1, &data_bf00d4, arg1, &result_1)
        int32_t* result_3
        int32_t ecx_16 = sub_519f50(&result_3, &data_171efd4)
        var_8_1.b = 1
        
        if (esi_3 != 0)
            int32_t var_44_4 = ecx_16
            char* var_28
            sub_51cc70(&var_28, esi_3 + 0x5020)
            var_8_1.b = 2
            char* var_30
            sub_63d720(&var_30, U"\n")
            var_8_1.b = 4
            char* result_4 = result_3
            char* result_5 = result_4
            
            if (result_4 != 0 && *result_4 != 0)
                char* eax_13 = sub_63d4e0(&result_5)
                *(eax_13 + 4) += 1
            
            char* edi_1 = var_30
            int32_t var_24_1 = 1
            char* eax_14 = &data_801800
            
            if (edi_1 != 0)
                eax_14 = edi_1
            
            sub_63d960(&result_5, eax_14)
            var_8_1.b = 5
            char* result_6 = result_5
            char* result_7 = result_6
            
            if (result_6 != 0 && *result_6 != 0)
                char* eax_15 = sub_63d4e0(&result_7)
                *(eax_15 + 4) += 1
            
            char* eax_16 = var_28
            char* const ecx_22 = &data_801800
            int32_t var_24_2 = 3
            
            if (eax_16 != 0)
                ecx_22 = eax_16
            
            sub_63d960(&result_7, ecx_22)
            sub_63d850(&result_3, &result_7)
            int32_t var_24_3 = 1
            var_8_1.b = 6
            
            if (data_cf65bc != 0)
                char* result_8 = result_7
                
                if (result_8 != 0 && *result_8 != 0)
                    char* eax_17 = sub_63d4e0(&result_7)
                    int32_t temp4_1 = *(eax_17 + 4)
                    *(eax_17 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
            
            var_8_1.b = 7
            
            if (data_cf65bc != 0 && result_6 != 0 && *result_6 != 0)
                char* eax_18 = sub_63d4e0(&result_5)
                int32_t temp5_1 = *(eax_18 + 4)
                *(eax_18 + 4) -= 1
                
                if (temp5_1 == 1)
                    sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
            
            var_8_1.b = 8
            
            if (data_cf65bc != 0 && edi_1 != 0 && *edi_1 != 0)
                char* eax_19 = sub_63d4e0(&var_30)
                int32_t temp6_1 = *(eax_19 + 4)
                *(eax_19 + 4) -= 1
                
                if (temp6_1 == 1)
                    sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)
            
            var_8_1.b = 9
            
            if (data_cf65bc != 0)
                char* eax_20 = var_28
                
                if (eax_20 != 0 && *eax_20 != 0)
                    char* eax_21 = sub_63d4e0(&var_28)
                    int32_t temp7_1 = *(eax_21 + 4)
                    *(eax_21 + 4) -= 1
                    
                    if (temp7_1 == 1)
                        sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
            
            var_8_1.b = 1
        
        int32_t var_44_8 = 0xffffffff
        sub_666380(&result_3, &data_bf0098, arg1, &result_3)
        int32_t var_4c_1 = data_171efc8
        int32_t* result_2
        sub_51a250(&result_2, &data_171efd4)
        var_8_1.b = 0xa
        int32_t var_50 = 0xffffffff
        int32_t* result = sub_666380(&result_2, &data_bf00a4, arg1, &result_2)
        var_8_1.b = 0xb
        
        if (data_cf65bc != 0)
            result = result_2
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_2)
                int32_t temp1_1 = result[1]
                result[1] -= 1
                
                if (temp1_1 == 1)
                    result = sub_64c080(result, result[3] + 0x10)
                    result_2 = &data_801800
        
        var_8_1.b = 0xc
        
        if (data_cf65bc != 0)
            result = result_3
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_3)
                int32_t temp2_1 = result[1]
                result[1] -= 1
                
                if (temp2_1 == 1)
                    result = sub_64c080(result, result[3] + 0x10)
                    result_3 = &data_801800
        
        int32_t var_8_2 = 0xd
        
        if (data_cf65bc != 0)
            result = result_1
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&result_1)
                int32_t temp3_1 = result[1]
                result[1] -= 1
                
                if (temp3_1 == 1)
                    result = sub_64c080(result, result[3] + 0x10)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    var_44_2 = "CampaignsDlgUpdate"
    var_48_2 = 0xe396
    var_4c = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx_10 = "setup.campaignBlueprint != CPIECE_NONE"
else
    int32_t ecx_9 = data_171efd8
    
    if (ecx_9 s>= 3)
        eax_7 = (ecx_9 - 3) * 0x9c + 0x790198
        
        if (*eax_7 == ecx_9)
            if (*(eax_7 + 0x8c) != 0)
                uint32_t eax_11 = sub_64e7a0(arg1)
                eax_7 = sub_665db0(eax_11, &data_bf00e0, eax_11, 0x3f800000, 0xffffffff, 0)
            
            goto label_620e41
        
        var_44_2 = "ExpansionCampaignDefGet"
        var_48_2 = 0x672
        var_4c = "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp"
        ecx_10 = "retval.exp == exp"
    else
        var_44_2 = "ExpansionCampaignDefGet"
        var_48_2 = 0x669
        var_4c = "C:\x\ax2017\Jams\Dominion\code\DomCards_Campaign.cpp"
        ecx_10 = "exp >= DOM_EXP_INTRIGUE"

sub_63b870(eax_7, &data_801800, ecx_10, var_4c, var_48_2, var_44_2)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
