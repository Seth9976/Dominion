// 函数: sub_689090
// 地址: 0x689090
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = data_147abf4
char const* const var_18
int32_t var_14
char const* const var_10
int32_t eax
char* ecx_1

if (esi != 0)
    eax = esi[4]
    
    if (eax u< esi[2])
        eax = esi[3]
        int32_t ebx_1 = esi[1]
        
        if (eax u<= ebx_1)
            int32_t eax_1
            
            if (eax != ebx_1)
                ebx_1 = eax
                eax_1 = *(eax * 0x64 + *esi + 0x60)
            else
                eax_1 = ebx_1 + 1
                esi[1] = eax_1
            
            esi[3] = eax_1
            int32_t* result = ebx_1 * 0x64 + *esi
            memset(result, 0, 0x60)
            __builtin_memset(&result[0x12], 0, 0x14)
            result[0x18] = esi[5] << 0x10 | ebx_1
            esi[5] += 1
            
            if (esi[5] == 0x10000)
                esi[5] = 1
            
            esi[4] += 1
            result[8] = 0xffffffff
            *result = 0
            return result
        
        var_10 = "DataArray<struct NetLoc>::DataArrayAlloc"
        var_14 = 0xf5
        ecx_1 = "mFreeListHead <= mMaxUsedCount"
    else
        var_10 = "DataArray<struct NetLoc>::DataArrayAlloc"
        var_14 = 0xf4
        ecx_1 = "mUsedCount < mMaxSize"
    
    var_18 = "C:\x\ax2017\Engine\DataArray.h"
else
    var_10 = "NetLocAlloc"
    var_14 = 0x138
    var_18 = "C:\x\ax2017\Engine\Network.cpp"
    ecx_1 = "gNetwork"

sub_63b870(eax, &data_801800, ecx_1, var_18, var_14, var_10)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
