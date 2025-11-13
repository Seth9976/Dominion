// 函数: sub_64e810
// 地址: 0x64e810
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ecx = *arg1

if (ecx != 0)
    uint32_t eax_1 = sub_64e7a0(ecx)
    uint32_t edi_1 = eax_1
    char const* const var_2c
    int32_t var_28
    char const* const var_24_1
    char* ecx_2
    
    if (data_c23bd4 u> 0x400)
        int32_t* ecx_1 = *(edi_1 + 0x1600)
        char const* const edx_1
        
        if (ecx_1 == 0)
            var_24_1 = "UI2DefGet"
            var_28 = 0xc16
            var_2c = "C:\x\ax2017\Engine\UI2.cpp"
            edx_1 = "UI2DefGet on null pointer"
            ecx_2 = &data_874470
        label_64ebe6:
            sub_63b870(eax_1, edx_1, ecx_2, var_2c, var_28, var_24_1)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        if (ecx_1[1] != 0x22)
            var_24_1 = "UI2DefGet"
            var_28 = 0xc17
            var_2c = "C:\x\ax2017\Engine\UI2.cpp"
            ecx_2 = "ptr->assetType == ASSET_TYPE_UI2"
        label_64ebe1:
            edx_1 = &data_801800
            goto label_64ebe6
        
        int32_t* eax_2 = sub_5af880(ecx_1)
        int32_t i = 0
        
        if (eax_2[2] s> 0)
            int32_t esi_1 = 0
            
            do
                sub_6653b0(*eax_2 + esi_1)
                i += 1
                esi_1 += 0x18
            while (i s< eax_2[2])
    
    int32_t i_3 = 3
    int32_t i_1
    
    do
        char* eax_3 = *(edi_1 + 0x15d8)
        
        if (eax_3 != 0 && eax_3 != &data_801800)
            if (data_cf65bc != 0 && *eax_3 != 0)
                char* eax_4 = sub_63d4e0(edi_1 + 0x15d8)
                int32_t temp1_1 = *(eax_4 + 4)
                *(eax_4 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)
            
            *(edi_1 + 0x15d8) = &data_801800
        
        *(edi_1 + 0x158c) = &data_801800
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    char* eax_5 = *(edi_1 + 0x15e0)
    
    if (eax_5 != 0 && eax_5 != &data_801800)
        if (data_cf65bc != i_3 && *eax_5 != i_3.b)
            char* eax_6 = sub_63d4e0(edi_1 + 0x15e0)
            int32_t temp2_1 = *(eax_6 + 4)
            *(eax_6 + 4) -= 1
            
            if (temp2_1 == 1)
                sub_64c080(eax_6, *(eax_6 + 0xc) + 0x10)
        
        *(edi_1 + 0x15e0) = &data_801800
    
    char* eax_7 = *(edi_1 + 0x15fc)
    
    if (eax_7 != 0 && eax_7 != &data_801800)
        if (data_cf65bc != 0 && *eax_7 != 0)
            char* eax_8 = sub_63d4e0(edi_1 + 0x15fc)
            int32_t temp3_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
        
        *(edi_1 + 0x15fc) = &data_801800
    
    int32_t ecx_11 = *(edi_1 + 0x13a4)
    
    if (ecx_11 != 0)
        uint32_t eax_9 = sub_6a82e0(ecx_11)
        sub_7112e0(*(eax_9 + 8))
        sub_713890(*(eax_9 + 4))
        int32_t edx_8 = data_caf778
        data_caf778 = zx.d(*(eax_9 + 0x14))
        *(eax_9 + 0x14) = edx_8
        data_caf77c -= 1
        *(edi_1 + 0x13a4) = 0
    
    void* ecx_15 = *(edi_1 + 0x13a8)
    
    if (ecx_15 != 0)
        sub_6e5c50(ecx_15)
        *(edi_1 + 0x13a8) = 0
    
    int32_t eax_10 = *(edi_1 + 0x13b8)
    
    if (eax_10 != 0)
        void* ecx_16 = data_147abf0
        uint32_t edx_9 = zx.d(eax_10.w)
        
        if (edx_9 u< *(ecx_16 + 4))
            void* esi_4 = edx_9 * 0x64 + *ecx_16
            
            if (*(esi_4 + 0x60) == eax_10 && esi_4 != 0)
                (*(*data_147abec + 0x28))(esi_4)
                *(esi_4 + 0x5a) = 0
    
    int32_t edx_10 = *(edi_1 + 0x13b0)
    eax_1 = data_147abe8
    
    if (edx_10 != 0)
        if (eax_1 == 0)
        label_64ea48:
            var_24_1 = "GetGameData"
            var_28 = 0x45
            var_2c = "C:\x\ax2017\Engine\Game.h"
            ecx_2 = "gpGameData"
            goto label_64ebe1
        
        void* esi_5 = *(eax_1 + 0x10)
        uint32_t ecx_18 = zx.d(edx_10.w)
        
        if (ecx_18 u< *(esi_5 + 4))
            void* ecx_20 = ecx_18 * 0x7c + *esi_5
            
            if (*(ecx_20 + 0x78) == edx_10 && ecx_20 != 0)
                sub_6b8440(ecx_20)
                eax_1 = data_147abe8
        
        goto label_64ea81
    
label_64ea81:
    int32_t edx_11 = *(edi_1 + 0x13bc)
    
    if (edx_11 != 0)
        if (eax_1 == 0)
            goto label_64ea48
        
        void* eax_12 = *eax_1
        uint32_t ecx_21 = zx.d(edx_11.w)
        
        if (ecx_21 u< *(eax_12 + 4))
            char** ecx_23 = ecx_21 * 0x6c + *eax_12
            
            if (ecx_23[0x1a] == edx_11 && ecx_23 != 0)
                sub_6da670(ecx_23)
        
        goto label_64eaac
    
label_64eaac:
    eax_1 = *(edi_1 + 0x13b8)
    
    if (eax_1 != 0)
        void* ecx_24 = data_147abf0
        uint32_t edx_12 = zx.d(eax_1.w)
        
        if (edx_12 u< *(ecx_24 + 4))
            void* esi_7 = edx_12 * 0x64 + *ecx_24
            
            if (*(esi_7 + 0x60) == eax_1 && esi_7 != 0)
                eax_1 = (*(*data_147abec + 0x28))(esi_7)
                *(esi_7 + 0x5a) = 0
    
    int32_t esi_8 = 0
    
    if (*(edi_1 + 0x13dc) s> 0)
        int32_t ebx_1 = 0
        
        while (true)
            if (ebx_1 s< 0 || esi_8 s>= *(edi_1 + 0x13dc))
                var_24_1 = "XDynArray<struct TextEntry>::operator []"
                var_28 = 0xd4
                var_2c = "C:\x\ax2017\Engine\xDynArray.h"
                ecx_2 = "index >= 0 && index < mSize"
                break
            
            eax_1 = *(edi_1 + 0x13d8)
            
            if (*(eax_1 + ebx_1) == 2)
                eax_1 = sub_64e810()
            
            esi_8 += 1
            ebx_1 += 0x34
            
            if (esi_8 s>= *(edi_1 + 0x13dc))
                goto label_64eb26
            
            continue
        
        goto label_64ebe1
    
label_64eb26:
    int32_t ebx_2 = *(edi_1 + 0x189c)
    int32_t esi_9 = 0
    *(edi_1 + 0x13dc) = 0
    
    if (ebx_2 != 0)
        do
            int32_t var_10_2 = *(edi_1 + (esi_9 << 2) + 0x179c)
            sub_64e810()
            esi_9 += 1
        while (esi_9 != ebx_2)
    
    int32_t* esi_10 = edi_1 + 0x18a4
    int32_t i_4 = 5
    int32_t i_2
    
    do
        if (*esi_10 != 0)
            sub_64e810()
            *esi_10 = 0
        
        esi_10 = &esi_10[1]
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)
    
    if (*(edi_1 + 0x18a0) != i_4)
        sub_64e810()
        *(edi_1 + 0x18a0) = i_4
    
    sub_67e6e0(edi_1)
    int32_t ecx_31 = data_c23bb4
    data_c23bb4 = zx.d(*(edi_1 + 0x18c8))
    *(edi_1 + 0x18c8) = ecx_31
    data_c23bb8 -= 1
    *arg1 = 0

return arg1
