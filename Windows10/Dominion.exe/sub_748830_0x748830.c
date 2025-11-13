// 函数: sub_748830
// 地址: 0x748830
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_773275
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
float result = *arg1
char const* const var_88_2
int32_t var_84_2
char const* const var_80_2
int128_t* i
char* ecx_12
float var_48
float var_44

if (result != 3)
    char* var_54
    int128_t* var_40
    
    if (result == 0x1c)
        char* eax_13 = arg1[6]
        char* edx_4 = &data_801800
        
        if (eax_13 != 0)
            edx_4 = eax_13
        
        sub_6c4220(&var_40, edx_4)
        int32_t var_14_1 = 0
        char* const ecx_14 = &data_801800
        int128_t* eax_14 = var_40
        
        if (eax_14 != 0)
            ecx_14 = eax_14
        
        result = sub_6fb0d0(ecx_14)
        
        if (*(result i+ 4) == 3)
            int32_t eax_15 = data_1512458
            int32_t* ecx_15 = data_1512450
            data_1512458 = eax_15 + 1
            
            if (ecx_15[1] != 0x1e)
                sub_63b870(eax_15 + 1, &data_801800, "ptr->assetType == ASSET_TYPE_UI", 
                    "C:\x\ax2017\Engine\UIDef.cpp", 0x127, "UIDefGet")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            void* eax_17
            int32_t ecx_16
            eax_17, ecx_16 = sub_5af880(ecx_15)
            int32_t esi_4 = *(eax_17 + 8)
            int32_t var_84_3 = ecx_16
            int32_t* eax_18 = sub_69dd00(data_17774dc, 0)
            sub_6fb630(eax_18, eax_18, eax_17, esi_4)
            int32_t var_80_4 = eax_15
            int32_t* esi_6 = esi_4 * 0x178 + *eax_17
            *esi_6 = eax_15
            esi_6[1] = 1
            var_14_1.b = 2
            char* edi_2 = *sub_63df30(&var_54, "Rect-%d")
            void* var_5c_1 = &esi_6[2]
            
            if (edi_2 != 0)
                var_5c_1 = &esi_6[2]
            else
                edi_2 = &data_801800
            
            char* esi_7 = edi_2
            void* ecx_19 = &esi_7[1]
            void* eax_21
            
            do
                eax_21.b = *esi_7
                esi_7 = &esi_7[1]
            while (eax_21.b != 0)
            int32_t eax_22 = sub_687730(esi_7 - ecx_19 + 1)
            *var_5c_1 = eax_22
            memcpy(eax_22, edi_2, esi_7 - ecx_19 + 1)
            var_14_1.b = 3
            
            if (data_cf65bc != 0)
                char* eax_23 = var_54
                
                if (eax_23 != 0 && *eax_23 != 0)
                    char* eax_24 = sub_63d4e0(&var_54)
                    int32_t temp4_1 = *(eax_24 + 4)
                    *(eax_24 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        sub_64c080(eax_24, *(eax_24 + 0xc) + 0x10)
            
            var_14_1.b = 0
            float eax_25
            char* edx_8
            eax_25, edx_8 = sub_5a0e40()
            float var_58 = eax_25
            var_54 = edx_8
            int128_t var_38
            sub_63c270(&var_38:8)
            float xmm0_8 = 1f f/ data_1593c6c
            float var_30
            float xmm2_7 = var_30 * xmm0_8 f+ data_1593c70
            float xmm1_9 = result * xmm0_8 f+ data_1593c74
            float var_70[0x5]
            int128_t xmm2_8 = *sub_5af7f0(&var_70, &var_58, &var_38:8, &var_70)
            var_38 = xmm2_8
            float xmm1_10 = xmm2_8.d
            float xmm1_11
            
            if (0f f<= xmm2_8)
                xmm1_11 = xmm1_10 + 0.5f
            else
                xmm1_11 = xmm1_10 - 0.5f
            
            float xmm3_4 = var_38:4.d
            float xmm5_5 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_11)))
            float xmm1_13
            
            if (0f <= xmm3_4)
                xmm1_13 = xmm3_4 + 0.5f
            else
                xmm1_13 = xmm3_4 - 0.5f
            
            float xmm1_15 = xmm2_7 f- xmm2_8
            float xmm2_10 = xmm1_9 - xmm3_4
            float xmm6_5 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_13)))
            float xmm1_16
            
            if (0 f<= xmm1_15)
                xmm1_16 = xmm1_15 + 0.5f
            else
                xmm1_16 = xmm1_15 - 0.5f
            
            float xmm1_18 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_16)))
            float xmm2_11
            
            if (0f <= xmm2_10)
                xmm2_11 = xmm2_10 + 0.5f
            else
                xmm2_11 = xmm2_10 - 0.5f
            
            var_38.d = xmm5_5
            var_38:4.d = xmm6_5
            float var_30_2 = xmm1_18 + xmm5_5
            float var_2c_3 = _mm_cvtepi32_ps(zx.o(int.d(xmm2_11))) + xmm6_5
            *(esi_6 + 0x10) = var_38
            esi_6[0x22] = result
            data_151245c = eax_15
            data_151345c = 1
            sub_74ac70()
            char* ecx_27
            ecx_27.b = 1
            sub_744ce0(ecx_27)
            sub_6f6e30(data_1512450)
            result = sub_74ac70()
            int32_t var_14_3 = 4
        else
            int32_t var_14_2 = 1
        
        if (data_cf65bc != 0)
            result = var_40
            
            if (result != 0 && *result != 0)
                result = sub_63d4e0(&var_40)
                int32_t temp1_1 = *(result i+ 4)
                *(result i+ 4) -= 1
                
                if (temp1_1 == 1)
                    result = sub_64c080(result, *(result i+ 0xc) + 0x10)
        
        goto label_74968a
    
    if (result == 9)
        data_1593c6c = (_mm_cvtepi32_ps(zx.o(arg1[3])) * 0.00200000009f + 1f) f* data_1593c6c
        goto label_74968a
    
    if (result != 1)
        if (result == 7)
            result = sub_74a6a0()
        
        goto label_74968a
    
    if (data_1513460.b != 0 || data_1513462 != 0)
        if (arg1[1] == 0xd)
        label_748ef9:
            data_1513460 = 0
            data_1513462 = 0
            goto label_74968a
    else if (data_1513460:1.b != 0 && arg1[1] == 0xd)
        goto label_748ef9
    
    int16_t eax_34
    
    if (arg1[1] == 8)
        eax_34 = GetKeyState(0x11)
    
    if (arg1[1] == 8 && eax_34 s< 0)
        result = sub_6fdc80()
        goto label_74968a
    
    if (arg1[1] == 9)
        int16_t eax_35 = GetKeyState(0x11)
        int16_t eax_36
        
        if (eax_35 s< 0)
            eax_36 = GetKeyState(0x10)
        
        if (eax_35 s< 0 && eax_36 s< 0)
            result = sub_6fdc80()
            goto label_74968a
        
        if (arg1[1] == 9 && GetKeyState(0x11) s< 0)
            result = sub_6fdce0()
            goto label_74968a
    
    if (arg1[1] == 0x4f)
        result = GetKeyState(0x11)
    
    if (arg1[1] == 0x4f && result.w s< 0)
        if (data_151345c == 1)
            result = sub_744f10(data_151245c, nullptr)
            int32_t ecx_32 = *(result i+ 4)
            
            if (ecx_32 == 2)
                int32_t esi_11 = *(result i+ 0xc8)
                result = sub_6f2a60(ecx_32 - 2)
                
                if (result.b != 0)
                    int32_t* ecx_34 = data_cf65b8
                    *((data_147dec0 << 2) + &data_147dcc0) = esi_11
                    int32_t eax_40 = data_147dec0 + 1
                    data_147dec0 = eax_40
                    data_147dec4 = eax_40
                    (*(*ecx_34 + 4))(eax_2)
                    sub_6fda60()
                    void* eax_42 = data_cf65b4
                    HWND hWnd = data_147b084
                    *(eax_42 + 0x1c) = 1
                    *(eax_42 + 0x28) = 0
                    *(eax_42 + 0x20) = 0
                    *(eax_42 + 0x24) = esi_11
                    result = SetFocus(hWnd)
        
        goto label_74968a
    
    if (arg1[1] == 0xdb)
        if (GetKeyState(0x11) s>= 0)
            goto label_74903d
        
        result = GetKeyState(0x10)
        
        if (result.w s< 0)
            if (data_151345c == 0)
                goto label_74968a
            
            sub_74ae80(0)
            char* ecx_35
            ecx_35.b = 1
            sub_744ce0(ecx_35)
        label_74937d:
            sub_6f6e30(data_1512450)
            result = sub_74ac70()
            goto label_74968a
    
label_74903d:
    
    if (arg1[1] == 0xdd)
        if (GetKeyState(0x11) s>= 0)
            goto label_749080
        
        result = GetKeyState(0x10)
        
        if (result.w s>= 0)
            goto label_749080
        
        if (data_151345c == 0)
            goto label_74968a
        
        sub_74ae80(0xffffffff)
        char* ecx_36
        ecx_36.b = 1
        sub_744ce0(ecx_36)
        goto label_74937d
    
label_749080:
    int16_t eax_45
    
    if (arg1[1] == 0xdb)
        eax_45 = GetKeyState(0x11)
    
    if (arg1[1] == 0xdb && eax_45 s< 0)
        result = sub_748780()
        goto label_74968a
    
    int16_t eax_46
    
    if (arg1[1] == 0xdd)
        eax_46 = GetKeyState(0x11)
    
    if (arg1[1] == 0xdd && eax_46 s< 0)
        result = sub_7486f0()
        goto label_74968a
    
    result = arg1[1]
    
    if (result == 0x43)
        if (data_151345c == 1)
            data_1513462 = 1
        
        goto label_74968a
    
    if (result != 0x48)
        int16_t eax_50
        
        if (result == 0x4a)
            eax_50 = GetKeyState(0x11)
        
        if (result == 0x4a && eax_50 s< 0)
            sub_7484a0()
            char* ecx_44
            ecx_44.b = 1
            result = sub_744ce0(ecx_44)
            goto label_74968a
        
        if (arg1[1] == 0x54)
            result = GetKeyState(0x11)
        
        if (arg1[1] == 0x54 && result.w s< 0)
            data_1513460:1.b = 0
            
            if (data_151345c s> 0)
                data_1513460.b = 1
            
            goto label_74968a
        
        int32_t eax_51 = arg1[1]
        
        if (eax_51 == 0x42)
            data_151345c = 0
            result = sub_74ac70()
            data_1513460 = 0x100
            goto label_74968a
        
        if (eax_51 == 0xbb)
            result = GetKeyState(0x11)
        
        if (eax_51 == 0xbb && result.w s< 0)
            data_1593c6c = data_1593c6c * 1.29999995f
            goto label_74968a
        
        if (arg1[1] == 0xbd)
            result = GetKeyState(0x11)
        
        if (arg1[1] == 0xbd && result.w s< 0)
            data_1593c6c = data_1593c6c / 1.29999995f
            goto label_74968a
        
        char* ecx_45
        
        if (arg1[1] == 0x5a)
            result, ecx_45 = GetKeyState(0x11)
        
        void* var_84_5
        int32_t eax_53
        void* esi_13
        
        if (arg1[1] == 0x5a && result.w s< 0)
            if (data_1593c64 s<= 1)
                goto label_74968a
            
            sub_6ee530(ecx_45)
            eax_53 = data_1593c64 - 1
            int32_t var_80_8 = 0x100c
            esi_13 = &(&data_1512454)[eax_53 * 0x404]
            var_84_5 = esi_13
            int32_t* var_88_5 = &data_1512458
        label_74934b:
            data_1593c64 = eax_53
            memcpy(&data_1512458, var_84_5, 0x100c)
            int32_t* eax_56 = data_1512450
            sub_69d3e0(eax_56, **eax_56, **(esi_13 + 0x100c), data_17774dc)
            goto label_74937d
        
        int16_t eax_54
        char* ecx_46
        
        if (arg1[1] == 0x59)
            eax_54, ecx_46 = GetKeyState(0x11)
        
        if (arg1[1] == 0x59 && eax_54 s< 0)
            result = data_1593c64
            
            if (result s>= data_1593c68)
                goto label_74968a
            
            sub_6ee530(ecx_46)
            eax_53 = data_1593c64 + 1
            int32_t var_80_9 = 0x100c
            esi_13 = &(&data_1512454)[eax_53 * 0x404]
            var_84_5 = esi_13
            int32_t* var_88_6 = &data_1512458
            goto label_74934b
        
        int32_t eax_57 = arg1[1]
        
        if (eax_57 == 0x2e)
            i = nullptr
            int128_t* i_5 = nullptr
            
            if (data_151345c s> 0)
                do
                    int32_t* ecx_50 = data_1512450
                    int32_t edi_4 = (&data_151245c)[i]
                    
                    if (ecx_50[1] != 0x1e)
                        goto label_7496d5
                    
                    i = sub_5af880(ecx_50)
                    int32_t ecx_51 = 0
                    int128_t* i_7 = i
                    int32_t* edx_17 = nullptr
                    
                    while (true)
                        if (ecx_51 s>= *(i_7 + 8))
                            var_80_2 = "DeleteElement"
                            var_84_2 = 0x57e
                            var_88_2 = "C:\x\ax2017\Engine\Editor\UIEditor.cpp"
                            ecx_12 = "Halt"
                            goto label_7496ee
                        
                        i = *i_7
                        
                        if (*(edx_17 + i) == edi_4)
                            break
                        
                        ecx_51 += 1
                        edx_17 = &edx_17[0x5e]
                    
                    int32_t* eax_58 = sub_69dd00(data_17774dc, 0)
                    sub_6fb870(eax_58, eax_58, i_7, ecx_51, nullptr)
                    i = i_5 + 1
                    i_5 = i
                while (i s< data_151345c)
            
            int32_t* ecx_54 = data_1512450
            data_151345c = 0
            sub_6f6e30(ecx_54)
            sub_74ac70()
            char* ecx_55
            ecx_55.b = 1
            result = sub_744ce0(ecx_55)
            goto label_74968a
        
        if (eax_57 == 0x53 && GetKeyState(0x11) s< 0)
            int16_t eax_61
            char* ecx_56
            eax_61, ecx_56 = GetKeyState(0x10)
            
            if (eax_61 s< 0)
                result = sub_6fa410(ecx_56)
                goto label_74968a
        
        int16_t eax_62
        char* ecx_57
        
        if (arg1[1] == 0x53)
            eax_62, ecx_57 = GetKeyState(0x11)
        
        if (arg1[1] == 0x53 && eax_62 s< 0)
            result = sub_6f9e80(ecx_57)
            goto label_74968a
        
        if (arg1[1] == 0x41)
            i = GetKeyState(0x11)
        
        if (arg1[1] != 0x41 || i.w s>= 0 || data_1513460.b != 0)
            int16_t eax_71
            
            if (arg1[1] == 0x44)
                eax_71 = GetKeyState(0x11)
            
            if (arg1[1] == 0x44 && eax_71 s< 0 && data_1513460.b == 0)
                goto label_748ab7
            
            result = arg1[1]
            float var_44_7
            
            if (result == 0x27)
                bool cond:9_1 = (arg1[2].b & 1) == 0
                var_48 = 1f
                int32_t var_44_2 = 0
                
                if (cond:9_1)
                    result = sub_745c40(&var_48)
                else
                    var_48 = 10f
                    var_44_7 = (zx.o(0)).d f* 10f
                    result = sub_745c40(&var_48)
            else if (result == 0x25)
                bool cond:10_1 = (arg1[2].b & 1) == 0
                var_48 = -1f
                int32_t var_44_3 = 0
                
                if (cond:10_1)
                    result = sub_745c40(&var_48)
                else
                    var_48 = -10f
                    var_44_7 = (zx.o(0)).d f* 10f
                    result = sub_745c40(&var_48)
            else if (result == 0x26)
                bool cond:11_1 = (arg1[2].b & 1) == 0
                var_48 = 0f
                int32_t var_44_4 = 0xbf800000
                
                if (not(cond:11_1))
                    var_48 = 0f
                    float var_44_5 = -1f * 10f
                
                result = sub_745c40(&var_48)
            else if (result == 0x28)
                bool cond:12_1 = (arg1[2].b & 1) == 0
                var_48 = 0f
                int32_t var_44_6 = 0x3f800000
                
                if (cond:12_1)
                    result = sub_745c40(&var_48)
                else
                    var_48 = 0f
                    var_44_7 = 0x3f800000 f* 10f
                    result = sub_745c40(&var_48)
            goto label_74968a
        
        int32_t* ecx_58 = data_1512450
        
        if (ecx_58[1] != 0x1e)
            goto label_7496d5
        
        i = sub_5af880(ecx_58)
        int32_t* ecx_59 = data_1512450
        var_40 = i
        
        if (ecx_59[1] != 0x1e)
            goto label_7496d5
        
        char* eax_63 = sub_5af880(ecx_59)
        int32_t esi_15 = 0
        var_54 = eax_63
        int32_t i_6 = 0
        
        if (*(eax_63 + 8) s> 0)
            int32_t* edi_5 = nullptr
            int32_t i_1
            char* ecx_63
            
            do
                int32_t eax_64 = sub_744f10(*(edi_5 + *eax_63), nullptr)
                int32_t ecx_62 = esi_15 + 1
                edi_5 = &edi_5[0x5e]
                
                if (*(eax_64 + 0x45) != 0)
                    ecx_62 = esi_15
                
                i_1 = i_6 + 1
                esi_15 = ecx_62
                i_6 = i_1
                ecx_63 = var_54
                eax_63 = ecx_63
            while (i_1 s< *(ecx_63 + 8))
        
        bool cond:13_1 = data_151345c == esi_15
        data_151345c = 0
        
        if (not(cond:13_1))
            int128_t* eax_66 = var_40
            int32_t i_2 = 0
            
            if (*(eax_66 + 8) s> 0)
                int32_t* esi_16 = nullptr
                
                do
                    if (*(sub_744f10(*(esi_16 + *eax_66), nullptr) + 0x45) == 0)
                        (&data_151245c)[data_151345c] = *(esi_16 + *var_40)
                        data_151345c += 1
                    
                    eax_66 = var_40
                    i_2 += 1
                    esi_16 = &esi_16[0x5e]
                while (i_2 s< *(eax_66 + 8))
        
        result = sub_74ac70()
        goto label_74968a
    
    result.b = data_19e3bc8 == 0
    data_19e3bc8 = result.b
    char* xmm0_20
    
    if (result.b == 0)
        xmm0_20 = (zx.o(0)).d
    else
        uint128_t xmm0_18 = zx.o(sub_69bef0(data_1512454))
        result.b = data_19e3bc8
        xmm0_20 = _mm_cvtepi32_ps(xmm0_18) / 1000f
    
    var_44.b = result.b
    i = data_1512454
    var_54 = xmm0_20
    
    if (i != 0)
        uint32_t ecx_38 = zx.d(i.w)
        int32_t ecx_39
        int32_t edx_12
        
        if (ecx_38 u< data_caf264)
            edx_12 = data_caf260
            ecx_39 = ecx_38 * 0x438
        
        if (ecx_38 u< data_caf264 && *(ecx_39 + edx_12 + 0x434) == i)
            int32_t* ecx_40 = *(ecx_39 + edx_12 + 4)
            
            if (ecx_40[1] != 0x1e)
                goto label_7496d5
            
            result = sub_5af880(ecx_40)
            uint32_t i_3 = 0
            float result_1 = result
            
            if (*(result i+ 8) s> 0)
                int32_t edi_3 = 0
                
                do
                    uint32_t eax_47 = *result
                    
                    if (*(eax_47 + edi_3 + 4) == 6)
                        sub_69bd40(eax_47, i_3, i, var_44.b)
                        uint32_t eax_48 = sub_6985c0(i)
                        uint32_t eax_49 = sub_698630(eax_48, i_3, eax_48, &data_801800)
                        char* xmm0_21 = var_54
                        
                        if (not(xmm0_21 f< 0))
                            *(eax_49 + 0x14) = xmm0_21
                            *(eax_49 + 0x10) = xmm0_21
                    
                    result = result_1
                    i_3 += 1
                    edi_3 += 0x178
                while (i_3 s< *(result i+ 8))
            
            goto label_74968a
        
        var_80_2 = "DataArray<struct UIState>::DataArrayGet"
        var_84_2 = 0x6d
        var_88_2 = "C:\x\ax2017\Engine\DataArray.h"
        ecx_12 = "DataArrayTryToGet(id) != NULL"
    else
        var_80_2 = "DataArray<struct UIState>::DataArrayGet"
        var_84_2 = 0x6c
        var_88_2 = "C:\x\ax2017\Engine\DataArray.h"
        ecx_12 = "id != DATAID_NULL"
else
    i = GetKeyState(0x20)
    
    if (i.w s< 0)
        data_1593c78 = 1
        data_1593c7c = 1
        result = sub_63c270(&var_48)
        float xmm1_1 = var_48
        data_1593c80 = xmm1_1
        data_1593c84 = var_44
        data_1593c90 = 0
        data_1593c88 = xmm1_1
        data_1593c8c = var_44
    label_74968a:
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(result)
        return result
    
    if (data_1513460.b != 0 || data_1513462 != 0)
        result = sub_7482a0(1)
        goto label_74968a
    
    if (data_1513460:1.b != 0)
        data_1593c78 = 1
        data_1593c7c = 2
        sub_63c270(&var_48)
        float xmm1_2 = var_48
        data_1593c80 = xmm1_2
        data_1593c84 = var_44
        data_1593c90 = 0
        data_1593c88 = xmm1_2
        data_1593c8c = var_44
        sub_63c270(&var_48)
        uint32_t eax_3
        int32_t edx_1
        eax_3, edx_1 = sub_747970(var_48, var_44)
        data_1593c94 = eax_3
        void var_50
        i = sub_748080(&var_50, edx_1, 1, &var_50)
        int32_t* ecx_5 = data_1512450
        int128_t xmm0_3 = *i
        data_1593c98 = 1
        data_1593c9c = xmm0_3
        
        if (ecx_5[1] != 0x1e)
            goto label_7496d5
        
        result = sub_5af880(ecx_5)
        data_1593cbc.o = *(result i+ 0xc)
        goto label_74968a
    
    int32_t* ecx_6 = data_1512450
    
    if (ecx_6[1] != 0x1e)
    label_7496d5:
        var_80_2 = "UIDefGet"
        var_84_2 = 0x127
        ecx_12 = "ptr->assetType == ASSET_TYPE_UI"
        var_88_2 = "C:\x\ax2017\Engine\UIDef.cpp"
    else
        int32_t* eax_5 = sub_5af880(ecx_6)
        sub_63c270(&var_48)
        float xmm0_5 = 1f f/ data_1593c6c
        int32_t edx_2 = eax_5[2]
        int32_t edx_3 = edx_2 - 1
        float xmm6_3 = var_48 * xmm0_5 f+ data_1593c70
        float xmm5_3 = var_44 * xmm0_5 f+ data_1593c74
        
        if (edx_2 - 1 s< 0)
        label_748ab7:
            data_151345c = 0
            result = sub_74ac70()
            goto label_74968a
        
        int32_t* esi_3 = *eax_5 + edx_3 * 0x178
        i = &esi_3[0x28]
        
        while (true)
            if (*(i - 0x5c) == 0 && *(i - 0x5b) == 0)
                float xmm0_6 = i[-9].d
                float xmm2_2 = *(i - 0x88) - xmm0_6
                float xmm2_4 = xmm2_2 f* *i + xmm0_6
                float xmm4_3 = xmm2_2 f* *(i - 8) + xmm0_6
                float xmm0_7 = *(i - 0x8c)
                float xmm1_4 = *(i - 0x84) - xmm0_7
                float xmm1_6 = xmm1_4 f* *(i + 4) + xmm0_7
                float xmm3_3 = xmm1_4 f* *(i - 4) + xmm0_7
                
                if (xmm2_4 < xmm4_3 || xmm1_6 < xmm3_3)
                    var_80_2 = "RectContains"
                    var_84_2 = 0xa4
                    var_88_2 = "C:\x\ax2017\Engine\Rect.cpp"
                    ecx_12 = "RectIsNormalized(r)"
                    break
                
                if (not(xmm6_3 < xmm4_3) && not(xmm5_3 < xmm3_3) && not(xmm2_4 < xmm6_3)
                        && xmm1_6 >= xmm5_3)
                    int32_t i_4 = *esi_3
                    char eax_6 = 1
                    
                    if (data_151345c s> 0)
                        eax_6 = 0
                    
                    if (GetKeyState(0x11) s< 0)
                        int32_t eax_8 = data_151345c
                        int32_t ecx_9 = 0
                        
                        if (eax_8 s<= 0)
                        label_748b02:
                            (&data_151245c)[eax_8] = i_4
                            data_151345c += 1
                        else
                            while ((&data_151245c)[ecx_9] != i_4)
                                ecx_9 += 1
                                
                                if (ecx_9 s>= eax_8)
                                    goto label_748b02
                            
                            data_151345c = eax_8 - 1
                            (&data_151245c)[ecx_9] = (&data_151245c)[eax_8 - 1]
                        
                        goto label_748b63
                    
                    int32_t ecx_10 = data_151345c
                    result = 0f
                    
                    if (ecx_10 s> 0)
                        while ((&data_151245c)[result] != i_4)
                            result += 1
                            
                            if (result s>= ecx_10)
                                goto label_748b43
                        
                        data_1593c99 = 0
                        goto label_748b75
                    
                label_748b43:
                    
                    if (GetKeyState(0x12) s>= 0 || data_151345c s<= 0)
                        data_151245c = i_4
                        data_151345c = 1
                    label_748b63:
                        result = sub_74ac70()
                        ecx_10 = data_151345c
                        data_1593c99 = 1
                    label_748b75:
                        
                        if (ecx_10 s> 0)
                            goto label_748b7f
                    else
                    label_748b7f:
                        
                        if (GetKeyState(0x12) s< 0)
                            sub_7484a0()
                        
                        result = sub_7482a0(eax_6)
                    
                    goto label_74968a
            
            esi_3 -= 0x178
            i -= 0x178
            int32_t temp2_1 = edx_3
            edx_3 -= 1
            
            if (temp2_1 - 1 s< 0)
                goto label_748ab7
label_7496ee:
sub_63b870(i, &data_801800, ecx_12, var_88_2, var_84_2, var_80_2)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
