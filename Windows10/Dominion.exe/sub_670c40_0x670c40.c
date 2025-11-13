// 函数: sub_670c40
// 地址: 0x670c40
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76d746
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_b0c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = *fsbase->ThreadLocalStoragePointer

if (data_1a99f78 s> *(esi + 8))
    sub_75970e(&data_1a99f78)
    
    if (data_1a99f78 == 0xffffffff)
        int32_t var_14_1 = 0
        data_1a99f7c = sub_69f030("sys/editor/ui2/editor_styles.ui2", 0x22)
        int32_t var_14_2 = 0xffffffff
        __Init_thread_footer(&data_1a99f78)

bool cond:0 = data_c27c20 != 0
char* result_1 = data_c23bf0
int32_t eax_6 = data_1a99f7c
data_c23bf0 = eax_6
int32_t var_b14_1
char const* const ecx_1

if (cond:0)
    float xmm1_2 = data_8c4634 * 1000f
    float xmm1_3
    
    if (0 f<= xmm1_2)
        xmm1_3 = xmm1_2 + 0.5f
    else
        xmm1_3 = xmm1_2 - 0.5f
    
    data_c27c28 += int.d(xmm1_3)
    bool cond:1_1 = data_ca9a74 != 0
    data_c27c30 = data_c23c04
    data_c27c34 = data_c23c08
    data_c27c38 = data_c23c0c
    data_c27c3c = data_c23c10
    data_c27c40 = data_c23c14
    struct InputHitResult::UI2HitResult::VTable* var_b00
    int32_t var_ac4
    uint32_t eax_20
    
    if (cond:1_1)
        eax_20 = sub_668710()
    else
        if (sub_63c270(&var_ac4) != 0)
            struct InputHitResult::UI2HitResult::VTable** eax_15 =
                sub_656520(&var_ac4, data_c27c44, &var_b00, &var_ac4)
            data_c27c30 = eax_15[1]
            data_c27c34 = eax_15[2]
            data_c27c38 = eax_15[3]
            data_c27c3c = eax_15[4]
            data_c27c40 = eax_15[5]
        
        char edx_1
        
        if ((*(data_147ac28 + 0x1c) & 1) == 0 || *(data_cf65b4 + 0x18) == 0)
            edx_1 = 0
        else
            edx_1 = 1
        
        eax_20 = sub_69e6f0(&var_ac4, edx_1, 0xcadab8, 0, data_c27c28, &data_c27c2c, &var_ac4, 
            &data_7fefa4)
    
    sub_67b3b0(eax_20, data_c27c30, 0xcadab8, 0xffffffff, 0)
    data_c23bf0 = result_1
    sub_666b90()
    data_c23bf0 = data_1a99f7c
    
    if (data_1a99f80 s> *(esi + 8))
        sub_75970e(&data_1a99f80)
        
        if (data_1a99f80 == 0xffffffff)
            int32_t var_14_3 = 1
            data_1a99f84 = sub_69f030("sys/editor/ui2/editor_main.ui2", 0x22)
            int32_t var_14_4 = 0xffffffff
            __Init_thread_footer(&data_1a99f80)
    
    void* eax_24 = data_cf65b8
    float var_acc = 0f
    uint128_t xmm2_1 = zx.o(*(eax_24 + 0x18))
    int32_t xmm1_5 = _mm_cvtepi32_ps(zx.o(*(eax_24 + 0x14)))
    int32_t var_ad0 = 0
    int32_t xmm2_2 = _mm_cvtepi32_ps(xmm2_1)
    int32_t* var_b24_1 = data_1a99f84
    int32_t var_ac8_1 = xmm1_5
    var_ac4 = xmm2_2
    int32_t xmm0_1 = (var_ad0.o).d
    var_acc = 0f
    int32_t var_ac8_2 = xmm1_5
    var_ac4 = xmm2_2
    int32_t var_af8_1 = xmm0_1
    var_ad0 = 0
    var_acc.o = var_ad0.o
    int128_t var_afc
    sub_654ce0(&var_acc, &data_c27c44, "editor ui", var_b24_1, &var_acc, &var_afc:4, 0x61a8, 
        nullptr, 0)
    *(sub_64e7a0(data_c27c44) + 0x18bc) = sub_66f580
    uint32_t eax_27 = sub_64e7a0(data_c27c44)
    *(eax_27 + 0x18c0) = sub_66e0a0
    uint32_t var_ae0
    char* const var_ad4
    char* var_ac0
    void* var_ab4
    void* var_ab0
    char* i_6
    void* var_aa8
    char* var_aa4
    void* eax_31
    
    if (data_c28c58 s<= 0 || data_c27c18 s<= 0)
        int32_t var_b10_11 = 0xffffffff
        eax_31 = sub_666120(eax_27, &data_caddec, data_c27c44, 0)
    else
        void* eax_28 = sub_665600(data_c27c58)
        bool cond:2_1 = data_c28c62 == 0
        var_ab0 = eax_28
        int32_t ecx_11 = *(eax_28 + 0x18c8)
        uint32_t eax_29
        
        if (cond:2_1)
            eax_29 = sub_64e7a0(ecx_11)
            *(eax_29 + 0x15d4) = 0
        else
            eax_29 = sub_64e7a0(ecx_11)
            *(eax_29 + 0x15d4) = sub_664cb0
        
        void var_a28
        uint32_t eax_30 = sub_66a920(eax_29, &var_a28, eax_28, nullptr)
        int32_t var_b10_3 = 0xffffffff
        eax_31 = sub_666120(eax_30, &data_caddec, data_c27c44, eax_30)
        char* const edi = nullptr
        var_ad4 = nullptr
        
        if (eax_30 s> 0)
            void var_a20
            eax_31 = &var_a20
            var_aa8 = &var_a20
            
            while (true)
                void* esi_3 = *(eax_31 - 4)
                void* edx_5 = var_ab0
                data_c23bf0 = result_1
                var_ab4 = esi_3
                sub_66ac80(eax_31, edx_5, &var_aa4, esi_3, edi)
                int32_t var_14_5 = 2
                
                if (esi_3 == 0x111)
                    char* eax_32 = var_aa4
                    
                    if (eax_32 != 0 && eax_32 != &data_801800)
                        if (data_cf65bc != 0 && *eax_32 != 0)
                            char* eax_33 = sub_63d4e0(&var_aa4)
                            int32_t temp3_1 = *(eax_33 + 4)
                            *(eax_33 + 4) -= 1
                            
                            if (temp3_1 == 1)
                                sub_64c080(eax_33, *(eax_33 + 0xc) + 0x10)
                        
                        var_aa4 = &data_801800
                    
                    void* eax_34 = sub_66a800(var_ab0, 0x110)
                    int32_t* eax_35 = sub_6dd1e0(eax_34, eax_34, &data_8cae70, data_17774f4, 0x110)
                    
                    if (eax_35 != 0)
                        uint32_t ecx_19 = eax_35[2]
                        int32_t esi_4 = 0
                        var_ae0 = ecx_19
                        
                        if (ecx_19 s> 0)
                            int32_t* eax_36 = *eax_35
                            int32_t* edi_1 = eax_36
                            
                            while (true)
                                char* ecx_20 = *edi_1
                                char* eax_38 = *var_aa8
                                int32_t eax_40
                                
                                while (true)
                                    char edx_9 = *eax_38
                                    char temp5_1 = *ecx_20
                                    bool c_1 = edx_9 u< temp5_1
                                    
                                    if (edx_9 == temp5_1)
                                        if (edx_9 == 0)
                                            eax_40 = 0
                                            break
                                        
                                        edx_9 = eax_38[1]
                                        char temp8_1 = ecx_20[1]
                                        c_1 = edx_9 u< temp8_1
                                        
                                        if (edx_9 == temp8_1)
                                            eax_38 = &eax_38[2]
                                            ecx_20 = &ecx_20[2]
                                            
                                            if (edx_9 != 0)
                                                continue
                                            
                                            eax_40 = 0
                                            break
                                    
                                    eax_40 = sbb.d(eax_38, eax_38, c_1) | 1
                                    break
                                
                                if (eax_40 == 0)
                                    sub_63d8d0(&var_aa4, eax_36[esi_4 * 4 + 2])
                                    break
                                
                                esi_4 += 1
                                edi_1 = &edi_1[4]
                                
                                if (esi_4 s>= var_ae0)
                                    break
                            
                            edi = var_ad4
                        
                        esi_3 = var_ab4
                
                data_c23bf0 = data_1a99f7c
                void* eax_43 = var_aa8
                char* edx_10 = *eax_43
                
                if (edx_10 == 0)
                    sub_63b870(eax_43, &data_801800, "str", "C:\x\ax2017\Engine\xString.cpp", 0x94, 
                        "XString::XString")
                    
                    if (sub_63bc30() != 0)
                        breakpoint
                    
                    sub_63bb00()
                    noreturn
                
                sub_63d720(&i_6, edx_10)
                var_14_5.b = 3
                char* const var_b10_6 = edi
                sub_666380(&i_6, &data_caddf8, data_c27c44, &i_6)
                var_14_5.b = 4
                
                if (data_cf65bc != 0)
                    char* i_9 = i_6
                    
                    if (i_9 != 0 && *i_9 != 0)
                        char* eax_45 = sub_63d4e0(&i_6)
                        int32_t temp2_1 = *(eax_45 + 4)
                        *(eax_45 + 4) -= 1
                        
                        if (temp2_1 == 1)
                            sub_64c080(eax_45, *(eax_45 + 0xc) + 0x10)
                            i_6 = &data_801800
                
                var_14_5.b = 2
                char* const var_b10_7 = edi
                sub_666380(&var_aa4, &data_cade04, data_c27c44, &var_aa4)
                int32_t* var_b18_1 = &var_ad0
                void* eax_47 = var_ab0
                int128_t* eax_48 = sub_66bd20(eax_47, edi, *(eax_47 + 0x18c8))
                int32_t i_7 = eax_48[1].d
                int32_t* var_b10_8 = &var_ad0
                void* eax_49 = var_ab0
                var_afc = *eax_48
                int128_t* eax_50 = sub_66bd20(eax_49, edi, *(eax_49 + 0x18c8))
                uint128_t xmm0_4 = *eax_50
                var_ac0 = eax_50[1].d
                
                if (_mm_bsrli_si128(xmm0_4, 0xc) == 3)
                    uint32_t eax_53 = sub_64e7a0(data_c27c44)
                    sub_665db0(eax_53, &data_cade10, eax_53, 0x3f800000, edi, 0)
                    void* eax_54 = sub_66a800(var_ab0, esi_3)
                    int32_t eax_56 = sub_6dd320(&data_8cae70, *(var_aa8 - 4))
                    int32_t ecx_32 = data_1724a70
                    void* eax_57 = var_aa8
                    int32_t var_b10_9 = *(eax_57 - 4)
                    
                    if (eax_56 != ecx_32)
                        int32_t* eax_59 =
                            sub_6dd1e0(eax_57, eax_54, &data_8cae70, data_1724b04, var_b10_9)
                        int32_t var_aa0
                        sub_64e490(eax_59, eax_59, &var_aa0, edi, 0x7ff510, nullptr)
                        var_14_5.b = 5
                        int32_t var_a30
                        
                        if (var_a30 s<= 1)
                            int32_t var_a9c
                            
                            if (var_a9c != 0)
                                int32_t var_b14_35
                                
                                var_b14_35 = var_a9c == 1 ? 0xca5 : 0xca9
                                
                                sub_63b870(var_a9c - 1, &data_801800, "Halt", 
                                    "C:\x\ax2017\Engine\UI2.cpp", var_b14_35, "EvalValEval")
                                
                                if (sub_63bc30() != 0)
                                    breakpoint
                                
                                sub_63bb00()
                                noreturn
                            
                            void var_a94
                            uint32_t eax_62 = sub_64c460(var_aa0, &var_a94)
                            int32_t* ecx_36 = data_c27c44
                            var_ae0 = eax_62
                            char* const var_b10_10 = edi
                            sub_665f50(&var_ae0, &data_cade1c, ecx_36, &var_ae0)
                        
                        var_14_5.b = 6
                        void var_a98
                        `eh vector vbase constructor iterator'(&var_a98, 0x34, 2, sub_64ca90)
                        var_14_5.b = 2
                    else
                        int32_t eax_58 = sub_6dd1e0(eax_57, eax_54, &data_8cae70, ecx_32, var_b10_9)
                        char* const var_b18_2 = edi
                        sub_665f50(eax_58, &data_cade1c, data_c27c44, eax_58)
                
                int32_t i = i_7
                
                if (i - 0x64 u> 0xad)
                    goto label_6713a6
                
                switch (i)
                    case 0x65, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x70, 0x71, 0x76, 0x77, 
                            0x78, 0x79, 0x7a, 0x7b, 0x7c, 0x7d, 0x7e, 0x7f, 0x80, 0x81, 0x82, 0x83, 
                            0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 
                            0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9a, 0x9b, 
                            0x9c, 0x9d, 0x9e, 0x9f, 0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 
                            0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 
                            0xb4, 0xb5, 0xb6, 0xb7, 0xb8, 0xb9, 0xba, 0xbb, 0xbc, 0xbd, 0xbe, 0xbf, 
                            0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 
                            0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 
                            0xd8, 0xd9, 0xda, 0xdb, 0xdc, 0xdd, 0xde, 0xdf, 0xe0, 0xe1, 0xe2, 0xe3, 
                            0xe4, 0xe5, 0xe6, 0xe7, 0xe8, 0xe9, 0xea, 0xeb, 0xec, 0xed, 0xee, 0xef, 
                            0xf0, 0xf1, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7, 0xf8, 0xf9, 0xfa, 0xfb, 
                            0xfc, 0xfd, 0xfe, 0xff, 0x100, 0x101, 0x102, 0x103, 0x104, 0x105, 
                            0x106, 0x107, 0x108, 0x109, 0x10a, 0x10b, 0x10c, 0x10d, 0x10e, 0x10f, 
                            0x110
                        goto label_6713a6
                    case 0x72, 0x73, 0x74, 0x75
                        i = 0x71
                    label_6713a6:
                        int32_t* eax_66 = sub_667870(var_ab0)
                        int32_t* eax_67
                        
                        if (eax_66 == 0)
                            int32_t* eax_68 = sub_64cc90(var_ab0)
                            int32_t ecx_40 = 0
                            int32_t edx_21 = *eax_68
                            
                            if (edx_21 s<= 0)
                            label_6713f0:
                                eax_67 = nullptr
                            else
                                eax_67 = eax_68[2]
                                
                                while (*eax_67 != i)
                                    ecx_40 += 1
                                    eax_67 = &eax_67[4]
                                    
                                    if (ecx_40 s>= edx_21)
                                        goto label_6713f0_1
                        else
                            int32_t edx_20 = eax_66[6]
                            int32_t ecx_38 = 0
                            
                            if (edx_20 s<= 0)
                            label_6713f0_1:
                                eax_67 = nullptr
                            else
                                eax_67 = eax_66[8]
                                
                                while (*eax_67 != i)
                                    ecx_38 += 1
                                    eax_67 = &eax_67[4]
                                    
                                    if (ecx_38 s>= edx_20)
                                        goto label_6713f0_1
                        
                        eax_67.b = eax_67 == 0
                        
                        if (eax_67.b != 0)
                            uint32_t eax_69 = sub_64e7a0(data_c27c44)
                            sub_665db0(eax_69, &data_cade28, eax_69, 0x3f800000, edi, 0)
                
                int32_t var_14_6 = 7
                
                if (data_cf65bc != 0)
                    char* eax_70 = var_aa4
                    
                    if (eax_70 != 0 && *eax_70 != 0)
                        char* eax_71 = sub_63d4e0(&var_aa4)
                        int32_t temp9_1 = *(eax_71 + 4)
                        *(eax_71 + 4) -= 1
                        
                        if (temp9_1 == 1)
                            sub_64c080(eax_71, *(eax_71 + 0xc) + 0x10)
                            var_aa4 = &data_801800
                
                int32_t var_14_7 = 0xffffffff
                edi = &edi[1]
                eax_31 = var_aa8 + 0x14
                var_ad4 = edi
                var_aa8 = eax_31
                
                if (edi s>= eax_30)
                    break
    
    int32_t edi_2 = data_c28c64
    
    if (edi_2 == 0xffffffff || data_c27c18 s<= 0)
    label_6716c1:
        int32_t esi_9 = data_c28c68
        
        if (esi_9 != 0xffffffff)
            uint32_t eax_87 = sub_64e7a0(data_c27c44)
            sub_665db0(eax_87, &data_cade94, eax_87, 0x3f800000, esi_9, 0)
            void* eax_88 = sub_665600(data_c27c58)
            struct InputHitResult::UI2HitResult::VTable** var_b18_4 = &var_b00
            eax_31 = _mm_bsrli_si128(*sub_66bd20(&var_b00, esi_9, *(eax_88 + 0x18c8)), 0xc)
            int32_t var_b10_15
            char* i_1
            int32_t edi_4
            
            if (eax_31 == 2)
                data_c28c68
                *(eax_88 + 0x18c8)
                edi_4 = 0
                int32_t* esi_10 = sub_66c4b0() + 4
                
                for (i_1 = *esi_10; i_1 != 0; i_1 = *esi_10)
                    sub_63d720(&i_6, i_1)
                    int32_t var_14_8 = 8
                    int32_t var_b10_13 = edi_4
                    sub_666380(&i_6, &data_cadea0, data_c27c44, &i_6)
                    int32_t var_14_9 = 9
                    
                    if (data_cf65bc != 0)
                        char* i_10 = i_6
                        
                        if (i_10 != 0 && *i_10 != 0)
                            char* eax_93 = sub_63d4e0(&i_6)
                            int32_t temp0_1 = *(eax_93 + 4)
                            *(eax_93 + 4) -= 1
                            
                            if (temp0_1 == 1)
                                sub_64c080(eax_93, *(eax_93 + 0xc) + 0x10)
                                i_6 = &data_801800
                    
                    esi_10 = &esi_10[2]
                    int32_t var_14_10 = 0xffffffff
                    edi_4 += 1
                
                var_b10_15 = data_c28c64
                eax_31 = sub_666120(i_1, &data_cadeac, data_c27c44, edi_4)
            else if (eax_31 == 5)
                data_c28c68
                data_c23bf0 = result_1
                i_1 = sub_66bf20(*(eax_88 + 0x18c8))
                char* i_8 = i_1
                data_c23bf0 = data_1a99f7c
                edi_4 = 0
                
                for (char* i_2 = *i_8; i_2 != 0; i_2 = *i_8)
                    sub_63d720(&i_6, i_2)
                    int32_t var_14_11 = 0xa
                    int32_t var_b10_14 = edi_4
                    i_1 = sub_666380(&i_6, &data_cadea0, data_c27c44, &i_6)
                    int32_t var_14_12 = 0xb
                    
                    if (data_cf65bc != 0)
                        i_1 = i_6
                        
                        if (i_1 != 0 && *i_1 != 0)
                            i_1 = sub_63d4e0(&i_6)
                            int32_t temp1_1 = *(i_1 + 4)
                            *(i_1 + 4) -= 1
                            
                            if (temp1_1 == 1)
                                i_1 = sub_64c080(i_1, *(i_1 + 0xc) + 0x10)
                                i_6 = &data_801800
                    
                    i_8 = &i_8[4]
                    int32_t var_14_13 = 0xffffffff
                    edi_4 += 1
                
                var_b10_15 = data_c28c64
                eax_31 = sub_666120(i_1, &data_cadeac, data_c27c44, edi_4)
        
        int32_t var_b10_16 = 0xffffffff
        sub_666120(eax_31, &data_cadeb8, data_c27c44, data_c27c1c)
        int32_t eax_96 = data_c27c18
        uint32_t ecx_84 = 0
        var_aa4 = nullptr
        var_ae0 = 0
        
        if (eax_96 s> 0)
            void* esi_11 = &data_c23c1c
            var_ab4 = &data_c23c1c
            
            do
                if (*(esi_11 + 8) != 2)
                    void* edi_5 = *(esi_11 - 4)
                    void* var_adc_2 = edi_5
                    sub_63d720(&var_ab0, &data_801800)
                    int32_t var_14_14 = 0xc
                    void* esi_12 = var_ab0
                    int32_t i_5 = 0
                    
                    if (*esi_11 s> 0)
                        int32_t i_3
                        
                        do
                            if (esi_12 == 0 || *esi_12 == 0)
                                int32_t** eax_98 = sub_64bfd0(0x12)
                                eax_98[3] += 1
                                
                                if (*eax_98 == 0)
                                    sub_64be70(eax_98)
                                
                                int32_t* esi_13 = *eax_98
                                char* ecx_89 = &data_807454
                                *eax_98 = *esi_13
                                *esi_13 = 0xfafafafa
                                esi_13[1] = 1
                                esi_13[2] = 1
                                esi_13[3] = 2
                                esi_12 = &esi_13[4]
                                var_ab0 = esi_12
                                int32_t* eax_99
                                
                                do
                                    eax_99.b = *ecx_89
                                    ecx_89 = &ecx_89[1]
                                    ecx_89[esi_12 + 0xff7f8bab] = eax_99.b
                                while (eax_99.b != 0)
                            else
                                char* eax_97 = sub_63d4e0(&var_ab0)
                                int16_t* edi_6 = *(eax_97 + 8)
                                sub_63d5e0(eax_97, edi_6 + 1, &var_ab0, 1)
                                esi_12 = var_ab0
                                *(edi_6 + esi_12) = 0x20
                            
                            i_3 = i_5 + 1
                            i_5 = i_3
                        while (i_3 s< *var_ab4)
                        edi_5 = var_adc_2
                    
                    char* eax_101 = *(edi_5 + 0x15e0)
                    char* const ecx_91 = &data_801800
                    
                    if (eax_101 != 0)
                        ecx_91 = eax_101
                    
                    char* const var_b10_17 = ecx_91
                    void* eax_102 = &data_801800
                    
                    if (esi_12 != 0)
                        eax_102 = esi_12
                    
                    void* var_b14_22 = eax_102
                    sub_63df30(&var_ad4, "%s%s")
                    var_14_14.b = 0xd
                    char* var_b20_3 = var_aa4
                    sub_666380(&var_ad4, &data_cadec4, data_c27c44, &var_ad4)
                    int32_t edx_41 = data_c28c58
                    int32_t eax_104 = 0
                    
                    if (edx_41 s> 0)
                        do
                            if (*(edi_5 + 0x1604) == (&data_c27c58)[eax_104])
                                uint32_t eax_105 = sub_64e7a0(data_c27c44)
                                sub_665db0(eax_105, &data_caded0, eax_105, 0x3f800000, var_aa4, 0)
                                break
                            
                            eax_104 += 1
                        while (eax_104 s< edx_41)
                    
                    if (*(sub_64cc90(edi_5) + 0x10) s> 0 || *(edi_5 + 0x15f8) == 6)
                        int32_t ecx_97 = data_c27c44
                        uint32_t eax_108
                        void** edx_42
                        
                        if (*(var_ab4 + 8) != 0)
                            eax_108 = sub_64e7a0(ecx_97)
                            edx_42 = &data_cadf18
                        else
                            eax_108 = sub_64e7a0(ecx_97)
                            edx_42 = &data_cadf0c
                        
                        sub_665db0(eax_108, edx_42, eax_108, 0x3f800000, var_aa4, 0)
                    
                    char* edi_8
                    
                    if (*(edi_5 + 0x1718) != 0)
                        int32_t* eax_109 = sub_64cc90(edi_5)
                        edi_8 = sub_6dd140(eax_109, eax_109, &data_8cae70, 0x6f)
                    else
                        edi_8 = nullptr
                    
                    if (sub_667790(var_adc_2, &var_ac0) != 2)
                        if (sub_667790(var_adc_2, &var_ac0) == 1)
                            uint32_t eax_116 = sub_64e7a0(data_c27c44)
                            sub_665db0(eax_116, &data_cadf00, eax_116, 0x3f800000, var_aa4, 0)
                        else if (*edi_8 != 0)
                            sub_63d720(&var_aa8, edi_8)
                            var_14_14.b = 0x10
                            char* var_b10_19 = var_aa4
                            sub_666380(&var_aa8, &data_cadf24, data_c27c44, &var_aa8)
                            var_14_14.b = 0x11
                            
                            if (data_cf65bc != 0)
                                void* eax_118 = var_aa8
                                
                                if (eax_118 != 0 && *eax_118 != 0)
                                    char* eax_119 = sub_63d4e0(&var_aa8)
                                    int32_t temp12_1 = *(eax_119 + 4)
                                    *(eax_119 + 4) -= 1
                                    
                                    if (temp12_1 == 1)
                                        sub_64c080(eax_119, *(eax_119 + 0xc) + 0x10)
                                        var_aa8 = &data_801800
                            
                            var_14_14.b = 0xd
                    else
                        if (*edi_8 != 0)
                            sub_63d720(&i_6, edi_8)
                            var_14_14.b = 0xe
                            char* var_b10_18 = var_aa4
                            sub_666380(&i_6, &data_cadf24, data_c27c44, &i_6)
                            var_14_14.b = 0xf
                            
                            if (data_cf65bc != 0)
                                char* i_11 = i_6
                                
                                if (i_11 != 0 && *i_11 != 0)
                                    char* eax_113 = sub_63d4e0(&i_6)
                                    int32_t temp11_1 = *(eax_113 + 4)
                                    *(eax_113 + 4) -= 1
                                    
                                    if (temp11_1 == 1)
                                        sub_64c080(eax_113, *(eax_113 + 0xc) + 0x10)
                                        i_6 = &data_801800
                            
                            var_14_14.b = 0xd
                        
                        uint32_t eax_114 = sub_64e7a0(data_c27c44)
                        sub_665db0(eax_114, &data_cadef4, eax_114, 0x3f800000, var_aa4, 0)
                    
                    if (*(var_adc_2 + 0x11) != 0)
                        uint32_t eax_120 = sub_64e7a0(data_c27c44)
                        sub_665db0(eax_120, &data_cadedc, eax_120, 0x3f800000, var_aa4, 0)
                    
                    char* edi_10
                    
                    if (*(var_adc_2 + 0x12) == 0)
                        edi_10 = var_aa4
                    else
                        uint32_t eax_121 = sub_64e7a0(data_c27c44)
                        edi_10 = var_aa4
                        sub_665db0(eax_121, &data_cadee8, eax_121, 0x3f800000, edi_10, 0)
                    
                    var_aa4 = &edi_10[1]
                    var_14_14.b = 0x12
                    
                    if (data_cf65bc != 0)
                        char* eax_122 = var_ad4
                        
                        if (eax_122 != 0 && *eax_122 != 0)
                            char* eax_123 = sub_63d4e0(&var_ad4)
                            int32_t temp13_1 = *(eax_123 + 4)
                            *(eax_123 + 4) -= 1
                            
                            if (temp13_1 == 1)
                                sub_64c080(eax_123, *(eax_123 + 0xc) + 0x10)
                                var_ad4 = &data_801800
                    
                    int32_t var_14_15 = 0x13
                    
                    if (data_cf65bc != 0 && esi_12 != 0 && *esi_12 != 0)
                        char* eax_124 = sub_63d4e0(&var_ab0)
                        int32_t temp14_1 = *(eax_124 + 4)
                        *(eax_124 + 4) -= 1
                        
                        if (temp14_1 == 1)
                            sub_64c080(eax_124, *(eax_124 + 0xc) + 0x10)
                            var_ab0 = &data_801800
                    
                    int32_t var_14_16 = 0xffffffff
                    eax_96 = data_c27c18
                    esi_11 = var_ab4
                    ecx_84 = var_ae0
                
                ecx_84 += 1
                esi_11 += 0x10
                var_ae0 = ecx_84
                var_ab4 = esi_11
            while (ecx_84 s< eax_96)
        
        void* esi_15 = *(data_c27c20 + 0x20)
        var_aa8 = esi_15
        
        if (esi_15 != 0 && *esi_15 != 0)
            char* eax_125 = sub_63d4e0(&var_aa8)
            *(eax_125 + 4) += 1
        
        int32_t var_14_17 = 0x14
        
        if (data_147d49c != 0)
            if (esi_15 == 0 || *esi_15 == 0)
                int32_t** eax_127 = sub_64bfd0(0x12)
                eax_127[3] += 1
                
                if (*eax_127 == 0)
                    sub_64be70(eax_127)
                
                int32_t* esi_16 = *eax_127
                char* ecx_126 = &data_808fc8
                *eax_127 = *esi_16
                *esi_16 = 0xfafafafa
                esi_16[1] = 1
                esi_16[2] = 1
                esi_16[3] = 2
                esi_15 = &esi_16[4]
                var_aa8 = esi_15
                int32_t* eax_128
                
                do
                    eax_128.b = *ecx_126
                    ecx_126 = &ecx_126[1]
                    ecx_126[esi_15 + 0xff7f7037] = eax_128.b
                while (eax_128.b != 0)
            else
                char* eax_126 = sub_63d4e0(&var_aa8)
                int16_t* edi_12 = *(eax_126 + 8)
                sub_63d5e0(eax_126, edi_12 + 1, &var_aa8, 1)
                esi_15 = var_aa8
                *(edi_12 + esi_15) = 0x2a
        
        int32_t var_b10_20 = 0xffffffff
        sub_666380(&var_aa8, &data_cadf30, data_c27c44, &var_aa8)
        void* const eax_130 = &data_7ff0d8
        char* const eax_131
        
        while (true)
            if (*eax_130 == data_cadde4)
                eax_131 = *(eax_130 + 4)
                break
            
            eax_130 += 8
            
            if (*(eax_130 + 4) == 0)
                eax_131 = &data_801800
                break
        
        char* const var_b10_21 = eax_131
        char** eax_132 = sub_63df30(&var_ab4, "%s")
        var_14_17.b = 0x15
        int32_t var_b10_22 = 0xffffffff
        sub_666380(eax_132, &data_cadf3c, data_c27c44, eax_132)
        var_14_17.b = 0x16
        
        if (data_cf65bc != 0)
            void* eax_133 = var_ab4
            
            if (eax_133 != 0 && *eax_133 != 0)
                char* eax_134 = sub_63d4e0(&var_ab4)
                int32_t temp6_1 = *(eax_134 + 4)
                *(eax_134 + 4) -= 1
                
                if (temp6_1 == 1)
                    sub_64c080(eax_134, *(eax_134 + 0xc) + 0x10)
                    var_ab4 = &data_801800
        
        var_14_17.b = 0x14
        sub_65d6e0(data_c27c44, data_8c4634)
        int32_t* ecx_133
        
        if (data_c27c18 == 0)
        label_672088:
            ecx_133 = &var_ac4
        label_67208e:
            
            if (sub_63c270(ecx_133) != 0)
                SetCursor(LoadCursorA(nullptr, 0x7f00))
        else if (data_c28c60 != 0 || data_c28c62 != 0)
            sub_63c270(&var_ac4)
            uint32_t eax_139 = sub_669c00(var_ac4, var_ac0)
            
            if (eax_139 == 0xffffffff)
                goto label_672088
            
            if (eax_139 u> 7)
                sub_63b870(eax_139, &data_801800, "Halt", "C:\x\ax2017\Engine\UI2.cpp", 0x4971, 
                    "UI2EditorUpdate")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            switch (eax_139)
                case 0, 7
                label_671ff7:
                    
                    if (sub_63c270(&var_ac4) != 0)
                        SetCursor(LoadCursorA(nullptr, 0x7f82))
                case 1, 6
                label_672078:
                    
                    if (sub_63c270(&var_ac4) != 0)
                        SetCursor(LoadCursorA(nullptr, 0x7f84))
                case 2, 5
                label_672014:
                    
                    if (sub_63c270(&var_ac4) != 0)
                        SetCursor(LoadCursorA(nullptr, 0x7f83))
                case 3, 4
                label_67202e:
                    
                    if (sub_63c270(&var_ac4) != 0)
                        SetCursor(LoadCursorA(nullptr, 0x7f85))
        else
            ecx_133 = &var_ac4
            
            if (data_c28c61 == 0)
                goto label_67208e
            
            sub_63c270(ecx_133)
            uint32_t eax_135 = sub_66a370(var_ac4, var_ac0)
            
            if (eax_135 == 0xffffffff)
                goto label_672088
            
            if (eax_135 u> 7)
                sub_63b870(eax_135, &data_801800, "Halt", "C:\x\ax2017\Engine\UI2.cpp", 0x4997, 
                    "UI2EditorUpdate")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            switch (eax_135)
                case 0, 7
                    goto label_671ff7
                case 1, 6
                    goto label_672078
                case 2, 5
                    goto label_672014
                case 3, 4
                    goto label_67202e
        char* result = result_1
        data_c23bf0 = result
        data_ca9a75 = 0
        int32_t var_14_18 = 0x17
        
        if (data_cf65bc != 0 && esi_15 != 0 && *esi_15 != 0)
            result = sub_63d4e0(&var_aa8)
            int32_t temp10_1 = *(result + 4)
            *(result + 4) -= 1
            
            if (temp10_1 == 1)
                result = sub_64c080(result, *(result + 0xc) + 0x10)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(result)
        return result
    
    uint32_t eax_73 = sub_64e7a0(data_c27c44)
    sub_665db0(eax_73, &data_cade34, eax_73, 0x3f800000, edi_2, 0)
    void* eax_74 = sub_665600(data_c27c58)
    var_ab4 = eax_74
    int32_t* var_b18_3 = &var_ad0
    int128_t* eax_76 = sub_66bd20(&var_ad0, edi_2, *(eax_74 + 0x18c8))
    int128_t* ecx_50 = *(eax_74 + 0x18c8)
    int32_t i_4 = eax_76[1].d
    int32_t* var_b10_12 = &var_ad0
    var_afc = *eax_76
    int128_t* eax_78 = sub_66bd20(&var_ad0, edi_2, ecx_50)
    uint128_t xmm0_7 = *eax_78
    var_ac0 = eax_78[1].d
    eax_6 = _mm_bsrli_si128(xmm0_7, 0xc)
    
    if (eax_6 u<= 5)
        uint32_t eax_80
        
        switch (eax_6)
            case 1
                eax_80 = sub_64e7a0(data_c27c44)
                sub_665db0(eax_80, &data_cade4c, eax_80, 0x3f800000, edi_2, 0)
            case 2, 5
                eax_80 = sub_64e7a0(data_c27c44)
                sub_665db0(eax_80, &data_cade40, eax_80, 0x3f800000, edi_2, 0)
            case 3
                eax_80 = sub_64e7a0(data_c27c44)
                sub_665db0(eax_80, &data_cade58, eax_80, 0x3f800000, edi_2, 0)
            case 4
                eax_80 = sub_64e7a0(data_c27c44)
                sub_665db0(eax_80, &data_cade64, eax_80, 0x3f800000, edi_2, 0)
        
        if (i_4 - 0x64 u> 0x11)
        label_6715dd:
            int32_t* eax_82 = sub_667870(var_ab4)
            
            if (eax_82 != 0)
                int32_t edx_27 = eax_82[6]
                int32_t ecx_57 = 0
                
                if (edx_27 s<= 0)
                label_671640:
                    eax_31 = nullptr
                label_671644:
                    eax_31.b = eax_31 != 0
                    
                    if (eax_31.b != 0)
                        uint32_t eax_84 = sub_64e7a0(data_c27c44)
                        eax_31 = sub_665db0(eax_84, &data_cade70, eax_84, 0x3f800000, edi_2, 0)
                    
                    goto label_671670
                
                eax_31 = eax_82[8]
                
                while (*eax_31 != i_4)
                    ecx_57 += 1
                    eax_31 += 0x10
                    
                    if (ecx_57 s>= edx_27)
                        goto label_671640
                
                goto label_671644
            
            eax_31 = var_ab4
            
            if (i_4 != 0x76)
            label_671624:
                int32_t* eax_83 = sub_64cc90(eax_31)
                int32_t ecx_60 = 0
                int32_t edx_28 = *eax_83
                
                if (edx_28 s<= 0)
                    goto label_671640
                
                eax_31 = eax_83[2]
                
                while (*eax_31 != i_4)
                    ecx_60 += 1
                    eax_31 += 0x10
                    
                    if (ecx_60 s>= edx_28)
                        goto label_671640
                
                goto label_671644
            
            char* ecx_58 = *(eax_31 + 0x15fc)
            
            if (ecx_58 != 0 && *ecx_58 != 0)
                goto label_671624
        else
            eax_31 = zx.d(lookup_table_67221c[0x6c + i_4])
            
            switch (eax_31)
                case nullptr
                label_671670:
                    
                    if (i_4 == 0x6f || i_4 == 0x71)
                        uint32_t eax_85 = sub_64e7a0(data_c27c44)
                        sub_665db0(eax_85, &data_cade7c, eax_85, 0x3f800000, edi_2, 0)
                        uint32_t eax_86 = sub_64e7a0(data_c27c44)
                        eax_31 = sub_665db0(eax_86, &data_cade88, eax_86, 0x3f800000, edi_2, 0)
                case 1
                    goto label_6715dd
        
        goto label_6716c1
    
    char const* const var_b10_27 = "UI2EditorUpdate"
    var_b14_1 = 0x48cc
    ecx_1 = "Halt"
else
    char const* const var_b10_1 = "UI2EditorUpdate"
    var_b14_1 = 0x4831
    ecx_1 = "gUI2Editor.asset"

sub_63b870(eax_6, &data_801800, ecx_1, "C:\x\ax2017\Engine\UI2.cpp", var_b14_1, "UI2EditorUpdate")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
