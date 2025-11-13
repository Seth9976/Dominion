// 函数: sub_740ef0
// 地址: 0x740ef0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7730e9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_a4 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
bool cond:0 = data_147ef94 != 0
data_14ff3e8 = 0xffffffff
void var_98

if (not(cond:0))
    int32_t ecx = data_14ff3e4
    int128_t var_64 = data_bf21e8
    data_1512420 = 0
    int128_t var_54 = data_bf21f8
    sub_6ce2f0(&var_98, 0, ecx, &var_98)
    int32_t eax_4
    eax_4.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_4

int64_t xmm0_2 = data_1512404
float xmm2_1 = xmm0_2.d f- data_cf65e0:4
float xmm1_1 = data_151240c f- data_cf65e0:0xc
int128_t var_3c = data_15123f4.o
float xmm0_5 = xmm0_2:4.d f- data_cf65e0:8
float xmm0_9 = sub_4ac580(&__saved_ebp, xmm0_5 * xmm0_5 + xmm2_1 * xmm2_1 + xmm1_1 * xmm1_1)

if (data_1512420 != 3)
    var_3c = data_800248

void* esi = *fsbase->ThreadLocalStoragePointer
int128_t var_64_1 = (xmm0_9 / 10f).o
int128_t var_54_1 = var_3c

if (data_1a9a440 s> *(esi + 8))
    sub_75970e(&data_1a9a440)
    
    if (data_1a9a440 == 0xffffffff)
        int32_t var_14_1 = 0
        data_1a9a444 = sub_69f030("sys/editor/translate.fab", 0x20)
        int32_t var_14_2 = 0xffffffff
        __Init_thread_footer(&data_1a9a440)

if (data_1a9a448 s> *(esi + 8))
    sub_75970e(&data_1a9a448)
    
    if (data_1a9a448 == 0xffffffff)
        int32_t var_14_3 = 1
        data_1a9a44c = sub_69f030("sys/editor/rotate_quarter.fab", 0x20)
        int32_t var_14_4 = 0xffffffff
        __Init_thread_footer(&data_1a9a448)

if (data_1a9a450 s> *(esi + 8))
    sub_75970e(&data_1a9a450)
    
    if (data_1a9a450 == 0xffffffff)
        int32_t var_14_5 = 2
        data_1a9a454 = sub_69f030("sys/editor/scale.fab", 0x20)
        int32_t var_14_6 = 0xffffffff
        __Init_thread_footer(&data_1a9a450)

int32_t eax_13 = data_1512420
int128_t* var_a8_1
void* eax_16
int32_t ecx_3
int32_t edx

if (eax_13 == 2)
    edx = data_1a9a444
label_741189:
    ecx_3 = data_14ff3e4
    eax_16 = &var_98
    var_a8_1 = &var_98
else
    if (eax_13 == 3)
        edx = data_1a9a44c
        goto label_741189
    
    ecx_3 = data_14ff3e4
    eax_16 = &var_98
    var_a8_1 = &var_98
    
    if (eax_13 != 4)
        int128_t var_64_2 = data_bf21e8
        int128_t var_54_2 = data_bf21f8
        sub_6ce2f0(eax_16, 0, ecx_3, var_a8_1)
        int32_t eax_17
        eax_17.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_17
    
    edx = data_1a9a454

sub_6ce2f0(eax_16, edx, ecx_3, var_a8_1)
data_14ff3e8 = sub_6d0cb0(data_14ff3e4, arg1)
uint32_t eax_18
eax_18.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_18
