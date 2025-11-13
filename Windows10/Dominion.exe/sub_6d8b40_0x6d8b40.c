// 函数: sub_6d8b40
// 地址: 0x6d8b40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_770d85
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_5c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t* eax_3 = sub_69d520(data_177751c)
int32_t result_1 = sub_69f680(5, eax_3)
int32_t result = result_1
int32_t* result_6 = sub_6d89d0(eax_3)
int32_t* result_5
int32_t* result_7
int32_t* result_3

if (result_1 != 0)
    if (*(result_1 + 4) != 5)
        sub_63b870(result_6, &data_801800, "assetPtr && assetPtr->assetType == assetType", 
            "C:\x\ax2017\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    result_3 = result_1
    result_5 = result_3
else
    sub_69fd50(result_6, "!Null\Null", &result_7, 5)
    int32_t result_2 = result_1
    char* result_8 = result_7
    char* const result_12 = &data_801800
    
    if (result_8 != 0)
        result_12 = result_8
    
    result_6 = sub_69f030(result_12, result_1 + 5)
    result_3 = result_6
    result_5 = result_3
    int32_t var_14_1 = 1
    
    if (data_cf65bc != result_1)
        result_6 = result_7
        
        if (result_6 != 0 && *result_6 != 0)
            result_6 = sub_63d4e0(&result_7)
            int32_t temp0_1 = result_6[1]
            result_6[1] -= 1
            
            if (temp0_1 == 1)
                result_6 = sub_64c080(result_6, result_6[3] + 0x10)
                result_7 = &data_801800
    
    int32_t var_14_2 = 0xffffffff
    result_1 = result_3

int32_t* result_4 = result_3

if (*result_1 == 0)
    sub_69f4a0(result_6, 0, result_1, 1)

int32_t** eax_5 = *result_1
*(result_1 + 0x1c) += 1
int32_t* result_9 = *eax_5
result_7 = result_9
int32_t ecx
int32_t var_60 = ecx
int32_t var_14_3 = 2
void* eax_6 = result_9[2]
int32_t* edi_1 = *(eax_6 + 8) + 8
int32_t* var_34 = edi_1
int32_t var_68 = ecx
int32_t* eax_8 = sub_6dce10(sub_6dce10(eax_6, edi_1, &data_8ce7bc, 0x5b), edi_1, &data_8ce7bc, 0x5c)

if (arg3 s> 8)
    sub_63b870(eax_8, &data_801800, "numTextures <= NUM_DIFFUSE", 
        "C:\x\ax2017\Engine\Material.cpp", 0x3b5, "MaterialCreateMemory")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_9 = 0
int32_t var_2c_1 = 0

if (arg3 s> 0)
    int32_t esi_1 = 0x1d
    
    do
        int32_t var_60_1 = *(arg2 + (eax_9 << 2))
        sub_6dce10(eax_9 + 0x53, edi_1, &data_8ce7bc, eax_9 + 0x53)
        int32_t var_68_1 = 1
        int32_t var_70_1 = 1
        sub_6dce10(sub_6dce10(esi_1 - 1, edi_1, &data_8ce7bc, esi_1 - 1), edi_1, &data_8ce7bc, 
            esi_1)
        int32_t var_78_1 = 2
        sub_6dce10(esi_1 + 2, edi_1, &data_8ce7bc, esi_1 + 2)
        int32_t var_80_1 = 2
        sub_6dce10(esi_1 + 3, edi_1, &data_8ce7bc, esi_1 + 3)
        int32_t var_88_1 = 2
        sub_6dce10(esi_1 + 4, edi_1, &data_8ce7bc, esi_1 + 4)
        eax_9 = var_2c_1 + 1
        esi_1 += 6
        var_2c_1 = eax_9
    while (eax_9 s< arg3)
    
    result_3 = result_5

int32_t i_1 = arg5

if (i_1 s> 0)
    int32_t ecx_9 = 0
    int32_t* result_11 = result_7
    int32_t i
    
    do
        ecx_9 += 0x20
        eax_9 = *(result_11[2] + 8)
        *(eax_9 + ecx_9 - 8) = *(ecx_9 + arg4 - 0x20)
        *(eax_9 + ecx_9 + 8) = *(ecx_9 + arg4 - 0x10)
        i = i_1
        i_1 -= 1
    while (i != 1)
    result_3 = result_5
    edi_1 = var_34

int32_t edx_13 = 0

if (arg7 s> 0)
    int32_t edi_2 = 0
    int32_t* result_10 = result_7
    
    do
        edi_2 += 0x10
        int32_t ecx_10 = *(arg6 + (edx_13 << 2))
        edx_13 += 1
        float xmm0_5 = _mm_cvtepi32_ps(zx.o(ecx_10.b)) / 255f
        float var_4c_1 = _mm_cvtepi32_ps(zx.o((ecx_10 u>> 8).b)) / 255f
        float xmm0_10 = _mm_cvtepi32_ps(zx.o((ecx_10 u>> 0x10).b))
        eax_9 = *(result_10[2] + 8)
        float var_48_1 = xmm0_10 / 255f
        float var_44_1 = _mm_cvtepi32_ps(zx.o(ecx_10 u>> 0x18)) / 255f
        *(eax_9 + edi_2 + 0x88) = xmm0_5.o
    while (edx_13 s< arg7)
    
    result_3 = result_5
    edi_1 = var_34

if (arg8 != 0)
    int32_t var_60_2 = 5
    int32_t var_68_2 = 2
    sub_6dce10(sub_6dce10(eax_9, edi_1, &data_8ce7bc, 3), edi_1, &data_8ce7bc, 4)

sub_6dce40(nullptr, 1)
sub_6dce40(1, 0)

if (result_3 != 0)
    result_3[7] -= 1

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
