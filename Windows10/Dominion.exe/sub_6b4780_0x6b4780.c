// 函数: sub_6b4780
// 地址: 0x6b4780
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?_RegisterCallback@_CancellationTokenState@details@Concurrency@@QAEXPAV_CancellationTokenRegistration@23@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** esi

if (arg1 != 0)
    if (arg1[1] != 0x12)
        sub_63b870(eax_3, &data_801800, "assetPtr && assetPtr->assetType == assetType", 
            "C:\x\ax2017\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    struct _EXCEPTION_REGISTRATION_RECORD** var_18_1 = arg1
    esi = arg1
else
    struct _EXCEPTION_REGISTRATION_RECORD** var_14
    sub_69fd50(eax_3, "!Null\Null", &var_14, 0x12)
    struct _EXCEPTION_REGISTRATION_RECORD** var_8_1 = arg1
    char* eax_4 = var_14
    char* const ecx_1 = &data_801800
    
    if (eax_4 != 0)
        ecx_1 = eax_4
    
    eax_3 = sub_69f030(ecx_1, arg1 + 0x12)
    esi = eax_3
    int32_t var_8_2 = 1
    
    if (data_cf65bc != arg1)
        eax_3 = var_14
        
        if (eax_3 != 0 && *eax_3 != 0)
            eax_3 = sub_63d4e0(&var_14)
            int32_t temp0_1 = eax_3[1]
            eax_3[1] -= 1
            
            if (temp0_1 == 1)
                eax_3 = sub_64c080(eax_3, &eax_3[3][2])
                var_14 = &data_801800
    
    int32_t var_8_3 = 0xffffffff
    struct _EXCEPTION_REGISTRATION_RECORD** var_18 = esi

if (*esi == 0)
    sub_69f4a0(eax_3, 0, esi, 1)

int32_t ecx_5 = esi[7]
esi[7] = ecx_5 + 1
struct _EXCEPTION_REGISTRATION_RECORD* Next = (*esi)->Next
int32_t var_8_4 = 2

if (arg1[2] != 4)
    struct _EXCEPTION_REGISTRATION_RECORD* Next_1 = Next->Next
    esi[7] = ecx_5
    fsbase->NtTib.ExceptionList = ExceptionList
    return Next_1

sub_63b870(Next, &data_801800, "assetFont->assetLocation != ASSET_LOCATION_FAILURE_ASSET", 
    "C:\x\ax2017\Engine\Font.cpp", 0x2a9, "FontGetHeight")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
