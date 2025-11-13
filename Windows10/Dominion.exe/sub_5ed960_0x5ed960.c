// 函数: sub_5ed960
// 地址: 0x5ed960
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t esi
int32_t var_6c = esi

if (data_8c4155 == 0)
    return 

if (data_cb450c != 0)
    sub_61d4f0(esi)
    data_cb450c = 0

if (data_8db6b4 != 0x7ee)
    data_171efd0
    sub_5a3f10()

uint32_t i_2 = sub_61d720()

if (data_bf17a5 != 0)
    i_2 = TryEnterCriticalSection(&data_bf17a8)
    
    if (i_2 != 0)
        void* eax_1 = data_bf17c0
        void* ecx_2 = &data_801800
        
        if (eax_1 != 0)
            ecx_2 = eax_1
        
        uint32_t edi_1 = lstrlenA(ecx_2) + 0x16
        HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, edi_1)
        int32_t* eax_3 = GlobalLock(hMem)
        memset(eax_3, 0, edi_1)
        *eax_3 = 0x14
        eax_3[4] = 0
        lstrcpyA(&eax_3[5], ecx_2)
        GlobalUnlock(hMem)
        OpenClipboard(nullptr)
        EmptyClipboard()
        SetClipboardData(0xf, hMem)
        CloseClipboard()
        data_bf17a5 = 0
        i_2 = LeaveCriticalSection(&data_bf17a8)

int32_t* ebx_2 = nullptr
char const* const var_7c_2
int32_t var_78_2
char const* const var_74_9
char* ecx_14

if (data_be1e04 s> 0)
    while (true)
        i_2 = sub_571b30(*((ebx_2 << 2) + &data_be1a04), 0x18)
        uint32_t i_3 = i_2
        
        if (*(i_3 + 0x60) != 0 && data_be15bc != 0)
            i_2 = *(i_3 + 0x9c) & 0x20000
            
            if (i_2 == 0)
                void* eax_5 = sub_571b30(*(i_3 + 0x8c), i_2 + 0x18)
                void* var_60
                var_60.b = 0
                int32_t eax_7 = *(eax_5 + 0x9c) & 0x940
                
                if (((*(eax_5 + 0x98) & 0x7f000400) | eax_7) != 0)
                    var_60.b = 1
                
                i_2 = sub_618270(eax_7, **(i_3 + 0x60), &data_be15bc, var_60.b)
        
        int32_t ecx_10 = data_be2208
        
        if (ecx_10 s>= 0x100)
            var_74_9 = "PreloadCardArtUpdate"
            var_78_2 = 0xce22
            var_7c_2 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
            ecx_14 = "gDomClient.numPreloadedSound < MAX_ELEMENTS"
            break
        
        int32_t edi_2 = 0
        uint32_t* esi_2 = i_3 + 0x64
        
        while (true)
            i_2 = *esi_2
            
            if (i_2 == 0)
                break
            
            *((ecx_10 << 2) + &data_be1e08) = *i_2
            data_be2208 += 1
            i_2 = sub_6a2bc0(**esi_2)
            edi_2 += 1
            esi_2 = &esi_2[1]
            
            if (edi_2 s>= 4)
                break
            
            ecx_10 = data_be2208
        
        ebx_2 += 1
        
        if (ebx_2 s>= data_be1e04)
            goto label_5edb3c
    
    goto label_5ee242

label_5edb3c:
int32_t* ecx_13 = data_be15bc

if (ecx_13 != 0 && data_8c4154 != 0)
    if (ecx_13[1] == 3)
        void* eax_9 = sub_5af880(ecx_13)
        
        if (*(data_cf65b8 + 0x21) != 0)
            int32_t edx_4 = *(eax_9 + 8)
            
            if (edx_4 != 0)
                (*(*data_147b070 + 0x24))(edx_4)
        
        goto label_5edbab
    
    var_74_9 = "TextureGetDef"
    var_78_2 = 0x89
    var_7c_2 = "C:\x\ax2017\Engine\Texture.h"
    ecx_14 = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
label_5ee242:
    sub_63b870(i_2, &data_801800, ecx_14, var_7c_2, var_78_2, var_74_9)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

label_5edbab:
data_8c4154 = 0
data_be1e04 = 0

if (sub_4b9370() == 0)
    return 

i_2 = sub_4b9480()
int32_t edx_5 = data_be22f8
uint32_t i = i_2
uint32_t i_1 = i

if (edx_5 != 0)
    int32_t ecx_17
    
    if (data_8db6dc != 0x7e8)
        if (data_8db6ec == 0x7e8)
            ecx_17 = data_8db6f0
            goto label_5edc08
        
    label_5edc9d:
        var_74_9 = "AchievementDisplayUpdate"
        var_78_2 = 0xce4f
        var_7c_2 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        ecx_14 = "uiAcheivementPopup"
        goto label_5ee242
    
    ecx_17 = data_8db6e0
label_5edc08:
    
    if (ecx_17 == 0)
        goto label_5edc9d
    
    if (data_be2264 == 0)
        int32_t var_74_12 = 0
        int32_t var_78_3 = ecx_17
        data_be2264 = 1
        data_be2268 = 0x404ccccd
        sub_67cd20(i_2, "notification", ecx_17.b)
    else
        float xmm0_2 = data_be2268 f- data_8c4634
        data_be2268 = xmm0_2
        
        if (not(xmm0_2 > 0f))
            memcpy(&data_be2258, 0xbe226c, edx_5 * 0x14 + 0xffffffff)
            data_be22f8 -= 1
    
    goto label_5edc64

label_5edc64:
int32_t var_58

if (data_b7fcf8 == 0)
    int32_t eax_13
    
    if (data_8db5c4 != 0x27)
        eax_13 = 0
        
        if (data_8db5d4 == 0x27)
            eax_13 = data_8db5d8
    else
        eax_13 = data_8db5c8
    
    int32_t eax_14 = sub_4bb9f0(0x1a98c1c, eax_13, "tbl_global_play")
    uint32_t eax_15 = sub_64e7a0(eax_14)
    int32_t xmm1_1
    
    if (sub_67a300(eax_15, nullptr, eax_15, &var_58) != 0)
        xmm1_1 = var_58
    else
        xmm1_1 = (zx.o(0)).d
    
    var_58 = xmm1_1
    int32_t var_54_1 = 0
    sub_62b090(eax_14, &var_58)

if (data_b7fcf9 == 0)
    int32_t eax_17
    
    if (data_8db5c4 != 0x27)
        eax_17 = 0
        
        if (data_8db5d4 == 0x27)
            eax_17 = data_8db5d8
    else
        eax_17 = data_8db5c8
    
    int32_t eax_18 = sub_4bb9f0(0x1a98c40, eax_17, "tbl_player_hand")
    uint32_t eax_19 = sub_64e7a0(eax_18)
    int32_t xmm1_2
    
    if (sub_67a300(eax_19, nullptr, eax_19, &var_58) != 0)
        xmm1_2 = var_58
    else
        xmm1_2 = (zx.o(0)).d
    
    var_58 = xmm1_2
    int32_t var_54_2 = 0
    sub_62b090(eax_18, &var_58)

if (data_b7fcfa == 0)
    int32_t eax_21
    
    if (data_8db5c4 != 0x27)
        eax_21 = 0
        
        if (data_8db5d4 == 0x27)
            eax_21 = data_8db5d8
    else
        eax_21 = data_8db5c8
    
    int32_t eax_22 = sub_4bb9f0(0x1a98c64, eax_21, "tbl_abilityTriggers")
    uint32_t eax_23 = sub_64e7a0(eax_22)
    int32_t xmm1_3
    
    if (sub_67a300(eax_23, nullptr, eax_23, &var_58) != 0)
        xmm1_3 = var_58
    else
        xmm1_3 = (zx.o(0)).d
    
    var_58 = xmm1_3
    int32_t var_54_3 = 0
    sub_62b090(eax_22, &var_58)

i_2 = *(i + 0x1310)

if (data_b809a1 == 0)
    if (i_2 != 0)
        data_b809a1 = 1
        data_8db660 = 0x7e9
else if (i_2 == 3)
    edx_5.b = 0
    data_b809a1 = 0
    i_2 = sub_4d46e0(i_2 + 2, edx_5.b)
    *(i + 0x1310) = 0

if (data_b604c8 == 0)
    i_2 = data_be232c
    
    if (i_2 != 0)
        i = 0
        
        if (i_2 s> 0)
            do
                int32_t esi_6 = *((i << 3) + &data_be22fc)
                var_58 = *((i << 3) + &data_be2300)
                int32_t* eax_26 = sub_4b9480()
                void* eax_27 = sub_4b9680(&eax_26[2], esi_6)
                void* edx_10 = eax_27
                void* var_5c_1 = edx_10 + 1
                void* ecx_29
                
                do
                    ecx_29.b = *edx_10
                    edx_10 += 1
                while (ecx_29.b != 0)
                int16_t* edx_12 = edx_10 - var_5c_1 - 1
                
                if (edx_12 s< 0xe)
                    edx_12 = 0xe
                
                if (*(edx_12 + eax_27) != 0x2a)
                    *(edx_12 + eax_27) = 0x2a
                
                int32_t var_74_16 = sub_5ca690(0xe, esi_6)
                i_2 = sub_5ca510(0, eax_26, (esi_6 << 4) + 0xb80a74, 0xb80ad8, esi_6, var_58)
                i += 1
            while (i s< data_be232c)
        
        data_be232c = 0

int32_t ecx_32 = data_b809b0

if (ecx_32 != 0)
    int32_t* esi_9 = data_cc8d5c
    
    if (esi_9 == 0)
    label_5edf25:
        var_74_9 = "GetClient"
        var_78_2 = 0x7b
        var_7c_2 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
        ecx_14 = "gClient"
        goto label_5ee242
    
    int32_t edi_3 = *esi_9
    i = edi_3 - data_b809b8
    int32_t esi_11 = sbb.d(esi_9[1], data_b809bc, edi_3 u< data_b809b8)
    void* eax_28 = sub_618700(ecx_32, data_b809b4)
    int32_t temp2_1 = *(eax_28 + 0xc)
    
    if (temp2_1 s<= esi_11 && (temp2_1 s< esi_11 || *(eax_28 + 8) u<= i))
        sub_618760(&data_b809b0, *(eax_28 + 4))
    
    goto label_5edf70

label_5edf70:
uint32_t i_4 = i_1
ebx_2.b = 0
BOOL eax_29
int32_t ecx_34
eax_29, ecx_34 = sub_4b9680(i_4 + 8, data_b80b48)
uint32_t eax_30

if (*(eax_29 + 0x14) != 3)
    eax_30 = sub_4d5db0(i_4, data_b80b48)
    int32_t ecx_36 = *(eax_30 + 0x14)
    
    if (ecx_36 s< *(eax_30 + 0x10))
        int32_t var_74_18 = ecx_36
        ebx_2.b = sub_5ea560(eax_30, 0xb80a74, 0xb80ad8, i_4).b
        
        if (data_b824f8 != 0)
            sub_4b4cc0(&var_58, data_b824f4 - 1, i_4, &var_58)
else
    int32_t var_74_17 = ecx_34
    sub_5ea560(eax_29, 0xb80a74, 0xb80ad8, i_4)
    ebx_2.b = 1

float xmm0_3 = data_b7d41c
float xmm1_4 = data_b7d420
xmm0_3 - xmm1_4
eax_30:1.b = (xmm0_3 == xmm1_4 ? 1 : 0) << 6 | (is_unordered.d(xmm0_3, xmm1_4) ? 1 : 0) << 2
    | (xmm0_3 < xmm1_4 ? 1 : 0)
bool p_2 = unimplemented  {test ah, 0x44}

if (p_2)
    float xmm0_6 = xmm0_3 * 4f f* data_8c4634 + xmm1_4
    int32_t xmm1_5 = 0xbf800000
    
    if (not(-1f > xmm0_6))
        xmm1_5 = _mm_min_ss(0x3f800000, xmm0_6)
    
    data_b7d420 = xmm1_5

i_2 = data_b80a24

if (i_2 != 0 && data_8db664 != 0x7e4)
    if (i_2 == 0)
        var_74_9 = "DomEffectPeek"
        var_78_2 = 0xcab8
        var_7c_2 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        ecx_14 = "!c.dynEffects.IsEmpty()"
        goto label_5ee242
    
    while (true)
        int32_t* eax_32 = sub_6368f0(&data_b80a20)
        char eax_33
        
        if (eax_32[0xc].b == 0)
            eax_33 = sub_617da0(&data_b80a20, eax_32)
        
        if (eax_32[0xc].b != 0 || eax_33 != 0)
            uint32_t eax_34 = zx.d(eax_32[0xc].b)
            i_2 = sub_618ce0(eax_34, eax_32[1], *eax_32, eax_32[2], eax_32[3], eax_32[4], 
                eax_32[5], eax_32[6], eax_32[7], eax_32[8], eax_32[9], eax_32[0xa], eax_32[0xb], 
                eax_34)
            
            if (data_b80a24 == 0)
                var_74_9 = "DomEffectPop"
                var_78_2 = 0xcac0
                var_7c_2 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
                ecx_14 = "!c.dynEffects.IsEmpty()"
                goto label_5ee242
            
            void var_40
            sub_636850(&data_b80a20, &var_40)
            
            if (data_b80a24 != 0)
                continue
        
        i_4 = i_1
        break
    
    goto label_5ee0d3

label_5ee0d3:
sub_633660(i_4)
struct _EXCEPTION_REGISTRATION_RECORD** eax_36
uint32_t ecx_39
eax_36, ecx_39 = sub_5ec8d0(i_4, i, data_8c4634)
int32_t var_74_22 = 0xb80ad8
sub_5e9120(eax_36, &data_b604b8, ecx_39)

if (sub_4b9510() != 0)
    i_2 = data_cc8d5c
    
    if (i_2 == 0)
        goto label_5edf25
    
    int32_t edx_23 = data_b80b48
    
    if (*(i_2 + 0x7590) != edx_23 && *(sub_4b9680(i_4 + 8, edx_23) + 0x14) != 3 && data_b80a24 == 0)
        sub_4b0b30(data_b80b48)
        int32_t eax_39 = data_b604e0
        
        if (eax_39 == 0xffffffff)
            eax_39 = 0
        
        int32_t ecx_42 = data_b80b44
        
        if (eax_39 != ecx_42)
            sub_5e9a30(ecx_42)

if (*(sub_4b9680(i_4 + 8, data_b80b48) + 0x14) != 3 && ebx_2.b != 0)
    sub_5eab70(&data_b80af8)

i_2 = data_b80a70
int32_t esi_13 = 0

if (i_2 s> 0)
    void* edi_4 = data_147abe8
    
    while (true)
        int32_t edx_25 = *((esi_13 << 2) + &data_b80a30)
        
        if (edi_4 == 0)
            var_74_9 = "GetGameData"
            var_78_2 = 0x45
            var_7c_2 = "C:\x\ax2017\Engine\Game.h"
            ecx_14 = "gpGameData"
            break
        
        void* ebx_3 = *(edi_4 + 0x10)
        
        if (edx_25 == 0)
        label_5ee1fe:
            data_b80a70 = i_2 - 1
            *((esi_13 << 2) + &data_b80a30) = *(((i_2 - 1) << 2) + &data_b80a30)
            esi_13 -= 1
        else
            uint32_t ecx_44 = zx.d(edx_25.w)
            
            if (ecx_44 u>= *(ebx_3 + 4))
                goto label_5ee1fe
            
            void* ecx_46 = ecx_44 * 0x7c + *ebx_3
            
            if (*(ecx_46 + 0x78) != edx_25 || ecx_46 == 0)
                goto label_5ee1fe
            
            sub_6bca30(ecx_46, data_8c4634)
            edi_4 = data_147abe8
        
        i_2 = data_b80a70
        esi_13 += 1
        
        if (esi_13 s>= i_2)
            goto label_5ee220
    
    goto label_5ee242

label_5ee220:
sub_5dad80()
