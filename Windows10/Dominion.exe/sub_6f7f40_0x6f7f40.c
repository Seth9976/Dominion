// 函数: sub_6f7f40
// 地址: 0x6f7f40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_772170
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_74 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
HWND hWnd = GetDlgItem(data_147d470, 0xac)
LRESULT eax_3 = SendMessageA(hWnd, 0x184, 0, 0)
int32_t* ecx = data_147ded0

if (ecx[1] != 0x1e)
    sub_63b870(eax_3, &data_801800, "ptr->assetType == ASSET_TYPE_UI", 
        "C:\x\ax2017\Engine\UIDef.cpp", 0x127, "UIDefGet")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

char* const var_14 = sub_5af880(ecx)
LRESULT result = sub_744fb0()

if (result != 0xffffffff)
    int32_t* esi_2 = result * 0x178 + *var_14
    int32_t var_78_1 = *esi_2
    sub_63df30(&var_14, "%d")
    char* const eax_6 = var_14
    int32_t var_1c_1 = 3
    char* const ecx_1 = &data_801800
    char const* const lParam_2 = "General"
    
    if (eax_6 != 0)
        ecx_1 = eax_6
    
    void* const var_2c_1 = &data_88ba88
    char* const var_24_1 = &data_801800
    char* const var_20_1 = ecx_1
    char const* const var_28 = nullptr
    SendMessageA(hWnd, 0x180, 0, &lParam_2)
    int32_t var_8_1 = 0
    
    if (data_cf65bc != 0)
        char* eax_7 = var_14
        
        if (eax_7 != 0 && *eax_7 != 0)
            char* eax_8 = sub_63d4e0(&var_14)
            int32_t temp0_1 = *(eax_8 + 4)
            *(eax_8 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
                var_14 = &data_801800
    
    int32_t var_8_2 = 0xffffffff
    uint32_t var_20_2 = zx.d(esi_2[0x11].b)
    int32_t var_1c_2 = 8
    lParam_2 = "General"
    char const* const var_2c_2 = "Hidden"
    char* const var_24_2 = &data_801800
    var_28 = nullptr
    SendMessageA(hWnd, 0x180, 0, &lParam_2)
    int32_t var_20_3 = esi_2[2]
    int32_t var_1c_3 = 0
    lParam_2 = "General"
    char const* const var_2c_3 = "Name"
    char* const var_24_3 = &data_801800
    var_28 = nullptr
    SendMessageA(hWnd, 0x180, 0, &lParam_2)
    int32_t var_20_4 = sub_6f50e0(esi_2[1])
    int32_t var_7c_1 = 0
    int32_t var_1c_4 = 1
    lParam_2 = "General"
    char const* const var_2c_4 = "Type"
    char* const var_24_4 = &data_801800
    var_28 = "Image"
    SendMessageA(hWnd, 0x180, 0, &lParam_2)
    var_7c_1.q = _mm_cvtps_pd(esi_2[7])
    HWND var_84_4
    var_84_4.q = _mm_cvtps_pd(esi_2[6])
    int64_t var_8c_1 = _mm_cvtps_pd(esi_2[5])
    int64_t var_94_1 = _mm_cvtps_pd(esi_2[4])
    sub_63df30(&var_14, "%g %g %g %g")
    char* const eax_12 = var_14
    int32_t var_1c_5 = 0
    char* const ecx_5 = &data_801800
    lParam_2 = "General"
    
    if (eax_12 != 0)
        ecx_5 = eax_12
    
    char const* const var_2c_5 = "Rect"
    char* const var_24_5 = &data_801800
    char* const var_20_5 = ecx_5
    var_28 = nullptr
    SendMessageA(hWnd, 0x180, 0, &lParam_2)
    int32_t var_8_3 = 1
    
    if (data_cf65bc != 0)
        char* const eax_13 = var_14
        
        if (eax_13 != 0 && *eax_13 != 0)
            char* eax_14 = sub_63d4e0(&var_14)
            int32_t temp1_1 = *(eax_14 + 4)
            *(eax_14 + 4) -= 1
            
            if (temp1_1 == 1)
                sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
                var_14 = &data_801800
    
    int32_t var_8_4 = 0xffffffff
    char const* const lParam_1
    
    switch (esi_2[1] - 1)
        case 0, 3
            void* eax_36 = esi_2[0x22]
            char* const ecx_22 = &data_801800
            
            if (eax_36 != 0)
                char* eax_37 = *(eax_36 + 0x20)
                
                if (eax_37 != 0)
                    ecx_22 = eax_37
            
            char* const var_24_8 = ecx_22
            char const* const* var_38_9 = &var_28
            void* const var_1c_8 = &data_87b358
            var_28 = "Choose Texture"
            char const* const var_20_8 = "Image (*.jpg, *.png)"
            int32_t var_34_9 = 6
            lParam_1 = "Image"
            char const* const var_44_9 = "Texture"
            char* const var_3c_9 = &data_801800
            int32_t var_40_9 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            uint32_t var_38_10 = zx.d(esi_2[0x24].b)
            int32_t var_34_10 = 8
            lParam_1 = "Image"
            char const* const var_44_10 = "Nine Slice"
            char* const var_3c_10 = &data_801800
            int32_t var_40_10 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            int32_t eax_39 = esi_2[0x25]
            
            if (eax_39 u> 0xa)
                sub_63b870(eax_39, &data_801800, "Halt", 
                    "C:\x\ax2017\Engine\Windows\EditorWindow.cpp", 0x12eb, "ToImageAlignmentStr")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            char const* const eax_40
            
            switch (eax_39)
                case 0
                    eax_40 = "Stretch"
                case 1
                    eax_40 = "LeftTop"
                case 2
                    eax_40 = "CenterTop"
                case 3
                    eax_40 = "RightTop"
                case 4
                    eax_40 = "LeftMiddle"
                case 5
                    eax_40 = "CenterMiddle"
                case 6
                    eax_40 = "RightMiddle"
                case 7
                    eax_40 = "LeftBottom"
                case 8
                    eax_40 = "CenterBottom"
                case 9
                    eax_40 = "RightBottom"
                case 0xa
                    eax_40 = "LeftCenterMiddle"
            
            char const* const var_38_11 = eax_40
            int32_t var_34_11 = 1
            lParam_1 = "Image"
            char const* const var_44_11 = "Alignment"
            char* const var_3c_11 = &data_801800
            char const* const var_40_11 = "Stretch"
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
        case 1
            void* eax_20 = esi_2[0x32]
            char* const ecx_9 = &data_801800
            
            if (eax_20 != 0)
                char* eax_21 = *(eax_20 + 0x20)
                
                if (eax_21 != 0)
                    ecx_9 = eax_21
            
            char* const var_24_7 = ecx_9
            char const* const* var_38_2 = &var_28
            void* const var_1c_7 = &data_87b358
            var_28 = "Choose Layout"
            char const* const var_20_7 = "Image (*.ui)"
            int32_t var_34_2 = 6
            lParam_1 = "Table"
            char const* const var_44_2 = "Sublayout"
            char* const var_3c_2 = &data_801800
            int32_t var_40_2 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            int32_t var_78_8 = esi_2[0x2b]
            sub_63df30(&var_14, "%d")
            char* const eax_22 = var_14
            int32_t var_34_3 = 0
            char* const ecx_10 = &data_801800
            lParam_1 = "Table"
            
            if (eax_22 != 0)
                ecx_10 = eax_22
            
            char const* const var_44_3 = "Rows"
            char* const var_3c_3 = &data_801800
            char* const var_38_3 = ecx_10
            int32_t var_40_3 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            int32_t var_8_5 = 2
            
            if (data_cf65bc != 0)
                char* const eax_23 = var_14
                
                if (eax_23 != 0 && *eax_23 != 0)
                    char* eax_24 = sub_63d4e0(&var_14)
                    int32_t temp3_1 = *(eax_24 + 4)
                    *(eax_24 + 4) -= 1
                    
                    if (temp3_1 == 1)
                        sub_64c080(eax_24, *(eax_24 + 0xc) + 0x10)
            
            int32_t var_8_6 = 0xffffffff
            int32_t var_78_10 = esi_2[0x2c]
            sub_63df30(&var_14, "%d")
            char* const eax_25 = var_14
            int32_t var_34_4 = 0
            char* const ecx_13 = &data_801800
            lParam_1 = "Table"
            
            if (eax_25 != 0)
                ecx_13 = eax_25
            
            char const* const var_44_4 = "Columns"
            char* const var_3c_4 = &data_801800
            int32_t var_7c_2 = 0
            char* const var_38_4 = ecx_13
            int32_t var_40_4 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            int32_t var_8_7 = 3
            
            if (data_cf65bc != 0)
                char* const eax_26 = var_14
                
                if (eax_26 != 0 && *eax_26 != 0)
                    char* eax_27 = sub_63d4e0(&var_14)
                    int32_t temp6_1 = *(eax_27 + 4)
                    *(eax_27 + 4) -= 1
                    
                    if (temp6_1 == 1)
                        sub_64c080(eax_27, *(eax_27 + 0xc) + 0x10)
            
            int32_t var_8_8 = 0xffffffff
            var_7c_2.q = _mm_cvtps_pd(esi_2[0x2d])
            sub_63df30(&var_14, "%g")
            char* const eax_28 = var_14
            int32_t var_34_5 = 0
            char* const ecx_16 = &data_801800
            lParam_1 = "Table"
            
            if (eax_28 != 0)
                ecx_16 = eax_28
            
            char const* const var_44_5 = "Row Spacing"
            char* const var_3c_5 = &data_801800
            int32_t var_7c_3 = 0
            char* const var_38_5 = ecx_16
            int32_t var_40_5 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            int32_t var_8_9 = 4
            
            if (data_cf65bc != 0)
                char* const eax_29 = var_14
                
                if (eax_29 != 0 && *eax_29 != 0)
                    char* eax_30 = sub_63d4e0(&var_14)
                    int32_t temp8_1 = *(eax_30 + 4)
                    *(eax_30 + 4) -= 1
                    
                    if (temp8_1 == 1)
                        sub_64c080(eax_30, *(eax_30 + 0xc) + 0x10)
            
            int32_t var_8_10 = 0xffffffff
            var_7c_3.q = _mm_cvtps_pd(esi_2[0x2e])
            sub_63df30(&var_14, "%g")
            char* const eax_31 = var_14
            int32_t var_34_6 = 0
            char* const ecx_19 = &data_801800
            lParam_1 = "Table"
            
            if (eax_31 != 0)
                ecx_19 = eax_31
            
            char const* const var_44_6 = "Column Spacing"
            char* const var_3c_6 = &data_801800
            char* const var_38_6 = ecx_19
            int32_t var_40_6 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            int32_t var_8_11 = 5
            
            if (data_cf65bc != 0)
                char* const eax_32 = var_14
                
                if (eax_32 != 0 && *eax_32 != 0)
                    char* eax_33 = sub_63d4e0(&var_14)
                    int32_t temp11_1 = *(eax_33 + 4)
                    *(eax_33 + 4) -= 1
                    
                    if (temp11_1 == 1)
                        sub_64c080(eax_33, *(eax_33 + 0xc) + 0x10)
            
            int32_t var_34_7 = 8
            bool cond:12_1 = *(esi_2 + 0xd9) == 0
            lParam_1 = "Table"
            int32_t eax_34
            eax_34.b = cond:12_1
            char const* const var_44_7 = "Auto Scale"
            int32_t var_38_7 = eax_34
            char* const var_3c_7 = &data_801800
            int32_t var_40_7 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            uint32_t var_38_8 = zx.d(*(esi_2 + 0xda))
            int32_t var_34_8 = 8
            lParam_1 = "Table"
            char const* const var_44_8 = "Clip Sublayouts"
            char* const var_3c_8 = &data_801800
            int32_t var_40_8 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
        case 2
            int32_t var_38_12 = esi_2[0x38]
            int32_t var_34_12 = 0
            lParam_1 = "Text"
            char const* const var_44_12 = "Example Text"
            char* const var_3c_12 = &data_801800
            int32_t var_40_12 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            void* eax_42 = esi_2[0x3a]
            char* const ecx_23 = &data_801800
            
            if (eax_42 != 0)
                char* eax_43 = *(eax_42 + 0x20)
                
                if (eax_43 != 0)
                    ecx_23 = eax_43
            
            char* const var_24_9 = ecx_23
            char const* const* var_38_13 = &var_28
            char const* const var_1c_9 = "font.xml"
            var_28 = "Choose Font"
            char const* const var_20_9 = "Font (*.font.xml)"
            int32_t var_34_13 = 6
            lParam_1 = "Text"
            char const* const var_44_13 = "Font"
            char* const var_3c_13 = &data_801800
            int32_t var_40_13 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            int32_t var_34_14 = 4
            uint32_t ecx_28 =
                (zx.d(*(esi_2 + 0xf2)) << 8 | zx.d(*(esi_2 + 0xf1))) << 8 | zx.d(esi_2[0x3c].b)
            lParam_1 = "Text"
            char const* const var_44_14 = "Text Color"
            char* const var_3c_14 = &data_801800
            uint32_t var_38_14 = ecx_28
            int32_t var_40_14 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            int32_t var_34_15 = 4
            uint32_t ecx_33 =
                (zx.d(*(esi_2 + 0xf6)) << 8 | zx.d(*(esi_2 + 0xf5))) << 8 | zx.d(esi_2[0x3d].b)
            lParam_1 = "Text"
            char const* const var_44_15 = "Outline Color"
            int32_t var_7c_4 = 0
            char* const var_3c_15 = &data_801800
            uint32_t var_38_15 = ecx_33
            int32_t var_40_15 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            var_7c_4.q = _mm_cvtps_pd(esi_2[0x3e])
            sub_63df30(&var_14, "%g")
            char* const eax_48 = var_14
            int32_t var_34_16 = 0
            char* const ecx_34 = &data_801800
            lParam_1 = "Text"
            
            if (eax_48 != 0)
                ecx_34 = eax_48
            
            char const* const var_44_16 = "Text Scale"
            char* const var_3c_16 = &data_801800
            char* const var_38_16 = ecx_34
            int32_t var_40_16 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            int32_t var_8_12 = 6
            
            if (data_cf65bc != 0)
                char* const eax_49 = var_14
                
                if (eax_49 != 0 && *eax_49 != 0)
                    char* eax_50 = sub_63d4e0(&var_14)
                    int32_t temp4_1 = *(eax_50 + 4)
                    *(eax_50 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        sub_64c080(eax_50, *(eax_50 + 0xc) + 0x10)
            
            int32_t var_8_13 = 0xffffffff
            int32_t ecx_37 = esi_2[0x3f]
            int32_t var_34_17 = 1
            lParam_1 = "Text"
            char const* const var_44_17 = "Horz. Alignment"
            char* const var_3c_17 = &data_801800
            int32_t var_38_17 = sub_6f7160(ecx_37)
            char const* const var_40_17 = "Left"
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            int32_t ecx_38 = esi_2[0x3f]
            int32_t var_34_18 = 1
            lParam_1 = "Text"
            char const* const var_44_18 = "Vert. Alignment"
            char* const var_3c_18 = &data_801800
            int32_t var_38_18 = sub_6f71d0(ecx_38)
            void* const var_40_18 = &data_88bc48
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            uint32_t var_38_19 = zx.d(esi_2[0x40].b)
            int32_t var_34_19 = 8
            lParam_1 = "Text"
            char const* const var_44_19 = "Word Wrap"
            char* const var_3c_19 = &data_801800
            int32_t var_40_19 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
        case 4
            void* eax_54 = esi_2[0x22]
            char* const ecx_39 = &data_801800
            
            if (eax_54 != 0)
                char* eax_55 = *(eax_54 + 0x20)
                
                if (eax_55 != 0)
                    ecx_39 = eax_55
            
            char* const var_24_10 = ecx_39
            char const* const* var_38_20 = &var_28
            void* const var_1c_10 = &data_87b358
            var_28 = "Choose Texture"
            char const* const var_20_10 = "Image (*.jpg, *.png)"
            int32_t var_34_20 = 6
            lParam_1 = "Image"
            char const* const var_44_20 = "Texture"
            char* const var_3c_20 = &data_801800
            int32_t var_40_20 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            void* eax_56 = esi_2[0x4a]
            char* const ecx_40 = &data_801800
            
            if (eax_56 != 0)
                char* eax_57 = *(eax_56 + 0x20)
                
                if (eax_57 != 0)
                    ecx_40 = eax_57
            
            char* const var_24_11 = ecx_40
            char const* const* var_38_21 = &var_28
            void* const var_1c_11 = &data_87b358
            var_28 = "Choose Texture"
            char const* const var_20_11 = "Image (*.jpg, *.png)"
            int32_t var_34_21 = 6
            lParam_1 = "Image"
            char const* const var_44_21 = "Image Over"
            char* const var_3c_21 = &data_801800
            int32_t var_40_21 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            void* eax_58 = esi_2[0x4c]
            char* const ecx_41 = &data_801800
            
            if (eax_58 != 0)
                char* eax_59 = *(eax_58 + 0x20)
                
                if (eax_59 != 0)
                    ecx_41 = eax_59
            
            char* const var_24_12 = ecx_41
            char const* const* var_38_22 = &var_28
            void* const var_1c_12 = &data_87b358
            var_28 = "Choose Texture"
            char const* const var_20_12 = "Image (*.jpg, *.png)"
            int32_t var_34_22 = 6
            lParam_1 = "Image"
            char const* const var_44_22 = "Image Down"
            char* const var_3c_22 = &data_801800
            int32_t var_40_22 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            void* eax_60 = esi_2[0x4e]
            char* const ecx_42 = &data_801800
            
            if (eax_60 != 0)
                char* eax_61 = *(eax_60 + 0x20)
                
                if (eax_61 != 0)
                    ecx_42 = eax_61
            
            char* const var_24_13 = ecx_42
            char const* const* var_38_23 = &var_28
            void* const var_1c_13 = &data_87b358
            var_28 = "Choose Texture"
            char const* const var_20_13 = "Image (*.jpg, *.png)"
            int32_t var_34_23 = 6
            lParam_1 = "Image"
            char const* const var_44_23 = "Image Disabled"
            char* const var_3c_23 = &data_801800
            int32_t var_40_23 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            uint32_t var_38_24 = zx.d(esi_2[0x24].b)
            int32_t var_34_24 = 8
            lParam_1 = "Image"
            char const* const var_44_24 = "Nine Slice"
            char* const var_3c_24 = &data_801800
            int32_t var_40_24 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            int32_t var_38_25 = esi_2[0x48]
            int32_t var_34_25 = 0
            lParam_1 = "Text"
            char const* const var_44_25 = "Text"
            char* const var_3c_25 = &data_801800
            int32_t var_40_25 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            void* eax_64 = esi_2[0x3a]
            char* const ecx_43 = &data_801800
            
            if (eax_64 != 0)
                char* eax_65 = *(eax_64 + 0x20)
                
                if (eax_65 != 0)
                    ecx_43 = eax_65
            
            char* const var_24_14 = ecx_43
            char const* const* var_38_26 = &var_28
            char const* const var_1c_14 = "font.xml"
            var_28 = "Choose Font"
            char const* const var_20_14 = "Font (*.font.xml)"
            int32_t var_34_26 = 6
            lParam_1 = "Text"
            char const* const var_44_26 = "Font"
            char* const var_3c_26 = &data_801800
            int32_t var_40_26 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            int32_t var_34_27 = 4
            uint32_t ecx_48 =
                (zx.d(*(esi_2 + 0xf2)) << 8 | zx.d(*(esi_2 + 0xf1))) << 8 | zx.d(esi_2[0x3c].b)
            lParam_1 = "Text"
            char const* const var_44_27 = "Text Color"
            char* const var_3c_27 = &data_801800
            uint32_t var_38_27 = ecx_48
            int32_t var_40_27 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            int32_t var_34_28 = 4
            uint32_t ecx_53 =
                (zx.d(*(esi_2 + 0xf6)) << 8 | zx.d(*(esi_2 + 0xf5))) << 8 | zx.d(esi_2[0x3d].b)
            lParam_1 = "Text"
            char const* const var_44_28 = "Outline Color"
            char* const var_3c_28 = &data_801800
            uint32_t var_38_28 = ecx_53
            int32_t var_40_28 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            int32_t var_34_29 = 4
            uint32_t ecx_58 =
                (zx.d(*(esi_2 + 0x142)) << 8 | zx.d(*(esi_2 + 0x141))) << 8 | zx.d(esi_2[0x50].b)
            lParam_1 = "Text"
            char const* const var_44_29 = "Disabled Color"
            char* const var_3c_29 = &data_801800
            uint32_t var_38_29 = ecx_58
            int32_t var_40_29 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            uint32_t ecx_59 = zx.d(*(esi_2 + 0x146))
            uint32_t eax_72 = zx.d(*(esi_2 + 0x145))
            int32_t var_34_30 = 4
            lParam_1 = "Text"
            char const* const var_44_30 = "Disabled Outline"
            char* const var_3c_30 = &data_801800
            int32_t var_40_30 = 0
            int32_t var_7c_5 = 0
            uint32_t var_38_30 = (ecx_59 << 8 | eax_72) << 8 | zx.d(esi_2[0x51].b)
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            var_7c_5.q = _mm_cvtps_pd(esi_2[0x3e])
            sub_63df30(&var_14, "%g")
            char* const eax_74 = var_14
            int32_t var_34_31 = 0
            char* const ecx_64 = &data_801800
            lParam_1 = "Text"
            
            if (eax_74 != 0)
                ecx_64 = eax_74
            
            char const* const var_44_31 = "Text Scale"
            char* const var_3c_31 = &data_801800
            int32_t var_7c_6 = 0
            char* const var_38_31 = ecx_64
            int32_t var_40_31 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            int32_t var_8_14 = 7
            
            if (data_cf65bc != 0)
                char* const eax_75 = var_14
                
                if (eax_75 != 0 && *eax_75 != 0)
                    char* eax_76 = sub_63d4e0(&var_14)
                    int32_t temp9_1 = *(eax_76 + 4)
                    *(eax_76 + 4) -= 1
                    
                    if (temp9_1 == 1)
                        sub_64c080(eax_76, *(eax_76 + 0xc) + 0x10)
            
            int32_t var_8_15 = 0xffffffff
            var_7c_6.q = _mm_cvtps_pd(esi_2[0x53])
            HWND var_84_36
            var_84_36.q = _mm_cvtps_pd(esi_2[0x52])
            var_8c_1:4.d = "%g %g"
            var_8c_1.d = &var_14
            sub_63df30(var_8c_1, var_84_36)
            char* const eax_77 = var_14
            int32_t var_34_32 = 0
            char* const ecx_67 = &data_801800
            lParam_1 = "Text"
            
            if (eax_77 != 0)
                ecx_67 = eax_77
            
            char const* const var_44_32 = "Text Offset"
            char* const var_3c_32 = &data_801800
            char* const var_38_32 = ecx_67
            int32_t var_40_32 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            int32_t var_8_16 = 8
            
            if (data_cf65bc != 0)
                char* const eax_78 = var_14
                
                if (eax_78 != 0 && *eax_78 != 0)
                    char* eax_79 = sub_63d4e0(&var_14)
                    int32_t temp12_1 = *(eax_79 + 4)
                    *(eax_79 + 4) -= 1
                    
                    if (temp12_1 == 1)
                        sub_64c080(eax_79, *(eax_79 + 0xc) + 0x10)
            
            int32_t var_8_17 = 0xffffffff
            int32_t ecx_70 = esi_2[0x3f]
            int32_t var_34_33 = 1
            lParam_1 = "Text"
            char const* const var_44_33 = "Horz. Alignment"
            char* const var_3c_33 = &data_801800
            int32_t var_38_33 = sub_6f7160(ecx_70)
            char const* const var_40_33 = "Left"
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            int32_t ecx_71 = esi_2[0x3f]
            int32_t var_34_34 = 1
            lParam_1 = "Text"
            char const* const var_44_34 = "Vert. Alignment"
            char* const var_3c_34 = &data_801800
            int32_t var_38_34 = sub_6f71d0(ecx_71)
            void* const var_40_34 = &data_88bc48
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            uint32_t var_38_35 = zx.d(esi_2[0x40].b)
            int32_t var_34_35 = 8
            lParam_1 = "Text"
            char const* const var_44_35 = "Word Wrap"
            char* const var_3c_35 = &data_801800
            int32_t var_40_35 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            void* eax_83 = esi_2[0x54]
            char* const ecx_72 = &data_801800
            void* const var_1c_15 = &data_88bd04
            var_28 = "Choose Sound"
            char const* const var_20_15 = "Sound (*.xmlsound, *.ogg, *.wav)"
            
            if (eax_83 != 0)
                char* eax_84 = *(eax_83 + 0x20)
                
                if (eax_84 != 0)
                    ecx_72 = eax_84
            
            char* const var_24_15 = ecx_72
            char const* const* var_38_36 = &var_28
            int32_t var_34_36 = 6
            lParam_1 = "Sound"
            char const* const var_44_36 = "Click"
            char* const var_3c_36 = &data_801800
            int32_t var_40_36 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            void* eax_85 = esi_2[0x56]
            char* const ecx_73 = &data_801800
            
            if (eax_85 != 0)
                char* eax_86 = *(eax_85 + 0x20)
                
                if (eax_86 != 0)
                    ecx_73 = eax_86
            
            char* const var_24_16 = ecx_73
            char const* const* var_38_37 = &var_28
            int32_t var_34_37 = 6
            lParam_1 = "Sound"
            char const* const var_44_37 = "Mouseover"
            char* const var_3c_37 = &data_801800
            int32_t var_40_37 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            void* eax_87 = esi_2[0x58]
            char* const ecx_74 = &data_801800
            
            if (eax_87 != 0)
                char* eax_88 = *(eax_87 + 0x20)
                
                if (eax_88 != 0)
                    ecx_74 = eax_88
            
            char* const var_24_17 = ecx_74
            char const* const* var_38_38 = &var_28
            int32_t var_34_38 = 6
            lParam_1 = "Sound"
            char const* const var_44_38 = "Disabled"
            char* const var_3c_38 = &data_801800
            int32_t var_40_38 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
        case 5
            int32_t var_78_42 = esi_2[0x1a]
            sub_63df30(&var_14, "%d")
            char* const eax_89 = var_14
            int32_t var_34_39 = 0
            char* const ecx_75 = &data_801800
            lParam_1 = "Group"
            
            if (eax_89 != 0)
                ecx_75 = eax_89
            
            char const* const var_44_39 = "Count"
            char* const var_3c_39 = &data_801800
            char* const var_38_39 = ecx_75
            int32_t var_40_39 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            int32_t var_8_18 = 9
            
            if (data_cf65bc != 0)
                char* const eax_90 = var_14
                
                if (eax_90 != 0 && *eax_90 != 0)
                    char* eax_91 = sub_63d4e0(&var_14)
                    int32_t temp2_1 = *(eax_91 + 4)
                    *(eax_91 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_64c080(eax_91, *(eax_91 + 0xc) + 0x10)
            
            int32_t var_8_19 = 0xffffffff
            int32_t var_78_44 = esi_2[0x1b]
            sub_63df30(&var_14, "%d")
            char* const eax_92 = var_14
            int32_t var_34_40 = 0
            char* const ecx_78 = &data_801800
            lParam_1 = "Group"
            
            if (eax_92 != 0)
                ecx_78 = eax_92
            
            char const* const var_44_40 = "Anim Duration (ms)"
            char* const var_3c_40 = &data_801800
            char* const var_38_40 = ecx_78
            int32_t var_40_40 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            int32_t var_8_20 = 0xa
            
            if (data_cf65bc != 0)
                char* const eax_93 = var_14
                
                if (eax_93 != 0 && *eax_93 != 0)
                    char* eax_94 = sub_63d4e0(&var_14)
                    int32_t temp5_1 = *(eax_94 + 4)
                    *(eax_94 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        sub_64c080(eax_94, *(eax_94 + 0xc) + 0x10)
            
            int32_t var_8_21 = 0xffffffff
            int32_t var_78_46 = esi_2[0x1c]
            sub_63df30(&var_14, "%d")
            char* const eax_95 = var_14
            int32_t var_34_41 = 0
            char* const ecx_81 = &data_801800
            lParam_1 = "Group"
            
            if (eax_95 != 0)
                ecx_81 = eax_95
            
            char const* const var_44_41 = "Anim Delay (ms)"
            char* const var_3c_41 = &data_801800
            int32_t var_7c_7 = 0
            char* const var_38_41 = ecx_81
            int32_t var_40_41 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            int32_t var_8_22 = 0xb
            
            if (data_cf65bc != 0)
                char* const eax_96 = var_14
                
                if (eax_96 != 0 && *eax_96 != 0)
                    char* eax_97 = sub_63d4e0(&var_14)
                    int32_t temp7_1 = *(eax_97 + 4)
                    *(eax_97 + 4) -= 1
                    
                    if (temp7_1 == 1)
                        sub_64c080(eax_97, *(eax_97 + 0xc) + 0x10)
            
            int32_t var_8_23 = 0xffffffff
            var_7c_7.q = _mm_cvtps_pd(esi_2[0x1d])
            sub_63df30(&var_14, "%g")
            char* const eax_98 = var_14
            int32_t var_34_42 = 0
            char* const ecx_84 = &data_801800
            lParam_1 = "Group"
            
            if (eax_98 != 0)
                ecx_84 = eax_98
            
            char const* const var_44_42 = "Anim Start Alpha"
            char* const var_3c_42 = &data_801800
            int32_t var_7c_8 = 0
            char* const var_38_42 = ecx_84
            int32_t var_40_42 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            int32_t var_8_24 = 0xc
            
            if (data_cf65bc != 0)
                char* const eax_99 = var_14
                
                if (eax_99 != 0 && *eax_99 != 0)
                    char* eax_100 = sub_63d4e0(&var_14)
                    int32_t temp10_1 = *(eax_100 + 4)
                    *(eax_100 + 4) -= 1
                    
                    if (temp10_1 == 1)
                        sub_64c080(eax_100, *(eax_100 + 0xc) + 0x10)
            
            int32_t var_8_25 = 0xffffffff
            var_7c_8.q = _mm_cvtps_pd(esi_2[0x1e])
            sub_63df30(&var_14, "%g")
            char* const eax_101 = var_14
            int32_t var_34_43 = 0
            char* const ecx_87 = &data_801800
            lParam_1 = "Group"
            
            if (eax_101 != 0)
                ecx_87 = eax_101
            
            char const* const var_44_43 = "Anim Scale"
            char* const var_3c_43 = &data_801800
            int32_t var_7c_9 = 0
            char* const var_38_43 = ecx_87
            int32_t var_40_43 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            int32_t var_8_26 = 0xd
            
            if (data_cf65bc != 0)
                char* const eax_102 = var_14
                
                if (eax_102 != 0 && *eax_102 != 0)
                    char* eax_103 = sub_63d4e0(&var_14)
                    int32_t temp13_1 = *(eax_103 + 4)
                    *(eax_103 + 4) -= 1
                    
                    if (temp13_1 == 1)
                        sub_64c080(eax_103, *(eax_103 + 0xc) + 0x10)
            
            int32_t var_8_27 = 0xffffffff
            var_7c_9.q = _mm_cvtps_pd(esi_2[0x20])
            HWND var_84_49
            var_84_49.q = _mm_cvtps_pd(esi_2[0x1f])
            var_8c_1:4.d = "%g %g"
            var_8c_1.d = &var_14
            sub_63df30(var_8c_1, var_84_49)
            char* const eax_104 = var_14
            int32_t var_34_44 = 0
            char* const ecx_90 = &data_801800
            lParam_1 = "Group"
            
            if (eax_104 != 0)
                ecx_90 = eax_104
            
            char const* const var_44_44 = "Anim Offset"
            char* const var_3c_44 = &data_801800
            char* const var_38_44 = ecx_90
            int32_t var_40_44 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
            int32_t var_8_28 = 0xe
            
            if (data_cf65bc != 0)
                char* const eax_105 = var_14
                
                if (eax_105 != 0 && *eax_105 != 0)
                    char* eax_106 = sub_63d4e0(&var_14)
                    int32_t temp14_1 = *(eax_106 + 4)
                    *(eax_106 + 4) -= 1
                    
                    if (temp14_1 == 1)
                        sub_64c080(eax_106, *(eax_106 + 0xc) + 0x10)
            
            void* const eax_107 = &data_7ffbc8
            char* const eax_108
            
            while (true)
                if (*eax_107 == esi_2[0x21])
                    eax_108 = *(eax_107 + 4)
                    break
                
                eax_107 += 8
                
                if (*(eax_107 + 4) == 0)
                    eax_108 = &data_801800
                    break
            
            char* const var_50_1 = eax_108
            int32_t var_4c_1 = 1
            char* lParam = "Group"
            char const* const var_5c_1 = "Anim Curve"
            char* const var_54_1 = &data_801800
            char const* const var_58_1 = "Ease In/Out"
            SendMessageA(hWnd, 0x180, 0, &lParam)
        case 8
            void* eax_17 = esi_2[0x18]
            char* const ecx_8 = &data_801800
            
            if (eax_17 != 0)
                char* eax_18 = *(eax_17 + 0x20)
                
                if (eax_18 != 0)
                    ecx_8 = eax_18
            
            char* const var_24_6 = ecx_8
            char const* const* var_38_1 = &var_28
            char const* const var_1c_6 = "particle"
            var_28 = "Choose Particle"
            char const* const var_20_6 = "Particle (*.particle)"
            int32_t var_34_1 = 6
            lParam_1 = "Particle"
            char const* const var_44_1 = "Particle"
            char* const var_3c_1 = &data_801800
            int32_t var_40_1 = 0
            SendMessageA(hWnd, 0x180, 0, &lParam_1)
    
    result = SendMessageA(hWnd, 0x401, 0, 0)

fsbase->NtTib.ExceptionList = ExceptionList
return result
