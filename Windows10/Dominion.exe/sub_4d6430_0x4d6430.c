// 函数: sub_4d6430
// 地址: 0x4d6430
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??0ThreadVirtualProcessor@details@Concurrency@@QAE@PAVSchedulingNode@12@PAUIVirtualProcessorRoot@2@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char** var_14 = arg1
*arg1 = &data_801800
int32_t var_8_1 = 0
arg1[1] = &data_801800
int32_t (__fastcall* var_28)(void* arg1) = sub_4ab080
var_8_1.b = 1
`eh vector constructor iterator'(&arg1[4], 0x11a8, 3, sub_4ab060)
arg1[0xd43] = &data_801800
struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_28_1)(struct _EXCEPTION_REGISTRATION_RECORD
    *** arg1) = sub_63d770
var_8_1.b = 3
`eh vector constructor iterator'(&arg1[0xd44], 4, 0xa, 0x5a0be0)
arg1[0x1091] = &data_801800
arg1[0x1092] = &data_801800
arg1[0x1095] = &data_801800
arg1[0x1096] = &data_801800
__builtin_memset(&arg1[0x10a4], 0, 0x18)
struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_28_2)(void* arg1) = sub_4d6880
var_8_1.b = 9
`eh vector constructor iterator'(&arg1[0x10b6], 0x28, 0x80, sub_4d6870)
arg1[0x15b7] = 0
arg1[0x15b8] = 0
arg1[0x15b9] = 0
struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_28_3)(char** arg1) = sub_4d6960
var_8_1.b = 0xb
void* var_18 = &arg1[0x1bb7]
`eh vector constructor iterator'(&arg1[0x1bb7], 0xc, 0x40, sub_4d6950)
__builtin_memset(&arg1[0x1c80], 0, 0x18)
struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_28_4)(void* arg1) = sub_4ab1f0
var_8_1.b = 0xe
void* var_18_1 = &arg1[0x1c87]
int32_t* eax_8 = `eh vector constructor iterator'(&arg1[0x1c87], 0xc, 0xf, sub_4ab1e0)
__builtin_memset(&arg1[0x1cbb], 0, 0x24)
var_8_1.b = 0x12
char const* const var_28_5

if (arg1[0x1c80] == 0)
    eax_8 = sub_64c020(0x200)
    arg1[0x1c80] = eax_8
    arg1[0x1c81] = 0x7f
    
    if (arg1[0x15b7] == 0)
        eax_8 = sub_64c020(0x100)
        arg1[0x15b7] = eax_8
        arg1[0x15b8] = 0x3f
        
        if (arg1[0x1c83] == 0)
            eax_8 = sub_64c020(0x1000)
            arg1[0x1c83] = eax_8
            arg1[0x1c84] = 0x3ff
            
            if (arg1[0x1cbe] == 0)
                eax_8 = sub_64c020(0x1000)
                arg1[0x1cbe] = eax_8
                arg1[0x1cbf] = 0x3ff
                
                if (arg1[0x1cc1] == 0)
                    eax_8 = sub_64c020(0x1000)
                    arg1[0x1cc1] = eax_8
                    arg1[0x1cc2] = 0x3ff
                    
                    if (arg1[0x1cbb] == 0)
                        eax_8 = sub_64c020(0x80)
                        arg1[0x1cbb] = eax_8
                        arg1[0x1cbc] = 0x1f
                        
                        if (arg1[0x10a4] == 0)
                            eax_8 = sub_64c020(0x1000)
                            arg1[0x10a4] = eax_8
                            arg1[0x10a5] = 0x3ff
                            
                            if (arg1[0x10a7] == 0)
                                arg1[0x10a7] = sub_64c020(0x1000)
                                arg1[0x10a8] = 0x3ff
                                fsbase->NtTib.ExceptionList = ExceptionList
                                return arg1
                            
                            var_28_5 = "XMap<enum SyncedDataKey,struct SyncDataEntry<unsigned "
                            "__int64> >::SetNumBuckets"
                        else
                            var_28_5 = "XMap<enum SyncedDataKey,unsigned __int64>::SetNumBuckets"
                    else
                        var_28_5 = "XMap<struct Date,int>::SetNumBuckets"
                else
                    var_28_5 = "XMap<enum WeekID,struct WeeklyCampaignStatus>::SetNumBuckets"
            else
                var_28_5 = "XMap<enum DayID,struct DailySeedStatusEntryClient>::SetNumBuckets"
        else
            var_28_5 = "XMap<enum DayID,enum GameIndex>::SetNumBuckets"
    else
        var_28_5 = "XMap<enum TGGEntitlement,enum EntitlementState>::SetNumBuckets"
else
    var_28_5 = "XMap<enum DLCType,int>::SetNumBuckets"

sub_63b870(eax_8, &data_801800, "mNodeBuckets == NULL", "C:\x\ax2017\Engine\xMap.h", 0x74, var_28_5)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
