// 函数: sub_73f700
// 地址: 0x73f700
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
uint16_t ebp = &__saved_ebp
float xmm6 = *arg2
float xmm7 = arg2[1]
float xmm0 = arg2[2]
float xmm5 = arg2[3]
float xmm4_1 = xmm6 * xmm7
float xmm2_1 = xmm0 * xmm5
float xmm3_1 = xmm7 * xmm7
float xmm1_1 = xmm4_1 - xmm2_1
float xmm2_3 = xmm0 * xmm0
float xmm0_2 = xmm6 * xmm6
float xmm1_3 = xmm5 * xmm5
float xmm4_3 = xmm5 * xmm6 + xmm0 * xmm7
float xmm0_8 = xmm1_1 + xmm1_1
float xmm0_12 = xmm3_1 - xmm2_3 + xmm1_3 - xmm0_2
float xmm0_14 = xmm4_3 + xmm4_3
float xmm0_16 = xmm2_1 + xmm4_1
float xmm4_7 = xmm0_2 + xmm1_3 - xmm2_3 - xmm3_1
float xmm1_5 = xmm0_16 + xmm0_16
float xmm0_19 = xmm0 * xmm6 - xmm5 * xmm7
float xmm0_20 = xmm0_19 + xmm0_19
int32_t var_20_1 = 0
float var_10 = 0f
float var_c = 0f
float var_8 = 0f

if (GetKeyState(0x57) s< 0 && *(data_cf65b4 + 0x18) != 0)
    HWND eax_3 = GetFocus()
    
    if ((eax_3 == data_147b084 || eax_3 == 0) && (*(data_147ac28 + 0x1c) & 2) != 0
            && *(data_cf65b4 + 0x18) != 0)
        var_10 = xmm0_8 + 0f
        var_c = xmm0_12 + 0f
        var_8 = xmm0_14 + 0f

if (GetKeyState(0x53) s< 0 && *(data_cf65b4 + 0x18) != 0)
    HWND eax_8 = GetFocus()
    
    if ((eax_8 == data_147b084 || eax_8 == 0) && (*(data_147ac28 + 0x1c) & 2) != 0
            && *(data_cf65b4 + 0x18) != 0)
        var_10 = var_10 - xmm0_8
        var_c = var_c - xmm0_12
        var_8 = var_8 - xmm0_14

if (GetKeyState(0x41) s< 0 && *(data_cf65b4 + 0x18) != 0)
    HWND eax_13 = GetFocus()
    
    if ((eax_13 == data_147b084 || eax_13 == 0) && (*(data_147ac28 + 0x1c) & 2) != 0
            && *(data_cf65b4 + 0x18) != 0)
        var_10 = var_10 - xmm4_7
        var_c = var_c - xmm1_5
        var_8 = var_8 - xmm0_20

int16_t eax_16 = GetKeyState(0x44)
HWND eax_18

if (eax_16 s< 0 && *(data_cf65b4 + 0x18) != 0)
    eax_18 = GetFocus()

float xmm0_39
float xmm1_6
float xmm2_4

if (eax_16 s< 0 && *(data_cf65b4 + 0x18) != 0 && (eax_18 == data_147b084 || eax_18 == 0))
    xmm1_6 = var_10
    xmm0_39 = var_c
    xmm2_4 = var_8
    
    if ((*(data_147ac28 + 0x1c) & 2) != 0 && *(data_cf65b4 + 0x18) != 0)
        xmm1_6 = xmm1_6 + xmm4_7
        xmm0_39 = xmm0_39 + xmm1_5
        xmm2_4 = xmm2_4 + xmm0_20
        var_10 = xmm1_6
        var_c = xmm0_39
        var_8 = xmm2_4
else
    xmm1_6 = var_10
    xmm0_39 = var_c
    xmm2_4 = var_8

float xmm3_5 = xmm0_39 * xmm0_39 + xmm1_6 * xmm1_6 + xmm2_4 * xmm2_4

if (not(xmm3_5 <= 9.99999975e-06f))
    float var_14_3 = 0.100000001f
    int16_t eax_21 = GetKeyState(0xa0)
    HWND eax_23
    
    if (eax_21 s< 0 && *(data_cf65b4 + 0x18) != 0)
        eax_23 = GetFocus()
    
    if (eax_21 s< 0 && *(data_cf65b4 + 0x18) != 0 && (eax_23 == data_147b084 || eax_23 == 0))
    label_73fa5a:
        
        if (GetKeyState(0x11) s< 0 && *(data_cf65b4 + 0x18) != 0)
            HWND eax_29 = GetFocus()
            
            if (eax_29 == data_147b084 || eax_29 == 0)
                var_14_3 = 0.00400000019f
    else if (GetKeyState(0xa1) s< 0 && *(data_cf65b4 + 0x18) != 0)
        HWND eax_26 = GetFocus()
        
        if (eax_26 == data_147b084 || eax_26 == 0)
            goto label_73fa5a
    
    int16_t eax_30 = GetKeyState(0xa0)
    HWND eax_32
    
    if (eax_30 s< 0 && *(data_cf65b4 + 0x18) != 0)
        eax_32 = GetFocus()
    
    if (eax_30 s< 0 && *(data_cf65b4 + 0x18) != 0 && (eax_32 == data_147b084 || eax_32 == 0))
        var_14_3 = var_14_3 * 10f
    else if (GetKeyState(0xa1) s< 0 && *(data_cf65b4 + 0x18) != 0)
        HWND eax_35 = GetFocus()
        
        if (eax_35 == data_147b084 || eax_35 == 0)
            var_14_3 = var_14_3 * 10f
    
    if (GetKeyState(0x11) s< 0 && *(data_cf65b4 + 0x18) != 0)
        HWND eax_38 = GetFocus()
        
        if (eax_38 == data_147b084 || eax_38 == 0)
            var_14_3 = var_14_3 * 0.100000001f
    
    float xmm0_49 = sub_4ac580(ebp, xmm3_5)
    int32_t xmm0_50
    float xmm2_5
    float xmm3_6
    
    if (9.99999975e-06f <= xmm0_49)
        float xmm0_51 = 1f / (xmm0_49 + 9.99999975e-06f)
        float xmm1_10 = var_c * xmm0_51
        float xmm2_7 = var_10 * xmm0_51
        float xmm3_8 = var_8 * xmm0_51
        float xmm1_15 = 1f / sub_4ac580(ebp, xmm1_10 * xmm1_10 + xmm2_7 * xmm2_7 + xmm3_8 * xmm3_8)
        xmm0_50 = xmm2_7 * xmm1_15
        xmm2_5 = xmm1_10 * xmm1_15
        xmm3_6 = xmm3_8 * xmm1_15
    else
        xmm0_50 = (zx.o(0)).d
        xmm2_5 = (zx.o(0)).d
        xmm3_6 = (zx.o(0)).d
    
    float xmm2_10 = xmm2_5 * var_14_3 + arg3[1]
    float xmm3_11 = xmm3_6 * var_14_3 + arg3[2]
    *arg3 = xmm0_50 f* var_14_3 + *arg3
    arg3[1] = xmm2_10
    arg3[2] = xmm3_11

float var_c_2 = 0.00999999978f
int16_t eax_39 = GetKeyState(0xa0)
HWND eax_41

if (eax_39 s< 0 && *(data_cf65b4 + 0x18) != 0)
    eax_41 = GetFocus()

if (eax_39 s< 0 && *(data_cf65b4 + 0x18) != 0 && (eax_41 == data_147b084 || eax_41 == 0))
label_73fc4d:
    
    if (GetKeyState(0x11) s< 0 && *(data_cf65b4 + 0x18) != 0)
        HWND eax_47 = GetFocus()
        
        if (eax_47 == data_147b084 || eax_47 == 0)
            var_c_2 = 0.00039999999f
else if (GetKeyState(0xa1) s< 0 && *(data_cf65b4 + 0x18) != 0)
    HWND eax_44 = GetFocus()
    
    if (eax_44 == data_147b084 || eax_44 == 0)
        goto label_73fc4d

int16_t eax_48 = GetKeyState(0xa0)
HWND eax_50

if (eax_48 s< 0 && *(data_cf65b4 + 0x18) != 0)
    eax_50 = GetFocus()

if (eax_48 s< 0 && *(data_cf65b4 + 0x18) != 0 && (eax_50 == data_147b084 || eax_50 == 0))
    var_c_2 = var_c_2 * 10f
else if (GetKeyState(0xa1) s< 0 && *(data_cf65b4 + 0x18) != 0)
    HWND eax_53 = GetFocus()
    
    if (eax_53 == data_147b084 || eax_53 == 0)
        var_c_2 = var_c_2 * 10f

if (GetKeyState(0x11) s< 0 && *(data_cf65b4 + 0x18) != 0)
    HWND eax_56 = GetFocus()
    
    if (eax_56 == data_147b084 || eax_56 == 0)
        var_c_2 = var_c_2 * 0.100000001f

float var_8_2 = 0f

if (GetKeyState(0x28) s< 0 && *(data_cf65b4 + 0x18) != 0)
    HWND eax_59 = GetFocus()
    
    if (eax_59 == data_147b084 || eax_59 == 0)
        var_8_2 = -1f

HWND eax_60
float xmm0_65

if (GetKeyState(0x26).w s>= 0 || data_cf65b4->__offset(0x18).b == 0)
    xmm0_65 = var_8_2
else
    eax_60 = GetFocus()
    
    if (eax_60 == data_147b084 || eax_60 == 0)
        xmm0_65 = var_8_2 + 1f
    else
        xmm0_65 = var_8_2

xmm0_65 f- 0
eax_60:1.b = (xmm0_65 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_65, 0f) ? 1 : 0) << 2
    | (xmm0_65 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
int32_t* ebx_1

if (not(p_1))
    ebx_1 = arg4
else
    float xmm0_67 = xmm0_65 * var_c_2 * 0.5f
    float xmm0_68 = sub_4ae0d0(ebp, xmm0_67)
    float xmm0_70 = sub_4ae0f0(ebp, xmm0_67)
    ebx_1 = arg4
    float xmm1_18 = xmm0_70 * 0f
    float xmm2_11 = ebx_1[3]
    float xmm0_71 = *ebx_1
    float xmm6_1 = ebx_1[1]
    float xmm4_8 = ebx_1[2]
    float xmm3_13 = xmm2_11 * xmm1_18
    float xmm7_2 = xmm6_1 * xmm1_18
    float xmm5_3 = xmm4_8 * xmm1_18
    float xmm2_13 = xmm0_71 * xmm1_18
    *ebx_1 = xmm0_71 * xmm0_68 + xmm2_11 * xmm0_70 + xmm7_2 - xmm5_3
    ebx_1[1] = xmm6_1 * xmm0_68 + xmm3_13 + xmm4_8 * xmm0_70 - xmm2_13
    ebx_1[2] = xmm4_8 * xmm0_68 + xmm3_13 + xmm2_13 - xmm6_1 * xmm0_70
    ebx_1[3] = xmm2_11 * xmm0_68 - xmm0_71 * xmm0_70 - xmm7_2 - xmm5_3

float var_8_4 = 0f

if (GetKeyState(0x25) s< 0 && *(data_cf65b4 + 0x18) != 0)
    HWND eax_63 = GetFocus()
    
    if (eax_63 == data_147b084 || eax_63 == 0)
        var_8_4 = 1f

double* result
float xmm0_79

if (GetKeyState(0x27).w s>= 0 || data_cf65b4[3].b == 0)
    xmm0_79 = var_8_4
else
    result = GetFocus()
    
    if (result == data_147b084 || result == 0)
        xmm0_79 = var_8_4 - 1f
    else
        xmm0_79 = var_8_4

xmm0_79 f- 0
result:1.b = (xmm0_79 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_79, 0f) ? 1 : 0) << 2
    | (xmm0_79 < 0f ? 1 : 0)
bool p_3 = unimplemented  {test ah, 0x44}

if (p_3)
    float xmm0_81 = xmm0_79 * var_c_2 * 0.5f
    float xmm0_82 = sub_4ae0d0(ebp, xmm0_81)
    float xmm0_84
    result, xmm0_84 = sub_4ae0f0(ebp, xmm0_81)
    float xmm4_13 = ebx_1[1]
    float xmm1_35 = xmm0_84 * 0f
    float xmm5_4 = *ebx_1
    float xmm6_3 = ebx_1[2]
    float xmm2_14 = ebx_1[3]
    float xmm3_15 = xmm6_3 * xmm1_35
    float xmm7_4 = xmm4_13 * xmm1_35
    float xmm0_86 = xmm5_4 * xmm1_35
    float xmm2_15 = xmm2_14 * xmm1_35
    *ebx_1 = xmm0_82 * xmm5_4 + xmm2_15 + xmm3_15 - xmm0_84 * xmm4_13
    ebx_1[1] = xmm0_82 * xmm4_13 + xmm2_15 + xmm0_84 * xmm5_4 - xmm3_15
    ebx_1[2] = xmm0_82 * xmm6_3 + xmm0_84 * xmm2_14 + xmm7_4 - xmm0_86
    ebx_1[3] = xmm0_82 * xmm2_14 - xmm0_86 - xmm7_4 - xmm0_84 * xmm6_3

return result
