// 函数: sub_72fb90
// 地址: 0x72fb90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebx_2
int32_t __saved_ebx_1 = __saved_ebx_2
int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_77279d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t esi
int32_t var_2b4 = esi
int32_t edi
int32_t var_2b8 = edi
int32_t __saved_ebp
int32_t var_2bc = __security_cookie ^ &__saved_ebp
int32_t* esp_1 = &var_2bc
fsbase->NtTib.ExceptionList = &ExceptionList
float xmm0 = sub_4acb60(&__saved_ebp, 0.785398185f)
int32_t esi_1 = 0
int32_t xmm0_1 = data_cf660c.d
int32_t xmm0_2 = data_cf660c:4
float var_70 = 1f
char var_44 = 0
int32_t var_40 = 0x3f800000
int64_t var_30 = 0
float var_28 = 0f
int32_t var_228 = 0
int128_t* eax_12
char const* const ecx_15

while (true)
    void var_80
    *(esp_1 - 4) = &var_80
    float var_3c
    sub_72fa50(&var_80, &var_3c, esi_1)
    float var_248 = var_30.d + var_3c
    float var_38
    float xmm0_7 = var_38 f+ var_30:4.d
    *(esp_1 - 4) = &var_80
    *(esp_1 - 8) = &var_30
    float var_244_1 = xmm0_7
    float var_34
    float var_240_1 = var_28 + var_34
    void var_64
    int32_t eax_5 = sub_6fde90(&var_30, &var_248, &var_64)
    *(esp_1 - 0xc) = 0
    *(esp_1 - 0x10) = 3
    *(esp_1 - 0x14) = arg4
    int32_t eax_6 = sub_6a1230(eax_5, arg3, arg3)
    void* edx_3 = data_147b06c
    *(arg2 + (esi_1 << 2)) = eax_6
    *(edx_3 + 0x2cc) += 1
    int32_t eax_8 = *(edx_3 + 0x2cc)
    *(esp_1 - 4) = 0
    int32_t eax_9 = eax_8 * 5
    *(edx_3 + (eax_9 << 2) + 0x18c) = 2
    *(edx_3 + (eax_9 << 2) + 0x194) = eax_6
    *(edx_3 + (eax_9 << 2) + 0x198) = 0
    *(edx_3 + (eax_9 << 2) + 0x19c) = 0
    sub_6ad5d0(eax_9, 0, eax_6)
    
    if (data_cf69dc != 0)
        data_cf69dc = 0
        sub_645a20(&data_cf65fc)
    
    int32_t* ecx_5 = data_147b070
    *(esp_1 - 4) = 0
    *(esp_1 - 8) = 0xff0000ff
    (*(*ecx_5 + 0x90))()
    int32_t var_48
    int32_t var_84_1 = var_48
    void var_2b0
    *(esp_1 - 8) = &var_2b0
    int128_t var_60
    int128_t var_9c_1 = var_60
    int64_t var_50
    int64_t var_8c_1 = var_50
    eax_12 = sub_6dc2d0()
    int128_t xmm0_11 = *eax_12
    int128_t xmm2_1 = eax_12[2]
    int128_t xmm3_1 = eax_12[3]
    
    if (data_147aba1 != 0)
        *(esp_1 - 8) = "Draw3DSetView"
        *(esp_1 - 0xc) = 0x369
        *(esp_1 - 0x10) = "C:\x\ax2017\Engine\Draw3d.cpp"
    else
        data_cf689c = eax_12[1]
        data_cf688c = xmm0_11
        void var_270
        *(esp_1 - 8) = &var_270
        float xmm0_13 = xmm0 / var_70
        data_cf68ac = xmm2_1
        float var_238_1 = xmm0 * 2f
        data_cf68bc = xmm3_1
        float var_23c = xmm0_13 + xmm0_13
        int128_t var_260 = *sub_5af7f0(&var_270, &var_23c, &data_7ffb14)
        int32_t var_250_1 = xmm0_1
        int32_t var_24c_1 = xmm0_2
        sub_645a20(&var_260)
        int128_t xmm0_18 = data_7fefb0
        void* esp_17
        *esp_17 = &var_2b0
        data_cf6a70 = xmm0_18
        __builtin_memcpy(&data_cf6684, 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
        "80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
            0x40)
        data_cf6744 = data_cf688c
        data_cf6754 = data_cf689c
        data_cf6764 = data_cf68ac
        data_cf6774 = data_cf68bc
        int128_t* eax_16 = sub_642ae0(&var_2b0, &data_cf6684, &data_cf6744)
        int128_t* ecx_9 = &data_cf67c4
        data_cf66c4 = *eax_16
        data_cf66d4 = eax_16[1]
        data_cf66e4 = eax_16[2]
        int128_t xmm0_26 = eax_16[3]
        *esp_17 = &var_2b0
        data_cf66f4 = xmm0_26
        int128_t* eax_18 = sub_642ae0(&var_2b0, &data_cf6744, ecx_9)
        data_cf6784 = *eax_18
        data_cf6794 = eax_18[1]
        data_cf67a4 = eax_18[2]
        int128_t xmm0_30 = eax_18[3]
        *esp_17 = &var_2b0
        data_cf67b4 = xmm0_30
        int128_t* eax_20 = sub_642ae0(&var_2b0, &data_cf66c4, ecx_9)
        esp_1 = esp_17 + 4
        data_cf6704 = *eax_20
        data_cf6714 = eax_20[1]
        data_cf6724 = eax_20[2]
        void* ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
        data_cf6734 = eax_20[3]
        void* esi_2 = *ThreadLocalStoragePointer
        
        if (data_1a9a3b0 s> *(esi_2 + 8))
            *(esp_1 - 4) = &data_1a9a3b0
            sub_75970e()
            
            if (data_1a9a3b0 == 0xffffffff)
                int32_t var_14_1 = 0
                int32_t eax_22 = sub_69f030("sys/editor/video_sphere.structure", 2)
                *(esp_1 - 4) = &data_1a9a3b0
                data_1a9a3b4 = eax_22
                int32_t var_14_2 = 0xffffffff
                __Init_thread_footer()
        
        eax_12 = data_1a9a3b8
        
        if (eax_12 s> *(esi_2 + 8))
            *(esp_1 - 4) = &data_1a9a3b8
            eax_12 = sub_75970e()
            
            if (data_1a9a3b8 == 0xffffffff)
                int32_t var_14_3 = 1
                int32_t eax_23 = sub_69f030("sys/skybox_equi.material", 5)
                *(esp_1 - 4) = &data_1a9a3b8
                data_1a9a3bc = eax_23
                int32_t var_14_4 = 0xffffffff
                eax_12 = __Init_thread_footer()
        
        int32_t* ecx_10 = data_1a9a3b4
        
        if (ecx_10[1] != 2)
            *(esp_1 - 4) = "StructureDefGet"
            *(esp_1 - 8) = 0x313
            *(esp_1 - 0xc) = "C:\x\ax2017\Engine\AssetUtils.cpp"
            ecx_15 = "assetPtr->assetType == ASSET_TYPE_STRUCTURE"
            break
        
        eax_12 = sub_5af880(ecx_10)
        int128_t* var_224_1 = eax_12
        
        if (*eax_12 == 0)
            *(esp_1 - 4) = "DrawCubemap"
            *(esp_1 - 8) = 0x121
            *(esp_1 - 0xc) = "C:\x\ax2017\Engine\IBLImport.cpp"
            ecx_15 = "pDefStructure->pStructureImportData"
            break
        
        if (data_147aba1 != 0)
            *(esp_1 - 4) = "DrawModeSet"
            *(esp_1 - 8) = 0xd
            *(esp_1 - 0xc) = "C:\x\ax2017\Engine\DrawMode.cpp"
        else
            int32_t ecx_11 = data_147d2e0
            
            if (ecx_11 == 2)
                goto label_73008a
            
            if (ecx_11 == 0)
                goto label_730080
            
            if (ecx_11 != 1)
                if (ecx_11 == 2)
                    goto label_730080
                
                *(esp_1 - 4) = "DrawModeSet"
                *(esp_1 - 8) = 0x1f
                *(esp_1 - 0xc) = "C:\x\ax2017\Engine\DrawMode.cpp"
                ecx_15 = "Halt"
                break
            
            eax_12 = data_147abe4
            
            if (*(eax_12 + 0x1d) == 0)
                *(esp_1 - 4) = "SpriteDrawEnd"
                *(esp_1 - 8) = 0x2fb
                *(esp_1 - 0xc) = "C:\x\ax2017\Engine\Sprite.cpp"
                ecx_15 = "gpSpriteAppData->spritesDrawing"
                break
            
            *(eax_12 + 0x1d) = 0
            eax_12 = sub_681c50()
            
            if (data_147aba1 != 0)
                *(esp_1 - 4) = "Draw3DBegin"
                *(esp_1 - 8) = 0xb29
            else
                eax_12 = var_224_1
            label_730080:
                data_147d2e0 = 2
            label_73008a:
                int32_t ecx_18 = data_147abb4
                int32_t i = 0
                data_147abb4 = 2
                int32_t* edi_2 = *eax_12
                
                if (*edi_2 s> 0)
                    do
                        *(esp_1 - 4) = 0x180
                        *(esp_1 - 8) = 0
                        void var_220
                        *(esp_1 - 0xc) = &var_220
                        memset()
                        int32_t var_1d8_1 = data_1a9a3bc
                        int32_t var_21c_1 = i * 0x150 + edi_2[2]
                        int32_t ecx
                        int32_t var_1d4_1 = ecx
                        int32_t var_b8_1 = 0x3f800000
                        int128_t var_218
                        __builtin_memcpy(&var_218, 
                            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                        "00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                        "00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                        "00\x00\x00\x00\x00\x00\x80\x3f", 
                            0x40)
                        int128_t var_190_1 = data_7fefb0
                        
                        if (i == 0)
                            i = sub_642ef0(&var_220)
                        
                        sub_6437e0(&var_220)
                        i += 1
                        edi_2 = *var_224_1
                    while (i s< *edi_2)
                
                data_147abb4 = ecx_18
                sub_6e1520(0)
                void* result = sub_6adb80()
                esi_1 = var_228 + 1
                var_228 = esi_1
                
                if (esi_1 s< 6)
                    continue
                
                fsbase->NtTib.ExceptionList = ExceptionList
                esp_1[1]
                esp_1[2]
                CookieCheckFunction(result)
                return result
            
            *(esp_1 - 0xc) = "C:\x\ax2017\Engine\Draw3d.cpp"
    
    ecx_15 = "!gDraw3DData.submittingRenderItems"
    break

sub_63b870(eax_12, &data_801800, ecx_15)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
