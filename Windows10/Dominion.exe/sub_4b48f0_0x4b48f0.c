// 函数: sub_4b48f0
// 地址: 0x4b48f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_762b5b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* ecx = __chkstk(0x2360)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = data_cc8d5c

if (edi == 0)
    sub_63b870(&ExceptionList, &data_801800, "gClient", 
        "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t* var_2370
sub_4bad70(edi + 0x507c, &var_2370)
int32_t* i_1
int32_t* i = i_1
uint32_t result

if (i != 0xffffffff)
    int32_t ebx_1 = *ecx
    
    do
        if (*i == ebx_1)
            int32_t var_8_1 = 0
            sub_4b4ab0(&i[2], sub_4b4660(i))
            void var_11b4
            Concurrency::details::_Micro_queue::_Pop_finalizer::~_Pop_finalizer(&var_11b4)
            result = ecx[1]
            i[0x4be] = result
            goto label_4b4a65
        
        sub_4baf10(var_2370, &i_1)
        i = i_1
    while (i != 0xffffffff)

if (*(edi + 0x508c) != 0x60)
    int32_t* eax_5 = sub_4baf70(edi + 0x507c)
    *eax_5 = *ecx
    int32_t var_8_2 = 1
    sub_4b4ab0(&eax_5[2], sub_4b4660(eax_5))
    int32_t var_8_3 = 0xffffffff
    void var_235c
    Concurrency::details::_Micro_queue::_Pop_finalizer::~_Pop_finalizer(&var_235c)
    result = sub_4c5690()
    int32_t ecx_10 = *(edi + 0x508c) - result
    
    if (result s>= 0x40 || ecx_10 s>= 0x20)
        int32_t var_24_5 = ecx_10
        uint32_t result_1 = result
        sub_63b5f0("reached specific network game count limit, dropping game desc %d %d")
        Concurrency::details::_Micro_queue::_Pop_finalizer::~_Pop_finalizer(&eax_5[4])
        result = zx.d(eax_5[0x4ca].w)
        int32_t ecx_12 = *(edi + 0x5088)
        *(edi + 0x5088) = result
        eax_5[0x4ca] = ecx_12
        *(edi + 0x508c) -= 1
else
    result = sub_63b5f0("reached total network game count limit, dropping game desc")

label_4b4a65:
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
