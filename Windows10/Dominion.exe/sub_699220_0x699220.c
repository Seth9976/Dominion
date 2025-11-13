// 函数: sub_699220
// 地址: 0x699220
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

if (arg1 == 0)
    return 

uint32_t eax = zx.d(arg1.w)
char const* const var_9c
int32_t var_98
char const* const var_94_1
char* ecx_2

if (eax u>= data_caf264)
label_699741:
    var_94_1 = "DataArray<struct UIState>::DataArrayGet"
    var_98 = 0x6d
    var_9c = "C:\x\ax2017\Engine\DataArray.h"
    ecx_2 = "DataArrayTryToGet(id) != NULL"
label_699757:
    sub_63b870(eax, &data_801800, ecx_2, var_9c, var_98, var_94_1)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

eax = data_caf260 + eax * 0x438
uint32_t var_68_1 = eax

if (*(eax + 0x434) != arg1)
    goto label_699741

bool cond:0_1 = *(eax + 8) != 0
*(eax + 0x1c) = 1

if (cond:0_1)
    return 

int32_t* ecx_1 = *(eax + 4)

if (ecx_1[1] != 0x1e)
    var_94_1 = "UIDefGet"
    var_98 = 0x127
    var_9c = "C:\x\ax2017\Engine\UIDef.cpp"
    ecx_2 = "ptr->assetType == ASSET_TYPE_UI"
    goto label_699757

uint32_t edi_1 = sub_5af880(ecx_1)
uint32_t esi_1 = 0
uint32_t var_64_1 = edi_1
uint32_t var_80_1 = 0

if (*(edi_1 + 8) s<= 0)
    return 

eax = 0
uint32_t var_6c_1 = 0

while (true)
    void* edi_3 = *edi_1 + eax
    int32_t eax_2 = *(edi_3 + 4)
    
    if (eax_2 != 1 && eax_2 != 5 && (eax_2 != 3 || *(edi_3 + 0x110) != 0))
        uint32_t ecx_4 = sub_698630(eax_2, esi_1, var_68_1, *(edi_3 + 8))
        uint32_t var_84_1 = ecx_4
        float xmm0_1 = *(ecx_4 + 0x10)
        xmm0_1 f- 0
        uint32_t eax_3
        eax_3:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
            | (xmm0_1 < 0f ? 1 : 0)
        bool p_2 = unimplemented  {test ah, 0x44}
        int32_t eax_4
        
        if (not(p_2))
            if (*(ecx_4 + 8) s<= *ecx_4)
                eax_4.b = *(edi_3 + 0x44)
            else
                eax_4.b = *(ecx_4 + 0xc)
        
        if (p_2 || eax_4.b == 0)
            int32_t eax_6 = *(edi_3 + 4) - 2
            
            if (eax_6 u> 7)
                goto label_6994d5
            
            uint32_t ecx_9
            int32_t edx_5
            
            switch (eax_6)
                case 0
                    int32_t edx_2
                    int32_t esi_3
                    
                    if (*(ecx_4 + 0x120) s<= *ecx_4)
                        edx_2 = *(edi_3 + 0xb0)
                        esi_3 = *(edi_3 + 0xac)
                    else
                        edx_2 = *(ecx_4 + 0x12c)
                        esi_3 = *(ecx_4 + 0x130)
                    
                    eax = *(edi_3 + 0xb0) * *(edi_3 + 0xac)
                    int32_t var_70_1 = edx_2
                    
                    if (eax s> 0x1e)
                        var_94_1 = "UIStateUpdateNew"
                        var_98 = 0x7c2
                        var_9c = "C:\x\ax2017\Engine\UIDef.cpp"
                        ecx_2 = "el.rows * el.cols <= 30"
                        break
                    
                    eax = edx_2 * esi_3
                    
                    if (eax s> 0x1e)
                        var_94_1 = "UIStateUpdateNew"
                        var_98 = 0x7c3
                        var_9c = "C:\x\ax2017\Engine\UIDef.cpp"
                        ecx_2 = "dimsUpdate.x * dimsUpdate.y <= 30"
                        break
                    
                    int32_t edi_4 = 0
                    
                    if (esi_3 s> 0)
                        int32_t eax_11 = esi_3
                        
                        do
                            int32_t esi_4 = 0
                            
                            if (edx_2 s> 0)
                                do
                                    int32_t var_38 = esi_4
                                    int32_t var_34_1 = edi_4
                                    *(sub_6990b0(&var_38, ecx_4, edi_3, &var_38) + 0x434)
                                    sub_699220(&data_800188, *(var_84_1 + 0x11c))
                                    edx_2 = var_70_1
                                    esi_4 += 1
                                    ecx_4 = var_84_1
                                while (esi_4 s< edx_2)
                                
                                eax_11 = esi_3
                            
                            edi_4 += 1
                        while (edi_4 s< eax_11)
                    
                    goto label_6994d1
                case 1
                    if (*(ecx_4 + 0x15c) != 0)
                        sub_6ea940(ecx_4 + 0x160, 0, &data_7ffb14)
                    
                    goto label_6994d5
                case 2, 5
                    goto label_6994d5
                case 3, 7
                    eax = data_147abe8
                    int32_t ecx_17 = *(ecx_4 + 0xa0)
                    
                    if (eax == 0)
                        goto label_69972e
                    
                    void* eax_18 = *(eax + 0x10)
                    int32_t* edx_7
                    
                    if (ecx_17 != 0)
                        uint32_t edx_8 = zx.d(ecx_17.w)
                        
                        if (edx_8 u< *(eax_18 + 4))
                            edx_7 = edx_8 * 0x7c + *eax_18
                            
                            if (edx_7[0x1e] != ecx_17)
                                edx_7 = nullptr
                        else
                            edx_7 = nullptr
                    else
                        edx_7 = nullptr
                    
                    int32_t* ecx_18 = *(edi_3 + 0x60)
                    
                    if (ecx_18 == 0)
                        if (edx_7 == 0)
                            goto label_6994d5
                        
                        sub_6b8440(edx_7)
                        ecx_9 = var_84_1
                        *(ecx_9 + 0xa0) = 0
                        goto label_6994d9
                    
                    int128_t var_30
                    uint32_t esi_5
                    
                    if (edx_7 != 0)
                        esi_5 = var_84_1
                    else
                        int128_t xmm0_9 = data_800248
                        int32_t* var_4c_1 = edx_7
                        int32_t* var_48_1 = edx_7
                        int32_t* var_44_1 = edx_7
                        var_30 = 0x3f800000.o
                        int128_t var_20_1 = xmm0_9
                        esi_5 = var_84_1
                        edx_7 = sub_6b80f0(ecx_18, &var_30)
                        int32_t ecx_19 = edx_7[0x1e]
                        edx_7[8] = 1
                        *(esi_5 + 0xa0) = ecx_19
                    
                    if (*edx_7 != *(edi_3 + 0x60))
                        sub_6b8440(edx_7)
                        int128_t xmm0_12 = data_800248
                        int32_t* ecx_22 = *(edi_3 + 0x60)
                        int32_t var_4c_2 = 0
                        var_30 = 0x3f800000.o
                        int32_t var_48_2 = 0
                        int32_t var_44_2 = 0
                        int128_t var_20_2 = xmm0_12
                        edx_7 = sub_6b80f0(ecx_22, &var_30)
                        int32_t eax_21 = edx_7[0x1e]
                        edx_7[8] = 1
                        *(esi_5 + 0xa0) = eax_21
                    
                    sub_6bca30(edx_7, data_8c4634)
                    goto label_6994d1
                case 4
                    int32_t esi_2 = *ecx_4
                    
                    if (*(ecx_4 + 8) s<= esi_2)
                        eax_6.b = *(edi_3 + 0x44)
                    else
                        eax_6.b = *(ecx_4 + 0xc)
                    
                    float xmm0_2
                    
                    xmm0_2 = eax_6.b != 0 ? -1f : 1f
                    
                    bool cond:1_1 = *(ecx_4 + 0x5c) == 0
                    float xmm0_4 = xmm0_2 * arg2 f+ *(ecx_4 + 0x14)
                    *(ecx_4 + 0x14) = xmm0_4
                    float xmm2_1
                    
                    if (cond:1_1)
                        xmm2_1 = _mm_cvtepi32_ps(zx.o(*(edi_3 + 0x70)))
                    else
                        xmm2_1 = *(ecx_4 + 0x60)
                    
                    int32_t eax_7
                    
                    if (*(ecx_4 + 0x134) s<= esi_2)
                        eax_7 = *(edi_3 + 0x6c)
                    else
                        eax_7 = *(ecx_4 + 0x138)
                    
                    float xmm1_2 = _mm_cvtepi32_ps(zx.o(eax_7)) + xmm2_1
                    
                    if (not(0f <= xmm0_4))
                        *(ecx_4 + 0x14) = 0
                        xmm0_4 = (zx.o(0)).d
                    
                    float xmm0_7 = (xmm0_4 * 1000f - xmm2_1) / (xmm1_2 - xmm2_1)
                    
                    if (not(0 f< xmm0_7))
                        *(ecx_4 + 0x10) = 0
                    else if (xmm0_7 < 1f)
                        *(var_84_1 + 0x10) = sub_4ae110(1, xmm0_7, (zx.o(0)).d, 1f)
                    else
                        *(ecx_4 + 0x10) = 0x3f800000
                    
                label_6994d1:
                    esi_1 = var_80_1
                label_6994d5:
                    ecx_9 = var_84_1
                label_6994d9:
                    eax = data_147abe8
                    edx_5 = *(ecx_9 + 0xa0)
                    
                    if (eax == 0)
                        goto label_69972e
                case 6
                    eax = data_147abe8
                    int32_t edx_6 = *(ecx_4 + 0x9c)
                    
                    if (eax == 0)
                    label_69972e:
                        var_94_1 = "GetGameData"
                        var_98 = 0x45
                        var_9c = "C:\x\ax2017\Engine\Game.h"
                        ecx_2 = "gpGameData"
                        break
                    
                    void* eax_17 = *(eax + 0xc)
                    
                    if (edx_6 != 0)
                        uint32_t ecx_13 = zx.d(edx_6.w)
                        
                        if (ecx_13 u< *(eax_17 + 4))
                            int32_t* ecx_15 = ecx_13 * 0x94 + *eax_17
                            
                            if (ecx_15[0x24] == edx_6 && ecx_15 != 0)
                                sub_6e5cc0(ecx_15, esi_1.w, edi_3, arg2)
                    
                    goto label_6994d5
            
            void* eax_14 = *(eax + 0x10)
            
            if (edx_5 != 0)
                uint32_t ecx_10 = zx.d(edx_5.w)
                
                if (ecx_10 u< *(eax_14 + 4))
                    void* ecx_12 = ecx_10 * 0x7c + *eax_14
                    
                    if (*(ecx_12 + 0x78) == edx_5 && ecx_12 != 0 && *(edi_3 + 4) != 9)
                        sub_6b8440(ecx_12)
                        *(var_84_1 + 0xa0) = 0
    
    edi_1 = var_64_1
    esi_1 += 1
    eax = var_6c_1 + 0x178
    var_80_1 = esi_1
    var_6c_1 = eax
    
    if (esi_1 s>= *(edi_1 + 8))
        return 

goto label_699757
