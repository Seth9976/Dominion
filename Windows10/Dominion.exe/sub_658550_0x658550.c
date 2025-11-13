// 函数: sub_658550
// 地址: 0x658550
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t ecx = *(arg3 + 0x18a4)
void* result

if (ecx != 0)
    result = sub_64e7a0(ecx)
else
    result = nullptr

void* result_1 = result
uint32_t var_13c

if (arg2 != 0)
    if (result == 0)
        int32_t ecx_38 = *(arg3 + 0x18a4)
        
        if (ecx_38 == 0)
            void* eax_20 = sub_64e660(arg3)
            ecx_38 = *(eax_20 + 0x18c8)
            *(eax_20 + 0x18b8) = 1
            *(arg3 + 0x18a4) = ecx_38
        
        int32_t* result_2 = sub_64e7a0(ecx_38)
        var_13c = 0
        int32_t var_154_4 = 0
        result_1 = result_2
        result_2[0x580] = *(arg3 + 0x15a0)
        uint32_t* var_158_2 = &var_13c
        result_2[0x581] = 0
        result_2[0x4db] = 2
        result_2[0x5c7].b = 1
        result_2[0x5ac] = 0
        int32_t* ecx_40
        ecx_40.b = *(arg3 + 0x16ec)
        result = sub_657c80(&var_13c, result_2, ecx_40, *(arg3 + 0x15a0), arg5, var_158_2)
    
    float var_130
    __builtin_memcpy(&var_130, arg3 + 0x1620, 0xd0)
    void* esi_11 = arg3
    int32_t var_bc_1 = 0x4e20
    int32_t* ecx_41 = *(esi_11 + 0x15a0)
    int32_t var_158_3
    char const* const var_154_5
    char* ecx_42
    char const* const edx_17
    
    if (ecx_41 == 0)
        var_154_5 = "UI2DefGet"
        var_158_3 = 0xc16
        edx_17 = "UI2DefGet on null pointer"
        ecx_42 = &data_874470
    label_658d88:
        sub_63b870(result, edx_17, ecx_42, "C:\x\ax2017\Engine\UI2.cpp", var_158_3, var_154_5)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (ecx_41[1] != 0x22)
        var_154_5 = "UI2DefGet"
        var_158_3 = 0xc17
        edx_17 = &data_801800
        ecx_42 = "ptr->assetType == ASSET_TYPE_UI2"
        goto label_658d88
    
    int32_t** eax_23 = sub_5af880(ecx_41)
    float var_60
    int128_t xmm0_1
    
    if (eax_23[2] != 0)
        xmm0_1 = *sub_64f140(eax_23, nullptr, *eax_23, &var_60, 0)
    else
        xmm0_1 = data_7ff520
    
    int128_t var_30 = xmm0_1
    float var_50
    sub_67d460(esi_11 + 0x554, *(data_147abe8 + 0x2c), &var_50)
    float xmm1_2 = *(esi_11 + 0x16cc) - 0f
    float* var_154_8 = &var_50
    void* ecx_45 = esi_11 + 0x1620
    float var_48
    float var_58_1 = xmm1_2 * var_48 + 0f
    float xmm1_6 = *(esi_11 + 0x16d0) - 0f
    var_60 = xmm1_2 * var_50 + 0f
    float var_44
    float var_54_1 = xmm1_6 * var_44 + 0f
    float var_4c
    float var_5c_1 = xmm1_6 * var_4c + 0f
    var_60.o = var_60.o
    float* eax_27 = sub_655430(&var_50, &var_60, ecx_45, var_154_8)
    float xmm1_9 = var_130
    var_60.o = *eax_27
    
    if (*(result_1 + 0x1400) != 0)
        uint32_t eax_29
        eax_29, ecx_45 = sub_6580f0(esi_11)
        xmm1_9 = *(eax_29 + 0x1620)
    
    void* var_15c_3 = ecx_45
    int128_t* eax_31 = sub_658160(&var_50, *(esi_11 + 0x15b0), &var_60, xmm1_9, &var_50, 
        *(esi_11 + 0x15b8), &var_30, &data_7ff530)
    var_130.o = *eax_31
    int32_t var_78
    int32_t eax_32 = var_78
    
    if (*(esi_11 + 0x15bc) != 0)
        eax_32 = 0
    
    int32_t edi_2 = 0
    int128_t var_120_1 = eax_31[1]
    
    if (eax_32 s> 0)
        int32_t* esi_10 = nullptr
        
        do
            int32_t var_7c
            
            if (_stricmp(*(*(esi_10 + var_7c) + 8), "mouse_over") == 0)
                *(esi_10 + var_7c + 8) = 0xffffffff
            else if (_stricmp(*(*(esi_10 + var_7c) + 8), "mouse_down") == 0)
                *(esi_10 + var_7c + 8) = 0xffffffff
            else if (_stricmp(*(*(esi_10 + var_7c) + 8), "mouse_clicked") == 0)
                *(esi_10 + var_7c + 8) = 0xffffffff
            
            edi_2 += 1
            esi_10 = &esi_10[7]
        while (edi_2 s< eax_32)
        
        esi_11 = arg3
    
    uint8_t* edx_20 = *(esi_11 + 0x15a8)
    
    if (edx_20 != 0)
        sub_666610(result_1, edx_20)
    
    int32_t var_154_13 = 0
    result = sub_65d0f0(&var_130, esi_11, result_1, arg4, &var_130)
else if (result != 0)
    int32_t ecx_1 = *(arg3 + 0x18a4)
    
    if (ecx_1 != 0)
        uint32_t eax_2 = sub_64e7a0(ecx_1)
        bool cond:1_1 = data_c23bd4 u<= 0x400
        uint32_t edi_1 = eax_2
        var_13c = edi_1
        char const* const var_15c_1
        int32_t var_158_1
        char const* const var_154_1
        char* ecx_3
        
        if (not(cond:1_1))
            int32_t* ecx_2 = *(edi_1 + 0x1600)
            char const* const edx
            
            if (ecx_2 == 0)
                var_154_1 = "UI2DefGet"
                var_158_1 = 0xc16
                var_15c_1 = "C:\x\ax2017\Engine\UI2.cpp"
                edx = "UI2DefGet on null pointer"
                ecx_3 = &data_874470
            label_658d58:
                sub_63b870(eax_2, edx, ecx_3, var_15c_1, var_158_1, var_154_1)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            if (ecx_2[1] != 0x22)
                var_154_1 = "UI2DefGet"
                var_158_1 = 0xc17
                var_15c_1 = "C:\x\ax2017\Engine\UI2.cpp"
                ecx_3 = "ptr->assetType == ASSET_TYPE_UI2"
            label_658d53:
                edx = &data_801800
                goto label_658d58
            
            int32_t* eax_3 = sub_5af880(ecx_2)
            int32_t* var_144 = eax_3
            
            if (eax_3[2] s> 0)
                int32_t esi_1 = 0
                int32_t i = 0
                
                do
                    sub_6653b0(*eax_3 + esi_1)
                    eax_3 = var_144
                    i += 1
                    esi_1 += 0x18
                while (i s< eax_3[2])
                
                edi_1 = var_13c
        
        int32_t i_4 = 3
        int32_t i_5 = 3
        int32_t i_1
        
        do
            char* eax_4 = *(edi_1 + 0x15d8)
            
            if (eax_4 != 0 && eax_4 != &data_801800)
                if (data_cf65bc != 0 && *eax_4 != 0)
                    char* eax_5 = sub_63d4e0(edi_1 + 0x15d8)
                    int32_t temp1_1 = *(eax_5 + 4)
                    *(eax_5 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)
                    
                    i_4 = i_5
                
                *(edi_1 + 0x15d8) = &data_801800
            
            i_1 = i_4
            i_4 -= 1
            *(edi_1 + 0x158c) = &data_801800
            i_5 = i_4
        while (i_1 != 1)
        char* eax_6 = *(edi_1 + 0x15e0)
        
        if (eax_6 != 0 && eax_6 != &data_801800)
            if (data_cf65bc != 0 && *eax_6 != 0)
                char* eax_7 = sub_63d4e0(edi_1 + 0x15e0)
                int32_t temp2_1 = *(eax_7 + 4)
                *(eax_7 + 4) -= 1
                
                if (temp2_1 == 1)
                    sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
            
            *(edi_1 + 0x15e0) = &data_801800
        
        char* eax_8 = *(edi_1 + 0x15fc)
        
        if (eax_8 != 0 && eax_8 != &data_801800)
            if (data_cf65bc != 0 && *eax_8 != 0)
                char* eax_9 = sub_63d4e0(edi_1 + 0x15fc)
                int32_t temp3_1 = *(eax_9 + 4)
                *(eax_9 + 4) -= 1
                
                if (temp3_1 == 1)
                    sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
            
            *(edi_1 + 0x15fc) = &data_801800
        
        int32_t ecx_12 = *(edi_1 + 0x13a4)
        
        if (ecx_12 != 0)
            uint32_t eax_10 = sub_6a82e0(ecx_12)
            sub_7112e0(*(eax_10 + 8))
            sub_713890(*(eax_10 + 4))
            int32_t edx_7 = data_caf778
            data_caf778 = zx.d(*(eax_10 + 0x14))
            *(eax_10 + 0x14) = edx_7
            data_caf77c -= 1
            *(edi_1 + 0x13a4) = 0
        
        eax_2 = *(edi_1 + 0x13a8)
        uint32_t var_144_1 = eax_2
        int32_t* esi_3
        
        if (eax_2 != 0)
            int32_t* ecx_16 = *(eax_2 + 0x68)
            
            if (ecx_16 != 0)
                sub_64c080(ecx_16, *(eax_2 + 0x6c) * 0x68)
                eax_2 = var_144_1
                *(eax_2 + 0x68) = 0
            
            esi_3 = data_147abe8
            
            if (esi_3 == 0)
            label_6587b6:
                var_154_1 = "GetGameData"
                var_158_1 = 0x45
                var_15c_1 = "C:\x\ax2017\Engine\Game.h"
                ecx_3 = "gpGameData"
                goto label_658d53
            
            void* edx_9 = esi_3[3]
            int32_t ecx_17 = *(edx_9 + 0xc)
            *(edx_9 + 0xc) = zx.d(*(eax_2 + 0x90))
            *(var_144_1 + 0x90) = ecx_17
            *(edx_9 + 0x10) -= 1
            *(edi_1 + 0x13a8) = 0
            goto label_6587fb
        
        esi_3 = data_147abe8
    label_6587fb:
        int32_t eax_13 = *(edi_1 + 0x13b8)
        
        if (eax_13 != 0)
            void* ecx_18 = data_147abf0
            uint32_t edx_10 = zx.d(eax_13.w)
            
            if (edx_10 u< *(ecx_18 + 4))
                uint32_t edx_12 = edx_10 * 0x64 + *ecx_18
                var_13c = edx_12
                
                if (*(edx_12 + 0x60) == eax_13 && edx_12 != 0)
                    (*(*data_147abec + 0x28))(edx_12)
                    esi_3 = data_147abe8
                    *(var_13c + 0x5a) = 0
        
        eax_2 = *(edi_1 + 0x13b0)
        
        if (eax_2 != 0)
            if (esi_3 == 0)
                goto label_6587b6
            
            void* edx_13 = esi_3[4]
            uint32_t ecx_20 = zx.d(eax_2.w)
            
            if (ecx_20 u< *(edx_13 + 4))
                void* ecx_22 = ecx_20 * 0x7c + *edx_13
                
                if (*(ecx_22 + 0x78) == eax_2 && ecx_22 != 0)
                    sub_6b8440(ecx_22)
                    esi_3 = data_147abe8
            
            goto label_658875
        
    label_658875:
        eax_2 = *(edi_1 + 0x13bc)
        
        if (eax_2 != 0)
            if (esi_3 == 0)
                goto label_6587b6
            
            void* edx_14 = *esi_3
            uint32_t ecx_23 = zx.d(eax_2.w)
            
            if (ecx_23 u< *(edx_14 + 4))
                char** ecx_25 = ecx_23 * 0x6c + *edx_14
                
                if (ecx_25[0x1a] == eax_2 && ecx_25 != 0)
                    sub_6da670(ecx_25)
            
            goto label_6588a4
        
    label_6588a4:
        int32_t eax_16 = *(edi_1 + 0x13b8)
        
        if (eax_16 != 0)
            void* ecx_26 = data_147abf0
            uint32_t edx_15 = zx.d(eax_16.w)
            
            if (edx_15 u< *(ecx_26 + 4))
                void* esi_5 = edx_15 * 0x64 + *ecx_26
                
                if (*(esi_5 + 0x60) == eax_16 && esi_5 != 0)
                    (*(*data_147abec + 0x28))(esi_5)
                    *(esi_5 + 0x5a) = 0
        
        eax_2 = 0
        uint32_t var_144_2 = 0
        
        if (*(edi_1 + 0x13dc) s> 0)
            int32_t esi_6 = 0
            
            while (true)
                if (esi_6 s< 0 || eax_2 s>= *(edi_1 + 0x13dc))
                    var_154_1 = "XDynArray<struct TextEntry>::operator []"
                    var_158_1 = 0xd4
                    var_15c_1 = "C:\x\ax2017\Engine\xDynArray.h"
                    ecx_3 = "index >= 0 && index < mSize"
                    break
                
                int32_t* ecx_28 = *(edi_1 + 0x13d8)
                
                if (*(ecx_28 + esi_6) == 2)
                    sub_64e810(&ecx_28[8] + esi_6)
                    eax_2 = var_144_2
                
                eax_2 += 1
                esi_6 += 0x34
                var_144_2 = eax_2
                
                if (eax_2 s>= *(edi_1 + 0x13dc))
                    goto label_65892e
                
                continue
            
            goto label_658d53
        
    label_65892e:
        int32_t eax_18 = *(edi_1 + 0x189c)
        int32_t esi_7 = 0
        *(edi_1 + 0x13dc) = 0
        
        if (eax_18 != 0)
            do
                var_13c = *(edi_1 + (esi_7 << 2) + 0x179c)
                sub_64e810(&var_13c)
                esi_7 += 1
            while (esi_7 != eax_18)
        
        int32_t i_3 = 5
        int32_t* esi_8 = edi_1 + 0x18a4
        int32_t i_6 = 5
        int32_t i_2
        
        do
            if (*esi_8 != 0)
                sub_64e810(esi_8)
                i_3 = i_6
                *esi_8 = 0
            
            esi_8 = &esi_8[1]
            i_2 = i_3
            i_3 -= 1
            i_6 = i_3
        while (i_2 != 1)
        
        if (*(edi_1 + 0x18a0) != 0)
            sub_64e810(edi_1 + 0x18a0)
            *(edi_1 + 0x18a0) = 0
        
        sub_67e6e0(edi_1)
        result = zx.d(*(edi_1 + 0x18c8))
        int32_t ecx_35 = data_c23bb4
        data_c23bb4 = result
        *(edi_1 + 0x18c8) = ecx_35
        data_c23bb8 -= 1
    
    *(arg3 + 0x18a4) = 0
    CookieCheckFunction(result)
    return result
CookieCheckFunction(result)
return result
