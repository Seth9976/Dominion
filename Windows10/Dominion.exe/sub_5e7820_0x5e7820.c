// 函数: sub_5e7820
// 地址: 0x5e7820
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* ebx = arg1
void* var_10 = arg2
char const* const var_40_4
int32_t var_3c
char const* const var_38_1
void* eax
char* ecx_1

if (*(ebx + 0x2c) != 3)
    var_38_1 = "DomDeclarePile"
    var_3c = 0x528a
    ecx_1 = "gfx.type == DOMGFX_PILE"
label_5e86f6:
    var_40_4 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
label_5e8700:
    sub_63b870(eax, &data_801800, ecx_1, var_40_4, var_3c, var_38_1)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

uint32_t result = *(ebx + 0x5c)

if (result == 0x474)
    return result

if (result == 0x3e9)
    *(ebx + 0x1b98) = sub_5cd010(*(ebx + 0x58))

int128_t xmm0_1
int128_t xmm1_1
int32_t eax_12
uint32_t eax_27
int32_t ecx_6
bool cond:7_1

if (*(ebx + 0x5c) != 0x3ee)
    eax_12 = sub_5d1d00(*(ebx + 0x58), *(ebx + 0x1b98))
label_5e7b94:
    ecx_6 = eax_12
    
    if (ecx_6 == 0)
        xmm1_1 = data_bf21f8
        xmm0_1 = data_bf21e8
    else
    label_5e7b9e:
        eax_27 = zx.d(ecx_6.w)
        cond:7_1 = eax_27 u>= data_c23bac
    label_5e7ba7:
        
        if (cond:7_1 || *(eax_27 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_6)
            xmm1_1 = data_bf21f8
            xmm0_1 = data_bf21e8
        else
            uint32_t eax_30 = sub_64e7a0(ecx_6)
            xmm1_1 = *(eax_30 + 0x1630)
            xmm0_1 = *(eax_30 + 0x1620)
else
    arg1.b = 0x20
    uint32_t eax_3 = __aullshr(*(ebx + 0x60), *(ebx + 0x64), arg1.b)
    
    if (eax_3 == 0)
        xmm1_1 = data_bf21f8
        xmm0_1 = data_bf21e8
    else
        eax = sub_5de8b0(eax_3)
        void* edi_1 = eax
        
        if (edi_1 == 0)
            var_38_1 = "LookupCard"
            var_3c = 0x3d96
            ecx_1 = &data_871964
            goto label_5e86f6
        
        int32_t ecx_2 = *(edi_1 + 0x1ba0)
        
        if (ecx_2 != 0)
        label_5e78e3:
            int32_t eax_4 = sub_67bd70(ecx_2, "tbl_assocPile")
            
            if (eax_4 != 0)
                ecx_6 = sub_64c870(sub_64e7a0(eax_4), nullptr)
            
            if (eax_4 != 0 && ecx_6 != 0)
                goto label_5e7b9e
            
            int32_t edi_2 = *(edi_1 + 0xa0)
            void* eax_7 = sub_5cd010(edi_2)
            int32_t esi_1
            
            if (data_8db5c4 != 0x27)
                esi_1 = 0
                
                if (data_8db5d4 == 0x27)
                    esi_1 = data_8db5d8
            else
                esi_1 = data_8db5c8
            
            int32_t ecx_8 = data_b604e0
            int32_t eax_8 = ecx_8
            
            if (ecx_8 == 0xffffffff)
                eax_8 = 0
            
            if (edi_2 != eax_8)
                if (ecx_8 == 0xffffffff)
                    ecx_8 = 0
                
                void* edi_3 = edi_2 - ecx_8
                void* eax_10 = edi_3 + sub_4b95e0()
                
                if (edi_2 - ecx_8 s>= 0)
                    eax_10 = edi_3
                
                eax_12 = sub_5ca740(&data_1a8ca68, esi_1, "tbl_opponents", eax_10 - 1, 
                    "tbl_opponent_pods", eax_7)
                goto label_5e7b94
            
            int32_t edi_4
            
            if (data_1a8ca6c != "tbl_player_pods" || data_1a8ca68 != esi_1 || data_1a8ca70 != eax_7
                || data_1a8ca74 != 0)
            label_5e7a13:
                ecx_6 = sub_67be20(eax_7)
                data_1a8ca88 = ecx_6
                
                if (ecx_6 != 0)
                    edi_4 = data_c23bac
                    data_1a8ca6c = "tbl_player_pods"
                    data_1a8ca68 = esi_1
                    data_1a8ca70 = eax_7
                    data_1a8ca74 = 0
                label_5e7a4b:
                    eax_27 = zx.d(ecx_6.w)
                    cond:7_1 = eax_27 u>= edi_4
                    goto label_5e7ba7
                
                xmm1_1 = data_bf21f8
                xmm0_1 = data_bf21e8
            else
                ecx_6 = data_1a8ca88
                
                if (ecx_6 == 0)
                    goto label_5e7a13
                
                edi_4 = data_c23bac
                uint32_t eax_13 = zx.d(ecx_6.w)
                
                if (eax_13 u>= edi_4 || *(eax_13 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_6)
                    goto label_5e7a13
                
                if (ecx_6 != 0)
                    goto label_5e7a4b
                
                xmm1_1 = data_bf21f8
                xmm0_1 = data_bf21e8
        else
            int32_t ecx_3 = *(ebx + 0x68)
            
            if (ecx_3 != 0)
                eax = sub_5de8b0(ecx_3)
                
                if (eax == 0)
                    var_38_1 = "LookupCard"
                    var_3c = 0x3d96
                    ecx_1 = &data_871964
                    goto label_5e86f6
                
                ecx_2 = *(eax + 0x1ba0)
                
                if (ecx_2 != 0)
                    goto label_5e78e3
            
            int32_t edi_5 = *(ebx + 0x58)
            void* eax_18 = sub_5cd010(edi_5)
            int32_t esi_2
            
            if (data_8db5c4 != 0x27)
                esi_2 = 0
                
                if (data_8db5d4 == 0x27)
                    esi_2 = data_8db5d8
            else
                esi_2 = data_8db5c8
            
            int32_t ecx_11 = data_b604e0
            int32_t eax_19 = ecx_11
            
            if (ecx_11 == 0xffffffff)
                eax_19 = 0
            
            if (edi_5 != eax_19 && edi_5 != 0xffffffff)
                if (ecx_11 == 0xffffffff)
                    ecx_11 = 0
                
                void* edi_6 = edi_5 - ecx_11
                void* eax_21 = edi_6 + sub_4b95e0()
                
                if (edi_5 - ecx_11 s>= 0)
                    eax_21 = edi_6
                
                eax_12 = sub_5ca740(&data_1a8ca8c, esi_2, "tbl_opponents", eax_21 - 1, 
                    "tbl_opponent_pods", eax_18)
                goto label_5e7b94
            
            int32_t edi_7
            
            if (data_1a8ca90 != "tbl_player_pods" || data_1a8ca8c != esi_2 || data_1a8ca94 != eax_18
                || data_1a8ca98 != 0)
            label_5e7b43:
                ecx_6 = sub_67be20(eax_18)
                data_1a8caac = ecx_6
                
                if (ecx_6 != 0)
                    edi_7 = data_c23bac
                    data_1a8ca90 = "tbl_player_pods"
                    data_1a8ca8c = esi_2
                    data_1a8ca94 = eax_18
                    data_1a8ca98 = 0
                label_5e7b7f:
                    eax_27 = zx.d(ecx_6.w)
                    cond:7_1 = eax_27 u>= edi_7
                    goto label_5e7ba7
                
                xmm1_1 = data_bf21f8
                xmm0_1 = data_bf21e8
            else
                ecx_6 = data_1a8caac
                
                if (ecx_6 == 0)
                    goto label_5e7b43
                
                edi_7 = data_c23bac
                uint32_t eax_23 = zx.d(ecx_6.w)
                
                if (eax_23 u>= edi_7 || *(eax_23 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_6)
                    goto label_5e7b43
                
                if (ecx_6 != 0)
                    goto label_5e7b7f
                
                xmm1_1 = data_bf21f8
                xmm0_1 = data_bf21e8
result = *(ebx + 0x5c) - 0x3e9

switch (result)
    case 0
        result = *(ebx + 0x58)
        
        if (result == data_b809cc)
            return result
    case 1, 2, 3, 4
        return result

void* eax_31 = data_cf65b8
*(ebx + 0x1bb0) = xmm0_1
float var_24 = 0f
*(ebx + 0x1bc0) = xmm1_1
int32_t* esi_3 = data_171e874
int32_t var_20_1 = 0
int32_t var_1c_1 = _mm_cvtepi32_ps(zx.o(*(eax_31 + 0x14)))
int32_t var_18_1 = _mm_cvtepi32_ps(zx.o(*(eax_31 + 0x18)))
var_24.o = var_24.o
void* esi_4 = ebx + 0x1ba0
sub_654ce0(&var_24, esi_4, 0x85fa4c, esi_3, &var_24, &var_24, sub_5e7360(ebx), nullptr, 0)
*(sub_64e7a0(*esi_4) + 0x18bc) = sub_5e73e0
sub_4d3b70(*esi_4)
void* eax_35 = var_10

if (eax_35 != 0)
    esi_4 = eax_35

sub_666060(*esi_4, ebx + 0x1bb0)
uint32_t eax_36 = sub_64e7a0(*esi_4)
sub_665db0(eax_36, &data_cadf48, eax_36, 0x3f800000, 0xffffffff, 0)
eax = data_cc8dc0

if (eax == 0)
    var_38_1 = "GetLocalSettings"
    var_3c = 0x5fb
    var_40_4 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
    ecx_1 = "gGameSettings.localSettings"
    goto label_5e8700

void** esi_5 = &data_cadf54

if (*(eax + 0xc) == 0)
    esi_5 = &data_cadf60

uint32_t eax_37 = sub_64e7a0(*esi_4)
sub_665db0(eax_37, esi_5, eax_37, 0x3f800000, 0xffffffff, 0)
int32_t ecx_22 = *(ebx + 0x58)

if (ecx_22 != 0xffffffff)
    int32_t eax_38 = data_b604e0
    
    if (eax_38 == 0xffffffff)
        eax_38 = 0
    
    if (ecx_22 != eax_38)
        uint32_t eax_39 = sub_64e7a0(*(ebx + 0x1ba0))
        sub_665db0(eax_39, &data_be3208, eax_39, 0x3f800000, 0xffffffff, 0)

if (data_b7d418 != 0)
    void* eax_40 = sub_61cdb0(7)
    int32_t edx_13 = *esi_4
    var_10 = eax_40
    int32_t eax_41 = data_c23bec
    
    if (eax_41 != 0)
        uint32_t ecx_25 = zx.d(eax_41.w)
        
        if (ecx_25 u< data_c23bac)
            void* esi_7 = ecx_25 * 0x18d0 + data_c23ba8
            
            if (*(esi_7 + 0x18c8) == eax_41 && esi_7 != 0)
                if (edx_13 == 0 || *(esi_7 + 0x18c8) == edx_13)
                label_5e7da2:
                    
                    if (*(esi_7 + 0x13c1) != 0)
                        int32_t ecx_27 = *(esi_7 + 0x18a4)
                        
                        if (ecx_27 != 0)
                            uint32_t eax_43 = sub_64e7a0(ecx_27)
                            
                            if (eax_43 != 0)
                                int32_t* ecx_28 = *(eax_43 + 0x18c8)
                                
                                if (ecx_28 != 0)
                                    sub_5e43d0(&var_10, 1, ecx_28, &var_10)
                else
                    void* ecx_26 = *(esi_7 + 0x1718)
                    
                    if (ecx_26 != 0 && sub_67ac70(ecx_26, edx_13) != 0)
                        goto label_5e7da2

if (sub_5db430(ebx) != 0)
    uint32_t eax_46 = sub_64e7a0(*esi_4)
    sub_665db0(eax_46, &data_be3184, eax_46, 0x3f800000, 0xffffffff, 0)

void* eax_47 = sub_5cb070()

if (eax_47 != 0)
    uint32_t eax_48 = sub_64e7a0(*esi_4)
    sub_665db0(eax_48, eax_47, eax_48, 0x3f800000, 0xffffffff, 0)

if (*(ebx + 0x1c28) == data_b7fcf4)
    uint32_t eax_50 = sub_64e7a0(*esi_4)
    sub_665db0(eax_50, &data_be4194, eax_50, 0x3f800000, 0xffffffff, 0)

void* eax_51

if (*(ebx + 0x2c) != 3)
    eax_51 = *(ebx + 0x1c4)
else
    eax_51 = *(ebx + 0x58)

eax = eax_51 + 1

if (eax u> 6)
    var_38_1 = "DomDeclarePile"
    var_3c = 0x5384
    ecx_1 = "Halt"
else
    uint32_t eax_52
    
    switch (eax)
        case 1
            eax_52 = sub_64e7a0(*esi_4)
            eax = sub_665db0(eax_52, &data_be2920, eax_52, 0x3f800000, 0xffffffff, 0)
        case 2
            eax_52 = sub_64e7a0(*esi_4)
            eax = sub_665db0(eax_52, &data_be292c, eax_52, 0x3f800000, 0xffffffff, 0)
        case 3
            eax_52 = sub_64e7a0(*esi_4)
            eax = sub_665db0(eax_52, &data_be2938, eax_52, 0x3f800000, 0xffffffff, 0)
        case 4
            eax_52 = sub_64e7a0(*esi_4)
            eax = sub_665db0(eax_52, &data_be2944, eax_52, 0x3f800000, 0xffffffff, 0)
        case 5
            eax_52 = sub_64e7a0(*esi_4)
            eax = sub_665db0(eax_52, &data_be2950, eax_52, 0x3f800000, 0xffffffff, 0)
        case 6
            eax_52 = sub_64e7a0(*esi_4)
            eax = sub_665db0(eax_52, &data_be295c, eax_52, 0x3f800000, 0xffffffff, 0)
    
    if (*(ebx + 0x30) == 0)
        void* edx_16 = *(ebx + 0x5c)
        eax = edx_16
        void* eax_54
        int32_t edx_17
        
        if (eax s> 0x3e9)
            eax -= 0x3ee
            
            if (eax u<= 0x84)
                eax = zx.d(*(eax + &lookup_table_5e87d4))
                uint32_t eax_63
                void** edx_19
                
                switch (eax)
                    case nullptr
                        goto label_5e8473
                    case 1
                        uint32_t eax_75 = sub_64e7a0(*esi_4)
                        eax_54 = sub_665db0(eax_75, &data_be4290, eax_75, 0x3f800000, 0xffffffff, 0)
                        edx_17 = *(ebx + 0x5c)
                        goto label_5e7f9a
                    case 2
                        uint32_t eax_55 = sub_64e7a0(*esi_4)
                        eax_54 = sub_665db0(eax_55, &data_be41a0, eax_55, 0x3f800000, 0xffffffff, 0)
                        edx_17 = 0x451
                        goto label_5e7f9a
                    case 3
                        uint32_t eax_64 = sub_64e7a0(*esi_4)
                        eax_54 = sub_665db0(eax_64, &data_be41e8, eax_64, 0x3f800000, 0xffffffff, 0)
                        edx_17 = *(ebx + 0x5c)
                        goto label_5e7f9a
                    case 4
                        eax_63 = sub_64e7a0(*esi_4)
                        edx_19 = &data_be42b4
                    case 5
                        uint32_t eax_67 = sub_64e7a0(*esi_4)
                        eax_54 = sub_665db0(eax_67, &data_be4248, eax_67, 0x3f800000, 0xffffffff, 0)
                        edx_17 = *(ebx + 0x5c)
                        goto label_5e7f9a
                    case 6
                        uint32_t eax_68 = sub_64e7a0(*esi_4)
                        eax_54 = sub_665db0(eax_68, &data_be4254, eax_68, 0x3f800000, 0xffffffff, 0)
                        edx_17 = *(ebx + 0x5c)
                        goto label_5e7f9a
                    case 7
                        uint32_t eax_70 = sub_64e7a0(*esi_4)
                        eax_54 = sub_665db0(eax_70, &data_be4278, eax_70, 0x3f800000, 0xffffffff, 0)
                        edx_17 = *(ebx + 0x5c)
                        goto label_5e7f9a
                    case 8
                        uint32_t eax_72 = sub_64e7a0(*esi_4)
                        eax_54 = sub_665db0(eax_72, &data_be4224, eax_72, 0x3f800000, 0xffffffff, 0)
                        edx_17 = *(ebx + 0x5c)
                        goto label_5e7f9a
                    case 9
                        uint32_t eax_73 = sub_64e7a0(*esi_4)
                        eax_54 = sub_665db0(eax_73, &data_be4230, eax_73, 0x3f800000, 0xffffffff, 0)
                        edx_17 = *(ebx + 0x5c)
                        goto label_5e7f9a
                    case 0xa
                        uint32_t eax_62 = sub_64e7a0(*esi_4)
                        eax_54 = sub_665db0(eax_62, &data_be420c, eax_62, 0x3f800000, 0xffffffff, 0)
                        edx_17 = *(ebx + 0x5c)
                        goto label_5e7f9a
                    case 0xb
                        uint32_t eax_69 = sub_64e7a0(*esi_4)
                        eax_54 = sub_665db0(eax_69, &data_be423c, eax_69, 0x3f800000, 0xffffffff, 0)
                        edx_17 = *(ebx + 0x5c)
                        goto label_5e7f9a
                    case 0xc
                        uint32_t eax_74 = sub_64e7a0(*esi_4)
                        eax_54 = sub_665db0(eax_74, &data_be4260, eax_74, 0x3f800000, 0xffffffff, 0)
                        edx_17 = *(ebx + 0x5c)
                        goto label_5e7f9a
                    case 0xd
                        uint32_t eax_65 = sub_64e7a0(*esi_4)
                        eax_54 = sub_665db0(eax_65, &data_be4218, eax_65, 0x3f800000, 0xffffffff, 0)
                        edx_17 = *(ebx + 0x5c)
                        goto label_5e7f9a
                    case 0xe
                        uint32_t eax_66 = sub_64e7a0(*esi_4)
                        eax_54 = sub_665db0(eax_66, &data_be426c, eax_66, 0x3f800000, 0xffffffff, 0)
                        edx_17 = *(ebx + 0x5c)
                        goto label_5e7f9a
                    case 0xf
                        uint32_t eax_58 = sub_64e7a0(*esi_4)
                        eax_54 = sub_665db0(eax_58, &data_be41b8, eax_58, 0x3f800000, 0xffffffff, 0)
                        edx_17 = 0x45f
                        goto label_5e7f9a
                    case 0x10
                        uint32_t eax_57 = sub_64e7a0(*esi_4)
                        eax_54 = sub_665db0(eax_57, &data_be41d0, eax_57, 0x3f800000, 0xffffffff, 0)
                        edx_17 = 0x460
                        goto label_5e7f9a
                    case 0x11
                        uint32_t eax_59 = sub_64e7a0(*esi_4)
                        eax_54 = sub_665db0(eax_59, &data_be41c4, eax_59, 0x3f800000, 0xffffffff, 0)
                        edx_17 = 0x461
                        goto label_5e7f9a
                    case 0x12
                        uint32_t eax_60 = sub_64e7a0(*esi_4)
                        eax_54 = sub_665db0(eax_60, &data_be41f4, eax_60, 0x3f800000, 0xffffffff, 0)
                        edx_17 = 0x462
                        goto label_5e7f9a
                    case 0x13
                        uint32_t eax_61 = sub_64e7a0(*esi_4)
                        eax_54 = sub_665db0(eax_61, &data_be4200, eax_61, 0x3f800000, 0xffffffff, 0)
                        edx_17 = *(ebx + 0x5c)
                        goto label_5e7f9a
                    case 0x14
                        uint32_t eax_71 = sub_64e7a0(*esi_4)
                        eax_54 = sub_665db0(eax_71, &data_be4284, eax_71, 0x3f800000, 0xffffffff, 0)
                        edx_17 = *(ebx + 0x5c)
                        goto label_5e7f9a
                    case 0x15
                        uint32_t eax_76 = sub_64e7a0(*esi_4)
                        eax_54 = sub_665db0(eax_76, &data_be42c0, eax_76, 0x3f800000, 0xffffffff, 0)
                        edx_17 = *(ebx + 0x5c)
                        goto label_5e7f9a
                    case 0x16
                        uint32_t eax_77 = sub_64e7a0(*esi_4)
                        eax_54 = sub_665db0(eax_77, &data_be42cc, eax_77, 0x3f800000, 0xffffffff, 0)
                        edx_17 = *(ebx + 0x5c)
                        goto label_5e7f9a
                    case 0x17
                        uint32_t eax_78 = sub_64e7a0(*esi_4)
                        eax_54 = sub_665db0(eax_78, &data_be42d8, eax_78, 0x3f800000, 0xffffffff, 0)
                        edx_17 = *(ebx + 0x5c)
                        goto label_5e7f9a
                    case 0x18
                        uint32_t eax_79 = sub_64e7a0(*esi_4)
                        eax_54 = sub_665db0(eax_79, &data_be42e4, eax_79, 0x3f800000, 0xffffffff, 0)
                        edx_17 = *(ebx + 0x5c)
                        goto label_5e7f9a
                    case 0x19
                        uint32_t eax_80 = sub_64e7a0(*esi_4)
                        eax_54 = sub_665db0(eax_80, &data_be42f0, eax_80, 0x3f800000, 0xffffffff, 0)
                        edx_17 = *(ebx + 0x5c)
                        goto label_5e7f9a
                    case 0x1a
                        uint32_t eax_81 = sub_64e7a0(*esi_4)
                        eax_54 = sub_665db0(eax_81, &data_be42fc, eax_81, 0x3f800000, 0xffffffff, 0)
                        edx_17 = *(ebx + 0x5c)
                        goto label_5e7f9a
                    case 0x1b
                        uint32_t eax_82 = sub_64e7a0(*esi_4)
                        eax_54 = sub_665db0(eax_82, &data_be4308, eax_82, 0x3f800000, 0xffffffff, 0)
                        edx_17 = *(ebx + 0x5c)
                        goto label_5e7f9a
                    case 0x1c
                        uint32_t eax_83 = sub_64e7a0(*esi_4)
                        eax_54 = sub_665db0(eax_83, &data_be4320, eax_83, 0x3f800000, 0xffffffff, 0)
                        edx_17 = *(ebx + 0x5c)
                        goto label_5e7f9a
                    case 0x1d
                        uint32_t eax_84 = sub_64e7a0(*esi_4)
                        eax_54 = sub_665db0(eax_84, &data_be4314, eax_84, 0x3f800000, 0xffffffff, 0)
                        edx_17 = *(ebx + 0x5c)
                        goto label_5e7f9a
                    case 0x1e
                        uint32_t eax_87 = sub_64e7a0(*esi_4)
                        eax_54 = sub_665db0(eax_87, &data_be4344, eax_87, 0x3f800000, 0xffffffff, 0)
                        edx_17 = *(ebx + 0x5c)
                        goto label_5e7f9a
                    case 0x1f
                        uint32_t eax_86 = sub_64e7a0(*esi_4)
                        eax_54 = sub_665db0(eax_86, &data_be4338, eax_86, 0x3f800000, 0xffffffff, 0)
                        edx_17 = *(ebx + 0x5c)
                        goto label_5e7f9a
                    case 0x20
                        uint32_t eax_85 = sub_64e7a0(*esi_4)
                        eax_54 = sub_665db0(eax_85, &data_be432c, eax_85, 0x3f800000, 0xffffffff, 0)
                        edx_17 = *(ebx + 0x5c)
                        goto label_5e7f9a
                    case 0x21
                        sub_5d1210(eax, edx_16, *(ebx + 0x58), 0, 0)
                        int32_t var_40_5 = 0
                        sub_5d8770(*esi_4)
                    label_5e8473:
                        eax_63 = sub_64e7a0(*esi_4)
                        edx_19 = &data_be41e8
                    case 0x22
                        goto label_5e7f1b
                
                sub_665db0(eax_63, edx_19, eax_63, 0x3f800000, 0xffffffff, 0)
                goto label_5e8493
            
        label_5e7f1b:
            var_38_1 = "DomDeclarePile"
            var_3c = 0x5440
            ecx_1 = "Halt"
        else
            if (eax != 0x3e9)
                if (eax == 3)
                    goto label_5e8473
                
                goto label_5e7f1b
            
            uint32_t eax_53 = sub_64e7a0(*esi_4)
            eax_54 = sub_665db0(eax_53, &data_be41dc, eax_53, 0x3f800000, 0xffffffff, 0)
            edx_17 = 0x3e9
        label_5e7f9a:
            sub_5d1210(eax_54, edx_17, *(ebx + 0x58), 0, 0)
            int32_t var_48_4 = 0
            sub_5d8770(*esi_4)
        label_5e8493:
            int32_t edx_21 = *(ebx + 0x5c)
            uint32_t eax_93
            int32_t ecx_115
            
            if (edx_21 != 0x3ee)
                int32_t ecx_119 = data_b604e0
                int32_t eax_94 = ecx_119
                
                if (ecx_119 == 0xffffffff)
                    eax_94 = 0
                
                if (data_b80b48 != eax_94)
                    return sub_65d6e0(*esi_4, data_8c4634)
                
                if (edx_21 != 3 && ecx_119 == 0xffffffff)
                    ecx_119 = 0
                
                if (edx_21 != 3 && *(ebx + 0x58) != ecx_119)
                    return sub_65d6e0(*esi_4, data_8c4634)
                
                int32_t eax_95 = sub_5cda30(data_b80b08)
                
                if (eax_95 u> 0xd)
                    return sub_65d6e0(*esi_4, data_8c4634)
                
                int32_t var_8_3
                int32_t eax_96
                bool cond:10_1
                
                switch (eax_95)
                    case 0, 1, 2, 3, 0xb
                        return sub_65d6e0(*esi_4, data_8c4634)
                    case 4
                        cond:10_1 = edx_21 == 0x44e
                    case 5
                        cond:10_1 = edx_21 == 0x44d
                    case 6
                        eax_96 = 7
                        void* i = &data_b8206c
                        var_8_3 = 7
                        
                        do
                            if (eax_96 s>= 0x48)
                                sub_591930()
                                eax_96 = var_8_3
                            
                            if (*i == 0x70d)
                                goto label_5e866f
                            
                            if (*(i + 4) == 0x70d)
                                goto label_5e867b
                            
                            eax_96 += 1
                            i += 0x10
                            var_8_3 = eax_96
                        while (i s< 0xb8247c)
                        
                    label_5e866d:
                        eax_96 = 0
                    label_5e866f:
                        var_8_3 = eax_96
                    label_5e867b:
                        
                        if (sub_5d1210(eax_96, eax_96, 0xffffffff, 0, 0) == 0)
                            return sub_65d6e0(*esi_4, data_8c4634)
                        
                        cond:10_1 = edx_21 == var_8_3
                    case 7
                        cond:10_1 = edx_21 == 3
                    case 8
                        cond:10_1 = edx_21 == 0x462
                    case 9
                        cond:10_1 = edx_21 == 0x469
                    case 0xa
                        cond:10_1 = edx_21 == 0x46b
                    case 0xc
                        eax_96 = 7
                        void* i_1 = &data_b8206c
                        var_8_3 = 7
                        
                        do
                            if (eax_96 s>= 0x48)
                                sub_591930()
                                eax_96 = var_8_3
                            
                            if (*i_1 == 0x718)
                                goto label_5e866f
                            
                            if (*(i_1 + 4) == 0x718)
                                goto label_5e867b
                            
                            eax_96 += 1
                            i_1 += 0x10
                            var_8_3 = eax_96
                        while (i_1 s< 0xb8247c)
                        
                        goto label_5e866d
                    case 0xd
                        cond:10_1 = edx_21 == 0x46d
                
                eax_95.b = cond:10_1
                
                if (eax_95.b == 0)
                    return sub_65d6e0(*esi_4, data_8c4634)
                
                ecx_115 = *esi_4
                
                if (*(ebx + 0x5c) == 3)
                    goto label_5e851a
                
                eax_93 = sub_64e7a0(ecx_115)
                sub_665db0(eax_93, &data_be31b4, eax_93, 0x3f800000, 0xffffffff, 0)
                return sub_65d6e0(*esi_4, data_8c4634)
            
            int32_t eax_89 = data_b604e0
            
            if (eax_89 == 0xffffffff)
                eax_89 = 0
            
            if (data_b80b48 != eax_89)
                return sub_65d6e0(*esi_4, data_8c4634)
            
            int32_t ecx_114 = *(ebx + 0x68)
            
            if (ecx_114 == 0)
                int32_t ecx_116 = *(ebx + 0x70)
                
                if (ecx_116 == 0)
                    return sub_65d6e0(*esi_4, data_8c4634)
                
                uint32_t eax_91 = sub_5cba00(ecx_116)
                
                if (sub_5efe00(eax_91, nullptr, eax_91, 0) == 0)
                    return sub_65d6e0(*esi_4, data_8c4634)
                
                eax_93 = sub_64e7a0(*esi_4)
                sub_665db0(eax_93, &data_be31c0, eax_93, 0x3f800000, 0xffffffff, 0)
                return sub_65d6e0(*esi_4, data_8c4634)
            
            eax = sub_5de8b0(ecx_114)
            
            if (eax != 0)
                if (data_b80b4c != 2 || *(eax + 0x2c) != 0 || data_b80b08 == 0x2b
                        || *(eax + 0x98) != data_b80b50)
                    return sub_65d6e0(*esi_4, data_8c4634)
                
                ecx_115 = *esi_4
            label_5e851a:
                eax_93 = sub_64e7a0(ecx_115)
                sub_665db0(eax_93, &data_be31c0, eax_93, 0x3f800000, 0xffffffff, 0)
                return sub_65d6e0(*esi_4, data_8c4634)
            
            var_38_1 = "LookupCard"
            var_3c = 0x3d96
            ecx_1 = &data_871964
    else
        var_38_1 = "DomDeclarePile"
        var_3c = 0x538a
        ecx_1 = "gfx.pile.cardType == CARD_NONE"

goto label_5e86f6
