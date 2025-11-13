// 函数: sub_4b13f0
// 地址: 0x4b13f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7627cb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
char* ecx
char edx
ecx, edx = __chkstk(0x1418)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* edi = ecx
char* var_11d8 = edi
void* eax_3 = sub_61dad0()
void* result = eax_3 + edi * 0xc + 8
void* result_1 = result
int32_t edx_1 = *result
void var_1208

if (edx_1 != 0)
    void* esi_4 = data_cc8d5c
    char const* const var_38_1
    int32_t var_34_1
    char const* const var_30_1
    char* ecx_1
    
    if (esi_4 == 0)
    label_4b1476:
        var_30_1 = "GetClient"
        var_34_1 = 0x7b
        var_38_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
        ecx_1 = "gClient"
    else
        *(esi_4 + 0x506c) = edx_1
        *(esi_4 + 0x5098) = edx_1
        *(esi_4 + 0x5068) = 1
        result = sub_4da880()
        
        if (result.b == 0)
            result.b = 0
        label_4b183f:
            fsbase->NtTib.ExceptionList = ExceptionList
            CookieCheckFunction(result)
            return result
        
        if (*(esi_4 + 0x6240) s>= 2)
            if (*(esi_4 + 0x50c8) s>= 0xb)
                int128_t* eax_28 = sub_624070(&var_1208, 0x77f0b0, esi_4 + 0x5098, &var_1208, 0)
                int64_t var_11f8_1 = eax_28[1].q
                result.b = (*eax_28).d != 1
            else
                sub_4b0bf0()
                result.b = 1
            
            goto label_4b183f
        
        var_30_1 = "GameStartCampaign"
        var_34_1 = 0x709
        var_38_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameClient.cpp"
        ecx_1 = "save.setup.numPlayers >= 2"
    
    sub_63b870(result, &data_801800, ecx_1, var_38_1, var_34_1, var_30_1)
    
    if (sub_63bc30() == 0)
        sub_63bb00()
        noreturn
    
    breakpoint

result = data_cc8d5c

if (result == 0)
    goto label_4b1476

char* const var_11a0_1 = &data_801800
uint32_t count = 0x1160
int64_t var_11d0
__builtin_memset(&var_11d0, 0, 0x1c)
int32_t c = 0
void var_1190
void* var_38_2 = &var_1190
char* const var_119c = &data_801800
char* const var_1198_1 = &data_801800
int64_t var_11a8_1 = 0
int32_t var_1194_1 = 0
memset(var_38_2, c, count)
int32_t var_14_1 = 0
count.q = 0
int32_t var_11ec
char eax_5 = sub_61dba0(eax_3, &var_11ec)
int32_t ecx_4 = *(data_cc8dc8 + 0x1e1a4)

if (eax_5 == 0)
    int32_t var_117c_2 = 0x3e8
    int32_t var_1178_2 = *(sub_4d8f30(ecx_4) + 0x42b0)
else
    int32_t var_117c_1 = 1
    int32_t var_1178_1 = *(sub_4d8f30(ecx_4) + 0x4250)

int32_t eax_9 = *eax_3
int32_t var_f4c_1 = eax_9
int32_t var_f50_1 = 3
int32_t var_11b8
int32_t edx_6 = (eax_9 + 1) << 0x1c | (var_11b8 & 0xffffffd) | 2
var_11b8 = edx_6

if (edi == 4 || edi == 9)
    edx_6 |= 0x40
    void var_1438
    __builtin_memcpy(&var_1438, &var_1190, 0x22c)
    void var_f64
    __builtin_memcpy(&var_1190, &var_f64, 0x22c)
    __builtin_memcpy(&var_f64, &var_1438, 0x22c)
    edi = var_11d8

int32_t edx_7 = edx_6 | 0x80
var_11b8 = edx_7

if (eax_5 != 0)
    var_11b8 = edx_7 | 0x100

int128_t var_11c8
var_11c8:0xc.d = 0
var_11a8_1.d = 0x17
var_14_1.b = 1
sub_63d850(&var_119c, sub_61d910(&var_11d8, edi))
var_14_1.b = 2

if (data_cf65bc != 0)
    char* eax_13 = var_11d8
    
    if (eax_13 != 0 && *eax_13 != 0)
        char* eax_14 = sub_63d4e0(&var_11d8)
        int32_t temp0_1 = *(eax_14 + 4)
        *(eax_14 + 4) -= 1
        
        if (temp0_1 == 1)
            sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)

var_14_1.b = 0
int32_t var_30_3 = 2
void* eax_15 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
int32_t esi_2 = 1
var_11d8 = eax_15
int32_t ecx_12 = 1
int32_t eax_16 = *(eax_15 + 0x42c8)

if (eax_16 s> 1)
    ecx_12 = eax_16

int32_t edx_14 = neg.d(*(eax_15 + 0x42c4))
int32_t eax_19 = neg.d(*(var_11d8 + 0x42c0))
int32_t var_11dc_1 = eax_19

if (eax_19 s<= edx_14)
    eax_19 = edx_14

char* ecx_13 = var_11d8

if (ecx_12 s<= eax_19)
    esi_2 = edx_14
    
    if (var_11dc_1 s> edx_14)
        esi_2 = var_11dc_1
else
    int32_t eax_20 = *(ecx_13 + 0x42c8)
    
    if (eax_20 s> 1)
        esi_2 = eax_20

int32_t esi_3 = neg.d(esi_2)
*(ecx_13 + 0x42c8) = esi_2 + 1
int32_t var_30_4 = 0
*(result + 0x5068) = 1
*(result + 0x506c) = esi_3
*(result + 0x5098) = esi_3
int32_t var_38_3 = 2
*result_1 = esi_3
sub_4d5e20(result + 0x5098, result + 0x5098, &var_11d0, var_38_3, result_1)
sub_4b11c0(result + 0x5098)
sub_624070(&var_1208, 0x77f0a0, result + 0x5098, &var_1208, edx)

if (eax_5 == 0)
    sub_4da580(result + 0x5098, esi_3)
else
    var_11c8:0xc.d = var_11ec << 4 | edi
    sub_4b3c70()

data_cc8dc8
sub_4d8ad0(esi_3)
Concurrency::details::_Micro_queue::_Pop_finalizer::~_Pop_finalizer(&var_11c8)
result.b = 1
goto label_4b183f
