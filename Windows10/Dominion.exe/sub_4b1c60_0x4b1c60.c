// 函数: sub_4b1c60
// 地址: 0x4b1c60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_7628a0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* ecx
int32_t edx
ecx, edx = __chkstk(0x11d0)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_18 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_11c4 = ecx
void* ebx = data_cc8d5c

if (ebx == 0)
    sub_63b870(ecx, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

sub_4b1890(arg1, edx)
int32_t var_8_1 = 0
int32_t eax_4
int32_t ecx_1
eax_4, ecx_1 = sub_4b1070()
int32_t var_24_1 = 0
*(ebx + 0x5068) = 1
*(ebx + 0x506c) = eax_4
int32_t var_2c = 6
*(ebx + 0x5098) = eax_4
void var_11c0
sub_4d5e20(eax_4, ebx + 0x5098, &var_11c0, var_2c, ecx_1)
sub_4b11c0(ebx + 0x5098)
void var_11e0
sub_624070(&var_11e0, 0x77f0a0, ebx + 0x5098, &var_11e0, arg2)
char* eax_6 = sub_4da580(ebx + 0x5098, eax_4)
void* ecx_6 = data_cc8d5c
int32_t var_11c8 = eax_4

if (ecx_6 == 0)
    sub_63b870(eax_6, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

void* eax_7 = sub_4badc0(ecx_6 + 0x75b8, var_11c4)

if (eax_7 != 0)
    eax_7 = *eax_7

void* ecx_8 = data_cc8dc8
var_11c4 = eax_7
sub_4bb260(sub_4d8f30(*(ecx_8 + 0x1e1a4)) + 0x720c, &var_11c4, &var_11c8)
data_cc8dc8
sub_4d8ad0(eax_4)
void var_11b8
struct _EXCEPTION_REGISTRATION_RECORD** result =
    Concurrency::details::_Micro_queue::_Pop_finalizer::~_Pop_finalizer(&var_11b8)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
