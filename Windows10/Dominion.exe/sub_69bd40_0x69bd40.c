// 函数: sub_69bd40
// 地址: 0x69bd40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

char const* const var_1c
int32_t var_18
char const* const var_14
char* ecx

if (arg3 != 0)
    arg1 = zx.d(arg3.w)
    void* edi_2
    
    if (arg1 u< data_caf264)
        edi_2 = arg1 * 0x438 + data_caf260
    
    if (arg1 u>= data_caf264 || *(edi_2 + 0x434) != arg3)
        var_14 = "DataArray<struct UIState>::DataArrayGet"
        var_18 = 0x6d
        ecx = "DataArrayTryToGet(id) != NULL"
        var_1c = "C:\x\ax2017\Engine\DataArray.h"
    else
        int32_t* ecx_1 = *(edi_2 + 4)
        
        if (ecx_1[1] == 0x1e)
            int32_t eax = sub_5af880(ecx_1)
            void* esi_2 = arg2 * 0x178 + *eax
            uint32_t result = sub_698630(eax, arg2, edi_2, &data_801800)
            int32_t edx_1 = *result
            *(result + 8) = edx_1 + 1
            int32_t ecx_3
            ecx_3.b = arg4
            *(result + 0xc) = ecx_3.b
            int32_t ecx_4
            
            if (*(result + 0x134) s<= edx_1)
                ecx_4 = *(esi_2 + 0x6c)
            else
                ecx_4 = *(result + 0x138)
            
            float xmm0
            
            if (*(result + 0x5c) == 0)
                xmm0 = _mm_cvtepi32_ps(zx.o(*(esi_2 + 0x70)))
            else
                xmm0 = *(result + 0x60)
            
            float xmm1_3 = (_mm_cvtepi32_ps(zx.o(ecx_4)) + xmm0) / 1000f
            
            if (not(*(result + 0x14) f<= xmm1_3))
                *(result + 0x14) = xmm1_3
            
            return result
        
        var_14 = "UIDefGet"
        var_18 = 0x127
        var_1c = "C:\x\ax2017\Engine\UIDef.cpp"
        ecx = "ptr->assetType == ASSET_TYPE_UI"
else
    var_14 = "DataArray<struct UIState>::DataArrayGet"
    var_18 = 0x6c
    ecx = "id != DATAID_NULL"
    var_1c = "C:\x\ax2017\Engine\DataArray.h"

sub_63b870(arg1, &data_801800, ecx, var_1c, var_18, var_14)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
