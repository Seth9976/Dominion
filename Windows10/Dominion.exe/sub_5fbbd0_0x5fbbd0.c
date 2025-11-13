// 函数: sub_5fbbd0
// 地址: 0x5fbbd0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76a680
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
__chkstk(0x997c)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_14 = eax_2
int32_t var_20 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* esi = arg1[1]
char* var_6658
sub_63d720(&var_6658, "btnBack")
char* eax_3 = var_6658
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

int32_t* ebx

if (ecx_3 == 0 || arg1[6] == 2)
    ebx.b = 1
else
    ebx.b = 0

int32_t var_8_1 = 0

if (data_cf65bc != 0 && eax_3 != 0 && *eax_3 != 0)
    char* eax_4 = sub_63d4e0(&var_6658)
    int32_t temp2_1 = *(eax_4 + 4)
    *(eax_4 + 4) -= 1
    
    if (temp2_1 == 1)
        sub_64c080(eax_4, *(eax_4 + 0xc) + 0x10)
        var_6658 = &data_801800

int32_t var_8_2 = 0xffffffff

if (ebx.b != 0)
    int32_t eax_5 = data_ccf6dc
    
    if (eax_5 == 2)
        data_8db6b0 = 0x7f1
        data_ccf6e0 = 0
    else if (eax_5 != 1)
        sub_4d46e0(7, 0)
    else
        data_8db6b0 = 0x7f1
        data_ccf6e0 = eax_5

char* esi_2 = arg1[1]
sub_63d720(&var_6658, "btn_sweep_all")
char* eax_6 = var_6658
char* const ecx_7 = &data_801800

if (eax_6 != 0)
    ecx_7 = eax_6

char* i_2

while (true)
    char edx_4 = *ecx_7
    char temp3_1 = *esi_2
    bool c_2 = edx_4 u< temp3_1
    
    if (edx_4 == temp3_1)
        if (edx_4 == 0)
            i_2 = nullptr
            break
        
        edx_4 = ecx_7[1]
        char temp4_1 = esi_2[1]
        c_2 = edx_4 u< temp4_1
        
        if (edx_4 == temp4_1)
            ecx_7 = &ecx_7[2]
            esi_2 = &esi_2[2]
            
            if (edx_4 != 0)
                continue
            
            i_2 = nullptr
            break
    
    i_2 = sbb.d(esi_2, esi_2, c_2) | 1
    break

int32_t var_8_3 = 1

if (data_cf65bc != 0 && eax_6 != 0 && *eax_6 != 0)
    char* eax_7 = sub_63d4e0(&var_6658)
    int32_t temp5_1 = *(eax_7 + 4)
    *(eax_7 + 4) -= 1
    
    if (temp5_1 == 1)
        sub_64c080(eax_7, *(eax_7 + 0xc) + 0x10)
        var_6658 = &data_801800

int32_t var_8_4 = 0xffffffff
void var_4cc4

if (i_2 == 0)
    int32_t eax_8 = data_ccf6dc
    void* var_6668
    void* var_6664
    
    if (eax_8 == 3)
        char* i_7 = data_8dbf64
        
        if (i_7 != 0)
            if (i_7 == 1)
                i_2 = i_7
                int128_t* const i = &data_77fea0
                var_6658 = i_2
                int128_t* const i_4 = &data_77fea0
                
                do
                    int32_t edi_1 = *i
                    
                    if (edi_1 != 2)
                        char eax_11 =
                            sub_5fb7d0(*(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x423c), edi_1)
                        void* eax_12
                        
                        if (edi_1 != 0x13)
                            void* ebx_1 = sub_4daf40(&var_6664, &var_6668)
                            int32_t esi_4 = 0
                            
                            if (ebx_1 s<= 0)
                            label_5fbe5d:
                                eax_12.b = 0
                            else
                                while (true)
                                    if (sub_4db700(*(var_6664 + (esi_4 << 2)), edi_1).b != 0)
                                        eax_12.b = 1
                                        break
                                    
                                    esi_4 += 1
                                    
                                    if (esi_4 s>= ebx_1)
                                        goto label_5fbe5d
                            
                            i = i_4
                            i_2 = var_6658
                        else
                            eax_12 = sub_4dada0()
                        
                        if (eax_12.b != 0)
                            if (eax_11 != 0 || i_2 == 0 || edi_1 == 0x13)
                                sub_5fb880(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x423c, edi_1)
                            else
                                i_2 -= 1
                                var_6658 = i_2
                    
                    i += 4
                    i_4 = i
                while (i != &data_77fee8)
            
            sub_61deb0()
        else
            *(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x423c) = i_2
            sub_61deb0()
        
        data_cc8dc8
        sub_4d8ad0(i_2)
    else if (eax_8 == 2 || eax_8 == 1)
        uint32_t eax_29 = data_8dbf64
        
        if (eax_29 == 0)
            int128_t* const i_1 = &data_77fea0
            int128_t* const i_5 = &data_77fea0
            
            do
                int32_t edi_3 = *i_1
                
                if (edi_3 == 0x13)
                    eax_29 = sub_4dada0()
                else if (edi_3 != 2)
                    uint32_t ebx_4 = sub_4daf40(&var_6664, &var_6668)
                    i_2 = nullptr
                    
                    if (ebx_4 s<= 0)
                    label_5fc0e9:
                        eax_29.b = 0
                    else
                        while (true)
                            if (sub_4db700(*(var_6664 + (i_2 << 2)), edi_3).b != 0)
                                eax_29.b = 1
                                break
                            
                            i_2 = &i_2[1]
                            
                            if (i_2 s>= ebx_4)
                                goto label_5fc0e9
                    
                    i_1 = i_5
                else
                    eax_29.b = 1
                
                if (eax_29.b != 0
                        && sub_5fb7d0(*(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x71e8), edi_3).b
                        == 0)
                    sub_5fb880(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x71e8, edi_3)
                
                i_1 += 4
                i_5 = i_1
            while (i_1 != &data_77fee8)
            
            data_cc8dc8
            sub_4d8ad0(i_2)
        else if (eax_29 == 1)
            char* ebx_5 = 4
            i_2 = &data_77fea0
            char* i_6 = &data_77fea0
            
            if (*(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x71e0) == 0)
                ebx_5 = 1
            
            var_6658 = ebx_5
            
            do
                int32_t edi_4 = *i_2
                
                if (edi_4 != 2)
                    if (sub_5fb7d0(*(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x71e8), edi_4) == 0
                            || ebx_5 == 0)
                        uint32_t eax_36
                        
                        if (edi_4 != 0x13)
                            uint32_t ebx_6 = sub_4daf40(&var_6664, &var_6668)
                            int32_t esi_9 = 0
                            
                            if (ebx_6 s<= 0)
                            label_5fc21d:
                                eax_36.b = 0
                            else
                                while (true)
                                    if (sub_4db700(*(var_6664 + (esi_9 << 2)), edi_4).b != 0)
                                        eax_36.b = 1
                                        break
                                    
                                    esi_9 += 1
                                    
                                    if (esi_9 s>= ebx_6)
                                        goto label_5fc21d
                            
                            ebx_5 = var_6658
                            i_2 = i_6
                        else
                        label_5fc1de:
                            eax_36 = sub_4dada0()
                        
                        if (eax_36.b != 0)
                            sub_5fb880(sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)) + 0x71e8, edi_4)
                    else
                        if (edi_4 == 0x13)
                            goto label_5fc1de
                        
                        ebx_5 -= 1
                        var_6658 = ebx_5
                else
                    ebx_5 -= 1
                    var_6658 = ebx_5
                
                i_2 = &i_2[4]
                i_6 = i_2
            while (i_2 != &data_77fee8)
            
            data_cc8dc8
            sub_4d8ad0(i_2)
    else
        int32_t eax_15 = data_8dbf64
        
        if (eax_15 == 0)
            void* eax_16 = sub_4bbdb0()
            *(eax_16 + 0x28)
            *(eax_16 + 0x30)
            void var_19a4
            memcpy(&var_19a4, sub_4deeb0(&var_4cc4), 0x1990)
            int128_t* const edi_2 = &data_77fea0
            
            while (true)
                void* esi_6 = *edi_2
                void var_fdc
                void* eax_18 = &var_fdc
                int32_t edx_12 = 0
                
                while (true)
                    if (*eax_18 == esi_6)
                        int32_t edx_13 = edx_12 * 2
                        int32_t var_fd4[0x7e]
                        var_fd0
                        
                        if (__aullshr(var_fd4[edx_13 * 2], *(&var_fd0 + (edx_13 << 3)), 0x20)
                                == 0xa)
                            break
                    else
                        edx_12 += 1
                        eax_18 += 0x10
                        
                        if (edx_12 s< 0x20)
                            continue
                    
                    if (sub_5fbb70(esi_6) != 0)
                        void var_ddc
                        void* var_24_2 = &var_ddc
                        sub_5fb990(&var_ddc, &var_fdc, sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)), esi_6)
                    
                    break
                
                edi_2 += 4
                
                if (edi_2 == &data_77fee8)
                    break
            
            sub_4e4cb0(eax_16)
        else if (eax_15 == 1)
            void* eax_23 = sub_4bbdb0()
            *(eax_23 + 0x28)
            *(eax_23 + 0x30)
            void var_3334
            memcpy(&var_3334, sub_4deeb0(&var_4cc4), 0x1990)
            
            for (int128_t* const i_3 = &data_77fea0; i_3 != &data_77fee8; i_3 += 4)
                void* esi_8 = *i_3
                void var_296c
                void* eax_25 = &var_296c
                
                for (int32_t j = 0; j s< 0x20; )
                    if (*eax_25 == esi_8)
                        int32_t edx_17 = j * 2
                        int32_t var_2964[0x7e]
                        var_2960
                        
                        if (__aullshr(var_2964[edx_17 * 2], *(&var_2960 + (edx_17 << 3)), 0x20)
                                == 0xa)
                            void var_276c
                            void* var_24_4 = &var_276c
                            sub_5fb990(&var_276c, &var_296c, sub_4d8f30(*(data_cc8dc8 + 0x1e1a4)), 
                                esi_8)
                        
                        break
                    
                    j += 1
                    eax_25 += 0x10
            
            sub_4e4cb0(eax_23)

int32_t* edi_6 = arg1
char* esi_10 = edi_6[1]
sub_63d720(&var_6658, "btn_store")
char* result = var_6658
char* const result_1 = &data_801800

if (result != 0)
    result_1 = result

int32_t esi_12

while (true)
    char edx_28 = *result_1
    char temp6_1 = *esi_10
    bool c_3 = edx_28 u< temp6_1
    
    if (edx_28 == temp6_1)
        if (edx_28 == 0)
            esi_12 = 0
            break
        
        edx_28 = result_1[1]
        char temp7_1 = esi_10[1]
        c_3 = edx_28 u< temp7_1
        
        if (edx_28 == temp7_1)
            result_1 = &result_1[2]
            esi_10 = &esi_10[2]
            
            if (edx_28 != 0)
                continue
            
            esi_12 = 0
            break
    
    esi_12 = sbb.d(esi_10, esi_10, c_3) | 1
    break

int32_t var_8_5 = 2

if (data_cf65bc != 0 && result != 0 && *result != 0)
    result = sub_63d4e0(&var_6658)
    int32_t temp8_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp8_1 == 1)
        result = sub_64c080(result, *(result + 0xc) + 0x10)
        var_6658 = &data_801800

int32_t var_8_6 = 0xffffffff
int32_t var_28_7
char const* const var_24_15
char* ecx_58

if (esi_12 == 0)
    int32_t ecx_57 = edi_6[2]
    
    if (ecx_57 s>= 0)
        if (ecx_57 u>= 0x12)
        label_5fcc0a:
            var_24_15 = "DomExpDefGetByIndex"
            var_28_7 = 0x118c
            ecx_58 = "i < ARRAYSIZE(DOM_EXP_DEFS)"
            goto label_5fcc1e
        
        int32_t esi_13 = *(ecx_57 * 0x1c + &data_77fca8)
        int32_t eax_41 = sub_4d46e0(7, 0)
        
        if (esi_13 != 0x13)
            int32_t eax_43
            int32_t edx_32
            eax_43, edx_32 = sub_4c9c50(eax_41, edi_6[2], 0, 0)
            int32_t ecx_59 = data_ccf6dc
            void* eax_44 = data_cc8d94
            
            if (ecx_59 == 2)
                if (eax_44 == 0)
                    eax_44 = sub_4acc60()
                    data_cc8d94 = eax_44
                
                data_cc8da0 = 0x13
                data_cc8da4 = 0x7f1
            else if (ecx_59 == 1)
                if (eax_44 == 0)
                    eax_44 = sub_4acc60()
                    data_cc8d94 = eax_44
                
                data_cc8da0 = 0x11
                data_cc8da4 = 0x7f1
            else if (ecx_59 != 3)
                if (eax_44 == 0)
                    eax_44 = sub_4acc60()
                    data_cc8d94 = eax_44
                
                data_cc8da0 = 0x10
                data_cc8da4 = 0
            else
                if (eax_44 == 0)
                    eax_44 = sub_4acc60()
                    data_cc8d94 = eax_44
                
                data_cc8da0 = 0x11
                data_cc8da4 = 0x7e1
            
            data_cc8d98 = eax_43
            data_cc8d9c = edx_32
            data_cc8d90 = 0
            sub_4add50(eax_44)
            edi_6 = arg1
            data_8db660 = 0x16
        else
            int32_t eax_42 = data_ccf6dc
            data_cc8d80 = 2
            data_8db660 = 0x15
            
            if (eax_42 == 2)
                data_cc8d84 = esi_13
                data_cc8d88 = 0x7f1
            else if (eax_42 != 1)
                data_cc8d84 = 0x10
                data_cc8d88 = 0
            else
                data_cc8d84 = 0x11
                data_cc8d88 = 0x7f1
        
        goto label_5fc4ad
    
label_5fc31b:
    var_24_15 = "DomExpDefGetByIndex"
    ecx_58 = "i >= 0"
    var_28_7 = 0x118b
label_5fcc1e:
    sub_63b870(result, &data_801800, ecx_58, "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp", 
        var_28_7, var_24_15)
    
    if (sub_63bc30() == 0)
        sub_63bb00()
        noreturn
    
    breakpoint

label_5fc4ad:
char* esi_15 = edi_6[1]
sub_63d720(&var_6658, "btn_1E_edit")
char* eax_45 = var_6658
char* const ecx_62 = &data_801800

if (eax_45 != 0)
    ecx_62 = eax_45

int32_t esi_17

while (true)
    char edx_33 = *ecx_62
    char temp9_1 = *esi_15
    bool c_4 = edx_33 u< temp9_1
    
    if (edx_33 == temp9_1)
        if (edx_33 == 0)
            esi_17 = 0
            break
        
        edx_33 = ecx_62[1]
        char temp10_1 = esi_15[1]
        c_4 = edx_33 u< temp10_1
        
        if (edx_33 == temp10_1)
            ecx_62 = &ecx_62[2]
            esi_15 = &esi_15[2]
            
            if (edx_33 != 0)
                continue
            
            esi_17 = 0
            break
    
    esi_17 = sbb.d(esi_15, esi_15, c_4) | 1
    break

int32_t var_8_7 = 3

if (data_cf65bc != 0 && eax_45 != 0 && *eax_45 != 0)
    char* eax_46 = sub_63d4e0(&var_6658)
    int32_t temp11_1 = *(eax_46 + 4)
    *(eax_46 + 4) -= 1
    
    if (temp11_1 == 1)
        sub_64c080(eax_46, *(eax_46 + 0xc) + 0x10)
        var_6658 = &data_801800

int32_t var_8_8 = 0xffffffff

if (esi_17 == 0)
    sub_67aca0(sub_64e7a0(*edi_6))
    data_8dbfa0 = 1
    data_8dbfa4 = edi_6[2]

char* esi_18 = edi_6[1]
sub_63d720(&var_6658, "btn_1st_only")
char* eax_49 = var_6658
char* const ecx_68 = &data_801800

if (eax_49 != 0)
    ecx_68 = eax_49

int32_t esi_20

while (true)
    char edx_36 = *ecx_68
    char temp12_1 = *esi_18
    bool c_5 = edx_36 u< temp12_1
    
    if (edx_36 == temp12_1)
        if (edx_36 == 0)
            esi_20 = 0
            break
        
        edx_36 = ecx_68[1]
        char temp13_1 = esi_18[1]
        c_5 = edx_36 u< temp13_1
        
        if (edx_36 == temp13_1)
            ecx_68 = &ecx_68[2]
            esi_18 = &esi_18[2]
            
            if (edx_36 != 0)
                continue
            
            esi_20 = 0
            break
    
    esi_20 = sbb.d(esi_18, esi_18, c_5) | 1
    break

int32_t var_8_9 = 4

if (data_cf65bc != 0 && eax_49 != 0 && *eax_49 != 0)
    eax_49 = sub_63d4e0(&var_6658)
    int32_t temp14_1 = *(eax_49 + 4)
    *(eax_49 + 4) -= 1
    
    if (temp14_1 == 1)
        eax_49 = sub_64c080(eax_49, *(eax_49 + 0xc) + 0x10)
        var_6658 = &data_801800

int32_t var_8_10 = 0xffffffff
void var_7ffc

if (esi_20 == 0)
    int32_t ecx_71 = data_c23bec
    
    if (ecx_71 != 0)
        eax_49 = zx.d(ecx_71.w)
        
        if (eax_49 u< data_c23bac)
            eax_49 = eax_49 * 0x18d0 + data_c23ba8
            
            if (*(eax_49 + 0x18c8) == ecx_71 && eax_49 != 0)
                eax_49[0x13c1] = 0
        
        data_c23bec = 0
    
    int32_t ecx_72 = data_8dbfa4
    int32_t var_28_8
    char const* const var_24_6
    char* ecx_73
    
    if (ecx_72 s< 0)
        var_24_6 = "DomExpDefGetByIndex"
        var_28_8 = 0x118b
        ecx_73 = "i >= 0"
    label_5fcb94:
        sub_63b870(eax_49, &data_801800, ecx_73, 
            "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp", var_28_8, var_24_6)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (ecx_72 u>= 0x12)
        var_24_6 = "DomExpDefGetByIndex"
        var_28_8 = 0x118c
        ecx_73 = "i < ARRAYSIZE(DOM_EXP_DEFS)"
        goto label_5fcb94
    
    int32_t edi_7 = *(ecx_72 * 0x1c + &data_77fca8)
    void* eax_53 = sub_4bbdb0()
    *(eax_53 + 0x28)
    *(eax_53 + 0x30)
    sub_5fbb10(memcpy(&var_4cc4, sub_4deeb0(&var_7ffc), 0x1990), edi_7, &var_4cc4, 0)
    sub_4e4cb0(eax_53)
    edi_6 = arg1

char* esi_22 = edi_6[1]
sub_63d720(&var_6658, "btn_2nd_only")
char* eax_56 = var_6658
char* const ecx_79 = &data_801800

if (eax_56 != 0)
    ecx_79 = eax_56

int32_t esi_24

while (true)
    char edx_41 = *ecx_79
    char temp15_1 = *esi_22
    bool c_6 = edx_41 u< temp15_1
    
    if (edx_41 == temp15_1)
        if (edx_41 == 0)
            esi_24 = 0
            break
        
        edx_41 = ecx_79[1]
        char temp16_1 = esi_22[1]
        c_6 = edx_41 u< temp16_1
        
        if (edx_41 == temp16_1)
            ecx_79 = &ecx_79[2]
            esi_22 = &esi_22[2]
            
            if (edx_41 != 0)
                continue
            
            esi_24 = 0
            break
    
    esi_24 = sbb.d(esi_22, esi_22, c_6) | 1
    break

int32_t var_8_11 = 5

if (data_cf65bc != 0 && eax_56 != 0 && *eax_56 != 0)
    eax_56 = sub_63d4e0(&var_6658)
    int32_t temp17_1 = *(eax_56 + 4)
    *(eax_56 + 4) -= 1
    
    if (temp17_1 == 1)
        eax_56 = sub_64c080(eax_56, *(eax_56 + 0xc) + 0x10)
        var_6658 = &data_801800

int32_t var_8_12 = 0xffffffff

if (esi_24 == 0)
    int32_t ecx_82 = data_c23bec
    
    if (ecx_82 != 0)
        eax_56 = zx.d(ecx_82.w)
        
        if (eax_56 u< data_c23bac)
            eax_56 = eax_56 * 0x18d0 + data_c23ba8
            
            if (*(eax_56 + 0x18c8) == ecx_82 && eax_56 != 0)
                eax_56[0x13c1] = 0
        
        data_c23bec = 0
    
    int32_t ecx_83 = data_8dbfa4
    int32_t var_28_11
    char const* const var_24_9
    char* ecx_84
    
    if (ecx_83 s< 0)
        var_24_9 = "DomExpDefGetByIndex"
        var_28_11 = 0x118b
        ecx_84 = "i >= 0"
    label_5fcbc1:
        sub_63b870(eax_56, &data_801800, ecx_84, 
            "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp", var_28_11, var_24_9)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (ecx_83 u>= 0x12)
        var_24_9 = "DomExpDefGetByIndex"
        var_28_11 = 0x118c
        ecx_84 = "i < ARRAYSIZE(DOM_EXP_DEFS)"
        goto label_5fcbc1
    
    int32_t edi_8 = *(ecx_83 * 0x1c + &data_77fca8)
    void* eax_60 = sub_4bbdb0()
    *(eax_60 + 0x28)
    *(eax_60 + 0x30)
    sub_5fbb10(memcpy(&var_4cc4, sub_4deeb0(&var_7ffc), 0x1990), edi_8, &var_4cc4, 1)
    sub_4e4cb0(eax_60)
    edi_6 = arg1

char* esi_26 = edi_6[1]
sub_63d720(&var_6658, "btn_both")
char* eax_63 = var_6658
char* ecx_90 = &data_801800

if (eax_63 != 0)
    ecx_90 = eax_63

int32_t esi_28

while (true)
    char edx_46 = *ecx_90
    char temp18_1 = *esi_26
    bool c_7 = edx_46 u< temp18_1
    
    if (edx_46 == temp18_1)
        if (edx_46 == 0)
            esi_28 = 0
            break
        
        edx_46 = ecx_90[1]
        char temp19_1 = esi_26[1]
        c_7 = edx_46 u< temp19_1
        
        if (edx_46 == temp19_1)
            ecx_90 = &ecx_90[2]
            esi_26 = &esi_26[2]
            
            if (edx_46 != 0)
                continue
            
            esi_28 = 0
            break
    
    esi_28 = sbb.d(esi_26, esi_26, c_7) | 1
    break

int32_t var_8_13 = 6

if (data_cf65bc != 0 && eax_63 != 0 && *eax_63 != 0)
    eax_63 = sub_63d4e0(&var_6658)
    int32_t temp20_1 = *(eax_63 + 4)
    *(eax_63 + 4) -= 1
    
    if (temp20_1 == 1)
        eax_63 = sub_64c080(eax_63, *(eax_63 + 0xc) + 0x10)
        var_6658 = &data_801800

int32_t var_8_14 = 0xffffffff

if (esi_28 == 0)
    int32_t ecx_93 = data_c23bec
    
    if (ecx_93 != 0)
        eax_63 = zx.d(ecx_93.w)
        
        if (eax_63 u< data_c23bac)
            eax_63 = eax_63 * 0x18d0 + data_c23ba8
            
            if (*(eax_63 + 0x18c8) == ecx_93 && eax_63 != 0)
                eax_63[0x13c1] = 0
        
        data_c23bec = 0
    
    int32_t ecx_94 = data_8dbfa4
    int32_t var_28_14
    char const* const var_24_12
    char* ecx_95
    
    if (ecx_94 s< 0)
        var_24_12 = "DomExpDefGetByIndex"
        var_28_14 = 0x118b
        ecx_95 = "i >= 0"
    label_5fcbee:
        sub_63b870(eax_63, &data_801800, ecx_95, 
            "C:\x\ax2017\Jams\Shared\TggGame\code\GameShared.cpp", var_28_14, var_24_12)
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    if (ecx_94 u>= 0x12)
        var_24_12 = "DomExpDefGetByIndex"
        var_28_14 = 0x118c
        ecx_95 = "i < ARRAYSIZE(DOM_EXP_DEFS)"
        goto label_5fcbee
    
    int32_t edi_9 = *(ecx_94 * 0x1c + &data_77fca8)
    void* eax_67 = sub_4bbdb0()
    *(eax_67 + 0x28)
    *(eax_67 + 0x30)
    sub_5fbb10(memcpy(&var_4cc4, sub_4deeb0(&var_7ffc), 0x1990), edi_9, &var_4cc4, 2)
    sub_4e4cb0(eax_67)
    edi_6 = arg1

char* esi_30 = edi_6[1]
sub_63d720(&var_6658, "btnExp")
result = var_6658
char* result_2 = &data_801800

if (result != 0)
    result_2 = result

int32_t esi_32

while (true)
    char edx_51 = *result_2
    char temp21_1 = *esi_30
    bool c_8 = edx_51 u< temp21_1
    
    if (edx_51 == temp21_1)
        if (edx_51 == 0)
            esi_32 = 0
            break
        
        edx_51 = result_2[1]
        char temp22_1 = esi_30[1]
        c_8 = edx_51 u< temp22_1
        
        if (edx_51 == temp22_1)
            result_2 = &result_2[2]
            esi_30 = &esi_30[2]
            
            if (edx_51 != 0)
                continue
            
            esi_32 = 0
            break
    
    esi_32 = sbb.d(esi_30, esi_30, c_8) | 1
    break

int32_t var_8_15 = 7

if (data_cf65bc != 0 && result != 0 && *result != 0)
    result = sub_63d4e0(&var_6658)
    int32_t temp23_1 = *(result + 4)
    *(result + 4) -= 1
    
    if (temp23_1 == 1)
        result = sub_64c080(result, *(result + 0xc) + 0x10)
        var_6658 = &data_801800

int32_t var_8_16 = 0xffffffff

if (esi_32 != 0)
    goto label_5fcb60

int32_t ecx_103 = edi_6[2]

if (ecx_103 s< 0)
    goto label_5fc31b

if (ecx_103 u>= 0x12)
    goto label_5fcc0a

void* ebx_10 = *(ecx_103 * 0x1c + &data_77fca8)
void* eax_72 = sub_4d8f30(*(data_cc8dc8 + 0x1e1a4))
int32_t ecx_106 = data_ccf6dc
void* esi_33 = eax_72

if (ecx_106 == 2 || ecx_106 == 1)
    sub_5fb880(esi_33 + 0x71e8, ebx_10)
label_5fcb55:
    data_cc8dc8
    sub_4d8ad0(esi_33)
label_5fcb60:
    result.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    CookieCheckFunction(result)
    return result

if (ecx_106 != 3)
    void* eax_74 = sub_4bbdb0()
    esi_33 = *(eax_74 + 0x30)
    *(eax_74 + 0x28)
    void var_5a8c
    void* var_24_17 = &var_5a8c
    void var_998c
    void var_6654
    void var_5c8c
    sub_5fb990(&var_5a8c, &var_5c8c, memcpy(&var_6654, sub_4deeb0(&var_998c), 0x1990), ebx_10)
    sub_4e4cb0(eax_74)
    goto label_5fcb55

void* eax_73 = edi_6[2]
result = eax_73 + 1

if (eax_73 + 1 s< 0)
    var_24_15 = "DomExpDefGetByIndex"
    ecx_58 = "i >= 0"
    var_28_7 = 0x118b
    goto label_5fcc1e

if (result u>= 0x12)
    goto label_5fcc0a

sub_5fb880(esi_33 + 0x423c, *(result * 0x1c + &data_77fca8))
sub_61deb0()
goto label_5fcb55
