// 函数: sub_4b4660
// 地址: 0x4b4660
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_762b10
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* result
void* edx
result, edx = __chkstk(0x11c4)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_1c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result_1 = result
char* var_118c = &data_801800
uint32_t count = 0x1160
int32_t c = 0
void var_117c
void* var_28 = &var_117c
int64_t var_11bc
__builtin_memset(&var_11bc, 0, 0x30)
char* var_1188 = &data_801800
char* var_1184 = &data_801800
int32_t var_1180 = 0
memset(var_28, c, count)
int32_t var_8_1 = 0
int128_t var_11b4
var_11b4:0xc.d = *(edx + 0x44)
var_11b4.d = *(edx + 0x1c)
var_1c.q = 0
int64_t var_1194
var_1194:4.d = *(edx + 0x20)
sub_63d8d0(&var_118c, *(edx + 0x28))
sub_63d8d0(&var_1188, *(edx + 0x30))
sub_63d8d0(&var_1184, *(edx + 0x38))
int128_t var_11a4
var_11a4:4.d = *(edx + 0xc)
var_1194.d = *(edx + 0x48)
var_11a4.d = *(edx + 0x4c)
var_11a4:8.d = *(edx + 0x14)
var_11a4:0xc.d = *(edx + 0x10)
int32_t var_1180_1 = *(edx + 0x50)
int32_t performanceCount
QueryPerformanceCounter(&performanceCount)
var_11bc.d = performanceCount
int32_t eax_13 = *(edx + 0x54)
var_11bc:4.d = result
int32_t var_11cc = 0

if (eax_13 s> 0)
    int32_t edi_1 = 0
    void* _Destination = &var_117c
    int32_t var_11c0_1 = 0
    int32_t eax_28
    
    do
        strncpy(_Destination, *(*(edx + 0x58) + edi_1 + 0x10), 0x10)
        *(_Destination + 0xf) = 0
        void* edi_2 = edi_1 + *(edx + 0x58)
        *(_Destination + 0x10) = *(edi_2 + 0x18)
        *(_Destination + 0x18) = *(edi_2 + 8)
        *(_Destination + 0x14) = *(edi_2 + 4)
        *(_Destination + 0x20) = *(edi_2 + 0x1c)
        *(_Destination + 0x24) = *(edi_2 + 0x24)
        *(_Destination + 0x1c) = *(edi_2 + 0x20)
        int32_t eax_23 = *(edi_2 + 0x30)
        
        if (eax_23 s>= 0x40)
            sub_63b870(eax_23, &data_801800, 
                "response.gamePlayers[i].numSmartplays < MAX_SMARTPLAYS", 
                "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp", 0xb26, "GameMessageToGame")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        memcpy(_Destination + 0x28, *(edi_2 + 0x28), eax_23 << 3)
        *(_Destination + 0x228) = *(edi_2 + 0x30)
        edi_1 = var_11c0_1 + 0x38
        _Destination += 0x22c
        eax_28 = var_11cc + 1
        var_11c0_1 = edi_1
        var_11cc = eax_28
    while (eax_28 s< eax_13)

sub_4b1b50(result, &var_11bc)
Concurrency::details::_Micro_queue::_Pop_finalizer::~_Pop_finalizer(&var_11b4)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
