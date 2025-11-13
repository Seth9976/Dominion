// 函数: sub_6411d0
// 地址: 0x6411d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (*(arg3 + 8) - *arg3 s< *arg1 || *(arg3 + 0xc) - *(arg3 + 4) s< arg1[1])
    return 0

int32_t eax_4 = arg1[0xb]
int32_t var_18
char const* const ecx

if (eax_4 u< arg1[9])
    eax_4 = arg1[0xa]
    int32_t ebx_1 = arg1[8]
    
    if (eax_4 u<= ebx_1)
        int32_t eax_5
        
        if (eax_4 != ebx_1)
            ebx_1 = eax_4
            eax_5 = *(arg1[7] + eax_4 * 0x48 + 0x44)
        else
            eax_5 = ebx_1 + 1
            arg1[8] = eax_5
        
        arg1[0xa] = eax_5
        int128_t* eax_8 = arg1[7] + ebx_1 * 0x48
        memset(eax_8, 0, 0x44)
        *(eax_8 + 0x44) = arg1[0xc] << 0x10 | ebx_1
        arg1[0xc] += 1
        
        if (arg1[0xc] == 0x10000)
            arg1[0xc] = 1
        
        arg1[0xb] += 1
        int128_t xmm0 = *arg3
        *(eax_8 + 0x28) = arg2
        *eax_8 = arg4
        int32_t result = *(eax_8 + 0x44)
        *(eax_8 + 4) = xmm0
        return result
    
    char const* const var_14_1 = "DataArray<struct RegionAllocator::Region>::DataArrayAlloc"
    var_18 = 0xf5
    ecx = "mFreeListHead <= mMaxUsedCount"
else
    char const* const var_14 = "DataArray<struct RegionAllocator::Region>::DataArrayAlloc"
    var_18 = 0xf4
    ecx = "mUsedCount < mMaxSize"

sub_63b870(eax_4, &data_801800, ecx, "C:\x\ax2017\Engine\DataArray.h", var_18, 
    "DataArray<struct RegionAllocator::Region>::DataArrayAlloc")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
