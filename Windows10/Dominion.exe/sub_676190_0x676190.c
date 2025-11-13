// 函数: sub_676190
// 地址: 0x676190
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
__security_cookie
HMENU hMenu = CreatePopupMenu()
POINT point
GetCursorPos(&point)
HMENU eax_2 = CreatePopupMenu()
InsertMenuA(eax_2, 0xffffffff, MF_BYPOSITION, 0xa, "Left")
InsertMenuA(eax_2, 0xffffffff, MF_BYPOSITION, 0xb, &data_873798)
InsertMenuA(eax_2, 0xffffffff, MF_BYPOSITION, 0xc, "Right")
InsertMenuA(eax_2, 0xffffffff, MF_BYPOSITION, 0xd, "Bottom")
InsertMenuA(eax_2, 0xffffffff, MF_BYPOSITION, 0xe, "Center Vertically")
InsertMenuA(eax_2, 0xffffffff, MF_BYPOSITION, 0xf, "Center Horizontally")
InsertMenuA(eax_2, 0xffffffff, MF_BYPOSITION, 0x10, "Center")
InsertMenuA(eax_2, 0xffffffff, 0xc00, 0, &data_801800)
InsertMenuA(eax_2, 0xffffffff, MF_BYPOSITION, 0x11, "Tile")
HMENU hMenu_1 = CreatePopupMenu()
uint32_t hMenu_3 = hMenu_1
InsertMenuA(hMenu_1, 0xffffffff, MF_BYPOSITION, 0x12, "SizeToSource")
InsertMenuA(hMenu, 0xffffffff, 0x410, eax_2, "Align")
InsertMenuA(hMenu, 0xffffffff, 0x410, hMenu_3, "Transform")
HMENU hMenu_2 = hMenu
BOOL eax_3 = TrackPopupMenu(hMenu_2, TPM_RETURNCMD, point.x, point.y, 0, data_147b084, nullptr)

if (eax_3 u<= 0x12)
    eax_3 = zx.d(lookup_table_676c00[eax_3])
    float var_70
    int128_t var_60
    int128_t var_40
    int128_t var_30
    
    switch (eax_3)
        case 0
            goto label_676b85
        case 1
            if (data_c28c58 != 0)
                float xmm0_1 = *(data_147abe8 + 0x2c)
                int128_t* eax_5
                int32_t ecx_1
                eax_5, ecx_1 = sub_675bb0(&var_30)
                int32_t i = 0
                var_40 = *eax_5
                
                if (data_c28c58 s> 0)
                    do
                        void* eax_6 = sub_665600((&data_c27c58)[i])
                        sub_64c550(eax_6 + 0x14, xmm0_1, &var_70)
                        float xmm1_2 = var_40.d - var_70
                        float var_6c
                        float xmm4_2 = var_6c + 0f
                        float xmm5_2 = xmm1_2 + var_70
                        float xmm3_2
                        
                        if (0f <= xmm5_2)
                            xmm3_2 = xmm5_2 + 0.5f
                        else
                            xmm3_2 = xmm5_2 - 0.5f
                        
                        float xmm3_4
                        
                        if (0f <= xmm4_2)
                            xmm3_4 = xmm4_2 + 0.5f
                        else
                            xmm3_4 = xmm4_2 - 0.5f
                        
                        float var_68
                        float xmm0_5 = var_68 + xmm1_2 - xmm5_2
                        float var_64
                        float xmm1_5 = var_64 + 0f - xmm4_2
                        float xmm7_2 = _mm_cvtepi32_ps(zx.o(int.d(xmm3_4)))
                        float xmm0_6
                        
                        if (0f <= xmm0_5)
                            xmm0_6 = xmm0_5 + 0.5f
                        else
                            xmm0_6 = xmm0_5 - 0.5f
                        
                        float xmm3_6 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_6)))
                        float xmm1_6
                        
                        if (0f <= xmm1_5)
                            xmm1_6 = xmm1_5 + 0.5f
                        else
                            xmm1_6 = xmm1_5 - 0.5f
                        
                        float xmm1_8 = _mm_cvtepi32_ps(zx.o(int.d(xmm3_2)))
                        float xmm0_8 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_6)))
                        var_60.d = xmm1_8
                        var_60:4.d = xmm7_2
                        var_60:8.d = xmm3_6 + xmm1_8
                        var_60:0xc.d = xmm0_8 + xmm7_2
                        var_30 = var_60
                        sub_667c30(&var_30, 0x76, eax_6, &var_30)
                        i += 1
                    while (i s< data_c28c58)
                    
                    hMenu_2 = hMenu
                
                ecx_1.b = 1
                sub_665770(ecx_1)
            
            goto label_676b85
        case 2
            if (data_c28c58 != 0)
                float xmm0_11 = *(data_147abe8 + 0x2c)
                int128_t* eax_10
                int32_t ecx_8
                eax_10, ecx_8 = sub_675bb0(&var_30)
                int32_t i_1 = 0
                var_30 = *eax_10
                
                if (data_c28c58 s> 0)
                    do
                        void* eax_11 = sub_665600((&data_c27c58)[i_1])
                        sub_64c550(eax_11 + 0x14, xmm0_11, &var_60)
                        float xmm1_10 = var_30:4.d f- var_60:4.d
                        float xmm5_4 = var_60.d + 0f
                        float xmm4_4 = xmm1_10 f+ var_60:4.d
                        float xmm3_9
                        
                        if (0f <= xmm5_4)
                            xmm3_9 = xmm5_4 + 0.5f
                        else
                            xmm3_9 = xmm5_4 - 0.5f
                        
                        float xmm3_11
                        
                        if (0f <= xmm4_4)
                            xmm3_11 = xmm4_4 + 0.5f
                        else
                            xmm3_11 = xmm4_4 - 0.5f
                        
                        float xmm0_15 = var_60:8.d + 0f - xmm5_4
                        float xmm2_5 = var_60:0xc.d + xmm1_10 - xmm4_4
                        float xmm7_4 = _mm_cvtepi32_ps(zx.o(int.d(xmm3_11)))
                        float xmm0_16
                        
                        if (0f <= xmm0_15)
                            xmm0_16 = xmm0_15 + 0.5f
                        else
                            xmm0_16 = xmm0_15 - 0.5f
                        
                        float xmm3_13 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_16)))
                        float xmm2_6
                        
                        if (0f <= xmm2_5)
                            xmm2_6 = xmm2_5 + 0.5f
                        else
                            xmm2_6 = xmm2_5 - 0.5f
                        
                        float xmm1_12 = _mm_cvtepi32_ps(zx.o(int.d(xmm3_9)))
                        float xmm0_18 = _mm_cvtepi32_ps(zx.o(int.d(xmm2_6)))
                        var_70 = xmm1_12
                        float var_6c_1 = xmm7_4
                        float var_68_1 = xmm3_13 + xmm1_12
                        float var_64_1 = xmm0_18 + xmm7_4
                        var_40 = var_70.o
                        sub_667c30(&var_40, 0x76, eax_11, &var_40)
                        i_1 += 1
                    while (i_1 s< data_c28c58)
                    
                    hMenu_2 = hMenu
                
                ecx_8.b = 1
                sub_665770(ecx_8)
            
            goto label_676b85
        case 3
            if (data_c28c58 != 0)
                float xmm0_21 = *(data_147abe8 + 0x2c)
                int128_t* eax_15
                int32_t ecx_15
                eax_15, ecx_15 = sub_675bb0(&var_30)
                int32_t i_2 = 0
                var_30 = *eax_15
                
                if (data_c28c58 s> 0)
                    do
                        void* eax_16 = sub_665600((&data_c27c58)[i_2])
                        sub_64c550(eax_16 + 0x14, xmm0_21, &var_60)
                        float xmm1_14 = var_30:8.d f- var_60:8.d
                        float xmm4_6 = var_60:4.d + 0f
                        float xmm0_24 = var_60:0xc.d + 0f
                        float xmm5_6 = var_60.d + xmm1_14
                        float xmm1_15 = xmm1_14 f+ var_60:8.d
                        float xmm3_16
                        
                        if (0f <= xmm5_6)
                            xmm3_16 = xmm5_6 + 0.5f
                        else
                            xmm3_16 = xmm5_6 - 0.5f
                        
                        float xmm7_6 = _mm_cvtepi32_ps(zx.o(int.d(xmm3_16)))
                        float xmm3_18
                        
                        if (0f <= xmm4_6)
                            xmm3_18 = xmm4_6 + 0.5f
                        else
                            xmm3_18 = xmm4_6 - 0.5f
                        
                        float xmm1_16 = xmm1_15 - xmm5_6
                        float xmm0_25 = xmm0_24 - xmm4_6
                        float xmm3_20 = _mm_cvtepi32_ps(zx.o(int.d(xmm3_18)))
                        float xmm1_17
                        
                        if (0f <= xmm1_16)
                            xmm1_17 = xmm1_16 + 0.5f
                        else
                            xmm1_17 = xmm1_16 - 0.5f
                        
                        float xmm1_19 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_17)))
                        float xmm0_26
                        
                        if (0f <= xmm0_25)
                            xmm0_26 = xmm0_25 + 0.5f
                        else
                            xmm0_26 = xmm0_25 - 0.5f
                        
                        var_70 = xmm7_6
                        float var_6c_2 = xmm3_20
                        float var_68_2 = xmm1_19 + xmm7_6
                        float var_64_2 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_26))) + xmm3_20
                        var_40 = var_70.o
                        sub_667c30(&var_40, 0x76, eax_16, &var_40)
                        i_2 += 1
                    while (i_2 s< data_c28c58)
                    
                    hMenu_2 = hMenu
                
                ecx_15.b = 1
                sub_665770(ecx_15)
            
            goto label_676b85
        case 4
            if (data_c28c58 != 0)
                float xmm0_31 = *(data_147abe8 + 0x2c)
                int128_t* eax_23
                int32_t ecx_19
                eax_23, ecx_19 = sub_675bb0(&var_30)
                int32_t i_3 = 0
                var_30 = *eax_23
                
                if (data_c28c58 s> 0)
                    do
                        void* eax_24 = sub_665600((&data_c27c58)[i_3])
                        sub_64c550(eax_24 + 0x14, xmm0_31, &var_60)
                        float xmm2_9 = var_60:0xc.d
                        float xmm0_34 = var_30:0xc.d - xmm2_9
                        float xmm5_8 = var_60.d + 0f
                        float xmm1_22 = var_60:8.d + 0f
                        float xmm4_8 = var_60:4.d + xmm0_34
                        float xmm3_22
                        
                        if (0f <= xmm5_8)
                            xmm3_22 = xmm5_8 + 0.5f
                        else
                            xmm3_22 = xmm5_8 - 0.5f
                        
                        float xmm7_8 = _mm_cvtepi32_ps(zx.o(int.d(xmm3_22)))
                        float xmm3_24
                        
                        if (0f <= xmm4_8)
                            xmm3_24 = xmm4_8 + 0.5f
                        else
                            xmm3_24 = xmm4_8 - 0.5f
                        
                        float xmm1_23 = xmm1_22 - xmm5_8
                        float xmm2_11 = xmm2_9 + xmm0_34 - xmm4_8
                        float xmm3_26 = _mm_cvtepi32_ps(zx.o(int.d(xmm3_24)))
                        float xmm1_24
                        
                        if (0f <= xmm1_23)
                            xmm1_24 = xmm1_23 + 0.5f
                        else
                            xmm1_24 = xmm1_23 - 0.5f
                        
                        float xmm1_26 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_24)))
                        float xmm2_12
                        
                        if (0f <= xmm2_11)
                            xmm2_12 = xmm2_11 + 0.5f
                        else
                            xmm2_12 = xmm2_11 - 0.5f
                        
                        var_70 = xmm7_8
                        float var_6c_3 = xmm3_26
                        float var_68_3 = xmm1_26 + xmm7_8
                        float var_64_3 = _mm_cvtepi32_ps(zx.o(int.d(xmm2_12))) + xmm3_26
                        var_40 = var_70.o
                        sub_667c30(&var_40, 0x76, eax_24, &var_40)
                        i_3 += 1
                    while (i_3 s< data_c28c58)
                    
                    hMenu_2 = hMenu
                
                ecx_19.b = 1
                sub_665770(ecx_19)
            
            goto label_676b85
        case 5
            if (data_c28c58 != 0)
                float xmm0_39 = *(data_147abe8 + 0x2c)
                int128_t* eax_31
                int32_t ecx_23
                eax_31, ecx_23 = sub_675bb0(&var_30)
                int32_t i_4 = 0
                var_60 = *eax_31
                
                if (data_c28c58 s> 0)
                    float xmm0_43 = (var_60:4.d f+ var_60:0xc.d) * 0.5f
                    
                    do
                        void* eax_32 = sub_665600((&data_c27c58)[i_4])
                        sub_64c550(eax_32 + 0x14, xmm0_39, &var_60)
                        float xmm4_9 = var_60:4.d
                        float xmm2_14 = var_60:0xc.d
                        float xmm5_10 = var_60.d + 0f
                        float xmm1_29 = xmm0_43 - (xmm4_9 + xmm2_14) * 0.5f
                        float xmm4_10 = xmm4_9 + xmm1_29
                        float xmm1_31
                        
                        if (0f <= xmm5_10)
                            xmm1_31 = xmm5_10 + 0.5f
                        else
                            xmm1_31 = xmm5_10 - 0.5f
                        
                        float xmm1_33
                        
                        if (0f <= xmm4_10)
                            xmm1_33 = xmm4_10 + 0.5f
                        else
                            xmm1_33 = xmm4_10 - 0.5f
                        
                        float xmm0_49 = var_60:8.d + 0f - xmm5_10
                        float xmm2_16 = xmm2_14 + xmm1_29 - xmm4_10
                        float xmm7_10 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_33)))
                        float xmm0_50
                        
                        if (0f <= xmm0_49)
                            xmm0_50 = xmm0_49 + 0.5f
                        else
                            xmm0_50 = xmm0_49 - 0.5f
                        
                        float xmm1_35 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_50)))
                        float xmm2_17
                        
                        if (0f <= xmm2_16)
                            xmm2_17 = xmm2_16 + 0.5f
                        else
                            xmm2_17 = xmm2_16 - 0.5f
                        
                        float xmm2_19 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_31)))
                        float xmm0_52 = _mm_cvtepi32_ps(zx.o(int.d(xmm2_17)))
                        var_70 = xmm2_19
                        float var_6c_4 = xmm7_10
                        float var_68_4 = xmm1_35 + xmm2_19
                        float var_64_4 = xmm0_52 + xmm7_10
                        var_30 = var_70.o
                        sub_667c30(&var_30, 0x76, eax_32, &var_30)
                        i_4 += 1
                    while (i_4 s< data_c28c58)
                    
                    hMenu_2 = hMenu
                
                ecx_23.b = 1
                sub_665770(ecx_23)
            
            goto label_676b85
        case 6
            if (data_c28c58 != 0)
                float xmm0_55 = *(data_147abe8 + 0x2c)
                int128_t* eax_36
                int32_t ecx_30
                eax_36, ecx_30 = sub_675bb0(&var_30)
                int32_t i_5 = 0
                var_60 = *eax_36
                
                if (data_c28c58 s> 0)
                    float xmm0_59 = (var_60.d f+ var_60:8.d) * 0.5f
                    
                    do
                        void* eax_37 = sub_665600((&data_c27c58)[i_5])
                        sub_64c550(eax_37 + 0x14, xmm0_55, &var_60)
                        float xmm5_11 = var_60.d
                        float xmm2_21 = var_60:8.d
                        float xmm4_12 = var_60:4.d + 0f
                        float xmm1_38 = xmm0_59 - (xmm5_11 + xmm2_21) * 0.5f
                        float xmm5_12 = xmm5_11 + xmm1_38
                        float xmm1_40
                        
                        if (0f <= xmm5_12)
                            xmm1_40 = xmm5_12 + 0.5f
                        else
                            xmm1_40 = xmm5_12 - 0.5f
                        
                        float xmm1_42
                        
                        if (0f <= xmm4_12)
                            xmm1_42 = xmm4_12 + 0.5f
                        else
                            xmm1_42 = xmm4_12 - 0.5f
                        
                        float xmm2_23 = xmm2_21 + xmm1_38 - xmm5_12
                        float xmm0_65 = var_60:0xc.d + 0f - xmm4_12
                        float xmm7_12 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_42)))
                        float xmm2_24
                        
                        if (0f <= xmm2_23)
                            xmm2_24 = xmm2_23 + 0.5f
                        else
                            xmm2_24 = xmm2_23 - 0.5f
                        
                        float xmm1_44 = _mm_cvtepi32_ps(zx.o(int.d(xmm2_24)))
                        float xmm0_66
                        
                        if (0f <= xmm0_65)
                            xmm0_66 = xmm0_65 + 0.5f
                        else
                            xmm0_66 = xmm0_65 - 0.5f
                        
                        float xmm2_26 = _mm_cvtepi32_ps(zx.o(int.d(xmm1_40)))
                        float xmm0_68 = _mm_cvtepi32_ps(zx.o(int.d(xmm0_66)))
                        var_70 = xmm2_26
                        float var_6c_5 = xmm7_12
                        float var_68_5 = xmm1_44 + xmm2_26
                        float var_64_5 = xmm0_68 + xmm7_12
                        var_30 = var_70.o
                        sub_667c30(&var_30, 0x76, eax_37, &var_30)
                        i_5 += 1
                    while (i_5 s< data_c28c58)
                    
                    hMenu_2 = hMenu
                
                ecx_30.b = 1
                sub_665770(ecx_30)
            
            goto label_676b85
        case 7
            sub_675fa0()
        label_676b85:
            DestroyMenu(hMenu_2)
            DestroyMenu(eax_2)
            BOOL result = DestroyMenu(hMenu_3)
            CookieCheckFunction(result)
            return result
        case 8
            sub_675c90()
            goto label_676b85
        case 9
            sub_67c150()
            goto label_676b85

sub_63b870(eax_3, &data_801800, "Halt", "C:\x\ax2017\Engine\UI2.cpp", 0x529a, "UI2DoRClickMenu")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
