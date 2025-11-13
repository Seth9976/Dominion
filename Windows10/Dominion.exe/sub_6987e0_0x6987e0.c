// 函数: sub_6987e0
// 地址: 0x6987e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t eax = data_caf270
char const* const var_30
int32_t var_2c
char const* const var_28_1
char* ecx

if (eax u< data_caf268)
    eax = data_caf26c
    int32_t esi_1 = data_caf264
    
    if (eax u<= esi_1)
        int32_t ecx_1 = data_caf260
        int32_t eax_1
        
        if (eax != esi_1)
            esi_1 = eax
            eax_1 = *(esi_1 * 0x438 + ecx_1 + 0x434)
        else
            eax_1 = esi_1 + 1
            data_caf264 = eax_1
        
        data_caf26c = eax_1
        void* edi_2 = esi_1 * 0x438 + ecx_1
        void* var_10_1 = edi_2
        memset(edi_2, 0, 0x434)
        *(edi_2 + 0x434) = data_caf274 << 0x10 | esi_1
        eax = data_caf274 + 1
        data_caf274 = eax
        
        if (eax == 0x10000)
            data_caf274 = 1
        
        data_caf270 += 1
        *(edi_2 + 4) = arg1
        
        if (arg1[1] == 0x1e)
            int32_t* ebx_1 = sub_5af880(arg1)
            int32_t* var_14_1 = ebx_1
            eax = ebx_1[2]
            
            if (eax s< 0x100)
                uint32_t i = 0
                uint32_t i_1 = 0
                
                if (eax s> 0)
                    int32_t eax_8 = 0
                    int32_t var_c_1 = 0
                    
                    do
                        void* ebx_3 = *ebx_1 + eax_8
                        int32_t eax_9 = *(ebx_3 + 4)
                        
                        if (eax_9 == 6)
                            uint32_t eax_19 = sub_698630(eax_9 - 6, i, edi_2, *(ebx_3 + 8))
                            int32_t ecx_10
                            
                            if (*(eax_19 + 8) s<= *eax_19)
                                ecx_10.b = *(ebx_3 + 0x44)
                            else
                                ecx_10.b = *(eax_19 + 0xc)
                            
                            if (ecx_10.b == 0)
                                *(eax_19 + 0x10) = 0x3f800000
                            else
                                *(eax_19 + 0x10) = 0
                        else if (eax_9 == 8)
                            uint32_t eax_16 = sub_698630(eax_9 - 8, i, edi_2, *(ebx_3 + 8))
                            int32_t* eax_17 = sub_6e5ab0(*(ebx_3 + 0x48))
                            sub_6e68f0(eax_17, *(ebx_3 + 0x50), eax_17, *(ebx_3 + 0x5c), 
                                *(ebx_3 + 0x58))
                            i = i_1
                            *(eax_16 + 0x9c) = eax_17[0x24]
                            edi_2 = var_10_1
                        else if (eax_9 == 9)
                            uint32_t eax_13 = sub_698630(eax_9 - 9, i, edi_2, *(ebx_3 + 8))
                            int32_t* ecx_4 = *(ebx_3 + 0x60)
                            
                            if (ecx_4 != 0)
                                int32_t* eax_14 = sub_6b8340(ecx_4, &data_7ffb14)
                                eax_14[8] = 1
                                eax_14[0x1d].w = 0
                                *(eax_13 + 0xa0) = eax_14[0x1e]
                        
                        ebx_1 = var_14_1
                        i += 1
                        eax_8 = var_c_1 + 0x178
                        i_1 = i
                        var_c_1 = eax_8
                    while (i s< ebx_1[2])
                
                return *(edi_2 + 0x434)
            
            var_28_1 = "UIStateLoad"
            var_2c = 0x57a
            ecx = "layout.numElements < MAX_UI_ELEMENTS"
        else
            var_28_1 = "UIDefGet"
            var_2c = 0x127
            ecx = "ptr->assetType == ASSET_TYPE_UI"
        
        var_30 = "C:\x\ax2017\Engine\UIDef.cpp"
    else
        var_28_1 = "DataArray<struct UIState>::DataArrayAlloc"
        var_2c = 0xf5
        var_30 = "C:\x\ax2017\Engine\DataArray.h"
        ecx = "mFreeListHead <= mMaxUsedCount"
else
    var_28_1 = "DataArray<struct UIState>::DataArrayAlloc"
    var_2c = 0xf4
    var_30 = "C:\x\ax2017\Engine\DataArray.h"
    ecx = "mUsedCount < mMaxSize"

sub_63b870(eax, &data_801800, ecx, var_30, var_2c, var_28_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
