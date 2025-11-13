// 函数: sub_6d7690
// 地址: 0x6d7690
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = arg1
void* ebx = data_cafe8c
void* eax = nullptr
int32_t edi = data_cafe90
void* edx_1 = edi * 0xf10 + ebx

while (true)
    if (eax != 0)
        eax += 0xf10
    else
        eax = ebx
    
    if (eax u>= edx_1)
        break
    
    while (true)
        int32_t result = *(eax + 0xf0c)
        
        if ((result & 0xffff0000) != 0)
            if (*eax != arg1)
                break
            
            return result
        
        eax += 0xf10
        
        if (eax u>= edx_1)
            goto label_6d76e7

label_6d76e7:
int32_t eax_2 = data_cafe9c
int32_t var_1c
char const* const ecx

if (eax_2 u< data_cafe94)
    eax_2 = data_cafe98
    
    if (eax_2 u<= edi)
        int32_t eax_3
        
        if (eax_2 != edi)
            edi = eax_2
            eax_3 = *(edi * 0xf10 + ebx + 0xf0c)
        else
            eax_3 = edi + 1
            data_cafe90 = eax_3
        
        data_cafe98 = eax_3
        void* esi_2 = edi * 0xf10 + ebx
        memset(esi_2, 0, 0xf0c)
        *(esi_2 + 0xf0c) = data_cafea0 << 0x10 | edi
        int32_t eax_9 = data_cafea0 + 1
        data_cafea0 = eax_9
        
        if (eax_9 == 0x10000)
            data_cafea0 = 1
        
        data_cafe9c += 1
        *esi_2 = arg1
        return *(esi_2 + 0xf0c)
    
    char const* const var_18_1 = "DataArray<struct MaterialCacheItem>::DataArrayAlloc"
    var_1c = 0xf5
    ecx = "mFreeListHead <= mMaxUsedCount"
else
    char const* const var_18 = "DataArray<struct MaterialCacheItem>::DataArrayAlloc"
    var_1c = 0xf4
    ecx = "mUsedCount < mMaxSize"

sub_63b870(eax_2, &data_801800, ecx, "C:\x\ax2017\Engine\DataArray.h", var_1c, 
    "DataArray<struct MaterialCacheItem>::DataArrayAlloc")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
