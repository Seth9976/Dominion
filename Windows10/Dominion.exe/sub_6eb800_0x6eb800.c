// 函数: sub_6eb800
// 地址: 0x6eb800
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7718ed
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_8cc = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_854 = arg2
struct _EXCEPTION_REGISTRATION_RECORD** esi = arg4
struct _EXCEPTION_REGISTRATION_RECORD** var_830

if (esi == 0)
    sub_69fd50(eax_3, "!Null\Null", &var_830, 0x1d)
    struct _EXCEPTION_REGISTRATION_RECORD** var_14_1 = esi
    char* eax_4 = var_830
    char* const ecx_1 = &data_801800
    
    if (eax_4 != 0)
        ecx_1 = eax_4
    
    eax_3, arg2 = sub_69f030(ecx_1, esi + 0x1d)
    esi = eax_3
    arg4 = esi
    int32_t var_14_2 = 1
    
    if (data_cf65bc != 0)
        eax_3 = var_830
        
        if (eax_3 != 0 && *eax_3 != 0)
            eax_3 = sub_63d4e0(&var_830)
            int32_t temp1_1 = eax_3[1]
            eax_3[1] -= 1
            
            if (temp1_1 == 1)
                eax_3, arg2 = sub_64c080(eax_3, &eax_3[3][2])
                var_830 = &data_801800
    
    int32_t var_14_3 = 0xffffffff
else if (esi[1] != 0x1d)
    sub_63b870(eax_3, &data_801800, "assetPtr && assetPtr->assetType == assetType", 
        "C:\x\ax2017\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

struct _EXCEPTION_REGISTRATION_RECORD** var_860 = esi

if (*esi == 0)
    arg2.b = 0
    sub_69f4a0(eax_3, arg2.b, esi, 1)

struct _EXCEPTION_REGISTRATION_RECORD* eax_5 = *esi
esi[7] = &esi[7]->Next + 1
struct _EXCEPTION_REGISTRATION_RECORD* Next = eax_5->Next
struct _EXCEPTION_REGISTRATION_RECORD* Next_1 = Next
int32_t var_14_4 = 2
int32_t var_828[0x201]
void* eax_6 = sub_6eb500(Next, &var_828)
void* var_844 = eax_6
float var_840 = 0f
void* var_82c = nullptr
char const* const var_8d8_4
int32_t var_8d4_6
char const* const var_8d0_10
char* ecx_69

if (eax_6 s> 0)
    int32_t (* edi_1)[0x201] = &var_828
    float* esi_2 = arg3 + 0xc
    float xmm1_8
    
    do
        float xmm1_4
        
        if (*edi_1 == 0)
            int32_t* ecx_6 = data_1777584
            
            if (ecx_6[1] != 0x1e)
                goto label_6ec429
            
            float xmm0_1[0x4] = *(sub_5af880(ecx_6) + 0xc)
            xmm1_4 = (_mm_shuffle_ps(xmm0_1, xmm0_1, 0xff) - _mm_shuffle_ps(xmm0_1, xmm0_1, 0x55))
                * *esi_2
            esi_2 = arg3 + 0xc
            goto label_6eb9bb
        
        int32_t* ecx_7 = data_1777588
        
        if (ecx_7[1] != 0x1e)
        label_6ec429:
            var_8d0_10 = "UIDefGet"
            var_8d4_6 = 0x127
            var_8d8_4 = "C:\x\ax2017\Engine\UIDef.cpp"
            ecx_69 = "ptr->assetType == ASSET_TYPE_UI"
        label_6ec442:
            sub_63b870(eax_6, &data_801800, ecx_69, var_8d8_4, var_8d4_6, var_8d0_10)
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        float xmm0_3[0x4] = *(sub_5af880(ecx_7) + 0xc)
        xmm1_4 =
            (_mm_shuffle_ps(xmm0_3, xmm0_3, 0xff) - _mm_shuffle_ps(xmm0_3, xmm0_3, 0x55)) * *esi_2
    label_6eb9bb:
        xmm1_8 = xmm1_4 + var_840
        edi_1 = &(*edi_1)[4]
        eax_6 = var_82c + 1
        var_82c = eax_6
        var_840 = xmm1_8
    while (eax_6 s< var_844)
    
    eax_6 = var_844
    Next = Next_1
    var_840 = xmm1_8

void* eax_10 = eax_6 - 1
void* var_858_1 = eax_10

if (eax_6 - 1 s>= 0)
    while (true)
        int32_t edi_3 = eax_10 * 2
        var_824
        void* eax_12 = &Next->Next[*(&var_824 + (edi_3 << 3)) * 0xb]
        eax_6 = arg3
        int32_t esi_4 = var_828[edi_3 * 2]
        int128_t var_8c0_1 = *eax_6
        int128_t var_8b0_1 = *(eax_6 + 0x10)
        int128_t var_8a0_1 = *(eax_6 + 0x20)
        int128_t var_890_1 = *(eax_6 + 0x30)
        int128_t var_880_1 = *(eax_6 + 0x40)
        int128_t var_870_1 = *(eax_6 + 0x50)
        
        if (esi_4 != 0)
            int32_t* ecx_54 = data_1777588
            
            if (ecx_54[1] != 0x1e)
                goto label_6ec429
            
            float xmm0_19[0x4] = *(sub_5af880(ecx_54) + 0xc)
            float xmm1_15 =
                _mm_shuffle_ps(xmm0_19, xmm0_19, 0xff) - _mm_shuffle_ps(xmm0_19, xmm0_19, 0x55)
            var_8c0_1.d = *var_854
            float xmm2_4 = var_840 - xmm1_15 f* var_8c0_1:0xc.d
            var_840 = xmm2_4
            void* eax_56 = *fsbase->ThreadLocalStoragePointer
            void* ecx_55 = eax_56
            var_8c0_1:4.d = xmm2_4 f+ var_854[1]
            
            if (data_1a9a378 s> *(ecx_55 + 8))
                sub_75970e(&data_1a9a378)
                
                if (data_1a9a378 == 0xffffffff)
                    var_14_4.b = 0x12
                    data_1a9a37c = sub_6987e0(data_1777588)
                    var_14_4.b = 2
                    __Init_thread_footer(&data_1a9a378)
                
                ecx_55 = eax_56
            
            eax_6 = data_1a9a380
            
            if (eax_6 s> *(ecx_55 + 8))
                eax_6 = sub_75970e(&data_1a9a380)
                
                if (data_1a9a380 == 0xffffffff)
                    var_14_4.b = 0x13
                    data_1a9a384 = sub_697540(data_1777588, "txtLayerName")
                    var_14_4.b = 2
                    eax_6 = __Init_thread_footer(&data_1a9a380)
            
            char* edx_26
            
            if (esi_4 == 1)
                eax_6 = *(eax_12 + 0x20)
                var_820
                
                if (*(eax_6 + (*(&var_820 + (edi_3 << 3)) << 2)) != 0)
                    var_8d0_10 = "MaterialFnEntry_Text"
                    var_8d4_6 = 0x164
                    var_8d8_4 = "C:\x\ax2017\Engine\MaterialFnDef.cpp"
                    ecx_69 = "Halt"
                    goto label_6ec442
                
                edx_26 = "Spherize"
            else
                if (esi_4 != 2)
                    var_8d0_10 = "MaterialFnEntry_Text"
                    var_8d4_6 = 0x167
                    var_8d8_4 = "C:\x\ax2017\Engine\MaterialFnDef.cpp"
                    ecx_69 = "Halt"
                    goto label_6ec442
                
                var_81c
                int32_t eax_60 = *(&var_81c + (edi_3 << 3))
                
                if (eax_60 == 4)
                    edx_26 = "Translate"
                else
                    eax_6 = eax_60 - 5
                    
                    if (eax_60 != 5)
                        var_8d0_10 = "MaterialFnEntry_Text"
                        var_8d4_6 = 0x15c
                        var_8d8_4 = "C:\x\ax2017\Engine\MaterialFnDef.cpp"
                        ecx_69 = "Halt"
                        goto label_6ec442
                    
                    edx_26 = "Rotate"
            
            int32_t ecx_60 = sub_63d720(&var_830, edx_26)
            var_14_4.b = 0x14
            struct _EXCEPTION_REGISTRATION_RECORD** eax_62 = &data_801800
            struct _EXCEPTION_REGISTRATION_RECORD** esi_12 = var_830
            int32_t var_8d0_6 = ecx_60
            
            if (esi_12 != 0)
                eax_62 = esi_12
            
            sub_69a980(eax_62, data_1a9a384, data_1a9a37c, eax_62)
            data_1a9a37c
            sub_69b9c0(0x3f800000)
            var_14_4.b = 0x15
            
            if (data_cf65bc != 0 && esi_12 != 0 && *esi_12 != 0)
                char* eax_63 = sub_63d4e0(&var_830)
                int32_t temp9_1 = *(eax_63 + 4)
                *(eax_63 + 4) -= 1
                
                if (temp9_1 == 1)
                    sub_64c080(eax_63, *(eax_63 + 0xc) + 0x10)
                    var_830 = &data_801800
        else
            int32_t* ecx_8 = data_1777584
            
            if (ecx_8[1] != 0x1e)
                goto label_6ec429
            
            float xmm0_11[0x4] = *(sub_5af880(ecx_8) + 0xc)
            float xmm1_11 =
                _mm_shuffle_ps(xmm0_11, xmm0_11, 0xff) - _mm_shuffle_ps(xmm0_11, xmm0_11, 0x55)
            var_8c0_1.d = *var_854
            float xmm2_2 = var_840 - xmm1_11 f* var_8c0_1:0xc.d
            var_840 = xmm2_2
            void* esi_5 = *fsbase->ThreadLocalStoragePointer
            var_8c0_1:4.d = xmm2_2 f+ var_854[1]
            
            if (data_1a9a348 s> *(esi_5 + 8))
                sub_75970e(&data_1a9a348)
                
                if (data_1a9a348 == 0xffffffff)
                    var_14_4.b = 3
                    data_1a9a34c = sub_6987e0(data_1777584)
                    var_14_4.b = 2
                    __Init_thread_footer(&data_1a9a348)
            
            if (data_1a9a350 s> *(esi_5 + 8))
                sub_75970e(&data_1a9a350)
                
                if (data_1a9a350 == 0xffffffff)
                    var_14_4.b = 4
                    data_1a9a354 = sub_697540(data_1777584, "imgTexture")
                    var_14_4.b = 2
                    __Init_thread_footer(&data_1a9a350)
            
            if (data_1a9a358 s> *(esi_5 + 8))
                sub_75970e(&data_1a9a358)
                
                if (data_1a9a358 == 0xffffffff)
                    var_14_4.b = 5
                    data_1a9a35c = sub_697540(data_1777584, "txtLayerName")
                    var_14_4.b = 2
                    __Init_thread_footer(&data_1a9a358)
            
            if (data_1a9a360 s> *(esi_5 + 8))
                sub_75970e(&data_1a9a360)
                
                if (data_1a9a360 == 0xffffffff)
                    var_14_4.b = 6
                    data_1a9a364 = sub_697540(data_1777584, "txtBlend")
                    var_14_4.b = 2
                    __Init_thread_footer(&data_1a9a360)
            
            if (data_1a9a368 s> *(esi_5 + 8))
                sub_75970e(&data_1a9a368)
                
                if (data_1a9a368 == 0xffffffff)
                    var_14_4.b = 7
                    data_1a9a36c = sub_697540(data_1777584, "txtVisible")
                    var_14_4.b = 2
                    __Init_thread_footer(&data_1a9a368)
            
            int32_t eax_26 = *eax_12
            int32_t var_8d4_5
            
            if (eax_26 u> 4)
                char const* const var_8d0_9 = "MaterialFnItem_Name"
                var_8d4_5 = 0xd1
            label_6ec3d0:
                sub_63b870(eax_26, &data_801800, "Halt", "C:\x\ax2017\Engine\MaterialFnDef.cpp", 
                    var_8d4_5, "MaterialFnItem_Name")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            char const* const edx_5
            
            switch (eax_26)
                case 0
                    edx_5 = "Texture"
                case 1
                    edx_5 = "Color"
                case 2
                    edx_5 = "VertexColor"
                case 3
                    edx_5 = "Group"
                case 4
                    int32_t eax_27 = *(eax_12 + 0x1c)
                    
                    if (eax_27 == 0)
                        edx_5 = "Circle"
                    else
                        eax_26 = eax_27 - 1
                        
                        if (eax_27 != 1)
                            char const* const var_8d0_8 = "MaterialFnItem_Name"
                            var_8d4_5 = 0xce
                            goto label_6ec3d0
                        
                        edx_5 = "Radial"
            
            char* var_83c
            int32_t ecx_15 = sub_63d720(&var_83c, edx_5)
            var_14_4.b = 8
            char* const eax_29 = &data_801800
            char* edi_4 = var_83c
            int32_t var_8d0_1 = ecx_15
            
            if (edi_4 != 0)
                eax_29 = edi_4
            
            sub_69a980(eax_29, data_1a9a35c, data_1a9a34c, eax_29)
            char* eax_30 = *(eax_12 + 0x2c)
            char const* const var_8d8_3
            int32_t var_8d4_4
            char const* const var_8d0_7
            char* ecx_68
            
            if (eax_30 u> 4)
                var_8d0_7 = "MaterialFnItem_Blend"
                var_8d4_4 = 0xb6
                var_8d8_3 = "C:\x\ax2017\Engine\MaterialFnDef.cpp"
                ecx_68 = "Halt"
            label_6ec394:
                sub_63b870(eax_30, &data_801800, ecx_68, var_8d8_3, var_8d4_4, var_8d0_7)
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            char* var_838
            
            switch (eax_30)
                case nullptr
                    float xmm0_16 = *(eax_12 + 0x30)
                    xmm0_16 - 1f
                    eax_30:1.b = (xmm0_16 == 1f ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_16, 1f) ? 1 : 0) << 2 | (xmm0_16 < 1f ? 1 : 0)
                    bool p_2 = unimplemented  {test ah, 0x44}
                    
                    if (p_2)
                        float xmm0_17 = xmm0_16 * 100f
                        float xmm0_18
                        
                        if (0 f<= xmm0_17)
                            xmm0_18 = xmm0_17 + 0.5f
                        else
                            xmm0_18 = xmm0_17 - 0.5f
                        
                        int32_t var_8d0_2 = int.d(xmm0_18)
                        char* const var_84c
                        sub_63df30(&var_84c, "%%%d")
                        var_14_4.b = 9
                        char* const ecx_18 = &data_801800
                        char* eax_32 = var_84c
                        
                        if (eax_32 != 0)
                            ecx_18 = eax_32
                        
                        char* const var_8d0_3 = ecx_18
                        sub_63df30(&var_838, "Opacity: %s")
                        var_14_4.b = 0xa
                        
                        if (data_cf65bc != 0)
                            char* eax_33 = var_84c
                            
                            if (eax_33 != 0 && *eax_33 != 0)
                                char* eax_34 = sub_63d4e0(&var_84c)
                                int32_t temp11_1 = *(eax_34 + 4)
                                *(eax_34 + 4) -= 1
                                
                                if (temp11_1 == 1)
                                    sub_64c080(eax_34, *(eax_34 + 0xc) + 0x10)
                                    var_84c = &data_801800
                    else
                        sub_63d720(&var_838, &data_801800)
                case 1
                    sub_63d720(&var_838, "Multiply")
                case 2
                    sub_63d720(&var_838, "Add")
                case 3
                    sub_63d720(&var_838, "Overlay")
                case 4
                    sub_63d720(&var_838, "Mask")
            
            var_14_4.b = 0xb
            char* const ecx_22 = &data_801800
            char* eax_35 = var_838
            
            if (eax_35 != 0)
                ecx_22 = eax_35
            
            char* const var_8d0_4 = ecx_22
            sub_69a980(eax_35, data_1a9a364, data_1a9a34c, ecx_22)
            data_1a9a354
            sub_69aa20(data_1a9a34c)
            uint32_t eax_36 = *eax_12
            
            if (eax_36 == 0)
                int32_t eax_37 = *(eax_12 + 0x10)
                uint32_t esi_6 = data_1a9a354
                uint32_t eax_38 = sub_6985c0(data_1a9a34c)
                uint32_t eax_39 = sub_698630(eax_38, esi_6, eax_38, &data_801800)
                *(eax_39 + 0x94) = *eax_39 + 1
                *(eax_39 + 0x98) = eax_37
            else if (eax_36 == 4)
                eax_30 = data_1a9a370
                
                if (eax_30 s> *(esi_5 + 8))
                    eax_30 = sub_75970e(&data_1a9a370)
                    
                    if (data_1a9a370 == 0xffffffff)
                        var_14_4.b = 0xc
                        data_1a9a374 = sub_69f030("sys/TextureFn_Circle.materialFn", 0x1d)
                        var_14_4.b = 0xb
                        eax_30 = __Init_thread_footer(&data_1a9a370)
                
                int32_t* esi_7 = data_1a9a374
                
                if (esi_7 == 0)
                    sub_69fd50(eax_30, "!Null\Null", &var_844, 0x1d)
                    var_14_4.b = 0xd
                    char* eax_41 = var_844
                    char* ecx_32 = &data_801800
                    
                    if (eax_41 != 0)
                        ecx_32 = eax_41
                    
                    eax_30 = sub_69f030(ecx_32, esi_7 + 0x1d)
                    esi_7 = eax_30
                    var_14_4.b = 0xe
                    
                    if (data_cf65bc != 0)
                        void* ecx_33 = var_844
                        
                        if (ecx_33 != 0 && *ecx_33 != 0)
                            eax_30 = sub_63d4e0(&var_844)
                            int32_t temp14_1 = *(eax_30 + 4)
                            *(eax_30 + 4) -= 1
                            
                            if (temp14_1 == 1)
                                eax_30 = sub_64c080(eax_30, *(eax_30 + 0xc) + 0x10)
                                var_844 = &data_801800
                    
                    var_14_4.b = 0xb
                else if (esi_7[1] != 0x1d)
                    var_8d0_7 = "DefAutoLock::DefAutoLock"
                    var_8d4_4 = 0x19
                    var_8d8_3 = "C:\x\ax2017\Engine\DefLoad.h"
                    ecx_68 = "assetPtr && assetPtr->assetType == assetType"
                    goto label_6ec394
                
                int32_t* var_82c_2 = esi_7
                
                if (*esi_7 == 0)
                    sub_69f4a0(eax_30, 0, esi_7, 1)
                
                esi_7[7] += 1
                var_14_4.b = 0xf
                uint32_t eax_43 = sub_6edec0(**esi_7)
                var_14_4.b = 0xb
                esi_7[7] -= 1
                uint32_t esi_8 = data_1a9a354
                int32_t var_82c_3 = 0
                uint32_t eax_44 = sub_6985c0(data_1a9a34c)
                int32_t* eax_45 = sub_698630(eax_44, esi_8, eax_44, &data_801800)
                eax_45[0xf] = *eax_45 + 1
                eax_45[0x10] = eax_43
            else if (eax_36 != 1)
                sub_69bd40(eax_36, data_1a9a354, data_1a9a34c, 1)
            else
                int32_t esi_9 = *(eax_12 + 0x18)
                uint32_t eax_46 = data_1a9a354
                uint32_t eax_47 = sub_6985c0(data_1a9a34c)
                uint32_t eax_48 = sub_698630(eax_47, eax_46, eax_47, &data_801800)
                int32_t ecx_46 = *eax_48 + 1
                *(eax_48 + 0x8c) = esi_9
                *(eax_48 + 0x88) = ecx_46
                *(eax_48 + 0x90) = 0
            
            uint32_t eax_49 = zx.d(*(eax_12 + 4))
            sub_69bd40(eax_49, data_1a9a36c, data_1a9a34c, eax_49.b)
            data_1a9a34c
            sub_69b9c0(0x3f800000)
            var_14_4.b = 0x10
            
            if (data_cf65bc != 0)
                char* eax_50 = var_838
                
                if (eax_50 != 0 && *eax_50 != 0)
                    char* eax_51 = sub_63d4e0(&var_838)
                    int32_t temp12_1 = *(eax_51 + 4)
                    *(eax_51 + 4) -= 1
                    
                    if (temp12_1 == 1)
                        sub_64c080(eax_51, *(eax_51 + 0xc) + 0x10)
                        var_838 = &data_801800
            
            var_14_4.b = 0x11
            
            if (data_cf65bc != 0 && edi_4 != 0 && *edi_4 != 0)
                char* eax_52 = sub_63d4e0(&var_83c)
                int32_t temp13_1 = *(eax_52 + 4)
                *(eax_52 + 4) -= 1
                
                if (temp13_1 == 1)
                    sub_64c080(eax_52, *(eax_52 + 0xc) + 0x10)
                    var_83c = &data_801800
        
        eax_10 = var_858_1 - 1
        bool cond:2_1 = var_858_1 - 1 s< 0
        var_14_4.b = 2
        var_858_1 = eax_10
        
        if (cond:2_1)
            break
        
        Next = Next_1

if (arg4 != 0)
    arg4[7] -= 1

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(arg4)
return arg4
