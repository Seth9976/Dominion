// 函数: sub_4b1890
// 地址: 0x4b1890
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76281b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
char* result
int32_t* edx
result, edx = __chkstk(0x11c0)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result_1 = result
result_1 = result
uint32_t count = 0x1160
int64_t var_11d0
__builtin_memset(&var_11d0, 0, 0x30)
int32_t c = 0
void var_1190
void* var_38 = &var_1190
char* const var_11a0 = &data_801800
char* const var_119c = &data_801800
char* const var_1198 = &data_801800
int32_t var_1194 = 0
memset(var_38, c, count)
int32_t var_14_1 = 0
count.q = 0
int32_t var_117c = 0x3e8
int32_t var_1178 = *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x42b0)
char* ecx_4 = *sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
char* const eax_7 = &data_801800

if (ecx_4 != 0)
    eax_7 = ecx_4

int32_t edx_1 = &var_1190 - eax_7

do
    ecx_4.b = *eax_7
    eax_7 = &eax_7[1]
    eax_7[edx_1 - 1] = ecx_4.b
while (ecx_4.b != 0)

void* ecx_5 = data_cc8d5c
int32_t var_f50 = 3
int32_t var_f4c = arg2
int32_t var_f64
__builtin_strcpy(&var_f64, "Hard AI")
int32_t var_30 = 2
int64_t var_11a8
var_11a8.d = 0x17
var_11a8:4.d = 0

if (ecx_5 == 0)
    sub_63b870(eax_7, &data_801800, "gClient", "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 
        0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char* result_2 = *(sub_4badc0(ecx_5 + 0x75b8, edx) + 4)
result_1 = result_2

if (result_2 != 0 && *result_2 != 0)
    char* eax_9 = sub_63d4e0(&result_1)
    *(eax_9 + 4) += 1

var_14_1.b = 1
sub_63d850(&var_11a0, &result_1)
var_14_1.b = 2

if (data_cf65bc != 0 && result_2 != 0 && *result_2 != 0)
    char* eax_10 = sub_63d4e0(&result_1)
    int32_t temp0_1 = *(eax_10 + 4)
    *(eax_10 + 4) -= 1
    
    if (temp0_1 == 1)
        sub_64c080(eax_10, *(eax_10 + 0xc) + 0x10)

var_14_1.b = 0
char* const eax_11 = var_119c

if (eax_11 != 0 && eax_11 != &data_801800)
    if (data_cf65bc != 0 && *eax_11 != 0)
        char* eax_12 = sub_63d4e0(&var_119c)
        int32_t temp1_1 = *(eax_12 + 4)
        *(eax_12 + 4) -= 1
        
        if (temp1_1 == 1)
            sub_64c080(eax_12, *(eax_12 + 0xc) + 0x10)
    
    var_119c = &data_801800

int128_t var_11b8
var_11b8.d = (arg2 + 1) << 0x1c | 6
sub_4b1b50(result, &var_11d0)
int128_t var_11c8
Concurrency::details::_Micro_queue::_Pop_finalizer::~_Pop_finalizer(&var_11c8)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
