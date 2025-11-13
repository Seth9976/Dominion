// 函数: sub_664d00
// 地址: 0x664d00
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** var_8 = __security_cookie ^ &__saved_ebp
float xmm0 = *(arg1 + 0x1680)
xmm0 f- 0
struct _EXCEPTION_REGISTRATION_RECORD** result
result:1.b =
    (xmm0 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0, 0f) ? 1 : 0) << 2 | (xmm0 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    data_147abcc += 1
    result = *(arg1 + 0x1694)
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = nullptr
    
    if (result == 0)
        goto label_664d88
    
    int32_t ecx = *(arg1 + 0x1698)
    char const* const var_88
    int32_t var_84
    char const* const var_80_1
    char* ecx_1
    
    if (ecx == 0xffffffff)
        var_80_1 = "UI2DrawInt"
        var_84 = 0x335e
        var_88 = "C:\x\ax2017\Engine\UI2.cpp"
        ecx_1 = "ui.worldInfo.sublayer != -1"
    label_665182:
        sub_63b870(result, &data_801800, ecx_1, var_88, var_84, var_80_1)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    result = result << 0x10 | ecx
    
    if (data_147aba1 == 0)
    label_665169:
        var_80_1 = "Draw3DLayer"
        var_84 = 0x32c
        ecx_1 = "gDraw3DData.submittingRenderItems"
        var_88 = "C:\x\ax2017\Engine\Draw3d.cpp"
        goto label_665182
    
    result_1 = data_cf6b14
    data_cf6b14 = result
label_664d88:
    float xmm3_1 = *(arg1 + 0x1620)
    float xmm1_1 = *(arg1 + 0x1634)
    int32_t eax_2 = *(arg1 + 0x1410)
    float xmm3_2 = xmm3_1 f* *(arg1 + 0x16d0)
    int32_t ecx_3 = data_19e2740
    float xmm2_1 = *(arg1 + 0x1638)
    float xmm0_3 = xmm3_1 f* *(arg1 + 0x16cc) + xmm1_1
    float var_24 = xmm1_1
    float var_20_1 = xmm2_1
    int32_t var_3c_1 = ecx_3
    float var_1c_1 = xmm0_3
    float var_18_1 = xmm3_2 + xmm2_1
    int128_t var_54_1 = data_19e2730
    var_24.o = var_24.o
    char var_25_1
    int32_t edx
    
    if (eax_2 != 1)
        if (eax_2 == 3)
            int32_t var_14_2 = 0xc
            goto label_664e20
        
        if (eax_2 == 4)
            int32_t var_14_3 = 3
            goto label_664e20
        
        var_25_1 = 0
    else
        int32_t var_14_1 = 0xffffffff
    label_664e20:
        void var_6c
        int128_t* eax_4
        eax_4, edx = sub_682560(&var_6c, edx, &var_24, &var_6c)
        var_25_1 = 1
        var_3c_1 = eax_4[1].d
        var_54_1 = *eax_4
    
    int32_t eax_6 = *(arg1 + 0x15d4)
    
    if (eax_6 == 0)
        result = *(arg1 + 0x15f8) - 1
        
        if (result u> 0xa)
            goto label_664feb
        
        switch (result)
            case nullptr
                edx.b = 0
                result = sub_6645f0(arg1, edx.b)
            label_664feb:
                int32_t ebx_1 = *(arg1 + 0x189c)
                
                if (ebx_1 s< 0)
                    var_80_1 = "UI2::countChildren"
                    var_84 = 0xba8
                    var_88 = "C:\x\ax2017\Engine\UI2.cpp"
                    ecx_1 = "numChildren >= 0"
                    goto label_665182
                
                if (ebx_1 != 0)
                    result = *(arg1 + 0x14fc)
                    
                    switch (result)
                        case nullptr
                            int32_t edi_2 = 0
                            
                            do
                                float xmm0_7 = sub_64e7a0(*(arg1 + (edi_2 << 2) + 0x179c))[0x5a0]
                                xmm0_7 f- 0
                                result:1.b = (xmm0_7 == 0f ? 1 : 0) << 6
                                    | (is_unordered.d(xmm0_7, 0f) ? 1 : 0) << 2
                                    | (xmm0_7 < 0f ? 1 : 0)
                                bool p_3 = unimplemented  {test ah, 0x44}
                                
                                if (p_3)
                                    result = sub_664d00()
                                
                                edi_2 += 1
                            while (edi_2 != ebx_1)
                        case 1
                            int32_t eax_12 = *(arg1 + 0x14c0)
                            int32_t ebx_3 = *(arg1 + 0x14bc)
                            result = eax_12 - 1
                            struct _EXCEPTION_REGISTRATION_RECORD** result_3 = result
                            
                            if (eax_12 - 1 s>= 0)
                                struct _EXCEPTION_REGISTRATION_RECORD** result_4
                                
                                do
                                    int32_t edi_5 = 0
                                    
                                    if (ebx_3 s> 0)
                                        do
                                            sub_6548e0(arg1, result * ebx_3 + edi_5)
                                            sub_664d00()
                                            result = result_3
                                            edi_5 += 1
                                        while (edi_5 s< ebx_3)
                                    
                                    result_4 = result
                                    result -= 1
                                    result_3 = result
                                while (result_4 - 1 s>= 0)
                        case 3
                            int32_t ecx_29 = *(arg1 + 0x14c0)
                            int32_t ebx_2 = 0
                            result = *(arg1 + 0x14bc)
                            struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result
                            
                            if (ecx_29 s> 0)
                                int32_t edx_3 = ecx_29
                                int32_t ecx_30 = ecx_29 - 1
                                int32_t var_2c_1 = ecx_30
                                
                                do
                                    if (result s> 0)
                                        void* edi_4 = result - 1
                                        struct _EXCEPTION_REGISTRATION_RECORD** var_30_1 = result
                                        struct _EXCEPTION_REGISTRATION_RECORD** i
                                        
                                        do
                                            int32_t edx_4 = ebx_2
                                            
                                            if (*(arg1 + 0x14dc) == 1)
                                                edx_4 = ecx_30
                                            
                                            sub_6548e0(arg1, edx_4 * result + edi_4)
                                            sub_664d00()
                                            result = result_2
                                            edi_4 -= 1
                                            i = var_30_1
                                            var_30_1 -= 1
                                            ecx_30 = var_2c_1
                                        while (i != 1)
                                        edx_3 = ecx_29
                                    
                                    ebx_2 += 1
                                    ecx_30 -= 1
                                    var_2c_1 = ecx_30
                                while (ebx_2 s< edx_3)
                        case 4
                            int32_t edi_3 = 0
                            
                            do
                                sub_64e7a0(*(arg1 + ((ebx_1 - edi_3) << 2) + 0x1798))
                                result = sub_664d00()
                                edi_3 += 1
                            while (edi_3 != ebx_1)
                        default
                            var_80_1 = "UI2DrawInt"
                            var_84 = 0x33f4
                            var_88 = "C:\x\ax2017\Engine\UI2.cpp"
                            ecx_1 = "Halt"
                            goto label_665182
            case 1, 3, 5
                goto label_664feb
            case 2
                if (*(arg1 + 0x1568) == 0 || *(arg1 + 0x1789) == 0)
                    result = sub_662820(arg1)
                    goto label_664feb
                
                result = sub_6eade0(arg1 + 0x1720)
                goto label_664feb
            case 4
                edx.b = 0
                sub_6645f0(arg1, edx.b)
                result = sub_662820(arg1)
                goto label_664feb
            case 6
                result = sub_663c20(arg1)
                goto label_664feb
            case 7
                int32_t* ecx_12 = *(arg1 + 0x13a8)
                
                if (ecx_12 != 0)
                    result = sub_6e65e0(result, edx, ecx_12, &data_bf21e8)
                
                goto label_664feb
            case 8
                void* ecx_15 = data_147abe8
                result = *(arg1 + 0x13b0)
                
                if (ecx_15 == 0)
                    var_80_1 = "GetGameData"
                    var_84 = 0x45
                    var_88 = "C:\x\ax2017\Engine\Game.h"
                    ecx_1 = "gpGameData"
                    goto label_665182
                
                void* edx_2 = *(ecx_15 + 0x10)
                
                if (result != 0)
                    uint32_t ecx_16 = zx.d(result.w)
                    
                    if (ecx_16 u< *(edx_2 + 4))
                        void* ecx_18 = ecx_16 * 0x7c + *edx_2
                        
                        if (*(ecx_18 + 0x78) == result && ecx_18 != 0)
                            result = sub_6c24d0(ecx_18, &data_bf21e8)
                
                goto label_664feb
            case 9
                int32_t ecx_14 = *(arg1 + 0x13a4)
                
                if (ecx_14 != 0)
                    result = sub_6a86b0(ecx_14, *(arg1 + 0x15d0))
                
                goto label_664feb
            case 0xa
                result = sub_663980(arg1)
                goto label_664feb
    else
        result = eax_6(arg1)
        
        if (result.b == 0)
            goto label_664feb
    
    if (*(arg1 + 0x14f0) != 0)
        void* edi_1 = arg1 + 0x18a4
        int32_t i_2 = 5
        int32_t i_1
        
        do
            int32_t ecx_5 = *edi_1
            
            if (ecx_5 != 0)
                sub_64e7a0(ecx_5)
                result = sub_664d00()
            
            edi_1 += 4
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    if (*(arg1 + 0x15a0) != 0)
        int32_t ecx_7 = *(arg1 + 0x18a4)
        
        if (ecx_7 != 0)
            sub_64e7a0(ecx_7)
            result = sub_664d00()
    
    void* ecx_9 = *(arg1 + 0x13ac)
    
    if (ecx_9 != 0)
        result = sub_6c24d0(ecx_9, &data_bf21e8)
    
    if (var_25_1 != 0)
        result = data_147abe4
        *(result + 0x28) = var_54_1
        result[0xe] = var_3c_1
    
    if (*(arg1 + 0x1694) != 0)
        if (data_147aba1 == 0)
            goto label_665169
        
        result = result_1
        data_cf6b14 = result

CookieCheckFunction(result)
return result
