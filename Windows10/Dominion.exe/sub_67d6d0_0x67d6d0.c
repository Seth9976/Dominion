// 函数: sub_67d6d0
// 地址: 0x67d6d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76dae3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = *(arg1 + 0x10)
int32_t var_3c
char const* const ecx

if (eax_3 u< *(arg1 + 8))
    int32_t ecx_1 = *(arg1 + 4)
    eax_3 = *(arg1 + 0xc)
    int32_t var_14_1 = ecx_1
    
    if (eax_3 u<= ecx_1)
        int32_t eax_4
        
        if (eax_3 != ecx_1)
            ecx_1 = eax_3
            var_14_1 = ecx_1
            eax_4 = *(eax_3 * 0x18d0 + *arg1 + 0x18c8)
        else
            eax_4 = ecx_1 + 1
            *(arg1 + 4) = eax_4
        
        *(arg1 + 0xc) = eax_4
        void* result = ecx_1 * 0x18d0 + *arg1
        memset(result, 0, 0x18c8)
        void* result_1 = result
        *(result + 0x1374) = &data_801800
        *(result + 0x1378) = &data_801800
        *(result + 0x13c4) = &data_801800
        *(result + 0x13d8) = 0
        *(result + 0x13dc) = 0
        *(result + 0x13e0) = 0
        int32_t var_8_1 = 0
        void* var_20 = result + 0x13f8
        void* var_20_1 = result + 0x152c
        sub_63d720(result + 0x152c, &data_801800)
        *(result + 0x1530) = 0
        *(result + 0x15d8) = &data_801800
        *(result + 0x15e0) = &data_801800
        *(result + 0x15e8) = 0
        *(result + 0x15ec) = 0
        *(result + 0x15f0) = 0
        *(result + 0x15fc) = &data_801800
        __builtin_memset(result + 0x16f0, 0, 0x24)
        memset(result + 0x1720, 0, 0x74)
        *(result + 0x1764) = 0xff000000
        *(result + 0x1778) = 0xff000000
        *(result + 0x177c) = 0xffffffff
        *(result + 0x178c) = 1
        *(result + 0x1768) = 0x3f800000
        *(result + 0x18c8) = *(arg1 + 0x14) << 0x10 | var_14_1
        *(arg1 + 0x14) += 1
        
        if (*(arg1 + 0x14) == 0x10000)
            *(arg1 + 0x14) = 1
        
        *(arg1 + 0x10) += 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
    char const* const var_38_1 = "DataArray<struct UI2>::DataArrayAlloc"
    var_3c = 0xf5
    ecx = "mFreeListHead <= mMaxUsedCount"
else
    char const* const var_38 = "DataArray<struct UI2>::DataArrayAlloc"
    var_3c = 0xf4
    ecx = "mUsedCount < mMaxSize"

sub_63b870(eax_3, &data_801800, ecx, "C:\x\ax2017\Engine\DataArray.h", var_3c, 
    "DataArray<struct UI2>::DataArrayAlloc")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
