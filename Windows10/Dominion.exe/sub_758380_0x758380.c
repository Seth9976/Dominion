// 函数: sub_758380
// 地址: 0x758380
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$??$parse_floating_point_possible_infinity@_WV?$input_adapter_character_source@V?$console_input_adapter@_W@__crt_stdio_input@@@__crt_strtox@@_K@__crt_strtox@@YA?AW4floating_point_parse_result@0@AA_WAAV?$input_adapter_character_source@V?$console_input_adapter@_W@__crt_stdio_input@@@0@_K@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_14 = arg1
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2[1] != 0x15)
    sub_63b870(&ExceptionList, &data_801800, "assetPtr->assetType == ASSET_TYPE_SOUND", 
        "C:\x\ax2017\Engine\Sound.cpp", 0x356, "SoundGetDef")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* eax_4 = sub_5af880(arg2)
int32_t ecx_1 = *(eax_4 + 0x28)

if (ecx_1 != 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return ecx_1

if (*(eax_4 + 0x30) == 0 && *(eax_4 + 0x38) == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

void*** eax_7 = operator new(0x78)
void*** var_14_1 = eax_7
int32_t var_8_1 = 0
void*** eax_8 = sub_75ece0(eax_7)
var_8_1.b = 1
*eax_7 = &data_890a70
eax_7[0x1a] = arg2
eax_7[0x1b] = 0
eax_7[0x1c] = 0

if (arg2[1] != 0x15)
    sub_63b870(eax_8, &data_801800, "assetPtr->assetType == ASSET_TYPE_SOUND", 
        "C:\x\ax2017\Engine\Sound.cpp", 0x356, "SoundGetDef")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* eax_9 = sub_5af880(arg2)

if (*(eax_9 + 0x30) s<= 0)
    sub_757270(eax_7, arg2)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_7

int32_t i = 0

do
    if (*(*(eax_9 + 0x20) + (i << 3)) != 0)
        eax_7[0x14]
        sub_758380(eax_2)
    
    i += 1
while (i s< *(eax_9 + 0x30))

fsbase->NtTib.ExceptionList = ExceptionList
return eax_7
