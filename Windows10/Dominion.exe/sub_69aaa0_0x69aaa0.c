// 函数: sub_69aaa0
// 地址: 0x69aaa0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx
ebx.b = arg2
char var_5 = ebx.b

if (arg1 == 0)
    return 

uint32_t eax_1 = zx.d(arg1.w)
char const* const var_58
int32_t var_54
char const* const var_50_1
char* ecx_2

if (eax_1 u>= data_caf264)
label_69ac58:
    var_50_1 = "DataArray<struct UIState>::DataArrayGet"
    var_54 = 0x6d
    var_58 = "C:\x\ax2017\Engine\DataArray.h"
    ecx_2 = "DataArrayTryToGet(id) != NULL"
label_69ac6e:
    sub_63b870(eax_1, &data_801800, ecx_2, var_58, var_54, var_50_1)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

eax_1 = data_caf260 + eax_1 * 0x438

if (*(eax_1 + 0x434) != arg1)
    goto label_69ac58

int32_t* ecx_1 = *(eax_1 + 4)

if (ecx_1[1] != 0x1e)
    var_50_1 = "UIDefGet"
    var_54 = 0x127
    var_58 = "C:\x\ax2017\Engine\UIDef.cpp"
    ecx_2 = "ptr->assetType == ASSET_TYPE_UI"
    goto label_69ac6e

void** eax = sub_5af880(ecx_1)
uint32_t i = 0
void** var_10_1 = eax
uint32_t i_1 = 0

if (eax[2] s<= 0)
    return 

uint32_t ecx_3 = eax_1
int32_t esi_1 = 0x30
void** edx_1 = var_10_1
eax = nullptr
void** var_14_1 = nullptr
int32_t var_1c_1 = 0x30

do
    if (*(esi_1 + ecx_3) != 0)
        uint32_t eax_3 = sub_6985c0(arg1)
        
        if (*(esi_1 + eax_3) != 0)
            eax_3 = sub_698630(eax_3, i, eax_3, &data_801800)
            
            if (ebx.b == 0)
                *eax_3 += 1
            else
                *(eax_3 + 0x34) = 0
        
        uint32_t edx_4 = sub_698630(eax_3, i, eax_1, &data_801800)
        uint32_t var_34_1 = edx_4
        void* eax_7 = *var_10_1 + var_14_1
        
        if (*(eax_7 + 4) == 2)
            void* ecx_8 = eax_7
            int32_t eax_8
            int32_t esi_2
            
            if (*(edx_4 + 0x120) s<= *edx_4)
                eax_8 = *(ecx_8 + 0xb0)
                esi_2 = *(ecx_8 + 0xac)
            else
                eax_8 = *(edx_4 + 0x12c)
                esi_2 = *(edx_4 + 0x130)
            
            ebx = 0
            int32_t var_20_1 = eax_8
            
            if (esi_2 s> 0)
                int32_t edi_1 = edx_4 + 0xa4
                int32_t var_24_1 = edi_1
                
                do
                    int32_t esi_3 = 0
                    
                    if (eax_8 s> 0)
                        do
                            bool cond:1_1 = *edi_1 == 0
                            int32_t var_3c = esi_3
                            int32_t var_38_1 = ebx
                            
                            if (not(cond:1_1))
                                uint32_t eax_10
                                int32_t edx_5
                                eax_10, edx_5 = sub_6990b0(&var_3c, edx_4, ecx_8, &var_3c)
                                edx_5.b = var_5
                                *(eax_10 + 0x434)
                                sub_69aaa0()
                                eax_8 = var_20_1
                                edx_4 = var_34_1
                            
                            ecx_8 = eax_7
                            esi_3 += 1
                            edi_1 += 4
                        while (esi_3 s< eax_8)
                        
                        edi_1 = var_24_1
                    
                    ebx += 1
                    edi_1 += eax_8 << 2
                    ecx_8 = eax_7
                    var_24_1 = edi_1
                while (ebx s< esi_2)
                
                i = i_1
            
            esi_1 = var_1c_1
            ebx.b = var_5
        
        eax = var_14_1
        ecx_3 = eax_1
        edx_1 = var_10_1
    
    i += 1
    esi_1 += 4
    eax = &eax[0x5e]
    i_1 = i
    var_1c_1 = esi_1
    var_14_1 = eax
while (i s< edx_1[2])
