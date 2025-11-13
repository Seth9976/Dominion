// 函数: sub_61b2f0
// 地址: 0x61b2f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$___std_smf_ellint_2@16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ecx
int32_t var_14 = ecx
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
EnterCriticalSection(&data_b4a600)
void* edi = data_b4a618
int32_t* i_4 = *(edi + 0x21b0fc)

if (i_4 != 0)
    int32_t* i
    
    do
        i = *i_4
        _aligned_free(i_4)
        i_4 = i
    while (i != 0)

*(edi + 0x21b0f8) = 0
*(edi + 0x21b0fc) = 0
*(edi + 0x21b104) = 0
*(edi + 0x21b10c) = 0
int32_t* ecx_1 = data_b4a618

if (ecx_1 != 0)
    int32_t var_8_1 = 0
    
    if (data_cf65bc != 0)
        int32_t* eax_3 = ecx_1[0x86c42]
        
        if (eax_3 != 0)
            int32_t edx_1 = ecx_1[0x86c44]
            ecx_1[0x86c43] = 0
            sub_64c080(eax_3, edx_1 << 2)
            ecx_1 = data_b4a618
    
    int32_t var_8_2 = 0xffffffff
    sub_64c080(ecx_1, 0x21b138)
    data_b4a618 = 0

LeaveCriticalSection(&data_b4a600)
sub_4d4b30(&data_b4a5dc)

if (data_b4a5c0 != 0)
    sub_5ac840(&data_b4a5c0)
    int32_t eax_4 = data_b4a5c0
    
    if (eax_4 != 0)
        _aligned_free(eax_4)
    
    __builtin_memset(&data_b4a5c0, 0, 0x14)
    data_b4a5d8 = 0

DeleteCriticalSection(&data_b4a5e8)
DeleteCriticalSection(&data_b4a600)

if (data_b809dc != 0)
    sub_5d0e60()

int32_t* eax_5 = data_be1538
int32_t i_5 = 0x96
int32_t* esi_1 = eax_5
int32_t i_1

do
    if (*esi_1 != 0)
        sub_64e810(esi_1)
    
    esi_1 = &esi_1[1]
    i_1 = i_5
    i_5 -= 1
while (i_1 != 1)
int32_t i_3 = 0x96
int32_t ecx_4 = data_8db528
data_8db528 = zx.d(eax_5[0x300].w)
eax_5[0x300] = ecx_4
int32_t* eax_7 = data_be153c
int32_t* esi_2 = eax_7
data_8db52c -= 1
int32_t i_2

do
    if (*esi_2 != 0)
        sub_64e810(esi_2)
    
    esi_2 = &esi_2[1]
    i_2 = i_3
    i_3 -= 1
while (i_2 != 1)
int32_t ecx_6 = data_8db528
uint32_t result = zx.d(eax_7[0x300].w)
data_8db528 = result
eax_7[0x300] = ecx_6
data_8db52c -= 1

if (data_cd3188 s> i_3)
    void* esi_3 = &data_ccf78c
    
    do
        result = sub_64e810(esi_3)
        i_3 += 1
        esi_3 += 0x74
    while (i_3 s< data_cd3188)

bool cond:0 = data_b809e0 == 0
data_cd3188 = 0

if (not(cond:0))
    sub_637650(&data_b809e0)
    result = data_b809e0
    
    if (result != 0)
        result = _aligned_free(result)
    
    __builtin_memset(&data_b809e0, 0, 0x14)
    data_b809f8 = 0

if (data_be3598 != 0)
    sub_6378e0(&data_be3598)
    result = sub_64c080(data_be3598, (data_be359c << 2) + 4)
    data_be3598 = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
