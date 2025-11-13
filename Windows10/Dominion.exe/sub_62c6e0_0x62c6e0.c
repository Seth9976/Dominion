// 函数: sub_62c6e0
// 地址: 0x62c6e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?release@?$source_block@V?$single_link_registry@V?$ITarget@I@Concurrency@@@Concurrency@@V?$ordered_message_processor@I@2@@Concurrency@@UAEXHPAV?$ITarget@I@2@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_58 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0
*arg3 = &data_801800
uint8_t* esi = arg4
char* const edi = &data_801800
int32_t var_8_1 = 0
char* ecx = esi
char* eax_4 = *arg2
int32_t var_14_1 = 1

if (eax_4 != 0)
    edi = eax_4

char* const var_3c = edi

do
    eax_4.b = *ecx
    ecx = &ecx[1]
while (eax_4.b != 0)

void* ecx_1 = ecx - &ecx[1]
int32_t eax_13

while (true)
    int32_t eax_5 = strstr(edi, esi)
    
    if (eax_5 == 0)
    label_62cab9:
        sub_63d960(arg3, edi)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg3
    
    void* esi_2 = eax_5 - edi
    
    if (esi_2 == 0xffffffff)
        goto label_62cab9
    
    void* eax_8 = ecx_1 + esi_2 + edi
    char* var_28 = eax_8
    int32_t eax_9 = strstr(eax_8, arg4)
    void* eax_10
    
    if (eax_9 != 0)
        eax_10 = eax_9 - edi
    
    if (eax_9 == 0 || eax_10 == 0xffffffff)
        char* const ecx_32 = &data_801800
        char* eax_37 = *arg2
        
        if (eax_37 != 0)
            ecx_32 = eax_37
        
        char* const var_5c_9 = ecx_32
        uint8_t* var_60_5 = arg4
        sub_63b5f0("mismatched block symbols %s in %s")
        goto label_62cab9
    
    char const* const var_64
    int32_t var_60_6
    char const* const var_5c_11
    char* ecx_36
    
    if (arg5 == 0 || arg6 == 0)
        var_5c_11 = "ReplaceBlock"
        var_60_6 = 0x106ca
        var_64 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        ecx_36 = "begin && end"
    else
        char* ecx_2 = var_28
        
        if (ecx_2 == 0)
            var_5c_11 = "XString::XString"
            var_60_6 = 0x9a
            var_64 = "C:\x\ax2017\Engine\xString.cpp"
            ecx_36 = &data_871e0c
        else
            var_28 = &data_801800
            eax_13 = sub_63db30(&var_28, ecx_2, eax_10 - esi_2 - ecx_1)
            int32_t var_8_2 = 1
            
            if (edi == 0)
                break
            
            char* const var_24 = &data_801800
            sub_63db30(&var_24, edi, esi_2)
            var_8_2.b = 2
            char* const var_30
            sub_63d720(&var_30, arg5)
            var_8_2.b = 4
            char* const eax_14 = var_24
            char* const var_20 = eax_14
            
            if (eax_14 != 0 && *eax_14 != 0)
                char* eax_15 = sub_63d4e0(&var_20)
                *(eax_15 + 4) += 1
            
            char* eax_16 = var_30
            int32_t var_14_2 = 3
            char* const ecx_7 = &data_801800
            
            if (eax_16 != 0)
                ecx_7 = eax_16
            
            sub_63d960(&var_20, ecx_7)
            var_8_2.b = 5
            char* const edi_1 = var_20
            char* const var_1c = edi_1
            
            if (edi_1 != 0 && *edi_1 != 0)
                char* eax_17 = sub_63d4e0(&var_1c)
                *(eax_17 + 4) += 1
            
            char* eax_18 = var_28
            int32_t var_14_3 = 7
            char* ecx_10 = &data_801800
            
            if (eax_18 != 0)
                ecx_10 = eax_18
            
            sub_63d960(&var_1c, ecx_10)
            char* var_2c
            sub_63d720(&var_2c, arg6)
            var_8_2.b = 7
            char* const esi_3 = var_1c
            char* const var_18 = esi_3
            
            if (esi_3 != 0 && *esi_3 != 0)
                char* eax_19 = sub_63d4e0(&var_18)
                *(eax_19 + 4) += 1
            
            char* eax_20 = var_2c
            int32_t var_14_4 = 0xf
            char* const ecx_14 = &data_801800
            
            if (eax_20 != 0)
                ecx_14 = eax_20
            
            sub_63d960(&var_18, ecx_14)
            char* const eax_21 = var_18
            char* const ecx_16 = &data_801800
            
            if (eax_21 != 0)
                ecx_16 = eax_21
            
            sub_63d960(arg3, ecx_16)
            int32_t var_14_5 = 7
            var_8_2.b = 8
            
            if (data_cf65bc != 0)
                char* const eax_22 = var_18
                
                if (eax_22 != 0 && *eax_22 != 0)
                    char* eax_23 = sub_63d4e0(&var_18)
                    int32_t temp0_1 = *(eax_23 + 4)
                    *(eax_23 + 4) -= 1
                    
                    if (temp0_1 == 1)
                        sub_64c080(eax_23, *(eax_23 + 0xc) + 0x10)
                        var_18 = &data_801800
            
            var_8_2.b = 9
            
            if (data_cf65bc != 0)
                char* eax_24 = var_2c
                
                if (eax_24 != 0 && *eax_24 != 0)
                    char* eax_25 = sub_63d4e0(&var_2c)
                    int32_t temp1_1 = *(eax_25 + 4)
                    *(eax_25 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
                        var_2c = &data_801800
            
            int32_t var_14_6 = 3
            var_8_2.b = 0xa
            
            if (data_cf65bc != 0 && esi_3 != 0 && *esi_3 != 0)
                char* eax_26 = sub_63d4e0(&var_1c)
                int32_t temp2_1 = *(eax_26 + 4)
                *(eax_26 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(eax_26, *(eax_26 + 0xc) + 0x10)
                    var_1c = &data_801800
            
            int32_t var_14_7 = 1
            var_8_2.b = 0xb
            
            if (data_cf65bc != 0 && edi_1 != 0 && *edi_1 != 0)
                char* eax_27 = sub_63d4e0(&var_20)
                int32_t temp3_1 = *(eax_27 + 4)
                *(eax_27 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_64c080(eax_27, *(eax_27 + 0xc) + 0x10)
                    var_20 = &data_801800
            
            var_8_2.b = 0xc
            
            if (data_cf65bc != 0)
                char* eax_28 = var_30
                
                if (eax_28 != 0 && *eax_28 != 0)
                    char* eax_29 = sub_63d4e0(&var_30)
                    int32_t temp4_1 = *(eax_29 + 4)
                    *(eax_29 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        sub_64c080(eax_29, *(eax_29 + 0xc) + 0x10)
                        var_30 = &data_801800
            
            var_8_2.b = 0xd
            
            if (data_cf65bc != 0)
                char* const eax_30 = var_24
                
                if (eax_30 != 0 && *eax_30 != 0)
                    char* eax_31 = sub_63d4e0(&var_24)
                    int32_t temp5_1 = *(eax_31 + 4)
                    *(eax_31 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        sub_64c080(eax_31, *(eax_31 + 0xc) + 0x10)
                        var_24 = &data_801800
            
            edi = var_3c + ecx_1 + eax_10
            var_3c = edi
            int32_t var_8_3 = 0xe
            
            if (data_cf65bc != 0)
                char* eax_34 = var_28
                
                if (eax_34 != 0 && *eax_34 != 0)
                    char* eax_35 = sub_63d4e0(&var_28)
                    int32_t temp6_1 = *(eax_35 + 4)
                    *(eax_35 + 4) -= 1
                    
                    if (temp6_1 == 1)
                        sub_64c080(eax_35, *(eax_35 + 0xc) + 0x10)
                        var_28 = &data_801800
            
            esi = arg4
            var_8_3.b = 0
            continue
    
    sub_63b870(eax_10, &data_801800, ecx_36, var_64, var_60_6, var_5c_11)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

sub_63b870(eax_13, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x9a, "XString::XString")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
