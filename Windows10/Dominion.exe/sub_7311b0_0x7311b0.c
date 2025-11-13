// 函数: sub_7311b0
// 地址: 0x7311b0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_772928
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_490 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg3
void* var_3f4 = esi
float xmm0 = sub_4acb60(&__saved_ebp, 0.785398185f)
int32_t xmm0_1 = data_cf660c.d
int32_t xmm0_2 = data_cf660c:4
float var_1f8 = 0f
uint32_t var_3f8 = *(esi + 0x10)
uint32_t eax_4 = *(esi + 0x18)
float var_240 = 1f
char var_214 = 0
int32_t var_210 = 0x3f800000
int64_t var_200 = 0
char const* const var_49c_1
int32_t var_498_1
char const* const var_494_1
char* ecx

if (eax_4 s<= 0x14)
    char* var_3f0 = nullptr
    char var_1f4[0x1e0]
    
    if (eax_4 s> 0)
    label_7312a0:
        int32_t edi_1 = 0
        int32_t var_400_1 = 0
        
        while (true)
            void var_250
            float var_20c
            sub_72fa50(&var_250, &var_20c, edi_1, &var_250)
            float var_41c = var_200.d + var_20c
            float var_208
            float var_418_1 = var_208 f+ var_200:4.d
            float var_204
            float var_414_1 = var_204 + var_1f8
            void var_234
            int128_t* eax_7 = sub_6fde90(&var_200, &var_41c, &var_234, &var_200, &var_250)
            void* esi_3 = &var_3f0[*(esi + 0x18) * edi_1]
            int32_t eax_8 = sub_6a1230(eax_7, var_3f8, var_3f8, *(var_3f4 + 0x14), 3, 0)
            void* edx_3 = data_147b06c
            *(&var_1f4 + (esi_3 << 2)) = eax_8
            *(edx_3 + 0x2cc) += 1
            int32_t eax_10 = *(edx_3 + 0x2cc) * 5
            *(edx_3 + (eax_10 << 2) + 0x18c) = 2
            *(edx_3 + (eax_10 << 2) + 0x194) = eax_8
            *(edx_3 + (eax_10 << 2) + 0x198) = 0
            *(edx_3 + (eax_10 << 2) + 0x19c) = 0
            sub_6ad5d0(eax_10, 0, eax_8, 0)
            
            if (data_cf69dc != 0)
                data_cf69dc = 0
                sub_645a20(&data_cf65fc)
            
            (*(*data_147b070 + 0x90))(data_cf65f8, 0)
            int32_t var_218
            int32_t var_254_1 = var_218
            int128_t var_230
            int128_t var_26c_1 = var_230
            int64_t var_220
            int64_t var_25c_1 = var_220
            float var_484[0x10]
            eax_4 = sub_6dc2d0(&var_484)
            int128_t xmm0_11 = *eax_4
            int128_t xmm2_1 = *(eax_4 + 0x20)
            int128_t xmm3_1 = *(eax_4 + 0x30)
            
            if (data_147aba1 != 0)
                var_494_1 = "Draw3DSetView"
                var_498_1 = 0x369
                var_49c_1 = "C:\x\ax2017\Engine\Draw3d.cpp"
                ecx = "!gDraw3DData.submittingRenderItems"
                goto label_731a97
            
            data_cf689c = *(eax_4 + 0x10)
            data_cf688c = xmm0_11
            float xmm0_13 = xmm0 / var_240
            data_cf68ac = xmm2_1
            float var_40c_1 = xmm0 * 2f
            data_cf68bc = xmm3_1
            float var_410 = xmm0_13 + xmm0_13
            float var_444[0x4]
            int128_t var_434 = *sub_5af7f0(&var_444, &var_410, &data_7ffb14, &var_444)
            int32_t var_424_1 = xmm0_1
            int32_t var_420_1 = xmm0_2
            sub_645a20(&var_434)
            data_cf6a70 = data_7fefb0
            __builtin_memcpy(&data_cf6684, 
                "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
            "00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80"
            "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x
                    3f", 
                0x40)
            data_cf6744 = data_cf688c
            data_cf6754 = data_cf689c
            data_cf6764 = data_cf68ac
            data_cf6774 = data_cf68bc
            float* eax_16 = sub_642ae0(&var_484, &data_cf6684, &data_cf6744, &var_484)
            data_cf66c4 = *eax_16
            data_cf66d4 = *(eax_16 + 0x10)
            data_cf66e4 = *(eax_16 + 0x20)
            data_cf66f4 = *(eax_16 + 0x30)
            float* eax_18 = sub_642ae0(&var_484, &data_cf6744, &data_cf67c4, &var_484)
            data_cf6784 = *eax_18
            data_cf6794 = *(eax_18 + 0x10)
            data_cf67a4 = *(eax_18 + 0x20)
            data_cf67b4 = *(eax_18 + 0x30)
            float* eax_20 = sub_642ae0(&var_484, &data_cf66c4, &data_cf67c4, &var_484)
            data_cf6704 = *eax_20
            data_cf6714 = *(eax_20 + 0x10)
            data_cf6724 = *(eax_20 + 0x20)
            data_cf6734 = *(eax_20 + 0x30)
            int32_t eax_22 = *(var_3f4 + 0x18) - 1
            float xmm1_6 = _mm_cvtepi32_ps(zx.o(var_3f0))
            void* ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
            float xmm0_36 = _mm_cvtepi32_ps(zx.o(eax_22))
            void* esi_4 = *ThreadLocalStoragePointer
            int32_t eax_23 = data_1a9a3e8
            data_cf6a54 = xmm1_6 / xmm0_36
            
            if (eax_23 s> *(esi_4 + 8))
                sub_75970e(&data_1a9a3e8)
                
                if (data_1a9a3e8 == 0xffffffff)
                    int32_t var_8_1 = 0
                    data_1a9a3ec = sub_69f030("sys/skybox.structure", 2)
                    int32_t var_8_2 = 0xffffffff
                    __Init_thread_footer(&data_1a9a3e8)
            
            eax_4 = data_1a9a3f0
            
            if (eax_4 s> *(esi_4 + 8))
                eax_4 = sub_75970e(&data_1a9a3f0)
                
                if (data_1a9a3f0 == 0xffffffff)
                    int32_t var_8_3 = 1
                    data_1a9a3f4 = sub_69f030("sys/pbr/ibl_prefilter.material", 5)
                    int32_t var_8_4 = 0xffffffff
                    eax_4 = __Init_thread_footer(&data_1a9a3f0)
            
            int32_t* ecx_7 = data_1a9a3ec
            
            if (ecx_7[1] != 2)
                var_494_1 = "StructureDefGet"
                var_498_1 = 0x313
                var_49c_1 = "C:\x\ax2017\Engine\AssetUtils.cpp"
                ecx = "assetPtr->assetType == ASSET_TYPE_STRUCTURE"
                goto label_731a97
            
            eax_4 = sub_5af880(ecx_7)
            uint32_t var_3fc_1 = eax_4
            
            if (*eax_4 == 0)
                var_494_1 = "HDRCubeToPrefilter"
                var_498_1 = 0x32f
                var_49c_1 = "C:\x\ax2017\Engine\IBLImport.cpp"
                ecx = "pDefStructure->pStructureImportData"
                goto label_731a97
            
            if (data_147aba1 != 0)
                var_494_1 = "DrawModeSet"
                var_498_1 = 0xd
                var_49c_1 = "C:\x\ax2017\Engine\DrawMode.cpp"
                ecx = "!gDraw3DData.submittingRenderItems"
                goto label_731a97
            
            int32_t ecx_8 = data_147d2e0
            
            if (ecx_8 != 2)
                if (ecx_8 != 0)
                    if (ecx_8 == 1)
                        eax_4 = data_147abe4
                        
                        if (*(eax_4 + 0x1d) == 0)
                            var_494_1 = "SpriteDrawEnd"
                            var_498_1 = 0x2fb
                            var_49c_1 = "C:\x\ax2017\Engine\Sprite.cpp"
                            ecx = "gpSpriteAppData->spritesDrawing"
                            goto label_731a97
                        
                        *(eax_4 + 0x1d) = 0
                        eax_4 = sub_681c50()
                        
                        if (data_147aba1 != 0)
                            var_494_1 = "Draw3DBegin"
                            var_498_1 = 0xb29
                            var_49c_1 = "C:\x\ax2017\Engine\Draw3d.cpp"
                            ecx = "!gDraw3DData.submittingRenderItems"
                            goto label_731a97
                        
                        eax_4 = var_3fc_1
                    else if (ecx_8 != 2)
                        var_494_1 = "DrawModeSet"
                        var_498_1 = 0x1f
                        var_49c_1 = "C:\x\ax2017\Engine\DrawMode.cpp"
                        ecx = "Halt"
                        goto label_731a97
                
                data_147d2e0 = 2
            
            int32_t ecx_14 = data_147abb4
            int32_t i = 0
            data_147abb4 = 2
            int32_t* edi_3 = *eax_4
            
            if (*edi_3 s> 0)
                do
                    void var_3ec
                    memset(&var_3ec, 0, 0x180)
                    int32_t var_3a4_1 = data_1a9a3f4
                    int32_t var_3e8_1 = i * 0x150 + edi_3[2]
                    int32_t var_3a0_1 = arg4
                    int32_t var_284_1 = 0x3f800000
                    int128_t var_3e4
                    __builtin_memcpy(&var_3e4, 
                        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                    "00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                    "00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                    "00\x00\x00\x80\x3f", 
                        0x40)
                    int128_t var_35c_1 = data_7fefb0
                    
                    if (i == 0)
                        i = sub_642ef0(&var_3ec)
                    
                    sub_6437e0(&var_3ec)
                    i += 1
                    edi_3 = *var_3fc_1
                while (i s< *edi_3)
            
            data_147abb4 = ecx_14
            sub_6e1520(0)
            sub_6adb80()
            esi = var_3f4
            edi_1 = var_400_1 + 1
            var_400_1 = edi_1
            
            if (edi_1 s>= 6)
                int32_t eax_32
                int32_t edx_5
                edx_5:eax_32 = sx.q(var_3f8)
                void* ecx_16 = &var_3f0[1]
                var_3f0 = ecx_16
                eax_4 = (eax_32 - edx_5) s>> 1
                var_3f8 = eax_4
                
                if (ecx_16 s< *(esi + 0x18))
                    goto label_7312a0
                
                break
    
    if (arg2 != 0)
        sub_63d720(&var_3f0, arg2)
        int32_t var_8_5 = 2
        char* eax_34 = var_3f0
        int32_t eax_36
        char const* const ecx_20
        char* esi_5
        
        if (eax_34 == 0 || *eax_34 == 0)
            int32_t* eax_37 = sub_64bfd0(0x15)
            eax_37[3] += 1
            
            if (*eax_37 == 0)
                sub_64be70(eax_37)
            
            int32_t* esi_6 = *eax_37
            ecx_20 = "_pre"
            *eax_37 = *esi_6
            *esi_6 = 0xfafafafa
            esi_6[1] = 1
            esi_6[2] = 4
            esi_6[3] = 5
            esi_5 = &esi_6[4]
            var_3f0 = esi_5
            
            do
                eax_36.b = *ecx_20
                ecx_20 = &ecx_20[1]
                ecx_20[esi_5 + 0xff771b03] = eax_36.b
            while (eax_36.b != 0)
        else
            char* eax_35 = sub_63d4e0(&var_3f0)
            int32_t edi_5 = *(eax_35 + 8)
            ecx_20 = sub_63d5e0(eax_35, edi_5 + 4, &var_3f0, 1)
            esi_5 = var_3f0
            __builtin_strncpy(&esi_5[edi_5], "_pre", 5)
            eax_36.b = 0
        
        int32_t var_494_5 = *(var_3f4 + 0x18)
        int32_t result = sub_72f690(eax_36, &var_1f4, ecx_20)
        sub_69fc10(result)
        sub_69ec60(result)
        int32_t var_8_6 = 3
        
        if (data_cf65bc != 0 && esi_5 != 0 && *esi_5 != 0)
            char* eax_38 = sub_63d4e0(&var_3f0)
            int32_t temp0_1 = *(eax_38 + 4)
            *(eax_38 + 4) -= 1
            
            if (temp0_1 == 1)
                sub_64c080(eax_38, *(eax_38 + 0xc) + 0x10)
        
        fsbase->NtTib.ExceptionList = ExceptionList
        CookieCheckFunction(result)
        return result
    
    var_494_1 = "XString::XString"
    var_498_1 = 0x94
    var_49c_1 = "C:\x\ax2017\Engine\xString.cpp"
    ecx = &data_871e0c
else
    var_494_1 = "HDRCubeToPrefilter"
    var_498_1 = 0x2fd
    var_49c_1 = "C:\x\ax2017\Engine\IBLImport.cpp"
    ecx = "20 >= config.PREFILTER_MIPS"

label_731a97:
sub_63b870(eax_4, &data_801800, ecx, var_49c_1, var_498_1, var_494_1)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
