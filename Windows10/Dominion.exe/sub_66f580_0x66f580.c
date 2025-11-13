// 函数: sub_66f580
// 地址: 0x66f580
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76d678
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
__chkstk(0x1058)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg2
void* var_103c = edi
char* const result_1
sub_63d720(&result_1, "propertyItemEdit_click")
char* result_3 = result_1
char* const result_20 = &data_801800
char* edx = *(edi + 4)

if (result_3 != 0)
    result_20 = result_3

int32_t ecx_2

while (true)
    result_3.b = *result_20
    char temp0_1 = *edx
    bool c_1 = result_3.b u< temp0_1
    bool z_1 = result_3.b == temp0_1
    char var_1029_1 = result_3.b
    result_3 = result_1
    
    if (z_1)
        if (var_1029_1 == 0)
            ecx_2 = 0
            break
        
        result_3.b = result_20[1]
        char temp1_1 = edx[1]
        c_1 = result_3.b u< temp1_1
        bool z_2 = result_3.b == temp1_1
        char var_1029_2 = result_3.b
        result_3 = result_1
        
        if (z_2)
            result_20 = &result_20[2]
            edx = &edx[2]
            
            if (var_1029_2 != 0)
                continue
            
            ecx_2 = 0
            break
    
    ecx_2 = sbb.d(result_20, result_20, c_1) | 1
    break

char var_1029_3

if (ecx_2 == 0)
    var_1029_3 = 1

if (ecx_2 != 0 || data_c28c58 s<= ecx_2)
    var_1029_3 = 0

int32_t var_14_1 = 0

if (data_cf65bc != 0 && result_3 != 0 && *result_3 != 0)
    char* eax_3 = sub_63d4e0(&result_1)
    int32_t temp2_1 = *(eax_3 + 4)
    *(eax_3 + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_3, *(eax_3 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_14_2 = 0xffffffff

if (var_1029_3 != 0)
    data_c28c64 = 0xffffffff
    data_c28c68 = 0xffffffff
    data_c28c64 = *(edi + 8)

sub_63d720(&result_1, "layerItemButtonHidden")
char* const result_4 = result_1
char* const result_21 = &data_801800
char* edx_3 = *(edi + 4)

if (result_4 != 0)
    result_21 = result_4

void* esi

while (true)
    result_4.b = *result_21
    char temp3_1 = *edx_3
    bool c_2 = result_4.b u< temp3_1
    bool z_3 = result_4.b == temp3_1
    char var_1029_4 = result_4.b
    result_4 = result_1
    
    if (z_3)
        if (var_1029_4 == 0)
            esi = nullptr
            break
        
        result_4.b = result_21[1]
        char temp4_1 = edx_3[1]
        c_2 = result_4.b u< temp4_1
        bool z_4 = result_4.b == temp4_1
        char var_1029_5 = result_4.b
        result_4 = result_1
        
        if (z_4)
            result_21 = &result_21[2]
            edx_3 = &edx_3[2]
            
            if (var_1029_5 != 0)
                continue
            
            esi = nullptr
            break
    
    esi = sbb.d(arg1, arg1, c_2) | 1
    break

int32_t var_14_3 = 1

if (data_cf65bc != 0 && result_4 != 0 && *result_4 != 0)
    char* eax_5 = sub_63d4e0(&result_1)
    int32_t temp5_1 = *(eax_5 + 4)
    *(eax_5 + 4) -= 1
    
    if (temp5_1 == 1)
        sub_64c080(eax_5, *(eax_5 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_14_4 = 0xffffffff

if (esi == 0)
    data_c28c64 = 0xffffffff
    data_c28c68 = 0xffffffff
    esi = sub_667360(*(edi + 8))
    int32_t eax_7 = sub_66f4b0()
    sub_66f200(eax_7, 0x89, esi, *(esi + 0x11) == 0, eax_7)
    sub_6656f0()

sub_63d720(&result_1, "layerItemButtonLocked")
char* const result_5 = result_1
char* const result_22 = &data_801800
char* edx_6 = *(edi + 4)

if (result_5 != 0)
    result_22 = result_5

void* esi_2

while (true)
    result_5.b = *result_22
    char temp6_1 = *edx_6
    bool c_3 = result_5.b u< temp6_1
    bool z_5 = result_5.b == temp6_1
    char var_1029_6 = result_5.b
    result_5 = result_1
    
    if (z_5)
        if (var_1029_6 == 0)
            esi_2 = nullptr
            break
        
        result_5.b = result_22[1]
        char temp7_1 = edx_6[1]
        c_3 = result_5.b u< temp7_1
        bool z_6 = result_5.b == temp7_1
        char var_1029_7 = result_5.b
        result_5 = result_1
        
        if (z_6)
            result_22 = &result_22[2]
            edx_6 = &edx_6[2]
            
            if (var_1029_7 != 0)
                continue
            
            esi_2 = nullptr
            break
    
    esi_2 = sbb.d(esi, esi, c_3) | 1
    break

int32_t var_14_5 = 2

if (data_cf65bc != 0 && result_5 != 0 && *result_5 != 0)
    char* eax_8 = sub_63d4e0(&result_1)
    int32_t temp8_1 = *(eax_8 + 4)
    *(eax_8 + 4) -= 1
    
    if (temp8_1 == 1)
        sub_64c080(eax_8, *(eax_8 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_14_6 = 0xffffffff

if (esi_2 == 0)
    data_c28c64 = 0xffffffff
    data_c28c68 = 0xffffffff
    esi_2 = sub_667360(*(edi + 8))
    int32_t eax_10 = sub_66f4b0()
    sub_66f200(eax_10, 0x8a, esi_2, *(esi_2 + 0x12) == 0, eax_10)
    sub_6656f0()

sub_63d720(&result_1, "layerItemButtonMinimized")
char* const result_6 = result_1
char* const result_23 = &data_801800
char* edx_9 = *(edi + 4)

if (result_6 != 0)
    result_23 = result_6

void* esi_4

while (true)
    result_6.b = *result_23
    char temp9_1 = *edx_9
    bool c_4 = result_6.b u< temp9_1
    bool z_7 = result_6.b == temp9_1
    char var_1029_8 = result_6.b
    result_6 = result_1
    
    if (z_7)
        if (var_1029_8 == 0)
            esi_4 = nullptr
            break
        
        result_6.b = result_23[1]
        char temp10_1 = edx_9[1]
        c_4 = result_6.b u< temp10_1
        bool z_8 = result_6.b == temp10_1
        char var_1029_9 = result_6.b
        result_6 = result_1
        
        if (z_8)
            result_23 = &result_23[2]
            edx_9 = &edx_9[2]
            
            if (var_1029_9 != 0)
                continue
            
            esi_4 = nullptr
            break
    
    esi_4 = sbb.d(esi_2, esi_2, c_4) | 1
    break

int32_t var_14_7 = 3

if (data_cf65bc != 0 && result_6 != 0 && *result_6 != 0)
    char* eax_11 = sub_63d4e0(&result_1)
    int32_t temp11_1 = *(eax_11 + 4)
    *(eax_11 + 4) -= 1
    
    if (temp11_1 == 1)
        sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_14_8 = 0xffffffff

if (esi_4 == 0)
    data_c28c64 = 0xffffffff
    data_c28c68 = 0xffffffff
    esi_4 = sub_667360(*(edi + 8))
    int32_t eax_13 = sub_66f4b0()
    sub_66f200(eax_13, 0x8b, esi_4, *(esi_4 + 0x13) == 0, eax_13)
    sub_6656f0()

sub_63d720(&result_1, "layerItemButton")
char* const result_7 = result_1
char* const result_24 = &data_801800
char* edx_12 = *(edi + 4)

if (result_7 != 0)
    result_24 = result_7

HWND (__stdcall* const i)()

while (true)
    result_7.b = *result_24
    char temp12_1 = *edx_12
    bool c_5 = result_7.b u< temp12_1
    bool z_9 = result_7.b == temp12_1
    char var_1029_10 = result_7.b
    result_7 = result_1
    
    if (z_9)
        if (var_1029_10 == 0)
            i = nullptr
            break
        
        result_7.b = result_24[1]
        char temp13_1 = edx_12[1]
        c_5 = result_7.b u< temp13_1
        bool z_10 = result_7.b == temp13_1
        char var_1029_11 = result_7.b
        result_7 = result_1
        
        if (z_10)
            result_24 = &result_24[2]
            edx_12 = &edx_12[2]
            
            if (var_1029_11 != 0)
                continue
            
            i = nullptr
            break
    
    i = sbb.d(esi_4, esi_4, c_5) | 1
    break

int32_t var_14_9 = 4

if (data_cf65bc != 0 && result_7 != 0 && *result_7 != 0)
    char* eax_14 = sub_63d4e0(&result_1)
    int32_t temp14_1 = *(eax_14 + 4)
    *(eax_14 + 4) -= 1
    
    if (temp14_1 == 1)
        sub_64c080(eax_14, *(eax_14 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_14_10 = 0xffffffff
char* const var_1034

if (i == 0)
    data_c28c64 = 0xffffffff
    data_c28c68 = 0xffffffff
    int32_t nVirtKey = 0x10
    var_1034 = *(sub_667360(*(edi + 8)) + 0x18c8)
    int16_t eax_17 = GetKeyState(nVirtKey)
    i = GetFocus
    HWND eax_19
    
    if (eax_17 s< 0 && *(data_cf65b4 + 0x18) != 0)
        eax_19 = GetFocus()
    
    if (eax_17 s< 0 && *(data_cf65b4 + 0x18) != 0 && (eax_19 == data_147b084 || eax_19 == 0)
            && data_c28c58 s> 0)
        HWND (__stdcall* i_1)() = data_c28c5c
        HWND (__stdcall* i_2)() = *(var_103c + 8)
        i = i_2
        
        if (i_2 s>= i_1)
            i = i_1
        
        if (i_2 s<= i_1)
            i_2 = i_1
        
        if (GetKeyState(0x11) s>= 0 || *(data_cf65b4 + 0x18) == 0)
            data_c28c58 = 0
        else
            HWND eax_22 = GetFocus()
            
            if (eax_22 != data_147b084 && eax_22 != 0)
                data_c28c58 = 0
        
        for (; i s<= i_2; i += 1)
            *(sub_667360(i) + 0x18c8)
            sub_66c650()
        
        memcpy(&(&data_c27c50)[data_ca9a6c * 0x407], &data_c27c54, 0x1018)
    else
        int16_t eax_26 = GetKeyState(0x11)
        HWND eax_28
        
        if (eax_26 s< 0 && *(data_cf65b4 + 0x18) != 0)
            eax_28 = GetFocus()
        
        if (eax_26 s< 0 && *(data_cf65b4 + 0x18) != 0 && (eax_28 == data_147b084 || eax_28 == 0))
            sub_66c6a0(var_1034)
        else
            sub_66bc70(var_1034)
    
    edi = var_103c

sub_63d720(&result_1, "propertyItem_click")
char* const result_8 = result_1
char* const result_25 = &data_801800
char* edx_15 = *(edi + 4)

if (result_8 != 0)
    result_25 = result_8

int32_t ecx_37

while (true)
    result_8.b = *result_25
    char temp15_1 = *edx_15
    bool c_6 = result_8.b u< temp15_1
    bool z_11 = result_8.b == temp15_1
    char var_1029_12 = result_8.b
    result_8 = result_1
    
    if (z_11)
        if (var_1029_12 == 0)
            ecx_37 = 0
            break
        
        result_8.b = result_25[1]
        char temp16_1 = edx_15[1]
        c_6 = result_8.b u< temp16_1
        bool z_12 = result_8.b == temp16_1
        char var_1029_13 = result_8.b
        result_8 = result_1
        
        if (z_12)
            result_25 = &result_25[2]
            edx_15 = &edx_15[2]
            
            if (var_1029_13 != 0)
                continue
            
            ecx_37 = 0
            break
    
    ecx_37 = sbb.d(result_25, result_25, c_6) | 1
    break

char var_1029_14

if (ecx_37 == 0)
    var_1029_14 = 1

if (ecx_37 != 0 || data_c28c58 s<= ecx_37)
    var_1029_14 = 0

int32_t var_14_11 = 5

if (data_cf65bc != 0 && result_8 != 0 && *result_8 != 0)
    char* eax_29 = sub_63d4e0(&result_1)
    int32_t temp17_1 = *(eax_29 + 4)
    *(eax_29 + 4) -= 1
    
    if (temp17_1 == 1)
        sub_64c080(eax_29, *(eax_29 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_14_12 = 0xffffffff

if (var_1029_14 != 0)
    data_c28c64 = 0xffffffff
    data_c28c68 = 0xffffffff
    data_c28c64 = *(edi + 8)

sub_63d720(&result_1, "propBtnDropDown")
char* const result_9 = result_1
char* const result_26 = &data_801800
char* edx_18 = *(edi + 4)

if (result_9 != 0)
    result_26 = result_9

int32_t esi_7

while (true)
    result_9.b = *result_26
    char temp18_1 = *edx_18
    bool c_7 = result_9.b u< temp18_1
    bool z_13 = result_9.b == temp18_1
    char var_1029_15 = result_9.b
    result_9 = result_1
    
    if (z_13)
        if (var_1029_15 == 0)
            esi_7 = 0
            break
        
        result_9.b = result_26[1]
        char temp19_1 = edx_18[1]
        c_7 = result_9.b u< temp19_1
        bool z_14 = result_9.b == temp19_1
        char var_1029_16 = result_9.b
        result_9 = result_1
        
        if (z_14)
            result_26 = &result_26[2]
            edx_18 = &edx_18[2]
            
            if (var_1029_16 != 0)
                continue
            
            esi_7 = 0
            break
    
    esi_7 = sbb.d(i, i, c_7) | 1
    break

int32_t var_14_13 = 6

if (data_cf65bc != 0 && result_9 != 0 && *result_9 != 0)
    char* eax_31 = sub_63d4e0(&result_1)
    int32_t temp20_1 = *(eax_31 + 4)
    *(eax_31 + 4) -= 1
    
    if (temp20_1 == 1)
        sub_64c080(eax_31, *(eax_31 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_14_14 = 0xffffffff

if (esi_7 == 0)
    data_c28c64 = *(edi + 8)
    int32_t eax_33 = *(edi + 8)
    
    if (data_c28c68 == eax_33)
        eax_33 = 0xffffffff
    
    data_c28c68 = eax_33

sub_63d720(&result_1, "propBtnPlus")
char* const result_10 = result_1
char* const result_27 = &data_801800
char* edx_21 = *(edi + 4)

if (result_10 != 0)
    result_27 = result_10

void* esi_9

while (true)
    result_10.b = *result_27
    char temp21_1 = *edx_21
    bool c_8 = result_10.b u< temp21_1
    bool z_15 = result_10.b == temp21_1
    char var_1029_17 = result_10.b
    result_10 = result_1
    
    if (z_15)
        if (var_1029_17 == 0)
            esi_9 = nullptr
            break
        
        result_10.b = result_27[1]
        char temp22_1 = edx_21[1]
        c_8 = result_10.b u< temp22_1
        bool z_16 = result_10.b == temp22_1
        char var_1029_18 = result_10.b
        result_10 = result_1
        
        if (z_16)
            result_27 = &result_27[2]
            edx_21 = &edx_21[2]
            
            if (var_1029_18 != 0)
                continue
            
            esi_9 = nullptr
            break
    
    esi_9 = sbb.d(esi_7, esi_7, c_8) | 1
    break

int32_t var_14_15 = 7

if (data_cf65bc != 0 && result_10 != 0 && *result_10 != 0)
    char* eax_34 = sub_63d4e0(&result_1)
    int32_t temp23_1 = *(eax_34 + 4)
    *(eax_34 + 4) -= 1
    
    if (temp23_1 == 1)
        sub_64c080(eax_34, *(eax_34 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_14_16 = 0xffffffff
char* const var_1058

if (esi_9 == 0)
    esi_9 = sub_665600(data_c27c58)
    int32_t* var_30_7 = &var_1058
    int128_t* ecx_47 = *(esi_9 + 0x18c8)
    *(esi_9 + 0x1364) = 0
    int128_t* eax_37 = sub_66bd20(&var_1058, data_c28c64, ecx_47)
    int32_t var_1048_1 = eax_37[1].d
    
    if (_mm_bsrli_si128(*eax_37, 4) != 0x6f)
        sub_66ed70(esi_9)
    else
        int32_t* eax_40 = sub_667870(esi_9)
        int32_t eax_41 = sub_63d720(&var_1034, "newState")
        
        if (eax_40 == 0)
            int32_t var_14_19 = 0xc
            sub_66d4c0()
            int32_t var_14_20 = 0xd
        else
            int32_t var_14_17 = 8
            char* edx_25 = *eax_40
            
            if (edx_25 == 0)
                sub_63b870(eax_41, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
                    "XString::XString")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            sub_63d720(&result_1, edx_25)
            var_14_17.b = 9
            sub_66d530(&var_1034)
            var_14_17.b = 0xa
            
            if (data_cf65bc != 0)
                char* const result_11 = result_1
                
                if (result_11 != 0 && *result_11 != 0)
                    char* eax_42 = sub_63d4e0(&result_1)
                    int32_t temp27_1 = *(eax_42 + 4)
                    *(eax_42 + 4) -= 1
                    
                    if (temp27_1 == 1)
                        sub_64c080(eax_42, *(eax_42 + 0xc) + 0x10)
                        result_1 = &data_801800
            
            int32_t var_14_18 = 0xb
        
        if (data_cf65bc != 0)
            char* eax_43 = var_1034
            
            if (eax_43 != 0 && *eax_43 != 0)
                char* eax_44 = sub_63d4e0(&var_1034)
                int32_t temp26_1 = *(eax_44 + 4)
                *(eax_44 + 4) -= 1
                
                if (temp26_1 == 1)
                    sub_64c080(eax_44, *(eax_44 + 0xc) + 0x10)
                    var_1034 = &data_801800
        
        int32_t var_14_21 = 0xffffffff
        sub_63d720(&var_1034, "newState")
        int32_t var_14_22 = 0xe
        sub_66d750(esi_9, &var_1034)
        int32_t var_14_23 = 0xf
        
        if (data_cf65bc != 0)
            char* const eax_45 = var_1034
            
            if (eax_45 != 0 && *eax_45 != 0)
                char* eax_46 = sub_63d4e0(&var_1034)
                int32_t temp29_1 = *(eax_46 + 4)
                *(eax_46 + 4) -= 1
                
                if (temp29_1 == 1)
                    sub_64c080(eax_46, *(eax_46 + 0xc) + 0x10)
                    var_1034 = &data_801800
        
        char* const* ecx_59
        ecx_59.b = 1
        int32_t var_14_24 = 0xffffffff
        edi = var_103c
        int32_t eax_48 = sub_66b2b0(sub_665770(ecx_59), "propValue", data_c27c44, *(edi + 8))
        sub_66cc40(eax_48, 0)
        esi_9 = sub_64e7a0(eax_48) + 0x1720
        int32_t eax_50 = *esi_9
        
        if (eax_50 == 0 || eax_50 != "newState")
            sub_63d5e0(eax_50, 8, esi_9, 0)
            __builtin_strncpy(*esi_9, "newState", 9)
        
        *(esi_9 + 0xc) = 0
        char* eax_51 = *esi_9
        
        if (eax_51 == 0 || *eax_51 == 0)
            *(esi_9 + 4) = 0
        else
            *(esi_9 + 4) = *(sub_63d4e0(esi_9) + 8)

sub_63d720(&result_1, "propBtnMinus")
char* const result_12 = result_1
char* const result_28 = &data_801800
char* edx_33 = *(edi + 4)

if (result_12 != 0)
    result_28 = result_12

void* result_15

while (true)
    result_12.b = *result_28
    char temp24_1 = *edx_33
    bool c_9 = result_12.b u< temp24_1
    bool z_17 = result_12.b == temp24_1
    char var_1029_19 = result_12.b
    result_12 = result_1
    
    if (z_17)
        if (var_1029_19 == 0)
            result_15 = nullptr
            break
        
        result_12.b = result_28[1]
        char temp25_1 = edx_33[1]
        c_9 = result_12.b u< temp25_1
        bool z_18 = result_12.b == temp25_1
        char var_1029_20 = result_12.b
        result_12 = result_1
        
        if (z_18)
            result_28 = &result_28[2]
            edx_33 = &edx_33[2]
            
            if (var_1029_20 != 0)
                continue
            
            result_15 = nullptr
            break
    
    result_15 = sbb.d(esi_9, esi_9, c_9) | 1
    break

int32_t var_14_25 = 0x10

if (data_cf65bc != 0 && result_12 != 0 && *result_12 != 0)
    char* eax_54 = sub_63d4e0(&result_1)
    int32_t temp28_1 = *(eax_54 + 4)
    *(eax_54 + 4) -= 1
    
    if (temp28_1 == 1)
        sub_64c080(eax_54, *(eax_54 + 0xc) + 0x10)
        result_1 = &data_801800

int32_t var_14_26 = 0xffffffff

if (result_15 != 0)
    goto label_670452

result_15 = sub_665600(data_c27c58)
int32_t* var_30_11 = &var_1058
void* result_17 = result_15
int128_t* ecx_71 = *(result_15 + 0x18c8)
*(result_15 + 0x1364) = 0
int128_t* eax_57 = sub_66bd20(&var_1058, data_c28c64, ecx_71)
int32_t var_1048_2 = eax_57[1].d
char const* const var_38_2
int32_t var_34_5
char const* const var_30_12
int32_t* eax_60
char* ecx_73

if (_mm_bsrli_si128(*eax_57, 4) != 0x6f)
    sub_66ef40(result_15, data_c28c64)
label_670452:
    sub_63d720(&result_1, "propBtnUndo")
    char* const result_13 = result_1
    char* const result_30 = &data_801800
    char* edx_51 = *(edi + 4)
    
    if (result_13 != 0)
        result_30 = result_13
    
    int32_t esi_13
    
    while (true)
        result_13.b = *result_30
        char temp30_1 = *edx_51
        bool c_13 = result_13.b u< temp30_1
        bool z_25 = result_13.b == temp30_1
        char var_1029_21 = result_13.b
        result_13 = result_1
        
        if (z_25)
            if (var_1029_21 == 0)
                esi_13 = 0
                break
            
            result_13.b = result_30[1]
            char temp31_1 = edx_51[1]
            c_13 = result_13.b u< temp31_1
            bool z_26 = result_13.b == temp31_1
            char var_1029_22 = result_13.b
            result_13 = result_1
            
            if (z_26)
                result_30 = &result_30[2]
                edx_51 = &edx_51[2]
                
                if (var_1029_22 != 0)
                    continue
                
                esi_13 = 0
                break
        
        esi_13 = sbb.d(result_15, result_15, c_13) | 1
        break
    
    int32_t var_14_30 = 0x15
    
    if (data_cf65bc != 0 && result_13 != 0 && *result_13 != 0)
        char* eax_77 = sub_63d4e0(&result_1)
        int32_t temp33_1 = *(eax_77 + 4)
        *(eax_77 + 4) -= 1
        
        if (temp33_1 == 1)
            sub_64c080(eax_77, *(eax_77 + 0xc) + 0x10)
            result_1 = &data_801800
    
    int32_t var_14_31 = 0xffffffff
    
    if (esi_13 == 0)
        void* eax_78 = sub_665600(data_c27c58)
        int32_t* var_30_16 = &var_1058
        int128_t* ecx_91 = *(eax_78 + 0x18c8)
        *(eax_78 + 0x1364) = esi_13
        int128_t* eax_80 = sub_66bd20(&var_1058, data_c28c64, ecx_91)
        int32_t var_1048_3 = eax_80[1].d
        esi_13 = _mm_bsrli_si128(*eax_80, 4)
        void* eax_82 = sub_667ae0(eax_78, esi_13)
        sub_6dcec0(eax_82, eax_82, &data_8cae70, esi_13)
        int32_t ecx_93
        ecx_93.b = 1
        sub_665770(ecx_93)
        edi = var_103c
    
    sub_63d720(&result_1, "propBtnFile")
    char* const result_14 = result_1
    char* const result_31 = &data_801800
    char* edx_57 = *(edi + 4)
    
    if (result_14 != 0)
        result_31 = result_14
    
    char* const result_16
    
    while (true)
        result_14.b = *result_31
        char temp35_1 = *edx_57
        bool c_14 = result_14.b u< temp35_1
        bool z_27 = result_14.b == temp35_1
        char var_1029_23 = result_14.b
        result_14 = result_1
        
        if (z_27)
            if (var_1029_23 == 0)
                result_16 = nullptr
                break
            
            result_14.b = result_31[1]
            char temp36_1 = edx_57[1]
            c_14 = result_14.b u< temp36_1
            bool z_28 = result_14.b == temp36_1
            char var_1029_24 = result_14.b
            result_14 = result_1
            
            if (z_28)
                result_31 = &result_31[2]
                edx_57 = &edx_57[2]
                
                if (var_1029_24 != 0)
                    continue
                
                result_16 = nullptr
                break
        
        result_16 = sbb.d(esi_13, esi_13, c_14) | 1
        break
    
    int32_t var_14_32 = 0x16
    
    if (data_cf65bc != 0 && result_14 != 0 && *result_14 != 0)
        char* eax_83 = sub_63d4e0(&result_1)
        int32_t temp40_1 = *(eax_83 + 4)
        *(eax_83 + 4) -= 1
        
        if (temp40_1 == 1)
            sub_64c080(eax_83, *(eax_83 + 0xc) + 0x10)
            result_1 = &data_801800
    
    int32_t var_14_33 = 0xffffffff
    
    if (result_16 != 0)
    label_670827:
        sub_63d720(&result_1, "comboBoxItem_click")
        char* result = result_1
        void* result_2 = &data_801800
        char* edx_68 = *(edi + 4)
        
        if (result != 0)
            result_2 = result
        
        int32_t esi_16
        
        while (true)
            result.b = *result_2
            char temp41_1 = *edx_68
            bool c_15 = result.b u< temp41_1
            bool z_29 = result.b == temp41_1
            char var_1029_25 = result.b
            result = result_1
            
            if (z_29)
                if (var_1029_25 == 0)
                    esi_16 = 0
                    break
                
                result.b = *(result_2 + 1)
                char temp43_1 = edx_68[1]
                c_15 = result.b u< temp43_1
                bool z_30 = result.b == temp43_1
                char var_1029_26 = result.b
                result = result_1
                
                if (z_30)
                    result_2 += 2
                    edx_68 = &edx_68[2]
                    
                    if (var_1029_26 != 0)
                        continue
                    
                    esi_16 = 0
                    break
            
            esi_16 = sbb.d(result_16, result_16, c_15) | 1
            break
        
        int32_t var_14_37 = 0x1b
        
        if (data_cf65bc != 0 && result != 0 && *result != 0)
            result = sub_63d4e0(&result_1)
            int32_t temp44_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp44_1 == 1)
                sub_64c080(result, *(result + 0xc) + 0x10)
                result_1 = &data_801800
        
        int32_t var_14_38 = 0xffffffff
        
        if (esi_16 != 0)
            goto label_670b0d
        
        eax_60 = sub_665600(data_c27c58)
        char* esi_18 = eax_60
        *(esi_18 + 0x1364) = 0
        
        if (data_c28c58 s> 0)
            char* const* var_30_21 = &var_1058
            int128_t* eax_97 = sub_66bd20(&var_1058, data_c28c68, *(esi_18 + 0x18c8))
            int32_t var_1048_5 = eax_97[1].d
            char* xmm0_10 = _mm_bsrli_si128(*eax_97, 4)
            void* eax_99 = sub_667ae0(esi_18, xmm0_10)
            int32_t edx_73 = data_c28c68
            int128_t* ecx_115 = *(esi_18 + 0x18c8)
            var_1034 = eax_99
            char* const* var_30_22 = &var_1058
            eax_60 = _mm_bsrli_si128(*sub_66bd20(&var_1058, edx_73, ecx_115), 0xc)
            
            if (eax_60 == 2)
                data_c28c68
                *(esi_18 + 0x18c8)
                int32_t* edx_75 = sub_66c4b0() + (*(var_103c + 8) << 3)
                int32_t eax_103 = sub_66da10(xmm0_10)
                
                if (eax_103 != 1)
                    int32_t var_30_24 = *edx_75
                    sub_6dce10(eax_103, var_1034, &data_8cae70, xmm0_10)
                label_670afc:
                    char* const* ecx_121
                    ecx_121.b = 1
                    sub_665770(ecx_121)
                    goto label_670b03
                
                int32_t var_30_23 = edx_75[1]
                sub_66dee0(eax_103, var_1034, esi_18, xmm0_10, data_c28c68)
            label_670b03:
                data_c28c68 = 0xffffffff
            label_670b0d:
                result.b = 0
                fsbase->NtTib.ExceptionList = ExceptionList
                CookieCheckFunction(result)
                return result
            
            if (eax_60 != 5)
                var_30_12 = "UI2EditorClick"
                var_34_5 = 0x47b4
                ecx_73 = "Halt"
                var_38_2 = "C:\x\ax2017\Engine\UI2.cpp"
            else
                data_c28c68
                eax_60 = sub_66bf20(*(esi_18 + 0x18c8))
                char* edx_79 = eax_60[*(var_103c + 8)]
                
                if (xmm0_10 != 0x6f)
                    int32_t eax_106 = sub_66da10(xmm0_10)
                    
                    if (eax_106 != 2)
                        char* var_30_27 = edx_79
                        sub_6dce10(eax_106, var_1034, &data_8cae70, xmm0_10)
                    else
                        void var_1078
                        void* var_30_25 = &var_1078
                        uint128_t* eax_108
                        int32_t ecx_130
                        eax_108, ecx_130 = sub_66bd20(&var_1078, data_c28c68, *(esi_18 + 0x18c8))
                        int32_t* edx_84 = var_1034
                        char* var_30_26 = edx_79
                        char* xmm0_14 = _mm_bsrli_si128(*eax_108, 8)
                        sub_66daf0(xmm0_14, edx_84, ecx_130, xmm0_10, xmm0_14)
                    
                    goto label_670afc
                
                if (edx_79 != 0)
                    sub_63d720(&var_1034, edx_79)
                    int32_t var_14_39 = 0x1c
                    sub_66d750(esi_18, &var_1034)
                    int32_t var_14_40 = 0x1d
                    
                    if (data_cf65bc != 0)
                        char* const eax_104 = var_1034
                        
                        if (eax_104 != 0 && *eax_104 != 0)
                            char* eax_105 = sub_63d4e0(&var_1034)
                            int32_t temp49_1 = *(eax_105 + 4)
                            *(eax_105 + 4) -= 1
                            
                            if (temp49_1 == 1)
                                sub_64c080(eax_105, *(eax_105 + 0xc) + 0x10)
                    
                    int32_t var_14_41 = 0xffffffff
                    goto label_670afc
                
                var_30_12 = "XString::XString"
                var_34_5 = 0x94
                var_38_2 = "C:\x\ax2017\Engine\xString.cpp"
                ecx_73 = &data_871e0c
        else
            var_30_12 = "UI2EditorClick"
            var_34_5 = 0x478c
            ecx_73 = "gUI2Editor.s.activeSetCount > 0"
            var_38_2 = "C:\x\ax2017\Engine\UI2.cpp"
    else
        char* eax_84 = sub_665600(data_c27c58)
        int32_t* var_30_18 = &var_1058
        int128_t* ecx_98 = *(eax_84 + 0x18c8)
        *(eax_84 + 0x1364) = result_16
        int128_t* eax_85 = sub_66bd20(eax_84, data_c28c64, ecx_98)
        int32_t var_1048_4 = eax_85[1].d
        void* xmm0_8 = _mm_bsrli_si128(*eax_85, 4)
        eax_60 = xmm0_8 - 0x8c
        
        if (eax_60 u<= 0x87)
            eax_60 = zx.d(*(eax_60 + &lookup_table_670bb8))
            char const* const ecx_99
            
            switch (eax_60)
                case nullptr
                    ecx_99 = "Image (*.jpg, *.png, *.tga)"
                case 1
                    ecx_99 = "Material (*.material.xml, *.materialFn.xml)"
                case 2
                    ecx_99 = "Model (*.fbx)"
                case 3
                    ecx_99 = "UI2 (*.ui2)"
                case 4
                    ecx_99 = "Font (*.font.xml)"
                case 5
                    ecx_99 = "Sound (*.wav, *.ogg, *.xmlsound)"
                case 6
                    ecx_99 = "Flanim (*.flanim)"
                case 7
                    ecx_99 = "Spine (*.skel, *.spine.json)"
                case 8
                    ecx_99 = "Particle (*.particle)"
                case 9
                    goto label_670882
            
            result_1 = &data_801800
            int32_t var_14_34 = 0x17
            char eax_87 = sub_6fb1e0(ecx_99, &result_1)
            result_16 = result_1
            
            if (eax_87 != 0)
                int32_t* eax_88 = sub_667ae0(eax_84, xmm0_8)
                char* const result_32 = &data_801800
                
                if (result_16 != 0)
                    result_32 = result_16
                
                sub_6c4220(&var_1034, result_32)
                var_14_34.b = 0x18
                char* const ecx_102 = &data_801800
                char* const eax_89 = var_1034
                
                if (eax_89 != 0)
                    ecx_102 = eax_89
                
                int32_t eax_90 = sub_6fb0d0(ecx_102)
                
                if (xmm0_8 != 0x8c)
                    int32_t var_30_20 = eax_90
                    sub_6dce10(eax_90, eax_88, &data_8cae70, xmm0_8)
                else
                    char* eax_91 = *(eax_90 + 0x20)
                    char* const ecx_103 = &data_801800
                    int32_t var_1050_1 = 0
                    
                    if (eax_91 != 0)
                        ecx_103 = eax_91
                    
                    char* const* var_30_19 = &var_1058
                    var_1058 = ecx_103
                    sub_6dce10(&var_1058, eax_88, &data_8cae70, xmm0_8)
                
                int32_t ecx_104
                ecx_104.b = 1
                sub_665770(ecx_104)
                var_14_34.b = 0x19
                
                if (data_cf65bc != 0)
                    char* const eax_93 = var_1034
                    
                    if (eax_93 != 0 && *eax_93 != 0)
                        char* eax_94 = sub_63d4e0(&var_1034)
                        int32_t temp48_1 = *(eax_94 + 4)
                        *(eax_94 + 4) -= 1
                        
                        if (temp48_1 == 1)
                            sub_64c080(eax_94, *(eax_94 + 0xc) + 0x10)
                            var_1034 = &data_801800
            
            int32_t var_14_35 = 0x1a
            
            if (data_cf65bc != 0 && result_16 != 0 && *result_16 != 0)
                char* eax_95 = sub_63d4e0(&result_1)
                int32_t temp45_1 = *(eax_95 + 4)
                *(eax_95 + 4) -= 1
                
                if (temp45_1 == 1)
                    sub_64c080(eax_95, *(eax_95 + 0xc) + 0x10)
                    result_1 = &data_801800
            
            edi = var_103c
            int32_t var_14_36 = 0xffffffff
            goto label_670827
        
    label_670882:
        var_30_12 = "UI2EditorClick"
        var_34_5 = 0x476a
        ecx_73 = "Halt"
        var_38_2 = "C:\x\ax2017\Engine\UI2.cpp"
else
    eax_60 = sub_667870(result_15)
    
    if (eax_60 == 0)
        goto label_670452
    
    char* edx_37 = *eax_60
    
    if (edx_37 != 0)
        sub_63d720(&result_1, edx_37)
        int32_t var_14_27 = 0x11
        char* const result_18 = &data_801800
        result_15 = result_1
        char* const ecx_75 = &data_801800
        
        if (result_15 != 0)
            result_18 = result_15
        
        int32_t eax_62
        
        while (true)
            char edx_38 = *result_18
            char temp32_1 = *ecx_75
            bool c_10 = edx_38 u< temp32_1
            
            if (edx_38 == temp32_1)
                if (edx_38 == 0)
                    eax_62 = 0
                    break
                
                edx_38 = result_18[1]
                char temp34_1 = ecx_75[1]
                c_10 = edx_38 u< temp34_1
                
                if (edx_38 == temp34_1)
                    result_18 = &result_18[2]
                    ecx_75 = &ecx_75[2]
                    
                    if (edx_38 != 0)
                        continue
                    
                    eax_62 = 0
                    break
            
            eax_62 = sbb.d(result_18, result_18, c_10) | 1
            break
        
        if (eax_62 != 0)
            char* const var_30_13 = ecx_75
            int32_t var_1028[0x3fc]
            int32_t eax_63
            char* const result_29
            void* edx_40
            eax_63, result_29, edx_40 = sub_66d420(result_17, &var_1028)
            void* edi_2 = nullptr
            var_1034 = nullptr
            
            if (eax_63 s> 0)
                while (true)
                    result_29 = &data_801800
                    char* const eax_64 = &data_801800
                    
                    if (result_15 != 0)
                        result_29 = result_15
                    
                    int32_t eax_66
                    
                    while (true)
                        edx_40.b = *result_29
                        char temp39_1 = *eax_64
                        bool c_11 = edx_40.b u< temp39_1
                        
                        if (edx_40.b == temp39_1)
                            if (edx_40.b == 0)
                                eax_66 = 0
                                break
                            
                            edx_40.b = result_29[1]
                            char temp42_1 = eax_64[1]
                            c_11 = edx_40.b u< temp42_1
                            
                            if (edx_40.b == temp42_1)
                                result_29 = &result_29[2]
                                eax_64 = &eax_64[2]
                                
                                if (edx_40.b != 0)
                                    continue
                                
                                eax_66 = 0
                                break
                        
                        eax_66 = sbb.d(eax_64, eax_64, c_11) | 1
                        break
                    
                    if (eax_66 != 0)
                        int32_t var_30_14 = 0x69
                        int32_t var_34_6 = data_1724a80
                        int32_t* eax_67 = sub_64cc90(var_1028[edi_2])
                        char* eax_68 = sub_6dd1e0(eax_67, eax_67, &data_8cae70, var_34_6, var_30_14)
                        
                        if (eax_68 != 0)
                            int32_t edi_3 = 0
                            
                            if (*(eax_68 + 8) s> 0)
                                int32_t* eax_69 = *eax_68
                                int32_t* var_105c_1 = eax_69
                                
                                while (true)
                                    char* ecx_78 = *eax_69
                                    void* result_19 = &data_801800
                                    
                                    if (result_15 != 0)
                                        result_19 = result_15
                                    
                                    int32_t eax_71
                                    
                                    while (true)
                                        char edx_42 = *ecx_78
                                        char temp46_1 = *result_19
                                        bool c_12 = edx_42 u< temp46_1
                                        
                                        if (edx_42 == temp46_1)
                                            if (edx_42 == 0)
                                                eax_71 = 0
                                                break
                                            
                                            edx_42 = ecx_78[1]
                                            char temp47_1 = *(result_19 + 1)
                                            c_12 = edx_42 u< temp47_1
                                            
                                            if (edx_42 == temp47_1)
                                                ecx_78 = &ecx_78[2]
                                                result_19 += 2
                                                
                                                if (edx_42 != 0)
                                                    continue
                                                
                                                eax_71 = 0
                                                break
                                        
                                        eax_71 = sbb.d(result_19, result_19, c_12) | 1
                                        break
                                    
                                    if (eax_71 == 0)
                                        void* const var_30_15 = nullptr
                                        int32_t* eax_73 = sub_69dd00(data_1724a80, 0)
                                        sub_6fb870(eax_73, eax_73, eax_68, edi_3, var_30_15)
                                        break
                                    
                                    edi_3 += 1
                                    eax_69 = &var_105c_1[0xc]
                                    var_105c_1 = eax_69
                                    
                                    if (edi_3 s>= *(eax_68 + 8))
                                        break
                    
                    edx_40 = &var_1034[1]
                    edi_2 = edx_40
                    var_1034 = edx_40
                    
                    if (edx_40 s>= eax_63)
                        break
            
            result_29.b = 1
            sub_665770(result_29)
            edi = var_103c
        
        sub_63d720(&var_1034, &data_801800)
        var_14_27.b = 0x12
        sub_66d750(result_17, &var_1034)
        var_14_27.b = 0x13
        
        if (data_cf65bc != 0)
            char* const eax_74 = var_1034
            
            if (eax_74 != 0 && *eax_74 != 0)
                char* eax_75 = sub_63d4e0(&var_1034)
                int32_t temp37_1 = *(eax_75 + 4)
                *(eax_75 + 4) -= 1
                
                if (temp37_1 == 1)
                    sub_64c080(eax_75, *(eax_75 + 0xc) + 0x10)
                    var_1034 = &data_801800
        
        char* const* ecx_83
        ecx_83.b = 1
        var_14_27.b = 0x11
        sub_665770(ecx_83)
        int32_t var_14_28 = 0x14
        
        if (data_cf65bc != 0 && result_15 != 0 && *result_15 != 0)
            char* eax_76 = sub_63d4e0(&result_1)
            int32_t temp38_1 = *(eax_76 + 4)
            *(eax_76 + 4) -= 1
            
            if (temp38_1 == 1)
                sub_64c080(eax_76, *(eax_76 + 0xc) + 0x10)
                result_1 = &data_801800
        
        int32_t var_14_29 = 0xffffffff
        goto label_670452
    
    var_30_12 = "XString::XString"
    var_34_5 = 0x94
    var_38_2 = "C:\x\ax2017\Engine\xString.cpp"
    ecx_73 = &data_871e0c

sub_63b870(eax_60, &data_801800, ecx_73, var_38_2, var_34_5, var_30_12)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
