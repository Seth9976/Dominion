// 函数: sub_6d1290
// 地址: 0x6d1290
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = data_cafe7c
int32_t var_10
char const* const ecx

if (eax u< data_cafe74)
    eax = data_cafe78
    int32_t esi_1 = data_cafe70
    
    if (eax u<= esi_1)
        int32_t ecx_1 = data_cafe6c
        int32_t eax_1
        
        if (eax != esi_1)
            esi_1 = eax
            eax_1 = *(eax * 0x4d0 + ecx_1 + 0x4cc)
        else
            eax_1 = esi_1 + 1
            data_cafe70 = eax_1
        
        data_cafe78 = eax_1
        void* result = esi_1 * 0x4d0 + ecx_1
        memset(result, 0, 0x4cc)
        *(result + 0x4cc) = data_cafe80 << 0x10 | esi_1
        int32_t eax_7 = data_cafe80 + 1
        data_cafe80 = eax_7
        
        if (eax_7 == 0x10000)
            data_cafe80 = 1
        
        data_cafe7c += 1
        return result
    
    char const* const var_c_1 = "DataArray<struct FabState>::DataArrayAlloc"
    var_10 = 0xf5
    ecx = "mFreeListHead <= mMaxUsedCount"
else
    char const* const var_c = "DataArray<struct FabState>::DataArrayAlloc"
    var_10 = 0xf4
    ecx = "mUsedCount < mMaxSize"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Engine\DataArray.h", var_10, 
    "DataArray<struct FabState>::DataArrayAlloc")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
