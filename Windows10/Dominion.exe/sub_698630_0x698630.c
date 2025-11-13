// 函数: sub_698630
// 地址: 0x698630
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

uint32_t eax = arg2
uint32_t var_8 = eax
char const* const var_24_1
int32_t var_20
char const* const var_1c
char* ecx

if (eax s< 0x100)
    int32_t edx = *(arg3 + (eax << 2) + 0x30)
    
    if (edx != 0)
        eax = zx.d(edx.w)
        
        if (eax u< data_caf248)
            eax = data_caf244 + eax * 0x1d8
            
            if (*(eax + 0x1d4) == edx)
                return eax
        
        var_1c = "DataArray<struct UIStateElement>::DataArrayGet"
        var_20 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
    else
        eax = data_caf254
        
        if (eax u< data_caf24c)
            eax = data_caf250
            uint32_t edi_1 = data_caf248
            
            if (eax u<= edi_1)
                int32_t ecx_1 = data_caf244
                void* eax_1
                
                if (eax != edi_1)
                    edi_1 = eax
                    eax_1 = *(edi_1 * 0x1d8 + ecx_1 + 0x1d4)
                else
                    eax_1 = edi_1 + 1
                    data_caf248 = eax_1
                
                data_caf250 = eax_1
                uint32_t ebx_2 = edi_1 * 0x1d8 + ecx_1
                memset(ebx_2, 0, 0x68)
                memset(ebx_2 + 0x6c, 0, 0xf4)
                *(ebx_2 + 0x68) = &data_801800
                memset(ebx_2 + 0x160, 0, 0x74)
                *(ebx_2 + 0x1a4) = 0xff000000
                *(ebx_2 + 0x1b8) = 0xff000000
                *(ebx_2 + 0x1bc) = 0xffffffff
                *(ebx_2 + 0x1cc) = 1
                *(ebx_2 + 0x1a8) = 0x3f800000
                *(ebx_2 + 0x1d4) = data_caf258 << 0x10 | edi_1
                int32_t eax_8 = data_caf258 + 1
                data_caf258 = eax_8
                
                if (eax_8 == 0x10000)
                    data_caf258 = 1
                
                data_caf254 += 1
                *(ebx_2 + 4) = arg4
                *(arg3 + (var_8 << 2) + 0x30) = *(ebx_2 + 0x1d4)
                return ebx_2
            
            var_1c = "DataArray<struct UIStateElement>::DataArrayAlloc"
            var_20 = 0xf5
            ecx = "mFreeListHead <= mMaxUsedCount"
        else
            var_1c = "DataArray<struct UIStateElement>::DataArrayAlloc"
            var_20 = 0xf4
            ecx = "mUsedCount < mMaxSize"
    
    var_24_1 = "C:\x\ax2017\Engine\DataArray.h"
else
    var_1c = "UIStateElementGet"
    var_20 = 0x546
    var_24_1 = "C:\x\ax2017\Engine\UIDef.cpp"
    ecx = "idx < MAX_UI_ELEMENTS"

sub_63b870(eax, &data_801800, ecx, var_24_1, var_20, var_1c)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
