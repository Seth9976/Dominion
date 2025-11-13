// 函数: sub_4e6290
// 地址: 0x4e6290
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??1?$ListArray@VScheduleGroupSegmentBase@details@Concurrency@@@details@Concurrency@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* eax_3 = *arg2
char* const esi = &data_801800

if (eax_3 != 0)
    esi = eax_3

void* eax_4 = strstr(esi, &data_808480)
char* ecx = *arg2
char* const edx = &data_801800

if (ecx != 0)
    edx = ecx

int32_t* eax_5 = strstr(edx, &data_808484)
char* const result_1 = &data_801800
int32_t* edi_1 = eax_5
char* const esi_1 = &data_801800
int32_t var_8_1 = 0
char* const var_1c = &data_801800
var_8_1.b = 1
char const* const var_40
int32_t var_3c_1
char const* const var_38
char* ecx_2

if (eax_4 == 0)
    var_38 = "FromCampaignMissionString"
    var_3c_1 = 0x16c4
    var_40 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp"
    ecx_2 = "strK"
else
    char* const var_14
    
    if (edi_1 == 0)
        if (eax_4 != 0xfffffffd)
            sub_63d720(&var_14, eax_4 + 3)
            var_8_1.b = 6
            sub_63d850(&result_1, &var_14)
            var_8_1.b = 7
            
            if (data_cf65bc != 0)
                char* const eax_11 = var_14
                
                if (eax_11 != 0 && *eax_11 != 0)
                    char* eax_12 = sub_63d4e0(&var_14)
                    int32_t temp0_1 = *(eax_12 + 4)
                    *(eax_12 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
            
            var_8_1.b = 1
        label_4e64a6:
            char* result =
                sub_4e5ff0(arg1 + 0x118, sub_4e5e30(), arg1 + 0x580, arg1 + 0x118, &var_1c)
            var_8_1.b = 8
            
            if (data_cf65bc != 0 && esi_1 != 0 && *esi_1 != 0)
                result = sub_63d4e0(&var_1c)
                int32_t temp2_1 = *(result + 4)
                *(result + 4) -= 1
                
                if (temp2_1 == 1)
                    result = sub_64c080(result, *(result + 0xc) + 0x10)
            
            int32_t var_8_2 = 9
            
            if (data_cf65bc != 0)
                result = result_1
                
                if (result != 0 && *result != 0)
                    result = sub_63d4e0(&result_1)
                    int32_t temp4_1 = *(result + 4)
                    *(result + 4) -= 1
                    
                    if (temp4_1 == 1)
                        result = sub_64c080(result, *(result + 0xc) + 0x10)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        var_38 = "XString::XString"
        var_3c_1 = 0x94
        var_40 = "C:\x\ax2017\Engine\xString.cpp"
        ecx_2 = &data_871e0c
    else if (eax_4 != 0xfffffffd)
        var_14 = &data_801800
        sub_63db30(&var_14, eax_4 + 3, edi_1 - eax_4 - 3)
        var_8_1.b = 2
        eax_5 = sub_63d850(&result_1, &var_14)
        var_8_1.b = 3
        
        if (data_cf65bc != 0)
            eax_5 = var_14
            
            if (eax_5 != 0 && *eax_5 != 0)
                eax_5 = sub_63d4e0(&var_14)
                int32_t temp1_1 = eax_5[1]
                eax_5[1] -= 1
                
                if (temp1_1 == 1)
                    eax_5 = sub_64c080(eax_5, eax_5[3] + 0x10)
                    var_14 = &data_801800
        
        var_8_1.b = 1
        
        if (edi_1 != 0xfffffffd)
            sub_63d720(&var_14, edi_1 + 3)
            var_8_1.b = 4
            sub_63d850(&var_1c, &var_14)
            var_8_1.b = 5
            
            if (data_cf65bc != 0)
                char* const eax_9 = var_14
                
                if (eax_9 != 0 && *eax_9 != 0)
                    char* eax_10 = sub_63d4e0(&var_14)
                    int32_t temp3_1 = *(eax_10 + 4)
                    *(eax_10 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)
            
            var_8_1.b = 1
            esi_1 = var_1c
            goto label_4e64a6
        
        var_38 = "XString::XString"
        var_3c_1 = 0x94
        var_40 = "C:\x\ax2017\Engine\xString.cpp"
        ecx_2 = &data_871e0c
    else
        var_38 = "XString::XString"
        var_3c_1 = 0x9a
        var_40 = "C:\x\ax2017\Engine\xString.cpp"
        ecx_2 = &data_871e0c

sub_63b870(eax_5, &data_801800, ecx_2, var_40, var_3c_1, var_38)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
