// 函数: sub_4c0d50
// 地址: 0x4c0d50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = __ehhandler$?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$WriteOnlyArray@P$AAVString@Platform@@$00@3@U$AAGJPAP$AAUIWeakReference@23@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* arg_4
char* edi = arg_4
char* esi = *(edi + 4)
char* var_14
sub_63d720(&var_14, "btnBack")
char* eax_3 = var_14
char* const _Source = &data_801800
char* const ecx_1 = &data_801800

if (eax_3 != 0)
    ecx_1 = eax_3

int32_t ecx_3

while (true)
    char edx_1 = *ecx_1
    char temp0_1 = *esi
    bool c_1 = edx_1 u< temp0_1
    
    if (edx_1 == temp0_1)
        if (edx_1 == 0)
            ecx_3 = 0
            break
        
        edx_1 = ecx_1[1]
        char temp1_1 = esi[1]
        c_1 = edx_1 u< temp1_1
        
        if (edx_1 == temp1_1)
            ecx_1 = &ecx_1[2]
            esi = &esi[2]
            
            if (edx_1 != 0)
                continue
            
            ecx_3 = 0
            break
    
    ecx_3 = sbb.d(ecx_1, ecx_1, c_1) | 1
    break

if (ecx_3 != 0)
    arg_4:3.b = 0

if (ecx_3 == 0 || *(edi + 0x18) == 2)
    arg_4:3.b = 1

int32_t var_8_1 = 0

if (data_cf65bc != 0 && eax_3 != 0 && *eax_3 != 0)
    char* eax_4 = sub_63d4e0(&var_14)
    int32_t temp2_1 = *(eax_4 + 4)
    *(eax_4 + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)
        var_14 = &data_801800

int32_t var_8_2 = 0xffffffff

if (arg_4:3.b != 0)
    int32_t eax_5 = 4
    
    if (data_8db7f4 == 1)
        eax_5 = 0x10
    
    data_8db660 = eax_5
    eax_5.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_5

char* esi_1 = *(edi + 4)
sub_63d720(&arg_4, "btnLeft")
char* eax_6 = arg_4
char* const ecx_9 = &data_801800

if (eax_6 != 0)
    ecx_9 = eax_6

int32_t esi_3

while (true)
    char edx_4 = *ecx_9
    char temp3_1 = *esi_1
    bool c_2 = edx_4 u< temp3_1
    
    if (edx_4 == temp3_1)
        if (edx_4 == 0)
            esi_3 = 0
            break
        
        edx_4 = ecx_9[1]
        char temp4_1 = esi_1[1]
        c_2 = edx_4 u< temp4_1
        
        if (edx_4 == temp4_1)
            ecx_9 = &ecx_9[2]
            esi_1 = &esi_1[2]
            
            if (edx_4 != 0)
                continue
            
            esi_3 = 0
            break
    
    esi_3 = sbb.d(esi_1, esi_1, c_2) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && eax_6 != 0 && *eax_6 != 0)
    char* eax_7 = sub_63d4e0(&arg_4)
    int32_t temp5_1 = *(eax_7 + 4)
    *(eax_7 + 4) -= 1
    
    if (temp5_1 == 1)
        sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
        arg_4 = &data_801800

int32_t var_8_4 = 0xffffffff
char* eax_25
int32_t ecx_12
int32_t edx_8

if (esi_3 != 0)
    char* esi_4 = *(edi + 4)
    sub_63d720(&arg_4, "btnRight")
    char* eax_8 = arg_4
    char* const ecx_14 = &data_801800
    
    if (eax_8 != 0)
        ecx_14 = eax_8
    
    int32_t esi_6
    
    while (true)
        char edx_9 = *ecx_14
        char temp6_1 = *esi_4
        bool c_3 = edx_9 u< temp6_1
        
        if (edx_9 == temp6_1)
            if (edx_9 == 0)
                esi_6 = 0
                break
            
            edx_9 = ecx_14[1]
            char temp7_1 = esi_4[1]
            c_3 = edx_9 u< temp7_1
            
            if (edx_9 == temp7_1)
                ecx_14 = &ecx_14[2]
                esi_4 = &esi_4[2]
                
                if (edx_9 != 0)
                    continue
                
                esi_6 = 0
                break
        
        esi_6 = sbb.d(esi_4, esi_4, c_3) | 1
        break
    
    int32_t var_8_5 = 2
    
    if (data_cf65bc != 0 && eax_8 != 0 && *eax_8 != 0)
        char* eax_9 = sub_63d4e0(&arg_4)
        int32_t temp8_1 = *(eax_9 + 4)
        *(eax_9 + 4) -= 1
        
        if (temp8_1 == 1)
            sub_64c080(eax_9, *(eax_9 + 0xc) + 0x10)
            arg_4 = &data_801800
    
    int32_t var_8_6 = 0xffffffff
    
    if (esi_6 != 0)
        char* esi_7 = *(edi + 4)
        sub_63d720(&arg_4, "btn_tabFriends")
        char* eax_10 = arg_4
        char* const ecx_18 = &data_801800
        
        if (eax_10 != 0)
            ecx_18 = eax_10
        
        int32_t esi_9
        
        while (true)
            char edx_13 = *ecx_18
            char temp9_1 = *esi_7
            bool c_4 = edx_13 u< temp9_1
            
            if (edx_13 == temp9_1)
                if (edx_13 == 0)
                    esi_9 = 0
                    break
                
                edx_13 = ecx_18[1]
                char temp10_1 = esi_7[1]
                c_4 = edx_13 u< temp10_1
                
                if (edx_13 == temp10_1)
                    ecx_18 = &ecx_18[2]
                    esi_7 = &esi_7[2]
                    
                    if (edx_13 != 0)
                        continue
                    
                    esi_9 = 0
                    break
            
            esi_9 = sbb.d(esi_7, esi_7, c_4) | 1
            break
        
        int32_t var_8_7 = 3
        
        if (data_cf65bc != 0 && eax_10 != 0 && *eax_10 != 0)
            char* eax_11 = sub_63d4e0(&arg_4)
            int32_t temp11_1 = *(eax_11 + 4)
            *(eax_11 + 4) -= 1
            
            if (temp11_1 == 1)
                sub_64c080(eax_11, *(eax_11 + 0xc) + 0x10)
                arg_4 = &data_801800
        
        int32_t var_8_8 = 0xffffffff
        
        if (esi_9 != 0)
            char* esi_10 = *(edi + 4)
            sub_63d720(&arg_4, "btn_tabPending")
            char* eax_12 = arg_4
            char* const ecx_22 = &data_801800
            
            if (eax_12 != 0)
                ecx_22 = eax_12
            
            int32_t esi_12
            
            while (true)
                char edx_16 = *ecx_22
                char temp12_1 = *esi_10
                bool c_5 = edx_16 u< temp12_1
                
                if (edx_16 == temp12_1)
                    if (edx_16 == 0)
                        esi_12 = 0
                        break
                    
                    edx_16 = ecx_22[1]
                    char temp13_1 = esi_10[1]
                    c_5 = edx_16 u< temp13_1
                    
                    if (edx_16 == temp13_1)
                        ecx_22 = &ecx_22[2]
                        esi_10 = &esi_10[2]
                        
                        if (edx_16 != 0)
                            continue
                        
                        esi_12 = 0
                        break
                
                esi_12 = sbb.d(esi_10, esi_10, c_5) | 1
                break
            
            int32_t var_8_9 = 4
            
            if (data_cf65bc != 0 && eax_12 != 0 && *eax_12 != 0)
                char* eax_13 = sub_63d4e0(&arg_4)
                int32_t temp14_1 = *(eax_13 + 4)
                *(eax_13 + 4) -= 1
                
                if (temp14_1 == 1)
                    sub_64c080(eax_13, *(eax_13 + 0xc) + 0x10)
                    arg_4 = &data_801800
            
            int32_t var_8_10 = 0xffffffff
            
            if (esi_12 == 0)
            label_4c1e16:
                data_8db7f8 = 1
                ecx_12 = 1
                goto label_4c1e25
            
            char* esi_13 = *(edi + 4)
            sub_63d720(&arg_4, "btn_togglePendingRejects")
            char* eax_14 = arg_4
            char* const ecx_26 = &data_801800
            
            if (eax_14 != 0)
                ecx_26 = eax_14
            
            int32_t esi_15
            
            while (true)
                char edx_19 = *ecx_26
                char temp15_1 = *esi_13
                bool c_6 = edx_19 u< temp15_1
                
                if (edx_19 == temp15_1)
                    if (edx_19 == 0)
                        esi_15 = 0
                        break
                    
                    edx_19 = ecx_26[1]
                    char temp16_1 = esi_13[1]
                    c_6 = edx_19 u< temp16_1
                    
                    if (edx_19 == temp16_1)
                        ecx_26 = &ecx_26[2]
                        esi_13 = &esi_13[2]
                        
                        if (edx_19 != 0)
                            continue
                        
                        esi_15 = 0
                        break
                
                esi_15 = sbb.d(esi_13, esi_13, c_6) | 1
                break
            
            int32_t var_8_11 = 5
            
            if (data_cf65bc != 0 && eax_14 != 0 && *eax_14 != 0)
                char* eax_15 = sub_63d4e0(&arg_4)
                int32_t temp17_1 = *(eax_15 + 4)
                *(eax_15 + 4) -= 1
                
                if (temp17_1 == 1)
                    sub_64c080(eax_15, *(eax_15 + 0xc) + 0x10)
                    arg_4 = &data_801800
            
            int32_t var_8_12 = 0xffffffff
            
            if (esi_15 == 0)
                data_8db7f8 = 2
                ecx_12 = esi_15 + 2
                goto label_4c1e25
            
            char* esi_16 = *(edi + 4)
            sub_63d720(&arg_4, "btn_togglePendingPending")
            char* eax_16 = arg_4
            char* const ecx_30 = &data_801800
            
            if (eax_16 != 0)
                ecx_30 = eax_16
            
            int32_t esi_18
            
            while (true)
                char edx_22 = *ecx_30
                char temp18_1 = *esi_16
                bool c_7 = edx_22 u< temp18_1
                
                if (edx_22 == temp18_1)
                    if (edx_22 == 0)
                        esi_18 = 0
                        break
                    
                    edx_22 = ecx_30[1]
                    char temp19_1 = esi_16[1]
                    c_7 = edx_22 u< temp19_1
                    
                    if (edx_22 == temp19_1)
                        ecx_30 = &ecx_30[2]
                        esi_16 = &esi_16[2]
                        
                        if (edx_22 != 0)
                            continue
                        
                        esi_18 = 0
                        break
                
                esi_18 = sbb.d(esi_16, esi_16, c_7) | 1
                break
            
            int32_t var_8_13 = 6
            
            if (data_cf65bc != 0 && eax_16 != 0 && *eax_16 != 0)
                char* eax_17 = sub_63d4e0(&arg_4)
                int32_t temp20_1 = *(eax_17 + 4)
                *(eax_17 + 4) -= 1
                
                if (temp20_1 == 1)
                    sub_64c080(eax_17, *(eax_17 + 0xc) + 0x10)
                    arg_4 = &data_801800
            
            int32_t var_8_14 = 0xffffffff
            
            if (esi_18 == 0)
                goto label_4c1e16
            
            char* esi_19 = *(edi + 4)
            sub_63d720(&arg_4, "btn_tabBlocks")
            char* eax_18 = arg_4
            char* const ecx_34 = &data_801800
            
            if (eax_18 != 0)
                ecx_34 = eax_18
            
            int32_t esi_21
            
            while (true)
                char edx_25 = *ecx_34
                char temp21_1 = *esi_19
                bool c_8 = edx_25 u< temp21_1
                
                if (edx_25 == temp21_1)
                    if (edx_25 == 0)
                        esi_21 = 0
                        break
                    
                    edx_25 = ecx_34[1]
                    char temp22_1 = esi_19[1]
                    c_8 = edx_25 u< temp22_1
                    
                    if (edx_25 == temp22_1)
                        ecx_34 = &ecx_34[2]
                        esi_19 = &esi_19[2]
                        
                        if (edx_25 != 0)
                            continue
                        
                        esi_21 = 0
                        break
                
                esi_21 = sbb.d(esi_19, esi_19, c_8) | 1
                break
            
            int32_t var_8_15 = 7
            
            if (data_cf65bc != 0 && eax_18 != 0 && *eax_18 != 0)
                char* eax_19 = sub_63d4e0(&arg_4)
                int32_t temp23_1 = *(eax_19 + 4)
                *(eax_19 + 4) -= 1
                
                if (temp23_1 == 1)
                    sub_64c080(eax_19, *(eax_19 + 0xc) + 0x10)
                    arg_4 = &data_801800
            
            int32_t var_8_16 = 0xffffffff
            
            if (esi_21 == 0)
                data_8db7f8 = 3
                ecx_12 = esi_21 + 3
                goto label_4c1e25
            
            char* esi_22 = *(edi + 4)
            sub_63d720(&arg_4, "btnFriendCopy")
            char* eax_20 = arg_4
            char* const ecx_38 = &data_801800
            
            if (eax_20 != 0)
                ecx_38 = eax_20
            
            int32_t esi_24
            
            while (true)
                char edx_28 = *ecx_38
                char temp24_1 = *esi_22
                bool c_9 = edx_28 u< temp24_1
                
                if (edx_28 == temp24_1)
                    if (edx_28 == 0)
                        esi_24 = 0
                        break
                    
                    edx_28 = ecx_38[1]
                    char temp25_1 = esi_22[1]
                    c_9 = edx_28 u< temp25_1
                    
                    if (edx_28 == temp25_1)
                        ecx_38 = &ecx_38[2]
                        esi_22 = &esi_22[2]
                        
                        if (edx_28 != 0)
                            continue
                        
                        esi_24 = 0
                        break
                
                esi_24 = sbb.d(esi_22, esi_22, c_9) | 1
                break
            
            int32_t var_8_17 = 8
            
            if (data_cf65bc != 0 && eax_20 != 0 && *eax_20 != 0)
                char* eax_21 = sub_63d4e0(&arg_4)
                int32_t temp26_1 = *(eax_21 + 4)
                *(eax_21 + 4) -= 1
                
                if (temp26_1 == 1)
                    sub_64c080(eax_21, *(eax_21 + 0xc) + 0x10)
                    arg_4 = &data_801800
            
            int32_t var_8_18 = 0xffffffff
            
            if (esi_24 == 0)
                char* _Source_1 = *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x4254)
                
                if (_Source_1 != 0)
                    _Source = _Source_1
                
                char* const _Source_3 = _Source
                void* ecx_43 = &_Source_3[1]
                
                do
                    _Source_1.b = *_Source_3
                    _Source_3 = &_Source_3[1]
                while (_Source_1.b != 0)
                
                HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, _Source_3 - ecx_43 + 1)
                memcpy(GlobalLock(hMem), _Source, _Source_3 - ecx_43 + 1)
                GlobalUnlock(hMem)
                OpenClipboard(nullptr)
                EmptyClipboard()
                SetClipboardData(1, hMem)
                CloseClipboard()
                BOOL eax_24
                eax_24.b = 0
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_24
            
            char* esi_27 = *(edi + 4)
            sub_63d720(&arg_4, "btnFriend")
            eax_25 = arg_4
            char* const ecx_47 = &data_801800
            
            if (eax_25 != 0)
                ecx_47 = eax_25
            
            int32_t esi_29
            
            while (true)
                char edx_31 = *ecx_47
                char temp27_1 = *esi_27
                bool c_10 = edx_31 u< temp27_1
                
                if (edx_31 == temp27_1)
                    if (edx_31 == 0)
                        esi_29 = 0
                        break
                    
                    edx_31 = ecx_47[1]
                    char temp28_1 = esi_27[1]
                    c_10 = edx_31 u< temp28_1
                    
                    if (edx_31 == temp28_1)
                        ecx_47 = &ecx_47[2]
                        esi_27 = &esi_27[2]
                        
                        if (edx_31 != 0)
                            continue
                        
                        esi_29 = 0
                        break
                
                esi_29 = sbb.d(esi_27, esi_27, c_10) | 1
                break
            
            int32_t var_8_19 = 9
            
            if (data_cf65bc != 0 && eax_25 != 0 && *eax_25 != 0)
                eax_25 = sub_63d4e0(&arg_4)
                int32_t temp29_1 = *(eax_25 + 4)
                *(eax_25 + 4) -= 1
                
                if (temp29_1 == 1)
                    eax_25 = sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
                    arg_4 = &data_801800
            
            int32_t var_8_20 = 0xffffffff
            char* var_24
            char* eax_26
            bool cond:4_1
            
            if (esi_29 != 0)
                char* esi_33 = *(edi + 4)
                sub_63d720(&arg_4, "btnAccept")
                char* eax_34 = arg_4
                char* ecx_58 = &data_801800
                
                if (eax_34 != 0)
                    ecx_58 = eax_34
                
                int32_t esi_35
                
                while (true)
                    char edx_37 = *ecx_58
                    char temp30_1 = *esi_33
                    bool c_12 = edx_37 u< temp30_1
                    
                    if (edx_37 == temp30_1)
                        if (edx_37 == 0)
                            esi_35 = 0
                            break
                        
                        edx_37 = ecx_58[1]
                        char temp31_1 = esi_33[1]
                        c_12 = edx_37 u< temp31_1
                        
                        if (edx_37 == temp31_1)
                            ecx_58 = &ecx_58[2]
                            esi_33 = &esi_33[2]
                            
                            if (edx_37 != 0)
                                continue
                            
                            esi_35 = 0
                            break
                    
                    esi_35 = sbb.d(esi_33, esi_33, c_12) | 1
                    break
                
                int32_t var_8_23 = 0xc
                
                if (data_cf65bc != 0 && eax_34 != 0 && *eax_34 != 0)
                    eax_34 = sub_63d4e0(&arg_4)
                    int32_t temp34_1 = *(eax_34 + 4)
                    *(eax_34 + 4) -= 1
                    
                    if (temp34_1 == 1)
                        eax_34 = sub_64c080(eax_34, *(eax_34 + 0xc) + 0x10)
                        arg_4 = &data_801800
                
                int32_t var_8_24 = 0xffffffff
                
                if (esi_35 == 0)
                    eax_26 = sub_4c0cc0(eax_34, data_8db7fc, data_8db7f8, *(edi + 8))
                    int32_t ecx_62 = data_cc8d5c
                    
                    if (ecx_62 == 0)
                        goto label_4c1e59
                    
                    sub_4b40b0(*((eax_26 << 5) + ecx_62 + 0x2c), esi_35 + 1)
                    void* eax_36
                    eax_36.b = 0
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_36
                
                char* esi_36 = *(edi + 4)
                sub_63d720(&arg_4, "btnTrash")
                eax_25 = arg_4
                char* ecx_67 = &data_801800
                
                if (eax_25 != 0)
                    ecx_67 = eax_25
                
                int32_t esi_38
                
                while (true)
                    char edx_42 = *ecx_67
                    char temp35_1 = *esi_36
                    bool c_13 = edx_42 u< temp35_1
                    
                    if (edx_42 == temp35_1)
                        if (edx_42 == 0)
                            esi_38 = 0
                            break
                        
                        edx_42 = ecx_67[1]
                        char temp36_1 = esi_36[1]
                        c_13 = edx_42 u< temp36_1
                        
                        if (edx_42 == temp36_1)
                            ecx_67 = &ecx_67[2]
                            esi_36 = &esi_36[2]
                            
                            if (edx_42 != 0)
                                continue
                            
                            esi_38 = 0
                            break
                    
                    esi_38 = sbb.d(esi_36, esi_36, c_13) | 1
                    break
                
                int32_t var_8_25 = 0xd
                
                if (data_cf65bc != 0 && eax_25 != 0 && *eax_25 != 0)
                    eax_25 = sub_63d4e0(&arg_4)
                    int32_t temp37_1 = *(eax_25 + 4)
                    *(eax_25 + 4) -= 1
                    
                    if (temp37_1 == 1)
                        eax_25 = sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
                        arg_4 = &data_801800
                
                int32_t var_8_26 = 0xffffffff
                
                if (esi_38 == 0)
                    eax_26 = sub_4c0cc0(eax_25, data_8db7fc, data_8db7f8, *(edi + 8))
                    char* ecx_71 = data_cc8d5c
                    var_24 = ecx_71
                    
                    if (ecx_71 == 0)
                    label_4c1e59:
                        sub_63b870(eax_26, &data_801800, "gClient", 
                            "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp", 0x7b, "GetClient")
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    int32_t edi_5 = eax_26 << 5
                    data_8db804 = *(edi_5 + ecx_71 + 0x2c)
                    char* esi_39 = *(edi_5 + ecx_71 + 0x30)
                    arg_4 = esi_39
                    
                    if (esi_39 != 0 && *esi_39 != 0)
                        char* eax_38 = sub_63d4e0(&arg_4)
                        ecx_71 = var_24
                        *(eax_38 + 4) += 1
                    
                    int32_t var_8_27 = 0xe
                    int32_t eax_39 = data_8db7f8
                    
                    if (eax_39 u> 3)
                        sub_63b870(eax_39, &data_801800, "Halt", 
                            "C:\x\ax2017\Jams\Shared\TggGame\code\GameDialogs.cpp", 0x12d7, 
                            "FriendsClick")
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    char* var_20
                    char* var_1c
                    char* var_18
                    char** ecx_94
                    
                    switch (eax_39)
                        case 0
                            var_18 = &data_801800
                            var_14 = &data_801800
                            var_8_27.b = 0x10
                            char** ecx_73 = &var_1c
                            
                            if (*(edi_5 + ecx_71 + 0x38) != 2)
                                sub_4d47c0(ecx_73, "dom_msg_remove_friend_header")
                                var_8_27.b = 0x15
                                sub_63d850(&var_18, &var_1c)
                                var_8_27.b = 0x16
                                
                                if (data_cf65bc != 0)
                                    char* eax_44 = var_1c
                                    
                                    if (eax_44 != 0 && *eax_44 != 0)
                                        char* eax_45 = sub_63d4e0(&var_1c)
                                        int32_t temp41_1 = *(eax_45 + 4)
                                        *(eax_45 + 4) -= 1
                                        
                                        if (temp41_1 == 1)
                                            sub_64c080(eax_45, *(eax_45 + 0xc) + 0x10)
                                
                                var_8_27.b = 0x10
                                var_8_27.b = 0x17
                                sub_63d850(&var_14, 
                                    sub_4d48c0(&arg_4, "dom_msg_remove_friend_body", &var_24, 
                                        "[username]", &arg_4))
                                var_8_27.b = 0x18
                            else
                                sub_4d47c0(ecx_73, "dom_msg_remove_pending_friend_header")
                                var_8_27.b = 0x11
                                sub_63d850(&var_18, &var_1c)
                                var_8_27.b = 0x12
                                
                                if (data_cf65bc != 0)
                                    char* eax_40 = var_1c
                                    
                                    if (eax_40 != 0 && *eax_40 != 0)
                                        char* eax_41 = sub_63d4e0(&var_1c)
                                        int32_t temp42_1 = *(eax_41 + 4)
                                        *(eax_41 + 4) -= 1
                                        
                                        if (temp42_1 == 1)
                                            sub_64c080(eax_41, *(eax_41 + 0xc) + 0x10)
                                
                                var_8_27.b = 0x10
                                var_8_27.b = 0x13
                                sub_63d850(&var_14, 
                                    sub_4d48c0(&arg_4, "dom_msg_remove_pending_friend_body", 
                                        &var_24, "[username]", &arg_4))
                                var_8_27.b = 0x14
                            
                            if (data_cf65bc != 0)
                                char* eax_48 = var_24
                                
                                if (eax_48 != 0 && *eax_48 != 0)
                                    char* eax_49 = sub_63d4e0(&var_24)
                                    int32_t temp49_1 = *(eax_49 + 4)
                                    *(eax_49 + 4) -= 1
                                    
                                    if (temp49_1 == 1)
                                        sub_64c080(eax_49, *(eax_49 + 0xc) + 0x10)
                            
                            var_8_27.b = 0x10
                            sub_63d720(&var_20, &data_801800)
                            var_8_27.b = 0x19
                            sub_63d720(&var_1c, &data_801800)
                            var_8_27.b = 0x1a
                            data_8db6b0 = 0x20
                            sub_63d850(&data_8db750, &var_18)
                            sub_63d850(&data_8db754, &var_14)
                            sub_63d850(&data_8db758, &var_1c)
                            sub_63d850(&data_8db75c, &var_20)
                            data_8db760 = sub_4c1f20
                            data_8db764 = 0
                            var_8_27.b = 0x1b
                            
                            if (data_cf65bc != 0)
                                eax_25 = var_1c
                                
                                if (eax_25 != 0 && *eax_25 != 0)
                                    eax_25 = sub_63d4e0(&var_1c)
                                    int32_t temp50_1 = *(eax_25 + 4)
                                    *(eax_25 + 4) -= 1
                                    
                                    if (temp50_1 == 1)
                                        sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
                            
                            var_8_27.b = 0x1c
                            
                            if (data_cf65bc != 0)
                                eax_25 = var_20
                                
                                if (eax_25 != 0 && *eax_25 != 0)
                                    eax_25 = sub_63d4e0(&var_20)
                                    int32_t temp52_1 = *(eax_25 + 4)
                                    *(eax_25 + 4) -= 1
                                    
                                    if (temp52_1 == 1)
                                        sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
                            
                            var_8_27.b = 0x1d
                            
                            if (data_cf65bc != 0)
                                eax_25 = var_14
                                
                                if (eax_25 != 0 && *eax_25 != 0)
                                    eax_25 = sub_63d4e0(&var_14)
                                    int32_t temp53_1 = *(eax_25 + 4)
                                    *(eax_25 + 4) -= 1
                                    
                                    if (temp53_1 == 1)
                                        sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
                            
                            var_8_27.b = 0x1e
                            
                            if (data_cf65bc != 0)
                                eax_25 = var_18
                                
                                if (eax_25 != 0 && *eax_25 != 0)
                                    ecx_94 = &var_18
                                    goto label_4c1db6
                        case 1
                            sub_4d47c0(&var_14, "dom_msg_reject_friend_header")
                            var_8_27.b = 0x1f
                            sub_4d48c0(&arg_4, "dom_msg_reject_friend_body", &var_18, "[username]", 
                                &arg_4)
                            var_8_27.b = 0x20
                            sub_63d720(&var_1c, &data_801800)
                            var_8_27.b = 0x21
                            sub_63d720(&var_20, &data_801800)
                            var_8_27.b = 0x22
                            data_8db6b0 = 0x20
                            sub_63d850(&data_8db750, &var_14)
                            sub_63d850(&data_8db754, &var_18)
                            sub_63d850(&data_8db758, &var_20)
                            sub_63d850(&data_8db75c, &var_1c)
                            data_8db760 = sub_4c1f30
                            data_8db764 = 0
                            var_8_27.b = 0x23
                            
                            if (data_cf65bc != 0)
                                eax_25 = var_20
                                
                                if (eax_25 != 0 && *eax_25 != 0)
                                    eax_25 = sub_63d4e0(&var_20)
                                    int32_t temp38_1 = *(eax_25 + 4)
                                    *(eax_25 + 4) -= 1
                                    
                                    if (temp38_1 == 1)
                                        sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
                            
                            var_8_27.b = 0x24
                            
                            if (data_cf65bc != 0)
                                eax_25 = var_1c
                                
                                if (eax_25 != 0 && *eax_25 != 0)
                                    eax_25 = sub_63d4e0(&var_1c)
                                    int32_t temp43_1 = *(eax_25 + 4)
                                    *(eax_25 + 4) -= 1
                                    
                                    if (temp43_1 == 1)
                                        sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
                            
                            var_8_27.b = 0x25
                            
                            if (data_cf65bc != 0)
                                eax_25 = var_18
                                
                                if (eax_25 != 0 && *eax_25 != 0)
                                    eax_25 = sub_63d4e0(&var_18)
                                    int32_t temp46_1 = *(eax_25 + 4)
                                    *(eax_25 + 4) -= 1
                                    
                                    if (temp46_1 == 1)
                                        sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
                                        var_18 = &data_801800
                            
                            var_8_27.b = 0x26
                        label_4c1ae2:
                            
                            if (data_cf65bc != 0)
                                eax_25 = var_14
                                
                                if (eax_25 != 0 && *eax_25 != 0)
                                    ecx_94 = &var_14
                                    goto label_4c1db6
                        case 2
                            sub_4d47c0(&var_14, "dom_msg_unreject_friend_header")
                            var_8_27.b = 0x27
                            sub_4d48c0(&arg_4, "dom_msg_unreject_friend_body", &var_18, 
                                "[username]", &arg_4)
                            var_8_27.b = 0x28
                            sub_63d720(&var_1c, &data_801800)
                            var_8_27.b = 0x29
                            sub_63d720(&var_20, &data_801800)
                            var_8_27.b = 0x2a
                            data_8db6b0 = 0x20
                            sub_63d850(&data_8db750, &var_14)
                            sub_63d850(&data_8db754, &var_18)
                            sub_63d850(&data_8db758, &var_20)
                            sub_63d850(&data_8db75c, &var_1c)
                            data_8db760 = sub_4c1f20
                            data_8db764 = 0
                            var_8_27.b = 0x2b
                            
                            if (data_cf65bc != 0)
                                eax_25 = var_20
                                
                                if (eax_25 != 0 && *eax_25 != 0)
                                    eax_25 = sub_63d4e0(&var_20)
                                    int32_t temp39_1 = *(eax_25 + 4)
                                    *(eax_25 + 4) -= 1
                                    
                                    if (temp39_1 == 1)
                                        sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
                            
                            var_8_27.b = 0x2c
                            
                            if (data_cf65bc != 0)
                                eax_25 = var_1c
                                
                                if (eax_25 != 0 && *eax_25 != 0)
                                    eax_25 = sub_63d4e0(&var_1c)
                                    int32_t temp44_1 = *(eax_25 + 4)
                                    *(eax_25 + 4) -= 1
                                    
                                    if (temp44_1 == 1)
                                        sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
                            
                            var_8_27.b = 0x2d
                            
                            if (data_cf65bc != 0)
                                eax_25 = var_18
                                
                                if (eax_25 != 0 && *eax_25 != 0)
                                    eax_25 = sub_63d4e0(&var_18)
                                    int32_t temp47_1 = *(eax_25 + 4)
                                    *(eax_25 + 4) -= 1
                                    
                                    if (temp47_1 == 1)
                                        sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
                                        var_18 = &data_801800
                            
                            var_8_27.b = 0x2e
                            goto label_4c1ae2
                        case 3
                            sub_4d47c0(&var_24, "dom_msg_unblock_header")
                            var_8_27.b = 0x2f
                            sub_4d48c0(&arg_4, "dom_msg_unblock_body", &var_18, "[username]", 
                                &arg_4)
                            var_8_27.b = 0x30
                            sub_63d720(&var_1c, &data_801800)
                            var_8_27.b = 0x31
                            sub_63d720(&var_20, &data_801800)
                            var_8_27.b = 0x32
                            data_8db6b0 = 0x20
                            sub_63d850(&data_8db750, &var_24)
                            sub_63d850(&data_8db754, &var_18)
                            sub_63d850(&data_8db758, &var_20)
                            sub_63d850(&data_8db75c, &var_1c)
                            data_8db760 = sub_4c1f40
                            data_8db764 = 0
                            var_8_27.b = 0x33
                            
                            if (data_cf65bc != 0)
                                eax_25 = var_20
                                
                                if (eax_25 != 0 && *eax_25 != 0)
                                    eax_25 = sub_63d4e0(&var_20)
                                    int32_t temp40_1 = *(eax_25 + 4)
                                    *(eax_25 + 4) -= 1
                                    
                                    if (temp40_1 == 1)
                                        sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
                            
                            var_8_27.b = 0x34
                            
                            if (data_cf65bc != 0)
                                eax_25 = var_1c
                                
                                if (eax_25 != 0 && *eax_25 != 0)
                                    eax_25 = sub_63d4e0(&var_1c)
                                    int32_t temp45_1 = *(eax_25 + 4)
                                    *(eax_25 + 4) -= 1
                                    
                                    if (temp45_1 == 1)
                                        sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
                            
                            var_8_27.b = 0x35
                            
                            if (data_cf65bc != 0)
                                eax_25 = var_18
                                
                                if (eax_25 != 0 && *eax_25 != 0)
                                    eax_25 = sub_63d4e0(&var_18)
                                    int32_t temp48_1 = *(eax_25 + 4)
                                    *(eax_25 + 4) -= 1
                                    
                                    if (temp48_1 == 1)
                                        sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
                                        var_18 = &data_801800
                            
                            var_8_27.b = 0x36
                            
                            if (data_cf65bc != 0)
                                eax_25 = var_24
                                
                                if (eax_25 != 0 && *eax_25 != 0)
                                    ecx_94 = &var_24
                                label_4c1db6:
                                    eax_25 = sub_63d4e0(ecx_94)
                                    int32_t temp51_1 = *(eax_25 + 4)
                                    *(eax_25 + 4) -= 1
                                    
                                    if (temp51_1 == 1)
                                        sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
                    
                    int32_t var_8_28 = 0x37
                    
                    if (data_cf65bc != 0 && esi_39 != 0)
                        cond:4_1 = *esi_39 == 0
                        goto label_4c1de5
            else
                int32_t edx_34 = data_8db7fc
                
                if (edx_34 == 0 && *(edi + 8) == edx_34)
                    sub_63d720(&arg_4, &data_801800)
                    int32_t var_8_21 = 0xa
                    data_8db6b0 = 0x22
                    data_8db768 = &data_8dbc6c
                    data_8db770 = sub_4c1eb0
                    data_8db774 = sub_4bfb50
                    sub_63d850(&data_8db76c, &arg_4)
                    data_8db778 = 4
                    int32_t var_8_22 = 0xb
                    
                    if (data_cf65bc != esi_29)
                        eax_25 = arg_4
                        
                        if (eax_25 != 0)
                            cond:4_1 = *eax_25 == 0
                        label_4c1de5:
                            
                            if (not(cond:4_1))
                                eax_25 = sub_63d4e0(&arg_4)
                                int32_t temp33_1 = *(eax_25 + 4)
                                *(eax_25 + 4) -= 1
                                
                                if (temp33_1 == 1)
                                    sub_64c080(eax_25, *(eax_25 + 0xc) + 0x10)
                                    int32_t* eax_53
                                    eax_53.b = 0
                                    fsbase->NtTib.ExceptionList = ExceptionList
                                    return eax_53
                else if (data_8db7f4 == 1)
                    eax_26 = sub_4c0cc0(eax_25, edx_34, data_8db7f8, *(edi + 8))
                    char* esi_30 = data_cc8d5c
                    arg_4 = eax_26
                    var_24 = esi_30
                    
                    if (esi_30 == 0)
                        goto label_4c1e59
                    
                    void* eax_27 = sub_4bbdb0()
                    void* edi_2 = data_8dbf50 * 0x22c
                    int32_t edx_36 = arg_4 << 5
                    arg_4 = edx_36
                    void* edi_3 = edi_2 + eax_27
                    *(edi_3 + 0x50) = *(edx_36 + esi_30 + 0x34)
                    char* _Source_2 = *(edx_36 + esi_30 + 0x30)
                    
                    if (_Source_2 != 0)
                        _Source = _Source_2
                    
                    strncpy(edi_3 + 0x40, _Source, 0x10)
                    char* ebx = arg_4
                    *(edi_3 + 0x4f) = 0
                    char* esi_32 = var_24
                    *(edi_3 + 0x54) = 1
                    *(edi_3 + 0x58) = *(ebx + esi_32 + 0x2c)
                    void* eax_30 = sub_4b4000()
                    int32_t ecx_52 = *(eax_30 + 0x18)
                    int32_t eax_31 = *(eax_30 + 0x1c)
                    *(ebx + esi_32 + 0x40) = ecx_52 + 1
                    int32_t ecx_54 = *(ebx + esi_32 + 0x2c)
                    *(ebx + esi_32 + 0x44) = adc.d(eax_31, 0, ecx_52 u>= 0xffffffff)
                    sub_4b40b0(ecx_54, 6)
                    data_8db660 = 0x10
                    void* eax_33
                    eax_33.b = 0
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_33
        else
            data_8db7f8 = esi_9
            ecx_12 = 0
        label_4c1e25:
            data_8db7fc = 0
            sub_4c2ac0(ecx_12, 0)
    else
        ecx_12 = data_8db7f8
        edx_8 = data_8db7fc + 1
        data_8db7fc = edx_8
        sub_4c2ac0(ecx_12, edx_8)
else
    ecx_12 = data_8db7f8
    edx_8 = data_8db7fc - 1
    data_8db7fc = edx_8
    sub_4c2ac0(ecx_12, edx_8)
eax_25.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_25
