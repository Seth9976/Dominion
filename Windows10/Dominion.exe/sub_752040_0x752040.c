// 函数: sub_752040
// 地址: 0x752040
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7732b5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_12c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void var_120
int128_t* eax_3 = sub_751f80(&var_120)
int32_t* esi = data_1597cbc
int128_t var_c0 = *eax_3
int128_t var_b0 = eax_3[1]
int128_t var_a0 = eax_3[2]
int128_t var_90 = eax_3[3]
int128_t var_80 = eax_3[4]
int128_t var_70 = eax_3[5]
char* var_28

if (esi == 0)
    sub_69fd50(eax_3, "!Null\Null", &var_28, 0x1d)
    int32_t* var_14_1 = esi
    char* eax_4 = var_28
    char* ecx_2 = &data_801800
    
    if (eax_4 != 0)
        ecx_2 = eax_4
    
    eax_3 = sub_69f030(ecx_2, esi + 0x1d)
    esi = eax_3
    int32_t var_14_2 = 1
    
    if (data_cf65bc != 0)
        char* ecx_3 = var_28
        
        if (ecx_3 != 0 && *ecx_3 != 0)
            eax_3 = sub_63d4e0(&var_28)
            int32_t temp0_1 = *(eax_3 + 4)
            *(eax_3 + 4) -= 1
            
            if (temp0_1 == 1)
                eax_3 = sub_64c080(eax_3, *(eax_3 + 0xc) + 0x10)
    
    int32_t var_14_3 = 0xffffffff
else if (esi[1] != 0x1d)
    sub_63b870(eax_3, &data_801800, "assetPtr && assetPtr->assetType == assetType", 
        "C:\x\ax2017\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

bool cond:0 = *esi != 0
var_28 = esi

if (not(cond:0))
    sub_69f4a0(eax_3, 0, esi, 1)

esi[7] += 1
int32_t var_14_4 = 2
uint32_t eax_6 = sub_6edec0(**esi)
int32_t var_14_5 = 0xffffffff
void* ecx_8 = data_cf65b8
esi[7] -= 1
void* eax_7 = data_147abe4
float var_38 = 0f
bool cond:1 = *(eax_7 + 0x38) == 0
int32_t var_34 = 0
float xmm2_4 = _mm_min_ss(_mm_cvtepi32_ps(zx.o(*(ecx_8 + 0x14))) - 0f, 
    _mm_cvtepi32_ps(zx.o(*(ecx_8 + 0x18))) - 0f) * 0.800000012f
float var_30 = xmm2_4
float var_2c = xmm2_4
var_38.o = var_38.o
void var_5c
void var_4c

if (cond:1)
    int32_t* var_134_2 = &data_bf23ac
    sub_6827e0(eax_7, &var_38, nullptr, &data_7ff520, &data_bf23ac, eax_6)
else if (sub_682670(eax_7 + 0x28, &data_7ff520, &var_38, eax_7 + 0x28, &var_5c, &var_4c) != 0)
    int32_t* var_134_1 = &data_bf23ac
    sub_6827e0(&var_4c, &var_5c, nullptr, &var_4c, &data_bf23ac, eax_6)
data_1597cc0
uint32_t result = sub_69b9c0(0x3f800000)
fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
