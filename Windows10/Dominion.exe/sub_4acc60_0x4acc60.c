// 函数: sub_4acc60
// 地址: 0x4acc60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = data_8db52c
int32_t var_14
char const* const ecx

if (eax u< data_8db524)
    eax = data_8db528
    int32_t edi_1 = data_8db520
    
    if (eax u<= edi_1)
        int32_t ecx_1 = data_8db51c
        int32_t eax_1
        
        if (eax != edi_1)
            edi_1 = eax
            eax_1 = *(edi_1 * 0xc04 + ecx_1 + 0xc00)
        else
            eax_1 = edi_1 + 1
            data_8db520 = eax_1
        
        data_8db528 = eax_1
        void* result = edi_1 * 0xc04 + ecx_1
        memset(result, 0, 0xc00)
        *(result + 0xc00) = data_8db530 << 0x10 | edi_1
        int32_t eax_7 = data_8db530 + 1
        data_8db530 = eax_7
        
        if (eax_7 == 0x10000)
            data_8db530 = 1
        
        data_8db52c += 1
        *(result + 0x258) = 0
        *(result + 0xbd4) = 0xffffffff
        *(result + 0xbe4) = 0xffffffff
        return result
    
    char const* const var_10_1 = "DataArray<struct Cardset>::DataArrayAlloc"
    var_14 = 0xf5
    ecx = "mFreeListHead <= mMaxUsedCount"
else
    char const* const var_10 = "DataArray<struct Cardset>::DataArrayAlloc"
    var_14 = 0xf4
    ecx = "mUsedCount < mMaxSize"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Engine\DataArray.h", var_14, 
    "DataArray<struct Cardset>::DataArrayAlloc")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
