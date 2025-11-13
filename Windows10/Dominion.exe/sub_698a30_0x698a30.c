// 函数: sub_698a30
// 地址: 0x698a30
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg1 == 0)
    return 

uint32_t eax_1 = zx.d(arg1.w)
void* var_10_1
void* edi_2

if (eax_1 u< data_caf264)
    edi_2 = eax_1 * 0x438 + data_caf260
    var_10_1 = edi_2

char const* const var_34
int32_t var_30
char const* const var_2c_1
char* ecx_1

if (eax_1 u>= data_caf264 || *(edi_2 + 0x434) != arg1)
    var_2c_1 = "DataArray<struct UIState>::DataArrayGet"
    var_30 = 0x6d
    var_34 = "C:\x\ax2017\Engine\DataArray.h"
    ecx_1 = "DataArrayTryToGet(id) != NULL"
label_698c0b:
    sub_63b870(eax_1, &data_801800, ecx_1, var_34, var_30, var_2c_1)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t* ecx = *(edi_2 + 4)

if (ecx[1] != 0x1e)
    var_2c_1 = "UIDefGet"
    var_30 = 0x127
    var_34 = "C:\x\ax2017\Engine\UIDef.cpp"
    ecx_1 = "ptr->assetType == ASSET_TYPE_UI"
    goto label_698c0b

int32_t* edx_1 = sub_5af880(ecx)
uint32_t eax_3 = 0
int32_t* var_c_1 = edx_1
uint32_t var_18_1 = 0

if (edx_1[2] s> 0)
    int32_t ecx_2 = 0
    int32_t var_14_1 = 0
    
    while (true)
        void* esi_2 = *edx_1 + ecx_2
        uint32_t eax_4 = sub_698630(eax_3, eax_3, edi_2, *(esi_2 + 8))
        int32_t ecx_4 = *(esi_2 + 4)
        
        if (ecx_4 == 2)
            int32_t* esi_3 = eax_4 + 0xa4
            int32_t i_1 = 0x1e
            int32_t i
            
            do
                *esi_3
                sub_698a30()
                esi_3 = &esi_3[1]
                i = i_1
                i_1 -= 1
            while (i != 1)
            edi_2 = var_10_1
        else if (ecx_4 == 8)
            eax_1 = data_147abe8
            
            if (eax_1 == 0)
            label_698be2:
                var_2c_1 = "GetGameData"
                var_30 = 0x45
                var_34 = "C:\x\ax2017\Engine\Game.h"
                ecx_1 = "gpGameData"
                break
            
            void* edx_4 = *(eax_1 + 0xc)
            int32_t eax_6 = *(eax_4 + 0x9c)
            
            if (eax_6 != 0)
                uint32_t ecx_11 = zx.d(eax_6.w)
                
                if (ecx_11 u< *(edx_4 + 4))
                    void* ecx_13 = ecx_11 * 0x94 + *edx_4
                    
                    if (*(ecx_13 + 0x90) == eax_6 && ecx_13 != 0)
                        sub_6e5c50(ecx_13)
        else if (ecx_4 == 9)
            eax_1 = data_147abe8
            
            if (eax_1 == 0)
                goto label_698be2
            
            void* edx_3 = *(eax_1 + 0x10)
            int32_t eax_5 = *(eax_4 + 0xa0)
            
            if (eax_5 != 0)
                uint32_t ecx_8 = zx.d(eax_5.w)
                
                if (ecx_8 u< *(edx_3 + 4))
                    void* ecx_10 = ecx_8 * 0x7c + *edx_3
                    
                    if (*(ecx_10 + 0x78) == eax_5 && ecx_10 != 0)
                        sub_6b8440(ecx_10)
        
        sub_697ed0(eax_4)
        int32_t ecx_16 = data_caf250
        edx_1 = var_c_1
        data_caf250 = zx.d(*(eax_4 + 0x1d4))
        *(eax_4 + 0x1d4) = ecx_16
        eax_3 = var_18_1 + 1
        data_caf254 -= 1
        ecx_2 = var_14_1 + 0x178
        var_18_1 = eax_3
        var_14_1 = ecx_2
        
        if (eax_3 s>= edx_1[2])
            goto label_698bc4
    
    goto label_698c0b

label_698bc4:
int32_t ecx_18 = data_caf26c
data_caf26c = zx.d(*(edi_2 + 0x434))
*(edi_2 + 0x434) = ecx_18
data_caf270 -= 1
