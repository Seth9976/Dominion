// 函数: ??1_StructuredTaskCollection@details@Concurrency@@QAE@XZ
// 地址: 0x4ab850
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) =
    __ehhandler$??0agent@Concurrency@@QAE@AAVScheduleGroup@1@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14
char* randomValue = &var_14
errno_t eax_3
int32_t ecx
eax_3, ecx = rand_s(randomValue)

if (eax_3 != 0)
    randomValue = "GoodRandSeed"
    sub_63b870(eax_3, &data_801800, "result == 0", 
        "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x68, randomValue)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

sub_63eb10(ecx, var_14)
randomValue = sub_4d6b50(&data_cc8dc0)
sub_63d720(&randomValue, "channelsettings.xml")
void var_1c
sub_69e000(&var_1c, 1)
int32_t var_8_1 = 0
int32_t* esi = data_1597d88
int32_t* eax_4 = sub_6a6e70(esi, &var_1c)

if (eax_4 != 0)
    int32_t* eax_5 = sub_6a4880(eax_4, esi)
    eax_4 = sub_6a3220(eax_4)
    data_cc8dc4 = eax_5
    
    if (eax_5 == 0)
        goto label_4ab8fb
else
    data_cc8dc4 = eax_4
label_4ab8fb:
    void* edi_1 = data_1597d88
    uint32_t ecx_7 = *(edi_1 + 0xc)
    
    if (ecx_7 == 0)
        randomValue = "DefinitionGetSize"
        sub_63b870(eax_4, &data_801800, "pDefMap->definitionSize != 0", 
            "C:\x\ax2017\Engine\Definition.cpp", 0x6d, randomValue)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    int32_t* eax_6 = sub_687730(ecx_7)
    sub_69ca80(eax_6, edi_1)
    data_cc8dc4 = eax_6

int32_t var_8_2 = 1

if (data_cf65bc != 0)
    char* const var_18
    char* eax_7 = var_18
    
    if (eax_7 != 0 && *eax_7 != 0)
        char* eax_8 = sub_63d4e0(&var_18)
        int32_t temp0_1 = *(eax_8 + 4)
        *(eax_8 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
            var_18 = &data_801800

int32_t var_8_3 = 0xffffffff
char* result = sub_4d9320(&data_cc8dc8)
fsbase->NtTib.ExceptionList = ExceptionList
return result
