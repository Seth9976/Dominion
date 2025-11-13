// 函数: sub_5f8de0
// 地址: 0x5f8de0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx
int32_t var_4 = ebx
int32_t* ebx_1 = &var_4
void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_76a5bd
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_20 = &var_4
int32_t __saved_ebp
int32_t var_35c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t edi = arg2
int32_t var_2f0 = edi
void* esi = *fsbase->ThreadLocalStoragePointer

if (data_1a940a8 s> *(esi + 8))
    sub_75970e(&data_1a940a8)
    
    if (data_1a940a8 == 0xffffffff)
        int32_t var_14_1 = 0
        data_1a940ac = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
        ebx_1, esi = sub_4acb80(&data_1a940ac, "have_plunder")
        int32_t var_14_2 = 0xffffffff
        __Init_thread_footer(&data_1a940a8)

uint32_t eax_7 = sub_64e7a0(edi)
sub_665db0(eax_7, &data_1a940ac, eax_7, 0x3f800000, 0xffffffff, 0)

if (data_1a940b8 s> *(esi + 8))
    sub_75970e(&data_1a940b8)
    
    if (data_1a940b8 == 0xffffffff)
        int32_t var_14_3 = 1
        data_1a940bc = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
        ebx_1 = sub_4acb80(&data_1a940bc, "have_rising_sun")
        int32_t var_14_4 = 0xffffffff
        __Init_thread_footer(&data_1a940b8)

uint32_t eax_9 = sub_64e7a0(edi)
sub_665db0(eax_9, &data_1a940bc, eax_9, 0x3f800000, 0xffffffff, 0)
void var_33c

if (sub_4aceb0(data_be153c, &var_33c) != 0)
    uint32_t eax_11 = sub_64e7a0(edi)
    sub_665db0(eax_11, &data_be40e0, eax_11, 0x3f800000, 0xffffffff, 0)

int32_t eax_12 = sub_4bb9f0(0x1a940c8, edi, "txt_addItem")

if (data_c23be0 != eax_12)
    *(arg3 + 0x38) = 0
    *(arg3 + 0x48) = 0
    *(arg3 + 0x58) = 0
    char* eax_15 = *(arg3 + 0x30)
    
    if (eax_15 != 0 && eax_15 != &data_801800)
        if (data_cf65bc != 0 && *eax_15 != 0)
            char* eax_16 = sub_63d4e0(arg3 + 0x30)
            int32_t temp0_1 = *(eax_16 + 4)
            *(eax_16 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_16, *(eax_16 + 0xc) + 0x10)
        
        *(arg3 + 0x30) = &data_801800
else
    uint32_t eax_13 = sub_64e7a0(edi)
    sub_665db0(eax_13, &data_be4524, eax_13, 0x3f800000, 0xffffffff, 0)

bool cond:0 = data_1a940f0 != "tbl_zoom"
void* eax_17 = data_cf65b8
int32_t var_328 = 0
int32_t var_324 = 0
int32_t var_320 = _mm_cvtepi32_ps(zx.o(*(eax_17 + 0x14)))
int32_t var_31c = _mm_cvtepi32_ps(zx.o(*(eax_17 + 0x18)))
int128_t var_34c = var_328.o
int32_t esi_2

if (cond:0 || data_1a940ec != edi || data_1a940f4 != 0 || data_1a940f8 != 0)
label_5f90a4:
    int32_t eax_21 = sub_67bd70(edi, "tbl_zoom")
    
    if (eax_21 != 0)
        esi_2 = sub_64c870(sub_64e7a0(eax_21), nullptr)
        data_1a9410c = esi_2
        
        if (esi_2 != 0)
            data_1a940f0 = "tbl_zoom"
            data_1a940ec = edi
            data_1a940f4 = 0
            data_1a940f8 = 0
    else
        data_1a9410c = eax_21
        esi_2 = 0
else
    esi_2 = data_1a9410c
    
    if (esi_2 == 0)
        goto label_5f90a4
    
    uint32_t eax_18 = zx.d(esi_2.w)
    
    if (eax_18 u>= data_c23bac || *(eax_18 * 0x18d0 + data_c23ba8 + 0x18c8) != esi_2)
        goto label_5f90a4

if (data_1a94114 != "tbl_zoom_landscape" || data_1a94110 != edi || data_1a94118 != 0
        || data_1a9411c != 0)
    goto label_5f915b

int32_t edi_1 = data_1a94130
uint32_t eax_24

if (edi_1 != 0)
    eax_24 = zx.d(edi_1.w)

if (edi_1 != 0 && eax_24 u< data_c23bac && *(eax_24 * 0x18d0 + data_c23ba8 + 0x18c8) == edi_1)
    if (edi_1 == 0)
        goto label_5f9187
    
    goto label_5f91d3

edi = var_2f0
label_5f915b:
int32_t eax_27 = sub_67bd70(edi, "tbl_zoom_landscape")
int128_t var_208
int128_t xmm0_5
int128_t xmm1

if (eax_27 != 0)
    edi_1 = sub_64c870(sub_64e7a0(eax_27), nullptr)
    data_1a94130 = edi_1
    
    if (edi_1 == 0)
        goto label_5f9187
    
    data_1a94114 = "tbl_zoom_landscape"
    data_1a94110 = var_2f0
    data_1a94118 = 0
    data_1a9411c = 0
label_5f91d3:
    uint32_t eax_31
    
    if (esi_2 != 0)
        eax_31 = zx.d(esi_2.w)
    
    int128_t xmm2_1
    int128_t xmm3_1
    
    if (esi_2 == 0 || eax_31 u>= data_c23bac || *(eax_31 * 0x18d0 + data_c23ba8 + 0x18c8) != esi_2)
        xmm1 = data_bf21f8
        xmm0_5 = data_bf21e8
        xmm3_1 = xmm1
        xmm2_1 = xmm0_5
    else
        uint32_t eax_34 = sub_64e7a0(esi_2)
        xmm1 = data_bf21f8
        xmm0_5 = data_bf21e8
        xmm2_1 = *(eax_34 + 0x1620)
        xmm3_1 = *(eax_34 + 0x1630)
    
    uint32_t eax_35 = zx.d(edi_1.w)
    var_208 = xmm2_1
    int128_t var_1f8_1 = xmm3_1
    
    if (eax_35 u< data_c23bac && *(eax_35 * 0x18d0 + data_c23ba8 + 0x18c8) == edi_1)
        uint32_t eax_38 = sub_64e7a0(edi_1)
        xmm0_5 = *(eax_38 + 0x1620)
        xmm1 = *(eax_38 + 0x1630)
else
    data_1a94130 = eax_27
label_5f9187:
    xmm0_5 = data_bf21e8
    xmm1 = data_bf21f8
    var_208 = xmm0_5
    int128_t var_1f8 = xmm1

void* edi_2 = nullptr
void* var_2fc = nullptr
int128_t var_228 = xmm0_5
void* var_2f4 = 0x38
void* esi_3 = nullptr
int128_t var_218 = xmm1
int32_t* var_2f8 = arg3 + 0x3c
int32_t var_364_1
char const* const var_360_3
void* eax_49
char* ecx_45

while (true)
    int32_t var_2ec_1
    
    if (*(esi_3 + 0x1a9413c) != "tblLookup" || *(esi_3 + 0x1a94138) != var_2f0
        || *(esi_3 + 0x1a94140) != edi_2 || *(esi_3 + 0x1a94144) != 0)
    label_5f9306:
        int32_t eax_44 = sub_67be20(edi_2)
        var_2ec_1 = eax_44
        *(esi_3 + 0x1a94158) = eax_44
        
        if (eax_44 != 0)
            *(esi_3 + 0x1a9413c) = "tblLookup"
            *(esi_3 + 0x1a94138) = var_2f0
            *(esi_3 + 0x1a94140) = edi_2
            *(esi_3 + 0x1a94144) = 0
        else
            var_2ec_1 = eax_44
    else
        int32_t ecx_19 = *(esi_3 + 0x1a94158)
        var_2ec_1 = ecx_19
        
        if (ecx_19 == 0)
            goto label_5f9306
        
        uint32_t eax_41 = zx.d(ecx_19.w)
        
        if (eax_41 u>= data_c23bac || *(eax_41 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_19)
            goto label_5f9306
    
    int32_t edi_3 = 0
    int32_t var_300_1 = 0
    int32_t eax_46 = var_2f8[-1]
    
    if (eax_46 != 0)
        if (eax_46 != 1 && eax_46 != 2)
            eax_49 = eax_46 - 3
            
            if (eax_46 != 3)
            label_5f9795:
                var_360_3 = "LookupWhatGetDef"
                var_364_1 = 0x86a6
                ecx_45 = "Halt"
                break
        
        int32_t eax_51 = *(sub_571b30(*var_2f8, arg5) + 0x8c)
        var_300_1 = eax_51
        void* eax_52 = sub_571b30(eax_51, 0x18)
        
        if (((*(eax_52 + 0x98) & 0x7f000400) | (*(eax_52 + 0x9c) & 0x940)) == 0)
            if (*(esi_3 + 0x1a9421c) != "tblLookupCard" || *(esi_3 + 0x1a94218) != var_2ec_1
                || *(esi_3 + 0x1a94220) != 0 || *(esi_3 + 0x1a94224) != 0)
            label_5f94d5:
                int32_t eax_65 = sub_67bd70(var_2ec_1, "tblLookupCard")
                
                if (eax_65 != 0)
                    edi_3 = sub_64c870(sub_64e7a0(eax_65), nullptr)
                    *(esi_3 + 0x1a94238) = edi_3
                    
                    if (edi_3 != 0)
                        *(esi_3 + 0x1a9421c) = "tblLookupCard"
                        *(esi_3 + 0x1a94218) = var_2ec_1
                        *(esi_3 + 0x1a94220) = 0
                        *(esi_3 + 0x1a94224) = 0
                else
                    *(esi_3 + 0x1a94238) = eax_65
                    edi_3 = 0
            else
                edi_3 = *(esi_3 + 0x1a94238)
                
                if (edi_3 == 0)
                    goto label_5f94d5
                
                uint32_t eax_62 = zx.d(edi_3.w)
                
                if (eax_62 u>= data_c23bac || *(eax_62 * 0x18d0 + data_c23ba8 + 0x18c8) != edi_3)
                    goto label_5f94d5
        else if (*(esi_3 + 0x1a941ac) != "tblLookupLandscape" || *(esi_3 + 0x1a941a8) != var_2ec_1
            || *(esi_3 + 0x1a941b0) != 0 || *(esi_3 + 0x1a941b4) != 0)
        label_5f941e:
            int32_t eax_58 = sub_67bd70(var_2ec_1, "tblLookupLandscape")
            
            if (eax_58 != 0)
                edi_3 = sub_64c870(sub_64e7a0(eax_58), nullptr)
                *(esi_3 + 0x1a941c8) = edi_3
                
                if (edi_3 != 0)
                    *(esi_3 + 0x1a941ac) = "tblLookupLandscape"
                    *(esi_3 + 0x1a941a8) = var_2ec_1
                    *(esi_3 + 0x1a941b0) = 0
                    *(esi_3 + 0x1a941b4) = 0
            else
                *(esi_3 + 0x1a941c8) = eax_58
                edi_3 = 0
        else
            edi_3 = *(esi_3 + 0x1a941c8)
            
            if (edi_3 == 0)
                goto label_5f941e
            
            uint32_t eax_55 = zx.d(edi_3.w)
            
            if (eax_55 u>= data_c23bac || *(eax_55 * 0x18d0 + data_c23ba8 + 0x18c8) != edi_3)
                goto label_5f941e
    
    void* edx_6 = data_be153c
    void* eax_70 = var_2fc + 0xf
    void* var_2ec_2 = eax_70
    void* ecx_33 = *(edx_6 + 0xbbc)
    *(edx_6 + 0x258) = 1
    
    if (eax_70 s<= ecx_33)
        eax_70 = ecx_33
    
    *(edx_6 + 0xbfc) = 1
    *(edx_6 + 0xbbc) = eax_70
    void* eax_72 = var_2f4 + edx_6
    
    if (var_300_1 != 0 && edi_3 != 0)
        uint32_t eax_73 = zx.d(edi_3.w)
        int128_t xmm0_6
        int128_t xmm1_1
        
        if (eax_73 u>= data_c23bac || *(eax_73 * 0x18d0 + data_c23ba8 + 0x18c8) != edi_3)
            xmm0_6 = data_bf21e8
            xmm1_1 = data_bf21f8
        else
            uint32_t eax_76 = sub_64e7a0(edi_3)
            xmm0_6 = *(eax_76 + 0x1620)
            xmm1_1 = *(eax_76 + 0x1630)
        
        int128_t var_268 = xmm0_6
        int128_t var_258_1 = xmm1_1
        void* eax_77 = sub_571b30(var_300_1, 0x18)
        int32_t ecx_38
        
        if (((*(eax_77 + 0x98) & 0x7f000400) | (*(eax_77 + 0x9c) & 0x940)) != 0)
            ecx_38.b = 1
        else
            ecx_38.b = 0
        
        int128_t* eax_80 = &var_228
        
        if (ecx_38.b == 0)
            eax_80 = &var_208
        
        float xmm1_2 = *(var_2f4 + &data_ccf724)
        int128_t var_248 = *eax_80
        void* eax_81 = data_be153c
        int128_t var_238_1 = eax_80[1]
        int64_t var_330 = 0
        float xmm0_10 = data_8c4634 * 5f
        float xmm0_11
        
        if (*(eax_81 + 0xbd4) != var_2ec_2 - 1)
            xmm0_11 = xmm1_2 - xmm0_10
        else
            xmm0_11 = xmm0_10 + xmm1_2
        
        int32_t xmm1_4 = (zx.o(0)).d
        
        if (not(0 f> xmm0_11))
            xmm1_4 = _mm_min_ss(0x3f800000, xmm0_11)
        
        *(var_2f4 + &data_ccf724) = xmm1_4
        var_330:4.d = xmm1_4
        var_330.w = 0
        sub_606900(&var_34c, 0x32c9, var_300_1, eax_72, &var_34c, &var_268, &var_248, &var_330, 2, 
            0, 1, 0)
    else if (*eax_72 != 0)
        sub_64e810(eax_72)
    
    esi_3 += 0x24
    var_2f8 = &var_2f8[4]
    edi_2 = var_2fc + 1
    var_2f4 += 4
    var_2fc = edi_2
    
    if (esi_3 s>= 0x6c)
        int128_t var_c8[0xa]
        memset(&var_c8, 0, 0xa0)
        sub_5f8d20(arg4, &var_c8)
        int32_t var_300_2
        int32_t eax_86
        
        if (data_1a94288 != "rootContent" || data_1a94284 != var_2f0 || data_1a9428c != 0xffffffff)
        label_5f97ae:
            int32_t eax_87 = sub_67bd70(var_2f0, "rootContent")
            eax_86 = var_2f0
            var_300_2 = eax_87
            data_1a942a4 = eax_87
            
            if (eax_87 != 0)
                data_1a94288 = "rootContent"
                data_1a94284 = eax_86
                data_1a9428c = 0xffffffff
            else
                var_300_2 = eax_87
        else
            int32_t edx_9 = data_1a942a4
            var_300_2 = edx_9
            
            if (edx_9 == 0)
                goto label_5f97ae
            
            uint32_t eax_83 = zx.d(edx_9.w)
            
            if (eax_83 u>= data_c23bac || *(eax_83 * 0x18d0 + data_c23ba8 + 0x18c8) != edx_9)
                goto label_5f97ae
            
            eax_86 = var_2f0
        
        void* ecx_46 = nullptr
        void* var_2ec_3 = nullptr
        
        while (true)
            void* esi_4 = ecx_46 * 9
            int32_t var_2f4_1
            int32_t edi_6
            
            if (*((esi_4 << 2) + &data_1a942ac) != "tblKingdom"
                || *((esi_4 << 2) + &data_1a942a8) != eax_86
                || *((esi_4 << 2) + &data_1a942b0) != ecx_46
                || *((esi_4 << 2) + &data_1a942b4) != 0)
            label_5f986d:
                edi_6 = sub_67be20(ecx_46)
                var_2f4_1 = edi_6
                *((esi_4 << 2) + &data_1a942c8) = edi_6
                
                if (edi_6 != 0)
                    *((esi_4 << 2) + &data_1a942a8) = var_2f0
                    *((esi_4 << 2) + &data_1a942ac) = "tblKingdom"
                    *((esi_4 << 2) + &data_1a942b0) = var_2ec_3
                    *((esi_4 << 2) + &data_1a942b4) = 0
                else
                    var_2f4_1 = edi_6
            else
                edi_6 = *((esi_4 << 2) + &data_1a942c8)
                var_2f4_1 = edi_6
                
                if (edi_6 == 0)
                    goto label_5f986d
                
                uint32_t eax_88 = zx.d(edi_6.w)
                
                if (eax_88 u>= data_c23bac || *(eax_88 * 0x18d0 + data_c23ba8 + 0x18c8) != edi_6)
                    goto label_5f986d
            
            int128_t* esi_5
            
            if (*(arg3 + 4) != 1)
                esi_5 = (var_2ec_3 << 4) + 0x1a94410
                *esi_5 = 0
            else if (*(arg3 + 0x70) != 0)
                if (edi_6 != 0)
                    goto label_5f98e2
                
                esi_5 = (var_2ec_3 << 4) + 0x1a94410
                *esi_5 = 0
            else if (ebx_1[4].b == 0 || edi_6 == 0)
                esi_5 = (var_2ec_3 << 4) + 0x1a94410
                *esi_5 = 0
            else
            label_5f98e2:
                float xmm0_12 = *(sub_64e7a0(var_300_2) + 0x1680)
                xmm0_12 - 0f
                uint32_t eax_95
                eax_95:1.b = (xmm0_12 == 0f ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_12, 0f) ? 1 : 0) << 2 | (xmm0_12 < 0f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (not(p_2))
                    esi_5 = (var_2ec_3 << 4) + 0x1a94410
                    *esi_5 = 0
                else
                    esi_5 = (var_2ec_3 << 4) + 0x1a94410
                    *esi_5 = var_c8[var_2ec_3]
            
            void* ecx_49 = data_be153c
            void* edx_13 = var_2ec_3 + 1
            bool cond:6_1 = *esi_5 != 0
            void* eax_100 = *(ecx_49 + 0xbbc)
            *(ecx_49 + 0x258) = 1
            *(ecx_49 + 0xbfc) = 1
            
            if (cond:6_1)
                if (edx_13 s<= eax_100)
                    edx_13 = eax_100
                
                *(ecx_49 + 0xbbc) = edx_13
                int32_t eax_104 = *esi_5
                
                if (eax_104 != 1 && eax_104 != 2)
                    eax_49 = eax_104 - 3
                    
                    if (eax_104 != 3)
                        goto label_5f9795
                
                eax_49 = sub_571b30(*(esi_5 + 4), arg5)
                int32_t i = *(eax_49 + 0x8c)
                
                if (i != 0)
                    uint32_t eax_107
                    
                    if (edi_6 != 0)
                        eax_107 = zx.d(edi_6.w)
                    
                    int128_t xmm0_14
                    int128_t xmm1_5
                    
                    if (edi_6 == 0 || eax_107 u>= data_c23bac
                            || *(eax_107 * 0x18d0 + data_c23ba8 + 0x18c8) != edi_6)
                        xmm1_5 = data_bf21f8
                        xmm0_14 = data_bf21e8
                    else
                        uint32_t eax_110 = sub_64e7a0(edi_6)
                        xmm0_14 = *(eax_110 + 0x1620)
                        xmm1_5 = *(eax_110 + 0x1630)
                    
                    int128_t var_2a8 = xmm0_14
                    int128_t var_298_1 = xmm1_5
                    void* eax_111 = sub_571b30(i, 0x18)
                    int32_t ecx_56
                    
                    if (((*(eax_111 + 0x98) & 0x7f000400) | (*(eax_111 + 0x9c) & 0x940)) != 0)
                        ecx_56.b = 1
                    else
                        ecx_56.b = 0
                    
                    int128_t* eax_114 = &var_228
                    
                    if (ecx_56.b == 0)
                        eax_114 = &var_208
                    
                    float xmm1_6 = *((var_2ec_3 << 2) + &data_ccf724)
                    int128_t var_288 = *eax_114
                    void* eax_115 = data_be153c
                    int128_t var_278_1 = eax_114[1]
                    int64_t var_338 = 0
                    float xmm0_18 = data_8c4634 * 5f
                    float xmm0_19
                    
                    if (*(eax_115 + 0xbd4) != var_2ec_3)
                        xmm0_19 = xmm1_6 - xmm0_18
                    else
                        xmm0_19 = xmm0_18 + xmm1_6
                    
                    int32_t xmm1_8 = (zx.o(0)).d
                    
                    if (not(0 f> xmm0_19))
                        xmm1_8 = _mm_min_ss(0x3f800000, xmm0_19)
                    
                    *((var_2ec_3 << 2) + &data_ccf724) = xmm1_8
                    var_338:4.d = xmm1_8
                    var_338.w = 0
                    sub_606900(&var_34c, 0x32c9, i, ecx_49 + (var_2ec_3 << 2), &var_34c, &var_2a8, 
                        &var_288, &var_338, 2, 0, 0, 0)
                    uint32_t eax_117 = sub_64e7a0(edi_6)
                    sub_665db0(eax_117, &data_be44dc, eax_117, 0x3f800000, 0xffffffff, 0)
                    int32_t var_2f8_1 = 0
                    void* edi_8 = &arg4[0x28]
                    
                    while (*edi_8 != 1
                        || (*(sub_571b30(*(edi_8 + 4), sub_5cf7e0()) + 0x9c) & 0x100) == 0)
                    label_5f9b9b:
                        edi_8 += 0x48
                        int32_t eax_125 = var_2f8_1 + 1
                        var_2f8_1 = eax_125
                        
                        if (eax_125 s>= 4)
                            goto label_5f9c48
                    
                    void* eax_123 = edi_8 + 0x10
                    int32_t ecx_64 = 0
                    
                    while (*eax_123 != i)
                        ecx_64 += 1
                        eax_123 += 4
                        
                        if (ecx_64 s>= 0xe)
                            goto label_5f9b9b
                    
                    int128_t xmm0_20 = *(arg4 + var_2f8_1 * 0x48 + 0xa0)
                    eax_49 = xmm0_20
                    var_328.o = xmm0_20
                    
                    if (eax_49 != 1)
                        var_360_3 = "DomCreateUpdateKingdomCards"
                        var_364_1 = 0x87ef
                        ecx_45 = "trait.type == KINGDOM_CARD"
                        break
                    
                    uint32_t eax_128 = sub_64e7a0(var_2f4_1)
                    sub_665db0(eax_128, &data_be3f30, eax_128, 0x3f800000, 0, 0)
                    void* eax_129 = sub_571b30(var_324, arg5)
                    uint32_t eax_130 = sub_64e7a0(var_2f4_1)
                    int32_t var_370_3 = 0xffffffff
                    sub_666120(sub_665db0(eax_130, eax_129 + 0x74, eax_130, 0x3f800000, 0, 0), 
                        &data_be4134, var_2f4_1, 1)
                    goto label_5f9c48
                
                var_360_3 = "DomCreateUpdateKingdomCards"
                var_364_1 = 0x87c6
            else
                if (edx_13 s<= eax_100)
                    edx_13 = eax_100
                
                *(ecx_49 + 0xbbc) = edx_13
                void* ecx_50 = ecx_49 + (var_2ec_3 << 2)
                
                if (*ecx_50 != 0)
                    sub_64e810(ecx_50)
                
            label_5f9c48:
                ecx_46 = var_2ec_3 + 1
                var_2ec_3 = ecx_46
                
                if (ecx_46 s>= 0xa)
                    void var_1e8
                    memset(&var_1e8, 0, 0x120)
                    int32_t eax_132 = sub_5f8c00(arg4, &var_1e8)
                    void* ecx_74 = 0xb
                    void* var_2fc_1 = 0x28
                    void* var_2f4_2 = &data_1a94540
                    void* edi_10 = &data_1a944b4
                    void* var_2ec_4 = 0xb
                    void* var_2f8_2 = &var_1e8
                    
                    while (true)
                        int32_t esi_9
                        
                        if (*edi_10 != "tblLandscape" || *(edi_10 - 4) != var_2f0
                            || *(edi_10 + 4) != ecx_74 - 0xb || *(edi_10 + 8) != 0)
                        label_5f9d2b:
                            esi_9 = sub_67be20(ecx_74 - 0xb)
                            *(edi_10 + 0x1c) = esi_9
                            
                            if (esi_9 != 0)
                                *(edi_10 - 4) = var_2f0
                                *edi_10 = "tblLandscape"
                                *(edi_10 + 4) = var_2ec_4 - 0xb
                                *(edi_10 + 8) = 0
                        else
                            esi_9 = *(edi_10 + 0x1c)
                            
                            if (esi_9 == 0)
                                goto label_5f9d2b
                            
                            uint32_t eax_135 = zx.d(esi_9.w)
                            
                            if (eax_135 u>= data_c23bac
                                    || *(eax_135 * 0x18d0 + data_c23ba8 + 0x18c8) != esi_9)
                                goto label_5f9d2b
                        
                        void* eax_146
                        
                        if (*(arg3 + 4) != 1)
                            eax_146 = var_2f4_2
                            *eax_146 = 0
                        else if (*(arg3 + 0x70) != 0)
                            if (esi_9 != 0)
                                goto label_5f9d80
                            
                            eax_146 = var_2f4_2
                            *eax_146 = 0
                        else if (ebx_1[4].b == 0 || esi_9 == 0)
                            eax_146 = var_2f4_2
                            *eax_146 = 0
                        else
                        label_5f9d80:
                            float xmm0_21 = *(sub_64e7a0(var_300_2) + 0x1680)
                            xmm0_21 - 0f
                            uint32_t eax_144
                            eax_144:1.b = (xmm0_21 == 0f ? 1 : 0) << 6
                                | (is_unordered.d(xmm0_21, 0f) ? 1 : 0) << 2
                                | (xmm0_21 < 0f ? 1 : 0)
                            bool p_4 = unimplemented  {test ah, 0x44}
                            
                            if (not(p_4))
                                eax_146 = var_2f4_2
                                *eax_146 = 0
                            else
                                eax_146 = var_2f4_2
                                *eax_146 = *var_2f8_2
                        
                        void* edx_20 = data_be153c
                        bool cond:8_1 = *eax_146 != 0
                        void* eax_147 = var_2ec_4
                        void* ecx_77 = *(edx_20 + 0xbbc)
                        *(edx_20 + 0x258) = 1
                        *(edx_20 + 0xbfc) = 1
                        
                        if (cond:8_1)
                            if (var_2ec_4 s<= ecx_77)
                                eax_147 = ecx_77
                            
                            *(edx_20 + 0xbbc) = eax_147
                            int32_t eax_150 = *var_2f4_2
                            
                            if (eax_150 != 1 && eax_150 != 2)
                                eax_49 = eax_150 - 3
                                
                                if (eax_150 != 3)
                                    goto label_5f9795
                            
                            eax_49 = sub_571b30(*(var_2f4_2 + 4), arg5)
                            int32_t ecx_82 = *(eax_49 + 0x8c)
                            int32_t var_304_2 = ecx_82
                            
                            if (ecx_82 == 0)
                                var_360_3 = "DomCreateUpdateKingdomCards"
                                var_364_1 = 0x8819
                                break
                            
                            uint32_t eax_153
                            
                            if (esi_9 != 0)
                                eax_153 = zx.d(esi_9.w)
                            
                            int128_t xmm0_23
                            int128_t xmm1_9
                            
                            if (esi_9 == 0 || eax_153 u>= data_c23bac
                                    || *(eax_153 * 0x18d0 + data_c23ba8 + 0x18c8) != esi_9)
                                xmm1_9 = data_bf21f8
                                xmm0_23 = data_bf21e8
                            else
                                uint32_t eax_156 = sub_64e7a0(esi_9)
                                ecx_82 = var_304_2
                                xmm0_23 = *(eax_156 + 0x1620)
                                xmm1_9 = *(eax_156 + 0x1630)
                            
                            int128_t var_2e8 = xmm0_23
                            int128_t var_2d8_1 = xmm1_9
                            void* eax_157 = sub_571b30(ecx_82, 0x18)
                            int32_t ecx_86
                            
                            if (((*(eax_157 + 0x98) & 0x7f000400) | (*(eax_157 + 0x9c) & 0x940))
                                    != 0)
                                ecx_86.b = 1
                            else
                                ecx_86.b = 0
                            
                            int128_t* eax_160 = &var_228
                            
                            if (ecx_86.b == 0)
                                eax_160 = &var_208
                            
                            float xmm1_10 = *(var_2fc_1 + &data_ccf724)
                            int128_t var_2c8 = *eax_160
                            int128_t var_2b8_1 = eax_160[1]
                            var_320.q = 0
                            float xmm0_27 = data_8c4634 * 5f
                            float xmm0_28
                            
                            if (*(data_be153c + 0xbd4) != var_2ec_4 - 1)
                                xmm0_28 = xmm1_10 - xmm0_27
                            else
                                xmm0_28 = xmm0_27 + xmm1_10
                            
                            int32_t xmm1_12 = (zx.o(0)).d
                            
                            if (not(0 f> xmm0_28))
                                xmm1_12 = _mm_min_ss(0x3f800000, xmm0_28)
                            
                            *(var_2fc_1 + &data_ccf724) = xmm1_12
                            int32_t var_31c_1 = xmm1_12
                            var_320.w = 0
                            sub_606900(&var_34c, 0x32c9, var_304_2, var_2fc_1 + edx_20, &var_34c, 
                                &var_2e8, &var_2c8, &var_320, 2, 0, 0, 0)
                            uint32_t eax_163 = sub_64e7a0(esi_9)
                            sub_665db0(eax_163, &data_be44dc, eax_163, 0x3f800000, 0xffffffff, 0)
                        else
                            if (eax_147 s<= ecx_77)
                                eax_147 = ecx_77
                            
                            void* ecx_79 = var_2fc_1 + edx_20
                            *(edx_20 + 0xbbc) = eax_147
                            
                            if (*ecx_79 != 0)
                                sub_64e810(ecx_79)
                        
                        edi_10 += 0x24
                        var_2f8_2 += 0x48
                        ecx_74 = var_2ec_4 + 1
                        var_2fc_1 += 4
                        var_2f4_2 += 0x10
                        var_2ec_4 = ecx_74
                        
                        if (ecx_74 - 0xb s>= 4)
                            int32_t esi_10 = arg4[0x2f3]
                            void* ecx_93 = &arg4[0x274]
                            
                            if (eax_132 s> esi_10)
                                esi_10 = eax_132
                            
                            if (ebx_1[4].b != 0)
                                esi_10 = eax_132
                            
                            int32_t edx_23 = 0
                            int32_t var_304_3 = esi_10
                            int32_t ecx_94
                            void** edi_12
                            
                            while (true)
                                if (*ecx_93 == *(ecx_93 + 4))
                                label_5fa08e:
                                    edx_23 += 1
                                    ecx_93 += 0x10
                                    
                                    if (edx_23 s< 0x20)
                                        continue
                                    else
                                        esi_10 = eax_132
                                        var_304_3 = esi_10
                                        edi_12 = &data_be4768
                                        
                                        if (eax_132 s> 0)
                                            edi_12 = &data_be478c
                                else
                                    int32_t eax_167 = *(ecx_93 - 8)
                                    
                                    if (eax_167 == 0xd || eax_167 == 0x10)
                                        goto label_5fa08e
                                    
                                    if (eax_167 == 0x13)
                                        if ((*(ecx_93 - 4) & 4) == 0)
                                            goto label_5fa08e
                                        
                                        goto label_5fa061
                                    
                                    if (eax_167 s< 0xb)
                                        goto label_5fa08e
                                    
                                label_5fa061:
                                    
                                    if (esi_10 == 2)
                                        edi_12 = &data_be4774
                                    else
                                        if (esi_10 != 3)
                                            ecx_94 = var_2f0
                                            
                                            if (esi_10 == 4)
                                                edi_12 = &data_be478c
                                            else
                                                edi_12 = &data_be4768
                                            
                                            break
                                        
                                        edi_12 = &data_be4780
                                
                                ecx_94 = var_2f0
                                break
                            
                            uint32_t eax_173 = sub_64e7a0(ecx_94)
                            int32_t var_368_3 = 0xffffffff
                            void* result = sub_666120(
                                sub_665db0(eax_173, edi_12, eax_173, 0x3f800000, 0xffffffff, 0), 
                                &data_be4798, var_2f0, esi_10)
                            void* edi_13 = 2
                            
                            if (esi_10 s> 2)
                                char** esi_11 = &data_1a944fc
                                
                                do
                                    uint32_t eax_179
                                    
                                    if (*esi_11 != "tblLandscape" || esi_11[-1] != var_2f0
                                        || esi_11[1] != edi_13 || esi_11[2] != 0)
                                    label_5fa150:
                                        result = sub_67be20(edi_13)
                                        esi_11[7] = result
                                        
                                        if (result != 0)
                                            *esi_11 = "tblLandscape"
                                            esi_11[-1] = var_2f0
                                            esi_11[1] = edi_13
                                            esi_11[2] = 0
                                            eax_179 = sub_64e7a0(result)
                                            result = sub_665db0(eax_179, &data_be44e8, eax_179, 
                                                0x3f800000, 0xffffffff, 0)
                                    else
                                        void* ecx_97 = esi_11[7]
                                        
                                        if (ecx_97 == 0)
                                            goto label_5fa150
                                        
                                        uint32_t eax_175 = zx.d(ecx_97.w)
                                        
                                        if (eax_175 u>= data_c23bac
                                                || *(eax_175 * 0x18d0 + data_c23ba8 + 0x18c8)
                                                != ecx_97)
                                            goto label_5fa150
                                        
                                        eax_179 = sub_64e7a0(ecx_97)
                                        result = sub_665db0(eax_179, &data_be44e8, eax_179, 
                                            0x3f800000, 0xffffffff, 0)
                                    edi_13 += 1
                                    esi_11 = &esi_11[9]
                                while (edi_13 s< var_304_3)
                            
                            fsbase->NtTib.ExceptionList = ExceptionList
                            CookieCheckFunction(result)
                            *ebx_1
                            return result
                else
                    eax_86 = var_2f0
                    continue
            
            ecx_45 = "what != CARD_NONE"
            break
        
        break

sub_63b870(eax_49, &data_801800, ecx_45, "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", var_364_1, 
    var_360_3)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
