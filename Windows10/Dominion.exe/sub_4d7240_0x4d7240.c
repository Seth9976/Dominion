// 函数: sub_4d7240
// 地址: 0x4d7240
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_763a00
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t* result
void* edx
result, edx = __chkstk(0x11c0)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result_1 = result
int32_t* result_2 = result
uint32_t count = 0x1160
int64_t var_11d0
__builtin_memset(&var_11d0, 0, 0x30)
int32_t c = 0
void var_1190
void* var_38 = &var_1190
char* var_11a0 = &data_801800
char* var_119c = &data_801800
char* const var_1198 = &data_801800
int32_t var_1194 = 0
memset(var_38, c, count)
int32_t var_14_1 = 0
char* var_30 = *(edx + 0x1b0)
int128_t var_11c8
var_11c8.d = *(edx + 0x188)
var_11c8:4.d = *(edx + 0x18c)
var_11c8:0xc.d = *(edx + 0x194)
int128_t var_11b8
var_11b8.d = *(edx + 0x198)
var_11b8:8.d = *(edx + 0x1a0)
var_11b8:4.d = *(edx + 0x19c)
var_11b8:0xc.d = *(edx + 0x1a4)
var_11c8:8.d = *(edx + 0x190)
int64_t var_11a8
var_11a8.d = *(edx + 0x1a8)
var_30.q = 0
var_11a8:4.d = *(edx + 0x1ac)
sub_63d8d0(&var_11a0, var_30)
sub_63d8d0(&var_119c, *(edx + 0x1b8))
void var_1180
void* esi = &var_1180
int32_t var_30_2 = *(edx + 0x180)
void* edi_1 = edx + 8
int32_t var_11d4 = 0
int32_t eax_23

while (true)
    *esi = *edi_1
    *(esi + 0xc) = *(edi_1 + 0xc)
    uint32_t _Count = 0x10
    char* _Source = *(edi_1 - 8)
    *(esi + 8) = *(edi_1 + 8)
    strncpy(esi - 0x10, _Source, _Count)
    int32_t eax_18 = *(edi_1 + 4)
    *(esi - 1) = 0
    *(esi + 4) = eax_18
    *(esi + 0x10) = *(edi_1 + 0x10)
    int32_t eax_20 = *(edi_1 + 0x20)
    *(esi + 0x218) = eax_20
    eax_23 = memcpy(esi + 0x18, *(edi_1 + 0x18), eax_20 << 3)
    
    if (*(esi + 0x218) s< 0)
        break
    
    edi_1 += 0x30
    int32_t eax_25 = var_11d4 + 1
    esi += 0x22c
    var_11d4 = eax_25
    
    if (eax_25 s>= 8)
        sub_4b1b50(result, &var_11d0)
        Concurrency::details::_Micro_queue::_Pop_finalizer::~_Pop_finalizer(&var_11c8)
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(result)
        return result

sub_63b870(eax_23, &data_801800, "setupDest.players[k].smartplays.numSmartplays >= 0", 
    "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp", 0x2ec, "ToSetup")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
