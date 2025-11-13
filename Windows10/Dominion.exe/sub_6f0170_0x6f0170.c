// 函数: sub_6f0170
// 地址: 0x6f0170
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_771df5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_64 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
LRESULT wParam = arg2
LRESULT wParam_1 = arg1
int32_t* ecx = data_147ded0
int32_t* var_2c

if (ecx == 0 || ecx[1] != 0x19)
    var_2c = nullptr
else
    var_2c = sub_5af880(ecx)

HWND hWnd = GetDlgItem(data_147d470, 0x76)
HWND hWnd_1 = GetDlgItem(data_147d470, 0x7b)
int32_t* var_34 = &var_2c[2]

if (arg1 == 0xffffffff || wParam_1 s>= var_2c[2])
    var_34 = &var_2c[2]
    LRESULT wParam_4 = SendMessageA(hWnd, 0x188, 0, 0)
    wParam_1 = wParam_4
    
    if (wParam_4 == 0xffffffff)
        wParam_1 = 0
        var_34 = &var_2c[2]

LRESULT wParam_2 = SendMessageA(hWnd, 0x18e, 0, 0)
SendMessageA(hWnd, 0x184, 0, 0)
int32_t i = 0
int32_t i_2 = 0

if (var_2c[2] s> 0)
    int32_t ecx_1 = 0
    int32_t var_3c_1 = 0
    
    do
        int32_t* esi_3 = *var_2c + ecx_1
        void* eax_6 = sub_6dd280(var_2c, esi_3, &data_8cc5f8, 5)
        void* eax_7 = sub_6dd280(eax_6, esi_3, &data_8cc5f8, 8)
        char* eax_8 = sub_6dd140(eax_7, esi_3, &data_8cc5f8, 1)
        char* const lParam_7 = &data_801800
        int32_t j_1 = sub_6eef80(i)
        char* const lParam_3 = &data_801800
        int32_t var_8_1 = 0
        
        if (j_1 s> 0)
            int32_t j
            
            do
                if (lParam_7 == 0 || *lParam_7 == 0)
                    int32_t** eax_11 = sub_64bfd0(0x14)
                    eax_11[3] += 1
                    
                    if (*eax_11 == 0)
                        sub_64be70(eax_11)
                    
                    int32_t* ecx_6 = *eax_11
                    *eax_11 = *ecx_6
                    void* const eax_13 = &data_88b308
                    *ecx_6 = 0xfafafafa
                    ecx_6[1] = 1
                    ecx_6[2] = 3
                    ecx_6[3] = 4
                    lParam_7 = &ecx_6[4]
                    lParam_3 = lParam_7
                    char k
                    
                    do
                        k = *eax_13
                        eax_13 += 1
                        *(eax_13 + lParam_7 - &data_88b308 - 1) = k
                    while (k != 0)
                else
                    char* eax_10 = sub_63d4e0(&lParam_3)
                    int32_t* esi_4 = *(eax_10 + 8)
                    sub_63d5e0(eax_10, esi_4 + 3, &lParam_3, 1)
                    lParam_7 = lParam_3
                    *(esi_4 + lParam_7) = 0x202020
                
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        int32_t i_3
        
        if (eax_8 == 0 || *eax_8 == 0)
            i_3 = i_2
            int32_t var_68_2 = i_3 + 1
            var_8_1.b = 1
            char* ecx_8 = &data_801800
            char* var_30
            char* eax_16 = *sub_63df30(&var_30, "Particle %d")
            
            if (eax_16 != 0)
                ecx_8 = eax_16
            
            sub_63d960(&lParam_3, ecx_8)
            var_8_1.b = 2
            
            if (data_cf65bc != 0)
                char* eax_17 = var_30
                
                if (eax_17 != 0 && *eax_17 != 0)
                    char* eax_18 = sub_63d4e0(&var_30)
                    int32_t temp1_1 = *(eax_18 + 4)
                    *(eax_18 + 4) -= 1
                    
                    if (temp1_1 == 1)
                        sub_64c080(eax_18, *(eax_18 + 0xc) + 0x10)
                        var_30 = &data_801800
            
            var_8_1.b = 0
        else
            sub_63d960(&lParam_3, eax_8)
            i_3 = i_2
        
        if (eax_6 != 0)
            char* const var_20
            sub_6ef360(&var_20, eax_6)
            var_8_1.b = 3
            char* const lParam_4 = lParam_3
            
            if (lParam_4 == 0 || *lParam_4 == 0)
                int32_t** eax_22 = sub_64bfd0(0x14)
                eax_22[3] += 1
                
                if (*eax_22 == 0)
                    sub_64be70(eax_22)
                
                int32_t* ecx_16 = *eax_22
                *eax_22 = *ecx_16
                *ecx_16 = 0xfafafafa
                ecx_16[1] = 1
                ecx_16[2] = 3
                ecx_16[3] = 4
                char* ecx_17 = &data_816920
                lParam_3 = &ecx_16[4]
                int32_t* eax_23
                
                do
                    eax_23.b = *ecx_17
                    ecx_17 = &ecx_17[1]
                    ecx_17[ecx_16 + 0xff7e96ef] = eax_23.b
                while (eax_23.b != 0)
            else
                char* eax_20 = sub_63d4e0(&lParam_3)
                int32_t* esi_8 = *(eax_20 + 8)
                sub_63d5e0(eax_20, esi_8 + 3, &lParam_3, 1)
                *(esi_8 + lParam_3) = 0x202d20
            
            char* const eax_24 = var_20
            char* const ecx_18 = &data_801800
            
            if (eax_24 != 0)
                ecx_18 = eax_24
            
            sub_63d960(&lParam_3, ecx_18)
            var_8_1.b = 4
            
            if (data_cf65bc != 0)
                char* eax_25 = var_20
                
                if (eax_25 != 0 && *eax_25 != 0)
                    char* eax_26 = sub_63d4e0(&var_20)
                    int32_t temp4_1 = *(eax_26 + 4)
                    *(eax_26 + 4) -= 1
                    
                    if (temp4_1 == 1)
                        sub_64c080(eax_26, *(eax_26 + 0xc) + 0x10)
                        var_20 = &data_801800
            
            var_8_1.b = 0
        
        if (eax_7 != 0)
            char* var_24
            sub_6ef360(&var_24, eax_7)
            var_8_1.b = 5
            char* const lParam_5 = lParam_3
            
            if (lParam_5 == 0 || *lParam_5 == 0)
                int32_t** eax_30 = sub_64bfd0(0x14)
                eax_30[3] += 1
                
                if (*eax_30 == 0)
                    sub_64be70(eax_30)
                
                int32_t* ecx_26 = *eax_30
                *eax_30 = *ecx_26
                *ecx_26 = 0xfafafafa
                ecx_26[1] = 1
                ecx_26[2] = 3
                ecx_26[3] = 4
                char* ecx_27 = &data_816920
                lParam_3 = &ecx_26[4]
                int32_t* eax_31
                
                do
                    eax_31.b = *ecx_27
                    ecx_27 = &ecx_27[1]
                    ecx_27[ecx_26 + 0xff7e96ef] = eax_31.b
                while (eax_31.b != 0)
            else
                char* eax_28 = sub_63d4e0(&lParam_3)
                int32_t* esi_10 = *(eax_28 + 8)
                sub_63d5e0(eax_28, esi_10 + 3, &lParam_3, 1)
                *(esi_10 + lParam_3) = 0x202d20
            
            char* eax_32 = var_24
            char* ecx_28 = &data_801800
            
            if (eax_32 != 0)
                ecx_28 = eax_32
            
            sub_63d960(&lParam_3, ecx_28)
            var_8_1.b = 6
            
            if (data_cf65bc != 0)
                char* eax_33 = var_24
                
                if (eax_33 != 0 && *eax_33 != 0)
                    char* eax_34 = sub_63d4e0(&var_24)
                    int32_t temp5_1 = *(eax_34 + 4)
                    *(eax_34 + 4) -= 1
                    
                    if (temp5_1 == 1)
                        sub_64c080(eax_34, *(eax_34 + 0xc) + 0x10)
                        var_24 = &data_801800
            
            var_8_1.b = 0
        
        char* const lParam_2
        
        if (*((i_3 << 3) + &data_147d4b8) == 0)
            lParam_2 = lParam_3
        else
            char* const lParam_6 = lParam_3
            
            if (lParam_6 == 0 || *lParam_6 == 0)
                int32_t** eax_36 = sub_64bfd0(0x1a)
                eax_36[3] += 1
                
                if (*eax_36 == 0)
                    sub_64be70(eax_36)
                
                int32_t* esi_12 = *eax_36
                char* ecx_35 = " (hidden)"
                *eax_36 = *esi_12
                *esi_12 = 0xfafafafa
                esi_12[1] = 1
                esi_12[2] = 9
                esi_12[3] = 0xa
                lParam_2 = &esi_12[4]
                lParam_3 = lParam_2
                int32_t* eax_37
                
                do
                    eax_37.b = *ecx_35
                    ecx_35 = &ecx_35[1]
                    ecx_35[lParam_2 + 0xff774ceb] = eax_37.b
                while (eax_37.b != 0)
                i_3 = i_2
            else
                char* eax_35 = sub_63d4e0(&lParam_3)
                int32_t edi_1 = *(eax_35 + 8)
                sub_63d5e0(eax_35, edi_1 + 9, &lParam_3, 1)
                lParam_2 = lParam_3
                __builtin_strcpy(&lParam_2[edi_1], " (hidden)")
                i_3 = i_2
        
        char* const lParam = &data_801800
        
        if (lParam_2 != 0)
            lParam = lParam_2
        
        SendMessageA(hWnd, 0x180, 0, lParam)
        int32_t var_8_2 = 7
        
        if (data_cf65bc != 0 && lParam_2 != 0 && *lParam_2 != 0)
            char* eax_38 = sub_63d4e0(&lParam_3)
            int32_t temp3_1 = *(eax_38 + 4)
            *(eax_38 + 4) -= 1
            
            if (temp3_1 == 1)
                sub_64c080(eax_38, *(eax_38 + 0xc) + 0x10)
        
        i = i_3 + 1
        ecx_1 = var_3c_1 + 0x168
        int32_t var_8_3 = 0xffffffff
        i_2 = i
        var_3c_1 = ecx_1
    while (i s< *var_34)

ShowWindow(GetDlgItem(data_147d470, 0x77), SW_HIDE)
ShowWindow(GetDlgItem(data_147d470, 0x78), SW_HIDE)
ShowWindow(GetDlgItem(data_147d470, 0x79), SW_HIDE)
ShowWindow(GetDlgItem(data_147d470, 0x7a), SW_HIDE)
ShowWindow(GetDlgItem(data_147d470, 0x8d), SW_HIDE)
SendMessageA(hWnd, 0x186, wParam_1, 0)
SendMessageA(hWnd, 0x197, wParam_2, 0)
HWND hWnd_2 = hWnd_1
ShowWindow(hWnd_2, SW_SHOW)
ShowWindow(GetDlgItem(data_147d470, 0x7c), SW_SHOW)
ShowWindow(GetDlgItem(data_147d470, 0x7d), SW_SHOW)
ShowWindow(GetDlgItem(data_147d470, 0x7e), SW_SHOW)
ShowWindow(GetDlgItem(data_147d470, 0x7f), SW_SHOW)
ShowWindow(GetDlgItem(data_147d470, 0x9e), SW_SHOW)
int32_t* esi_13 = sub_6ee6b0()
int32_t* var_4c_1 = esi_13

if (wParam == 0xffffffff || esi_13 == 0 || wParam s>= *esi_13)
    LRESULT wParam_5 = SendMessageA(hWnd_2, 0x188, 0, 0)
    
    if (wParam_5 == 0xffffffff)
        wParam_5 = 0
    
    wParam = wParam_5

LRESULT wParam_3 = SendMessageA(hWnd_2, 0x18e, 0, 0)
SendMessageA(hWnd_2, 0x184, 0, 0)

if (esi_13 != 0)
    int32_t i_1 = 0
    
    if (*esi_13 s> 0)
        int32_t ebx_2 = 0
        
        do
            int32_t* esi_15 = esi_13[2] + ebx_2
            sub_6efe80(&wParam_1, esi_15)
            LRESULT eax_52 = wParam_1
            LRESULT lParam_1 = &data_801800
            
            if (eax_52 != 0)
                lParam_1 = eax_52
            
            SendMessageA(hWnd_1, 0x19a, SendMessageA(hWnd_1, 0x180, 0, lParam_1), *esi_15)
            int32_t var_8_4 = 8
            
            if (data_cf65bc != 0)
                LRESULT wParam_6 = wParam_1
                
                if (wParam_6 != 0 && *wParam_6 != 0)
                    char* eax_54 = sub_63d4e0(&wParam_1)
                    int32_t temp2_1 = *(eax_54 + 4)
                    *(eax_54 + 4) -= 1
                    
                    if (temp2_1 == 1)
                        sub_64c080(eax_54, *(eax_54 + 0xc) + 0x10)
                        wParam_1 = &data_801800
            
            esi_13 = var_4c_1
            i_1 += 1
            int32_t var_8_5 = 0xffffffff
            ebx_2 += 0x10
        while (i_1 s< *esi_13)
    
    hWnd_2 = hWnd_1

SendMessageA(hWnd_2, 0x186, wParam, 0)
SendMessageA(hWnd_2, 0x197, wParam_3, 0)
InvalidateRect(data_147d470, nullptr, 0)
sub_6ef970()

if (sub_6ee800() != 0)
    sub_6ee970(&data_147d484, &data_147d480)

sub_6ef470()
sub_6ef5e0()
sub_6ef6d0()
sub_6ef870()
BOOL result = EnableWindow(GetDlgItem(data_147d470, 0x8e), zx.d(data_147d49c))
data_147d478 = 0xffffffff
fsbase->NtTib.ExceptionList = ExceptionList
return result
