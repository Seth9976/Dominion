// 函数: sub_745100
// 地址: 0x745100
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_773231
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_1c4 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
float var_1b0[0x18]
float* eax_3 = sub_745020(&var_1b0)
bool cond:0 = data_1513462 == 0
int128_t var_d0 = *eax_3
int128_t var_c0 = *(eax_3 + 0x10)
int128_t var_b0 = *(eax_3 + 0x20)
int128_t var_a0 = *(eax_3 + 0x30)
int128_t var_90 = *(eax_3 + 0x40)
int128_t var_80 = *(eax_3 + 0x50)
char const* const var_1d0
int32_t var_1cc_1
char const* const var_1c8_1
char* ecx_1

if (cond:0)
    if (data_cb460c != 0xffffffff)
        sub_69aa20(data_1512454)
        data_cb460c = 0xffffffff
    
label_745232:
    data_1512454
    eax_3 = sub_69b9c0(0x3f800000)
    int32_t* ecx_7 = data_1512450
    
    if (ecx_7[1] == 0x1e)
        int32_t* eax_5
        int32_t edx_4
        eax_5, edx_4 = sub_5af880(ecx_7)
        int32_t* esi_2 = eax_5
        int32_t i = 0
        int32_t* var_d4_1 = esi_2
        float var_100[0x4]
        float var_54
        float var_40
        
        if (esi_2[2] s> 0)
            int32_t ecx_8 = data_151345c
            int32_t eax_6 = 0
            int32_t var_e4_1 = 0
            
            do
                int32_t* esi_4 = *esi_2 + eax_6
                int32_t eax_7 = 0
                
                if (ecx_8 s> 0)
                    edx_4 = *esi_4
                    
                    do
                        if ((&data_151245c)[eax_7] == edx_4)
                            var_40.o = *sub_697620(&var_100, &var_d0, esi_4, &var_100, 0)
                            float* edx_6
                            
                            if (data_151245c != *esi_4)
                                edx_6 = &data_7dc5cc
                            else
                                var_54 = -3.01464553e+38f
                                edx_6 = &var_54
                            
                            edx_4 = sub_682fe0(&var_40, edx_6, 1f)
                            ecx_8 = data_151345c
                            break
                        
                        eax_7 += 1
                    while (eax_7 s< ecx_8)
                
                esi_2 = var_d4_1
                i += 1
                eax_6 = var_e4_1 + 0x178
                var_e4_1 = eax_6
            while (i s< esi_2[2])
        
        float xmm2_1 = esi_2[4]
        float xmm1_1 = esi_2[6]
        float var_68 = esi_2[3]
        int32_t xmm0_8 = esi_2[5]
        int32_t var_e4_2 = 0x7f000000
        float var_50 = -10000f
        float var_4c_1 = -10000f
        float var_48 = 10000f
        var_40 = -10000f
        float var_3c_1 = xmm1_1
        int32_t var_38_1 = 0x461c4000
        int32_t var_34_1 = 0x461c4000
        int32_t var_70 = 0xc61c4000
        float var_6c_1 = xmm2_1
        float var_64_1 = xmm1_1
        int32_t var_60 = xmm0_8
        float var_5c_1 = xmm2_1
        float var_58 = 10000f
        var_54 = xmm1_1
        var_50.o = *sub_744c10(&var_100, edx_4, &var_50, &var_100)
        int128_t var_f0
        var_50.o = *sub_744c10(&var_100, sub_682f00(&var_50, &var_f0:0xc), &var_70, &var_100)
        var_50.o = *sub_744c10(&var_100, sub_682f00(&var_50, &var_f0:0xc), &var_60, &var_100)
        var_40.o = *sub_744c10(&var_100, sub_682f00(&var_50, &var_f0:0xc), &var_40, &var_100)
        int32_t edx_14 = sub_682f00(&var_40, &var_f0:0xc)
        float xmm0_13 = -1f f/ data_1593c6c
        var_40 = -1000f
        int32_t var_38_2 = 0x457a0000
        int32_t var_34_2 = 0
        float var_3c_2 = xmm0_13
        var_40.o = *sub_744c10(&var_100, edx_14, &var_40, &var_100)
        int32_t edx_15 = sub_682f00(&var_40, &data_7e43e4)
        float var_3c_3 = -1000f
        float var_38_3 = 0f
        float var_34_3 = 4000f
        var_40 = -1f f/ data_1593c6c
        void var_150
        var_40.o = *sub_744c10(&var_150, edx_15, &var_40, &var_150)
        eax_3 = sub_682f00(&var_40, &data_7e43e4)
        void var_120
        float var_110[0x4]
        
        if (data_1513462 == 0)
        label_74578f:
            void var_140
            
            if (data_1513460.b == 0)
                if (data_1513460:1.b != 0)
                    float xmm1_16[0x4] = *(esi_2 + 0xc)
                    int32_t i_1 = 0
                    __builtin_memcpy(&var_b0, 
                        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x00\x"
                    "00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x80"
                    "3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x80"
                    "3f\x00\x00\x80\x3f", 
                        0x40)
                    float xmm2_7 = _mm_shuffle_ps(xmm1_16, xmm1_16, 0xaa)
                    float xmm3_9 = _mm_shuffle_ps(xmm1_16, xmm1_16, 0xff)
                    int128_t xmm2_8 = xmm2_7 f- xmm1_16
                    float xmm4_7[0x4] = _mm_shuffle_ps(xmm1_16, xmm1_16, 0x55)
                    int128_t xmm3_10 = xmm3_9 f- xmm4_7
                    var_110 = xmm1_16
                    var_40.o = xmm2_8
                    var_60.o = xmm4_7
                    var_f0 = xmm3_10
                    var_48 = 8f
                    int32_t var_44_3 = 0x41000000
                    
                    do
                        float xmm1_20 =
                            xmm3_10.d f* *(&var_b0:4 + (i_1 << 3)) f+ xmm4_7 f- data_1593c74
                        var_68 = (xmm2_8 f* *(&var_b0 + (i_1 << 3)) f+ xmm1_16 f- data_1593c70)
                            f* data_1593c6c
                        float var_64_3 = xmm1_20 f* data_1593c6c
                        var_100 = *sub_5af7f0(&var_140, &var_48, &var_68, &var_140)
                        sub_682fe0(&var_100, &data_7e5d1c, 2f)
                        xmm1_16 = var_110
                        i_1 += 1
                        xmm2_8 = var_40.o
                        xmm3_10 = var_f0
                        xmm4_7 = var_60.o
                    while (i_1 s< 8)
                
            label_745b33:
                char* const esi_6 = &data_801800
                char* eax_40 = *(data_1512450 + 0x20)
                
                if (eax_40 != 0)
                    esi_6 = eax_40
                
                if (data_1a9a484 s> *(*fsbase->ThreadLocalStoragePointer + 8))
                    sub_75970e(&data_1a9a484)
                    
                    if (data_1a9a484 == 0xffffffff)
                        int32_t var_14_1 = 0
                        data_1a9a488 = sub_69f030("sys/debugfont.font", 0x12)
                        int32_t var_14_2 = 0xffffffff
                        __Init_thread_footer(&data_1a9a484)
                
                void* eax_44 = data_cf65b8
                struct _EXCEPTION_REGISTRATION_RECORD*** edx_24 = data_1a9a488
                var_40 = 0f
                int32_t var_3c_4 = 0
                int32_t var_1cc_8 = 0x3fc00000
                int32_t var_38_4 = _mm_cvtepi32_ps(zx.o(*(eax_44 + 0x14)))
                int32_t var_34_4 = _mm_cvtepi32_ps(zx.o(*(eax_44 + 0x18)))
                void* result = sub_6b4060(&var_40, edx_24, esi_6, &var_40)
                fsbase->NtTib.ExceptionList = ExceptionList
                CookieCheckFunction(result)
                return result
            
            if (data_151345c s> 0)
                void* eax_32 = sub_744f10(data_151245c, nullptr)
                int32_t esi_5 = 1
                var_50.o = *sub_697620(eax_32, &var_d0, eax_32, &var_110, 0)
                float var_e4_5
                float var_d4_2
                float xmm1_12
                float xmm2_4
                float xmm3_7
                float xmm4_5
                
                if (data_151345c s<= 1)
                    xmm3_7 = var_4c_1
                    xmm4_5 = var_50
                    xmm2_4 = xmm2_1
                    xmm1_12 = var_48
                    var_d4_2 = xmm3_7
                    var_e4_5 = xmm4_5
                label_745918:
                    float xmm1_13 = xmm1_12 - xmm4_5
                    __builtin_memcpy(&var_b0, 
                        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x00\x"
                    "00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x80"
                    "3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x80"
                    "3f\x00\x00\x80\x3f", 
                        0x40)
                    int32_t i_2 = 0
                    float xmm2_5 = xmm2_4 - xmm3_7
                    var_54 = xmm1_13
                    float var_d8_2 = xmm2_5
                    var_68 = 8f
                    int32_t var_64_2 = 0x41000000
                    
                    do
                        float xmm0_37 = xmm2_5 f* *(&var_b0:4 + (i_2 << 3)) + xmm3_7
                        var_48 = xmm1_13 f* *(&var_b0 + (i_2 << 3)) + xmm4_5
                        float var_44_2 = xmm0_37
                        var_100 = *sub_5af7f0(&var_120, &var_68, &var_48, &var_120)
                        sub_682fe0(&var_100, &data_7e5d1c, 2f)
                        xmm2_5 = var_d8_2
                        i_2 += 1
                        xmm3_7 = var_d4_2
                        xmm1_13 = var_54
                        xmm4_5 = var_e4_5
                    while (i_2 s< 8)
                    
                    goto label_745b33
                
                float var_d8_1 = xmm2_1
                var_54 = var_48
                var_d4_2 = var_4c_1
                var_e4_5 = var_50
                
                while (true)
                    void* eax_34 = sub_744f10((&data_151245c)[esi_5], nullptr)
                    eax_3 = sub_697620(eax_34, &var_d0, eax_34, &var_140, 0)
                    xmm1_12 = var_54
                    xmm4_5 = var_e4_5
                    var_40.o = *eax_3
                    
                    if (not(xmm1_12 < xmm4_5))
                        xmm2_4 = var_d8_1
                        xmm3_7 = var_d4_2
                        
                        if (not(xmm2_4 < xmm3_7))
                            float xmm0_31 = var_40
                            
                            if (not(xmm0_31 > xmm4_5))
                                xmm4_5 = xmm0_31
                            
                            var_e4_5 = xmm4_5
                            
                            if (not(xmm1_12 > var_38_3))
                                xmm1_12 = var_38_3
                            
                            var_54 = xmm1_12
                            
                            if (not(var_3c_3 > xmm3_7))
                                xmm3_7 = var_3c_3
                            
                            var_d4_2 = xmm3_7
                            
                            if (not(xmm2_4 > var_34_3))
                                xmm2_4 = var_34_3
                            
                            esi_5 += 1
                            var_d8_1 = xmm2_4
                            
                            if (esi_5 s>= data_151345c)
                                goto label_745918
                            
                            continue
                    
                    var_1c8_1 = "RectUnion"
                    var_1cc_1 = 0xdb
                    var_1d0 = "C:\x\ax2017\Engine\Rect.cpp"
                    ecx_1 = "RectIsNormalized(r0)"
                    break
            else
                var_1c8_1 = "UIEditorDraw"
                var_1cc_1 = 0x1e4
                var_1d0 = "C:\x\ax2017\Engine\Editor\UIEditor.cpp"
                ecx_1 = "gUI.s.activeSetCount > 0"
        else
            eax_3 = GetKeyState(0x11)
            void var_130
            
            if (eax_3.w s< 0)
                if (data_1513462 == 0)
                    goto label_74578f
                
                eax_3 = GetKeyState(0x11)
                
                if (eax_3.w s>= 0)
                    goto label_74578f
                
                if (data_151345c == 1)
                    void* eax_28 = sub_744f10(data_151245c, nullptr)
                    int128_t* eax_29 = sub_697620(eax_28, &var_d0, eax_28, &var_120, 1)
                    __builtin_memcpy(&var_b0, 
                        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x00\x"
                    "00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x80"
                    "3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x80"
                    "3f\x00\x00\x80\x3f", 
                        0x40)
                    int32_t i_3 = 0
                    float xmm2_3[0x4] = *eax_29
                    float xmm1_8 = _mm_shuffle_ps(xmm2_3, xmm2_3, 0xaa)
                    float xmm3_5 = _mm_shuffle_ps(xmm2_3, xmm2_3, 0xff)
                    float xmm4_4[0x4] = _mm_shuffle_ps(xmm2_3, xmm2_3, 0x55)
                    int128_t xmm1_9 = xmm1_8 f- xmm2_3
                    int128_t xmm3_6 = xmm3_5 f- xmm4_4
                    var_110 = xmm2_3
                    var_40.o = xmm1_9
                    var_70.o = xmm4_4
                    var_50.o = xmm3_6
                    var_f0:8.d = 0x41000000
                    int32_t var_e4_4 = 0x41000000
                    
                    do
                        float xmm0_23 = xmm3_6.d f* *(&var_b0:4 + (i_3 << 3)) f+ xmm4_4
                        var_58 = xmm1_9 f* *(&var_b0 + (i_3 << 3)) f+ xmm2_3
                        var_54 = xmm0_23
                        var_100 = *sub_5af7f0(&var_130, &var_f0:8, &var_58, &var_130)
                        sub_682fe0(&var_100, &data_7e5d1c, 2f)
                        xmm2_3 = var_110
                        i_3 += 1
                        xmm1_9 = var_40.o
                        xmm3_6 = var_50.o
                        xmm4_4 = var_70.o
                    while (i_3 s< 8)
                    
                    goto label_745b33
                
                var_1c8_1 = "UIEditorDraw"
                var_1cc_1 = 0x1ca
                var_1d0 = "C:\x\ax2017\Engine\Editor\UIEditor.cpp"
                ecx_1 = "gUI.s.activeSetCount == 1"
            else
                if (data_151345c == 1)
                    void* eax_24 = sub_744f10(data_151245c, nullptr)
                    int128_t* eax_25 = sub_697620(eax_24, &var_d0, eax_24, &var_130, 0)
                    __builtin_memcpy(&var_b0, 
                        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x00\x"
                    "00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x00\x00\x00\x00\x00\x3f\x00\x00\x80"
                    "3f\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x3f\x00\x00\x80"
                    "3f\x00\x00\x80\x3f", 
                        0x40)
                    int32_t i_4 = 0
                    float xmm2_2[0x4] = *eax_25
                    float xmm1_3 = _mm_shuffle_ps(xmm2_2, xmm2_2, 0xaa)
                    float xmm3_2 = _mm_shuffle_ps(xmm2_2, xmm2_2, 0xff)
                    float xmm4_2[0x4] = _mm_shuffle_ps(xmm2_2, xmm2_2, 0x55)
                    int128_t xmm1_4 = xmm1_3 f- xmm2_2
                    float xmm3_3[0x4] = xmm3_2 f- xmm4_2
                    var_50.o = xmm2_2
                    var_70.o = xmm1_4
                    var_100 = xmm4_2
                    var_110 = xmm3_3
                    var_f0:8.d = 0x41000000
                    int32_t var_e4_3 = 0x41000000
                    
                    do
                        float xmm0_19 = xmm3_3[0] f* *(&var_b0:4 + (i_4 << 3)) f+ xmm4_2
                        var_58 = xmm1_4 f* *(&var_b0 + (i_4 << 3)) f+ xmm2_2
                        var_54 = xmm0_19
                        var_40.o = *sub_5af7f0(&var_120, &var_f0:8, &var_58, &var_120)
                        sub_682fe0(&var_40, &data_7e5d1c, 2f)
                        xmm2_2 = var_50.o
                        i_4 += 1
                        xmm1_4 = var_70.o
                        xmm3_3 = var_110
                        xmm4_2 = var_100
                    while (i_4 s< 8)
                    
                    goto label_745b33
                
                var_1c8_1 = "UIEditorDraw"
                var_1cc_1 = 0x1b0
                var_1d0 = "C:\x\ax2017\Engine\Editor\UIEditor.cpp"
                ecx_1 = "gUI.s.activeSetCount == 1"
    else
        var_1c8_1 = "UIDefGet"
        var_1cc_1 = 0x127
        var_1d0 = "C:\x\ax2017\Engine\UIDef.cpp"
        ecx_1 = "ptr->assetType == ASSET_TYPE_UI"
else
    if (data_151345c == 1)
        uint32_t eax_4 = sub_744e90(data_151245c)
        int32_t edx_1 = data_cb460c
        uint32_t esi_1 = eax_4
        
        if (esi_1 != edx_1 && edx_1 != 0xffffffff)
            eax_4 = sub_69aa20(data_1512454)
            data_cb460c = 0xffffffff
        
        sub_69be60(eax_4, esi_1, data_1512454, sub_7450b0)
        data_cb460c = esi_1
        goto label_745232
    
    var_1c8_1 = "UIEditorDraw"
    var_1cc_1 = 0x174
    var_1d0 = "C:\x\ax2017\Engine\Editor\UIEditor.cpp"
    ecx_1 = "gUI.s.activeSetCount == 1"

sub_63b870(eax_3, &data_801800, ecx_1, var_1d0, var_1cc_1, var_1c8_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
