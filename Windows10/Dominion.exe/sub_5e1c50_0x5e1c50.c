// 函数: sub_5e1c50
// 地址: 0x5e1c50
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t ebx
int32_t var_4 = ebx
int32_t* ebx_1 = &var_4
void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_769fc2
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_20 = &var_4
void* ecx
void* edx
ecx, edx = __chkstk(0x2608)
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_24 = eax_2
int32_t var_2c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
bool cond:0 = *(edx + 0x2c) == 5
int128_t* result = data_cf65b8
float var_25f8 = 0f
int32_t var_25f4 = 0
uint128_t xmm2 = zx.o(*(result + 0x18))
int32_t xmm1_1 = _mm_cvtepi32_ps(zx.o(*(result + 0x14)))
int32_t xmm2_1 = _mm_cvtepi32_ps(xmm2)
int32_t var_25f0 = xmm1_1
int32_t var_25ec = xmm2_1
var_25f8 = 0f
int32_t var_25f4_1 = 0
int32_t var_25f0_1 = xmm1_1
int32_t var_25ec_1 = xmm2_1
int128_t var_2608 = var_25f8.o
var_25f8.o = var_25f8.o
char const* const var_38_1
int32_t var_34_1
char const* const var_30_1
char* ecx_1

if (not(cond:0))
    var_30_1 = "DomDeclareAbility"
    var_34_1 = 0x44ac
    ecx_1 = "gfx.type == DOMGFX_ABILITY"
label_5e2b48:
    var_38_1 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
label_5e2b52:
    sub_63b870(result, &data_801800, ecx_1, var_38_1, var_34_1, var_30_1)
    
    if (sub_63bc30() == 0)
        sub_63bb00()
        noreturn
    
    breakpoint

if (*(edx + 0x21c) == 0)
label_5e2b28:
    fsbase->NtTib.ExceptionList = ExceptionList
    CookieCheckFunction(result)
    *ebx_1
    return result

void* ecx_2 = data_cc8d5c

if (ecx_2 == 0)
    var_30_1 = "GetClient"
    var_34_1 = 0x7b
    var_38_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
    ecx_1 = "gClient"
    goto label_5e2b52

result = *(ecx_2 + 0x10)

if (result != *(ecx_2 + 0xc))
    goto label_5e2b28

void var_2628
result = sub_5de520(&var_2628, edx, edx, &var_2628)
int128_t var_25c8 = *result
float xmm0_3[0x4] = result[1]
float xmm0_4 = _mm_shuffle_ps(xmm0_3, xmm0_3, 0x55)
xmm0_4 f- 0
result:1.b =
    (xmm0_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_4, 0f) ? 1 : 0) << 2 | (xmm0_4 < 0f ? 1 : 0)
bool p_2 = unimplemented  {test ah, 0x44}

if (not(p_2))
    float xmm0_5 = xmm0_3[2]
    xmm0_5 f- 0
    result:1.b = (xmm0_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_5, 0f) ? 1 : 0) << 2
        | (xmm0_5 < 0f ? 1 : 0)
    bool p_4 = unimplemented  {test ah, 0x44}
    
    if (not(p_4))
        float xmm0_6 = xmm0_3[3]
        xmm0_6 f- 0
        result:1.b = (xmm0_6 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_6, 0f) ? 1 : 0) << 2
            | (xmm0_6 < 0f ? 1 : 0)
        bool p_6 = unimplemented  {test ah, 0x44}
        
        if (not(p_6))
            goto label_5e2b28

sub_654ce0(&var_2608, edx + 0x1ba0, "ability", data_171e7f4, &var_2608, &var_25f8, 0x2c88, nullptr, 
    0)
sub_666060(*(edx + 0x1ba0), &var_25c8)
*(sub_64e7a0(*(edx + 0x1ba0)) + 0x18bc) = sub_5e17a0
result = sub_5db430(edx)

if (result.b != 0)
    uint32_t eax_6 = sub_64e7a0(*(edx + 0x1ba0))
    result = sub_665db0(eax_6, &data_be3184, eax_6, 0x3f800000, 0xffffffff, 0)

void* esi_1 = data_cc8dc0

if (esi_1 == 0)
    var_30_1 = "GetLocalSettings"
    var_34_1 = 0x5fb
    var_38_1 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameSettings.cpp"
    ecx_1 = "gGameSettings.localSettings"
    goto label_5e2b52

int32_t esi_2 = *(esi_1 + 0xc)
uint32_t eax_7 = sub_64e7a0(*(edx + 0x1ba0))
void** edx_3 = &data_cadf54

if (esi_2 == 0)
    edx_3 = &data_cadf60

sub_665db0(eax_7, edx_3, eax_7, 0x3f800000, 0xffffffff, 0)
int32_t eax_8 = *(edx + 0x204)
int32_t ecx_11 = *(edx + 0x208)
int32_t edx_4 = eax_8

if (eax_8 != 0xf34)
    edx_4 = ecx_11

if (eax_8 != 0xf34)
    ecx_11 = eax_8

void* eax_9 = sub_571b30(ecx_11, *(ecx + 0xd48))
int32_t ecx_12 = *(edx + 0x1ba0)
void* var_25cc = eax_9
int32_t* esi_3 = sub_67bd70(ecx_12, "btn_item")

if (esi_3 == 0)
    esi_3 = *(edx + 0x1ba0)

uint32_t eax_11 = sub_64e7a0(esi_3)
int32_t edx_11 = sub_5e0df0(
    sub_5e01b0(sub_665db0(eax_11, var_25cc + 0x80, eax_11, 0x3f800000, 0xffffffff, 0), var_25cc, 
        esi_3, nullptr, 0, 0), 
    var_25cc, esi_3, nullptr)
uint32_t eax_14 = *(edx + 0x1f4)
int32_t ecx_18

if ((eax_14.b & 0x30) != 0)
    ecx_18 = *(sub_5769e0(eax_14, edx_11, ecx, eax_14) + 0xb0)
else
    ecx_18 = *(sub_576940(eax_14, edx_11, ecx, eax_14) + 0x84)

int32_t eax_18 = *(edx + 0x210) - 0x55
void* eax_20

if (eax_18 u> 0x11)
    eax_20 = var_25cc
else
    int32_t ecx_19
    
    switch (eax_18)
        case 0
            ecx_19 = 0x152f
        case 1
            ecx_19 = 0x151f
        case 2
            ecx_19 = 0x1524
        case 3
            ecx_19 = 0x1521
        case 4
            ecx_19 = 0x1523
        case 5
            ecx_19 = 0x1522
        case 6
            ecx_19 = 0x1526
        case 7
            ecx_19 = 0x1528
        case 8
            ecx_19 = 0x1527
        case 9
            ecx_19 = 0x151c
        case 0xa
            ecx_19 = 0x151b
        case 0xb
            ecx_19 = 0x152d
        case 0xc
            ecx_19 = 0x152c
        case 0xd
            ecx_19 = 0x152b
        case 0xe
            ecx_19 = 0x152a
        case 0xf
            ecx_19 = 0x152e
        case 0x10
            ecx_19 = 0x1530
        case 0x11
            ecx_19 = 0x1531
    
    eax_20 = sub_571b30(ecx_19, *(ecx + 0xd48))
    ecx_18 = 0

int32_t var_30_9 = ecx_18
int32_t edx_14 = sub_5e03b0(esi_3, eax_20)
var_25cc = *(edx + 0x21c)
uint32_t eax_22 = *(edx + 0x1f4)
uint8_t var_25e0

switch (eax_22 u>> 4 & 3)
    case 0
        result = sub_576940(eax_22, edx_14, ecx, eax_22)
        int32_t ecx_25 = *(result + 0x4c)
        
        if (ecx_25 != 2)
            if (ecx_25 != 0)
                var_30_1 = "AbilityCanMultiplay"
                var_34_1 = 0x4401
                ecx_1 = "Halt"
                goto label_5e2b48
            
            var_25e0 = ecx_25.b
        else
            var_25e0.d = result[6].d u>> 1 & 0xffffff01
    case 1, 2, 3
        var_25e0 = (*(sub_5769e0(eax_22, edx_14, ecx, eax_22) + 0xac) u>> 1).b & 1

if (var_25cc s> 1)
    uint32_t eax_29 = sub_64e7a0(esi_3)
    sub_665db0(eax_29, &data_be3ae0, eax_29, 0x3f800000, 0xffffffff, 0)
    void* var_38_4 = var_25cc
    sub_63df30(&var_25cc, "%d")
    int32_t var_14_1 = 0
    int32_t var_30_13 = 0xffffffff
    sub_666380(&var_25cc, &data_be3aec, esi_3, &var_25cc)
    int32_t var_14_2 = 1
    
    if (data_cf65bc != 0)
        void* eax_31 = var_25cc
        
        if (eax_31 != 0 && *eax_31 != 0)
            char* eax_32 = sub_63d4e0(&var_25cc)
            int32_t temp0_1 = *(eax_32 + 4)
            *(eax_32 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_32, *(eax_32 + 0xc) + 0x10)
                var_25cc = &data_801800
    
    int32_t var_14_3 = 0xffffffff
    
    if (var_25e0 != 0)
        uint32_t eax_33 = sub_64e7a0(*(edx + 0x1ba0))
        sub_665db0(eax_33, &data_be3af8, eax_33, 0x3f800000, 0xffffffff, 0)

sub_4d3b70(*(edx + 0x1ba0))

if (*(edx + 0x200) == 3 && *(edx + 0x208) == 0x1025 && *(edx + 0x210) == 0x25)
    uint32_t eax_34
    int32_t edx_17
    eax_34, edx_17 = sub_5916b0(*(edx + 0x1fc))
    void* eax_35
    int32_t ecx_37
    eax_35, ecx_37 = sub_576940(eax_34, edx_17, ecx, *(edx + 0x1fc))
    int32_t var_30_17 = *(eax_35 + 0x3c)
    var_25cc = sub_583f20(eax_35, eax_34, 0xb80ad8, ecx_37, *(eax_35 + 0x38))
    int32_t* eax_37 = sub_4bb9f0(0x1a8c72c, *(edx + 0x1ba0), "tbl_banner_icon_prince")
    
    if (eax_37 != 0)
        uint32_t eax_38 = sub_64e7a0(eax_37)
        sub_665db0(eax_38, &data_be352c, eax_38, 0x3f800000, 0xffffffff, 0)
        void* var_38_6 = var_25cc
        sub_63df30(&var_25cc, "%d")
        int32_t var_14_4 = 2
        int32_t var_30_20 = 0xffffffff
        sub_666380(&var_25cc, &data_be3538, eax_37, &var_25cc)
        int32_t var_14_5 = 3
        
        if (data_cf65bc != 0)
            void* eax_40 = var_25cc
            
            if (eax_40 != 0 && *eax_40 != 0)
                char* eax_41 = sub_63d4e0(&var_25cc)
                int32_t temp1_1 = *(eax_41 + 4)
                *(eax_41 + 4) -= 1
                
                if (temp1_1 == 1)
                    sub_64c080(eax_41, *(eax_41 + 0xc) + 0x10)
                    var_25cc = &data_801800
        
        int32_t var_14_6 = 0xffffffff

if (*(edx + 0x20c) == 1)
    int32_t eax_42 = sub_4bb9f0(0x1a8c750, *(edx + 0x1ba0), "tbl_banner_icon_prince")
    
    if (eax_42 != 0)
        uint32_t eax_43 = sub_64e7a0(eax_42)
        sub_665db0(eax_43, &data_be3508, eax_43, 0x3f800000, 0xffffffff, 0)

int32_t esi_6 = ecx_11
int32_t* var_25d4

if (*(edx + 0x200) != 1 && esi_6 != edx_4 && edx_4 != 0)
    int32_t eax_45 = *(edx + 0x1ba0)
    int32_t* eax_58
    void* esi_8
    
    if (esi_6 != 0xf44)
        int32_t* eax_59 = sub_4bb9f0(0x1a8c798, eax_45, "tbl_card_mouse")
        var_25d4 = eax_59
        
        if (eax_59 != 0)
            esi_8 = sub_571b30(edx_4, sub_5cf7e0())
            uint32_t eax_62 = sub_64e7a0(var_25d4)
            sub_665db0(eax_62, &data_be3520, eax_62, 0x3f800000, 0xffffffff, 0)
            uint32_t eax_63 = sub_64e7a0(var_25d4)
            eax_58 = sub_5e01b0(
                sub_665db0(eax_63, esi_8 + 0x74, eax_63, 0x3f800000, 0xffffffff, 0), esi_8, 
                var_25d4, nullptr, 0, 0)
        label_5e2536:
            sub_5e0df0(eax_58, esi_8, var_25d4, nullptr)
            sub_5defb0(var_25d4, esi_8)
            esi_6 = ecx_11
    else
        uint32_t eax_46 = sub_64e7a0(eax_45)
        int32_t var_38_7 = 0xffffffff
        sub_666120(sub_665db0(eax_46, &data_be3b04, eax_46, 0x3f800000, 0xffffffff, 0), 
            &data_be3b10, *(edx + 0x1ba0), 1)
        int32_t esi_7 = *(edx + 0x1ba0)
        
        if (data_1a8c778 != "tbl_cards" || data_1a8c774 != esi_7 || data_1a8c77c != 0
            || data_1a8c780 != 0)
        label_5e23f6:
            int32_t eax_51 = sub_67bd70(esi_7, "tbl_cards")
            
            if (eax_51 != 0)
                int32_t* eax_53 = sub_64c870(sub_64e7a0(eax_51), nullptr)
                var_25d4 = eax_53
                data_1a8c794 = eax_53
                
                if (eax_53 != 0)
                    data_1a8c778 = "tbl_cards"
                    data_1a8c774 = esi_7
                    data_1a8c77c = 0
                    data_1a8c780 = 0
                label_5e2450:
                    int32_t eax_54 = sub_5cf7e0()
                    esi_8 = sub_571b30(*(edx + 0x208), eax_54)
                    uint32_t eax_56 = sub_64e7a0(var_25d4)
                    eax_58 = sub_5e01b0(
                        sub_665db0(eax_56, esi_8 + 0x74, eax_56, 0x3f800000, 0xffffffff, 0), esi_8, 
                        var_25d4, nullptr, 0, 0)
                    goto label_5e2536
                
                esi_6 = ecx_11
            else
                data_1a8c794 = eax_51
                esi_6 = ecx_11
        else
            int32_t* ecx_48 = data_1a8c794
            var_25d4 = ecx_48
            
            if (ecx_48 == 0)
                goto label_5e23f6
            
            uint32_t eax_48 = zx.d(ecx_48.w)
            
            if (eax_48 u>= data_c23bac || *(eax_48 * 0x18d0 + data_c23ba8 + 0x18c8) != ecx_48)
                goto label_5e23f6
            
            if (ecx_48 != 0)
                goto label_5e2450
            
            esi_6 = ecx_11

if (data_1a8c7bc s> *(*fsbase->ThreadLocalStoragePointer + 8))
    sub_75970e(&data_1a8c7bc)
    
    if (data_1a8c7bc == 0xffffffff)
        int32_t var_14_7 = 4
        char* var_30_30 = "isLandscape"
        data_1a8c7c0 = &UI2StateDecl::`vftable'{for `UI2StateDeclI'}
        ebx_1, esi_6 = sub_4acb80(&data_1a8c7c0, var_30_30)
        int32_t var_14_8 = 0xffffffff
        __Init_thread_footer(&data_1a8c7bc)

if (sub_5e13c0(esi_6, *(edx + 0x210)) != 0)
    int32_t* edi_1 = nullptr
    var_25cc = nullptr
    var_25d4 = nullptr
    int32_t var_ca8[0x318]
    
    if (esi_6 == 0x1121)
        uint32_t eax_69 = sub_5916b0(*(edx + 0x1f4))
        void* ecx_67 = data_b809e4 * 0x1c30
        void* i = data_b809e0
        var_25cc = nullptr
        void* ecx_68 = ecx_67 + i
        
        if (i u>= ecx_68)
        label_5e2636:
            var_25d4 = edi_1
        else
            while ((*(i + 0x1c28) & 0xffff0000) == 0)
                i += 0x1c30
                
                if (i u>= ecx_68)
                    goto label_5e2636_1
            
            if (i == 0xffffffff)
            label_5e2636_1:
                var_25d4 = edi_1
            else
                do
                    if (*(i + 0x2c) == 0 && *(i + 0xa4) == 0x474
                            && *(sub_5cba00(*(i + 0x9c)) + 0x68) == eax_69)
                        void* eax_71 = sub_5de8b0(*(i + 0x98))
                        
                        if (eax_71 == 0)
                            sub_63b870(eax_71, &data_801800, "gfx", 
                                "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp", 0x3d96, 
                                "LookupCard")
                            
                            if (sub_63bc30() != 0)
                                breakpoint
                            
                            sub_63bb00()
                            noreturn
                        
                        var_ca8[edi_1] = eax_71
                        edi_1 += 1
                        var_25cc = edi_1
                    
                    i += 0x1c30
                    int32_t eax_73 = data_b809e4 * 0x1c30 + data_b809e0
                    
                    if (i u>= eax_73)
                        goto label_5e2636_1
                    
                    while ((*(i + 0x1c28) & 0xffff0000) == 0)
                        i += 0x1c30
                        
                        if (i u>= eax_73)
                            var_25d4 = edi_1
                            goto label_5e2739
                while (i != 0xffffffff)
                
                var_25d4 = edi_1
        
        goto label_5e2739
    
    int32_t ecx_72 = *(edx + 0x218)
    
    if (ecx_72 != 0)
        uint32_t eax_74 = sub_5cba00(ecx_72)
        int32_t* ecx_73 = var_25d4
        var_ca8[ecx_73] = eax_74
        var_25d4 = ecx_73 + 1
        sub_5e1770(eax_74, &var_ca8, *(eax_74 + 0xd0), &var_25d4)
        edi_1 = var_25d4
        var_25cc = edi_1
    
    int32_t var_1928[0x320]
    bool cond:5_1
    
    if (esi_6 == 0xd16 || esi_6 == 0xf47)
        int32_t* eax_75 = edi_1
        int32_t esi_9 = 0
        edi_1 = nullptr
        
        if (eax_75 s> 0)
            do
                int32_t i_1 = sub_5cbb20(var_ca8[esi_9])
                int32_t ecx_79 = 0
                int32_t var_25a8[0x320]
                
                if (edi_1 s> 0)
                    while (var_25a8[ecx_79] != i_1)
                        ecx_79 += 1
                        
                        if (ecx_79 s>= edi_1)
                            goto label_5e2794
                
                if (edi_1 s<= 0 || ecx_79 == 0xffffffff)
                label_5e2794:
                    int32_t* ecx_80 = edi_1
                    edi_1 += 1
                    var_25a8[ecx_80] = i_1
                    var_ca8[ecx_80] = var_ca8[esi_9]
                    var_1928[ecx_80] = 1
                else
                    var_1928[ecx_79] += 1
                
                esi_9 += 1
            while (esi_9 s< eax_75)
        
        cond:5_1 = edi_1 == 0
        goto label_5e27c2
    
label_5e2739:
    cond:5_1 = edi_1 == 0
    
    if (edi_1 s> 0)
        int32_t ecx_77
        int32_t edi_2
        edi_2, ecx_77 = __memfill_u32(&var_1928, 1, edi_1)
        edi_1 = var_25cc
        goto label_5e27d0
    
label_5e27c2:
    
    if (not(cond:5_1))
    label_5e27d0:
        uint32_t eax_77 = sub_64e7a0(*(edx + 0x1ba0))
        int32_t var_38_10 = 0xffffffff
        sub_666120(sub_665db0(eax_77, &data_be3b04, eax_77, 0x3f800000, 0xffffffff, 0), 
            &data_be3b10, *(edx + 0x1ba0), edi_1)
        int32_t* ecx_84 = 0x10
        
        if (edi_1 s< 0x10)
            ecx_84 = edi_1
        
        void* eax_79 = nullptr
        void* var_25d0_2 = nullptr
        
        if (ecx_84 s> 0)
            void* esi_11 = &data_1a8c7d4
            
            do
                void* eax_80 = sub_5dea30(ecx, var_ca8[eax_79])
                var_25cc = eax_80
                int32_t eax_81 = sub_5cf7e0()
                void* eax_82 = sub_571b30(*(eax_80 + 0x8c), eax_81)
                int32_t eax_86 = *(edx + 0x1ba0)
                int32_t* edi_4
                
                if (((*(eax_82 + 0x98) & 0x7f000400) | (*(eax_82 + 0x9c) & 0x940)) != 0)
                    if (*esi_11 != "tbl_cards_landscape" || *(esi_11 - 4) != eax_86
                        || *(esi_11 + 4) != var_25d0_2 || *(esi_11 + 8) != 0)
                    label_5e297f:
                        edi_4 = sub_67be20(var_25d0_2)
                        *(esi_11 + 0x1c) = edi_4
                        
                        if (edi_4 != 0)
                            *(esi_11 - 4) = eax_86
                            *esi_11 = "tbl_cards_landscape"
                            *(esi_11 + 4) = var_25d0_2
                            *(esi_11 + 8) = 0
                    else
                        edi_4 = *(esi_11 + 0x1c)
                        
                        if (edi_4 == 0)
                            goto label_5e297f
                        
                        uint32_t edx_35 = zx.d(edi_4.w)
                        
                        if (edx_35 u>= data_c23bac
                                || *(edx_35 * 0x18d0 + data_c23ba8 + 0x18c8) != edi_4)
                            goto label_5e297f
                    
                    uint32_t eax_98 = sub_64e7a0(*(edx + 0x1ba0))
                    sub_665db0(eax_98, &data_1a8c7c0, eax_98, 0x3f800000, 0xffffffff, 0)
                else if (*esi_11 != "tbl_cards" || *(esi_11 - 4) != eax_86
                    || *(esi_11 + 4) != var_25d0_2 || *(esi_11 + 8) != 0)
                label_5e28e4:
                    edi_4 = sub_67be20(var_25d0_2)
                    *(esi_11 + 0x1c) = edi_4
                    
                    if (edi_4 != 0)
                        *(esi_11 - 4) = eax_86
                        *esi_11 = "tbl_cards"
                        *(esi_11 + 4) = var_25d0_2
                        *(esi_11 + 8) = 0
                else
                    edi_4 = *(esi_11 + 0x1c)
                    
                    if (edi_4 == 0)
                        goto label_5e28e4
                    
                    uint32_t edx_33 = zx.d(edi_4.w)
                    
                    if (edx_33 u>= data_c23bac
                            || *(edx_33 * 0x18d0 + data_c23ba8 + 0x18c8) != edi_4)
                        goto label_5e28e4
                
                void* eax_102
                
                if (edi_4 == 0)
                    eax_102 = var_25d0_2
                else
                    uint32_t eax_99 = sub_64e7a0(edi_4)
                    sub_5e0df0(
                        sub_5e01b0(
                            sub_665db0(eax_99, var_25cc + 0x74, eax_99, 0x3f800000, 0xffffffff, 0), 
                            var_25cc, edi_4, nullptr, 0, 0), 
                        var_25cc, edi_4, nullptr)
                    sub_5defb0(edi_4, var_25cc)
                    eax_102 = var_25d0_2
                    int32_t ecx_100 = var_1928[eax_102]
                    
                    if (ecx_100 s> 1)
                        uint32_t eax_103 = sub_64e7a0(edi_4)
                        sub_665db0(eax_103, &data_be34c0, eax_103, 0x3f800000, 0xffffffff, 0)
                        int32_t var_38_12 = ecx_100
                        sub_63df30(&var_25e0, "%d")
                        int32_t var_14_9 = 5
                        int32_t var_30_41 = 0xffffffff
                        sub_666380(&var_25e0, &data_be34cc, edi_4, &var_25e0)
                        int32_t var_14_10 = 6
                        
                        if (data_cf65bc != 0)
                            char* eax_105 = var_25e0.d
                            
                            if (eax_105 != 0 && *eax_105 != 0)
                                char* eax_106 = sub_63d4e0(&var_25e0)
                                int32_t temp3_1 = *(eax_106 + 4)
                                *(eax_106 + 4) -= 1
                                
                                if (temp3_1 == 1)
                                    sub_64c080(eax_106, *(eax_106 + 0xc) + 0x10)
                                    var_25e0.d = &data_801800
                        
                        int32_t var_14_11 = 0xffffffff
                        eax_102 = var_25d0_2
                
                eax_79 = eax_102 + 1
                esi_11 += 0x24
                var_25d0_2 = eax_79
            while (eax_79 s< ecx_84)

result = sub_65d6e0(*(edx + 0x1ba0), data_8c4634)
goto label_5e2b28
