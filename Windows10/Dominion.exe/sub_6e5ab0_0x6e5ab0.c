// 函数: sub_6e5ab0
// 地址: 0x6e5ab0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
void* esi = data_147abe8
char const* const var_20
int32_t var_1c
char const* const var_18
int32_t eax
char* ecx

if (esi != 0)
    int32_t* esi_1 = *(esi + 0xc)
    eax = esi_1[4]
    
    if (eax u< esi_1[2])
        eax = esi_1[3]
        int32_t ebx_1 = esi_1[1]
        
        if (eax u<= ebx_1)
            int32_t eax_1
            
            if (eax != ebx_1)
                ebx_1 = eax
                eax_1 = *(eax * 0x94 + *esi_1 + 0x90)
            else
                eax_1 = ebx_1 + 1
                esi_1[1] = eax_1
            
            esi_1[3] = eax_1
            int32_t* result = ebx_1 * 0x94 + *esi_1
            memset(result, 0, 0x90)
            result[0x24] = esi_1[5] << 0x10 | ebx_1
            esi_1[5] += 1
            
            if (esi_1[5] == 0x10000)
                esi_1[5] = 1
            
            esi_1[4] += 1
            *result = arg1
            __builtin_memcpy(&result[8], 
                "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
            "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x
                    3f", 
                0x40)
            int32_t edx = data_bf23b0
            result[0x18] = data_bf23ac
            result[0x19] = edx
            result[0x1e] = 0xffffffff
            sub_6e5a00(result)
            return result
        
        var_18 = "DataArray<struct Flanim>::DataArrayAlloc"
        var_1c = 0xf5
        ecx = "mFreeListHead <= mMaxUsedCount"
    else
        var_18 = "DataArray<struct Flanim>::DataArrayAlloc"
        var_1c = 0xf4
        ecx = "mUsedCount < mMaxSize"
    
    var_20 = "C:\x\ax2017\Engine\DataArray.h"
else
    var_18 = "GetGameData"
    var_1c = 0x45
    var_20 = "C:\x\ax2017\Engine\Game.h"
    ecx = "gpGameData"

sub_63b870(eax, &data_801800, ecx, var_20, var_1c, var_18)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
