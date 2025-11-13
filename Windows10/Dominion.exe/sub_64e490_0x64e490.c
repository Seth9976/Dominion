// 函数: sub_64e490
// 地址: 0x64e490
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t edx = data_c23bc4
int32_t eax_1 = arg2[2]
int32_t* var_c = arg3
int32_t edi = data_c23bc8
int32_t* ecx_4
int32_t* esi_2

if (eax_1 == 0)
label_64e4d5:
    int32_t eax_2 = data_c23bd4
    int32_t ecx_1 = data_c23bcc
    bool cond:0_1 = eax_2 u< ecx_1
    
    if (eax_2 == ecx_1)
        Concurrency::details::ResourceManager::~ResourceManager(&data_c23bc4)
        eax_2 = data_c23bd4
        cond:0_1 = eax_2 u< data_c23bcc
        edi = data_c23bc8
        edx = data_c23bc4
    
    int32_t var_28
    char const* const ecx_3
    
    if (not(cond:0_1))
        char const* const var_24_1 = "DataArray<struct UI2ExprTreeRT>::DataArrayAlloc"
        var_28 = 0xf4
        ecx_3 = "mUsedCount < mMaxSize"
    label_64e646:
        sub_63b870(eax_2, &data_801800, ecx_3, "C:\x\ax2017\Engine\DataArray.h", var_28, 
            "DataArray<struct UI2ExprTreeRT>::DataArrayAlloc")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    eax_2 = data_c23bd0
    
    if (eax_2 u> edi)
        char const* const var_24_5 = "DataArray<struct UI2ExprTreeRT>::DataArrayAlloc"
        var_28 = 0xf5
        ecx_3 = "mFreeListHead <= mMaxUsedCount"
        goto label_64e646
    
    int32_t eax_3
    
    if (eax_2 != edi)
        edi = eax_2
        eax_3 = *(edi * 0x248 + edx + 0x244)
    else
        eax_3 = edi + 1
        data_c23bc8 = eax_3
    
    data_c23bd0 = eax_3
    esi_2 = edi * 0x248 + edx
    memset(esi_2, 0, 0x244)
    void* var_14_1 = &esi_2[1]
    struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_24_2)(void* arg1) = sub_64ca90
    `eh vector constructor iterator'(&esi_2[3], 0x34, 2, sub_64ca70)
    esi_2[0x91] = data_c23bd8 << 0x10 | edi
    int32_t eax_11 = data_c23bd8 + 1
    data_c23bd8 = eax_11
    
    if (eax_11 == 0x10000)
        data_c23bd8 = 1
    
    ecx_4 = arg2
    data_c23bd4 += 1
    ecx_4[2] = esi_2[0x91]
else
    uint32_t ecx = zx.d(eax_1.w)
    
    if (ecx u>= edi)
        goto label_64e4d5
    
    esi_2 = ecx * 0x248 + edx
    
    if (esi_2[0x91] != eax_1 || esi_2 == 0)
        goto label_64e4d5
    
    ecx_4 = arg2

esi_2[0x1e] = *ecx_4

if (*esi_2 != 3)
    if (arg6 != 0)
        *arg6 = 1
    
    sub_64e320(arg6, esi_2, arg3, arg4, arg5)
    return arg3

if (arg6 != 0)
    *arg6 = 0

struct _EXCEPTION_REGISTRATION_RECORD** (__fastcall* var_24_3)(void* arg1) = sub_64ca90
*arg3 = esi_2[1]
arg3[1] = esi_2[2]
(&arg3[2], &esi_2[3], 0x34, 2, sub_64cba0)
arg3[0x1c] = esi_2[0x1d]
return arg3
