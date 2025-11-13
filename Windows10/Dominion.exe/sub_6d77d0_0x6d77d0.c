// 函数: sub_6d77d0
// 地址: 0x6d77d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_4 = arg1
int32_t var_14
uint32_t eax
char const* const ecx

if (arg1 != 0)
    eax = zx.d(arg1.w)
    
    if (eax u< data_cafe90)
        int32_t* esi_2 = eax * 0xf10 + data_cafe8c
        
        if (esi_2[0x3c3] == arg1)
            if (esi_2[0x3c2].b == 0)
                sub_6d8660(&esi_2[1], *esi_2)
                esi_2[0x3c2].b = 1
            
            return &esi_2[1]
    
    char const* const var_10_1 = "DataArray<struct MaterialCacheItem>::DataArrayGet"
    var_14 = 0x6d
    ecx = "DataArrayTryToGet(id) != NULL"
else
    char const* const var_10 = "DataArray<struct MaterialCacheItem>::DataArrayGet"
    var_14 = 0x6c
    ecx = "id != DATAID_NULL"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Engine\DataArray.h", var_14, 
    "DataArray<struct MaterialCacheItem>::DataArrayGet")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
