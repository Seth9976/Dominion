// 函数: sub_4baf70
// 地址: 0x4baf70
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = arg1[4]
int32_t var_14
char const* const ecx

if (eax u< arg1[2])
    eax = arg1[3]
    int32_t edi_1 = arg1[1]
    
    if (eax u<= edi_1)
        int32_t eax_1
        
        if (eax != edi_1)
            edi_1 = eax
            eax_1 = *(eax * 0x1330 + *arg1 + 0x1328)
        else
            eax_1 = edi_1 + 1
            arg1[1] = eax_1
        
        arg1[3] = eax_1
        void* result = edi_1 * 0x1330 + *arg1
        memset(result, 0, 0x1328)
        *(result + 0x38) = &data_801800
        *(result + 0x3c) = &data_801800
        *(result + 0x40) = &data_801800
        *(result + 0x1328) = arg1[5] << 0x10 | edi_1
        arg1[5] += 1
        
        if (arg1[5] == 0x10000)
            arg1[5] = 1
        
        arg1[4] += 1
        return result
    
    char const* const var_10_1 = "DataArray<struct GameSave>::DataArrayAlloc"
    var_14 = 0xf5
    ecx = "mFreeListHead <= mMaxUsedCount"
else
    char const* const var_10 = "DataArray<struct GameSave>::DataArrayAlloc"
    var_14 = 0xf4
    ecx = "mUsedCount < mMaxSize"

sub_63b870(eax, &data_801800, ecx, "C:\x\ax2017\Engine\DataArray.h", var_14, 
    "DataArray<struct GameSave>::DataArrayAlloc")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
