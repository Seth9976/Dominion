// 函数: sub_7303e0
// 地址: 0x7303e0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_772838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2f4 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg3
void* var_22c = edi
float xmm0 = sub_4acb60(&__saved_ebp, 0.785398185f)
int32_t* eax_3 = nullptr
void* esi = nullptr
float xmm3 = 1f
int32_t xmm0_1 = data_cf660c.d
int32_t xmm0_2 = data_cf660c:4
float var_78 = 1f
char var_4c = 0
int32_t var_48 = 0x3f800000
int64_t var_44 = 0
float var_3c = 0f
char* var_21c = nullptr
char const* const var_300_3
int32_t var_2fc_3
char const* const var_2f8_3
char* ecx_9

while (true)
    if (esi u> 5)
        var_2f8_3 = "HDRCubeToIrradiance"
        var_2fc_3 = 0x228
        ecx_9 = "Halt"
    else
        int32_t var_38
        float var_30_5
        float xmm1_1
        float xmm2_1
        
        switch (esi)
            case nullptr
                xmm1_1 = -0f
                xmm2_1 = -1f
                var_38 = 0xbf800000
                xmm3 = -0f
                int32_t var_34_1 = 0x80000000
                int32_t var_30_1 = 0x80000000
            case 1
                xmm2_1 = 1f
                xmm1_1 = (zx.o(0)).d
                var_38 = 0xbf800000
                xmm3 = (zx.o(0)).d
                int32_t var_34_2 = 0x80000000
                int32_t var_30_2 = 0x80000000
            case 2
                xmm2_1 = -0f
                xmm1_1 = -1f
                xmm3 = -0f
                var_38 = 0x80000000
                int32_t var_34_3 = 0x80000000
                var_30_5 = xmm1_1
            case 3
                xmm1_1 = 1f
                xmm2_1 = (zx.o(0)).d
                xmm3 = (zx.o(0)).d
                var_38.q = 0
                int32_t var_30_3 = 0x3f800000
            case 4
                xmm1_1 = (zx.o(0)).d
                xmm2_1 = (zx.o(0)).d
                var_38 = 0xbf800000
                int32_t var_34_4 = 0x80000000
                int32_t var_30_4 = 0x80000000
            case 5
                xmm1_1 = -0f
                xmm3 = -1f
                xmm2_1 = -0f
                var_38 = 0xbf800000
                int32_t var_34_5 = 0x80000000
                var_30_5 = xmm1_1
        
        float var_240 = var_44.d + xmm1_1
        float var_23c_1 = var_44:4.d + xmm2_1
        float var_238_1 = var_3c + xmm3
        void var_6c
        int128_t* eax_5 = sub_6fde90(&var_44, &var_240, &var_6c, &var_44, &var_38)
        int32_t ecx_1 = *(edi + 8)
        int32_t eax_6 = sub_6a1230(eax_5, ecx_1, ecx_1, *(edi + 0xc), 3, 0)
        void* edx_2 = data_147b06c
        char var_2c[0x18]
        *(&var_2c + (esi << 2)) = eax_6
        *(edx_2 + 0x2cc) += 1
        int32_t eax_8 = *(edx_2 + 0x2cc) * 5
        *(edx_2 + (eax_8 << 2) + 0x18c) = 2
        *(edx_2 + (eax_8 << 2) + 0x194) = eax_6
        *(edx_2 + (eax_8 << 2) + 0x198) = 0
        *(edx_2 + (eax_8 << 2) + 0x19c) = 0
        sub_6ad5d0(eax_8, 0, eax_6, 0)
        
        if (data_cf69dc != 0)
            data_cf69dc = 0
            sub_645a20(&data_cf65fc)
        
        (*(*data_147b070 + 0x90))(0xffff0000, 0)
        int32_t var_50
        int32_t var_80_1 = var_50
        int128_t var_68
        int128_t var_98_1 = var_68
        int64_t var_58
        int64_t var_88_1 = var_58
        float var_2e8[0x10]
        uint32_t eax_11 = sub_6dc2d0(&var_2e8)
        int128_t var_298 = *eax_11
        int128_t var_288_1 = *(eax_11 + 0x10)
        int128_t var_278_1 = *(eax_11 + 0x20)
        int128_t var_268_1 = *(eax_11 + 0x30)
        sub_645940(&var_298)
        float xmm0_17 = xmm0 / var_78
        float var_230_1 = xmm0 * 2f
        float var_234 = xmm0_17 + xmm0_17
        float var_2a8[0x4]
        int128_t var_258 = *sub_5af7f0(&var_2a8, &var_234, &data_7ffb14, &var_2a8)
        int32_t var_248_1 = xmm0_1
        int32_t var_244_1 = xmm0_2
        sub_645a20(&var_258)
        data_cf6a70 = data_7fefb0
        __builtin_memcpy(&data_cf6684, 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
        "80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
        "00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
            0x40)
        data_cf6744 = data_cf688c
        data_cf6754 = data_cf689c
        data_cf6764 = data_cf68ac
        data_cf6774 = data_cf68bc
        float* eax_15 = sub_642ae0(&var_2e8, &data_cf6684, &data_cf6744, &var_2e8)
        data_cf66c4 = *eax_15
        data_cf66d4 = *(eax_15 + 0x10)
        data_cf66e4 = *(eax_15 + 0x20)
        data_cf66f4 = *(eax_15 + 0x30)
        float* eax_17 = sub_642ae0(&var_2e8, &data_cf6744, &data_cf67c4, &var_2e8)
        data_cf6784 = *eax_17
        data_cf6794 = *(eax_17 + 0x10)
        data_cf67a4 = *(eax_17 + 0x20)
        data_cf67b4 = *(eax_17 + 0x30)
        float* eax_19 = sub_642ae0(&var_2e8, &data_cf66c4, &data_cf67c4, &var_2e8)
        data_cf6704 = *eax_19
        data_cf6714 = *(eax_19 + 0x10)
        data_cf6724 = *(eax_19 + 0x20)
        void* ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
        data_cf6734 = *(eax_19 + 0x30)
        void* esi_1 = *ThreadLocalStoragePointer
        
        if (data_1a9a3c0 s> *(esi_1 + 8))
            sub_75970e(&data_1a9a3c0)
            
            if (data_1a9a3c0 == 0xffffffff)
                int32_t var_8_1 = 0
                data_1a9a3c4 = sub_69f030("sys/skybox.structure", 2)
                int32_t var_8_2 = 0xffffffff
                __Init_thread_footer(&data_1a9a3c0)
        
        eax_3 = data_1a9a3c8
        
        if (eax_3 s> *(esi_1 + 8))
            eax_3 = sub_75970e(&data_1a9a3c8)
            
            if (data_1a9a3c8 == 0xffffffff)
                int32_t var_8_3 = 1
                data_1a9a3cc = sub_69f030("sys/pbr/ibl_irradiance.material", 5)
                int32_t var_8_4 = 0xffffffff
                eax_3 = __Init_thread_footer(&data_1a9a3c8)
        
        int32_t* ecx_6 = data_1a9a3c4
        
        if (ecx_6[1] != 2)
            var_2f8_3 = "StructureDefGet"
            var_2fc_3 = 0x313
            var_300_3 = "C:\x\ax2017\Engine\AssetUtils.cpp"
            ecx_9 = "assetPtr->assetType == ASSET_TYPE_STRUCTURE"
            break
        
        eax_3 = sub_5af880(ecx_6)
        int32_t** var_224_1 = eax_3
        
        if (*eax_3 == 0)
            var_2f8_3 = "HDRCubeToIrradiance"
            var_2fc_3 = 0x24c
            ecx_9 = "pDefStructure->pStructureImportData"
        else
            sub_6e1520(2)
            int32_t eax_23 = data_147abb4
            int32_t i = 0
            data_147abb4 = 2
            int32_t* edi_2 = *eax_3
            
            if (*edi_2 s> 0)
                do
                    void var_218
                    memset(&var_218, 0, 0x180)
                    int32_t var_1d0_1 = data_1a9a3cc
                    int32_t var_214_1 = i * 0x150 + edi_2[2]
                    int32_t var_1cc_1 = arg4
                    int32_t var_b0_1 = 0x3f800000
                    int128_t var_210
                    __builtin_memcpy(&var_210, 
                        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                    "00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                    "00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                    "00\x00\x00\x80\x3f", 
                        0x40)
                    int128_t var_188_1 = data_7fefb0
                    
                    if (i == 0)
                        i = sub_642ef0(&var_218)
                    
                    sub_6437e0(&var_218)
                    i += 1
                    edi_2 = *var_224_1
                while (i s< *edi_2)
            
            data_147abb4 = eax_23
            sub_6e1520(0)
            eax_3 = sub_6adb80()
            xmm3 = 1f
            esi = &var_21c[1]
            edi = var_22c
            var_21c = esi
            
            if (esi s< 6)
                continue
            
            eax_3 = arg2
            
            if (eax_3 == 0)
                var_2f8_3 = "XString::XString"
                var_2fc_3 = 0x94
                var_300_3 = "C:\x\ax2017\Engine\xString.cpp"
                ecx_9 = &data_871e0c
                break
            
            sub_63d720(&var_21c, eax_3)
            int32_t var_8_5 = 2
            char* eax_29 = var_21c
            int32_t* eax_31
            char* ecx_13
            char* esi_3
            
            if (eax_29 == 0 || *eax_29 == 0)
                int32_t** eax_32 = sub_64bfd0(0x15)
                eax_32[3] += 1
                
                if (*eax_32 == 0)
                    sub_64be70(eax_32)
                
                int32_t* esi_4 = *eax_32
                ecx_13 = "_irr"
                *eax_32 = *esi_4
                *esi_4 = 0xfafafafa
                esi_4[1] = 1
                esi_4[2] = 4
                esi_4[3] = 5
                esi_3 = &esi_4[4]
                var_21c = esi_3
                
                do
                    eax_31.b = *ecx_13
                    ecx_13 = &ecx_13[1]
                    ecx_13[esi_3 + 0xff771b83] = eax_31.b
                while (eax_31.b != 0)
            else
                char* eax_30 = sub_63d4e0(&var_21c)
                int32_t edi_3 = *(eax_30 + 8)
                ecx_13 = sub_63d5e0(eax_30, edi_3 + 4, &var_21c, 1)
                esi_3 = var_21c
                __builtin_strncpy(&esi_3[edi_3], "_irr", 5)
                eax_31.b = 0
            
            int32_t var_2f8_4 = 1
            int32_t result = sub_72f690(eax_31, &var_2c, ecx_13)
            sub_69fc10(result)
            sub_69ec60(result)
            int32_t var_8_6 = 3
            
            if (data_cf65bc != 0 && esi_3 != 0 && *esi_3 != 0)
                char* eax_33 = sub_63d4e0(&var_21c)
                int32_t temp0_1 = *(eax_33 + 4)
                *(eax_33 + 4) -= 1
                
                if (temp0_1 == 1)
                    sub_64c080(eax_33, *(eax_33 + 0xc) + 0x10)
            
            fsbase->NtTib.ExceptionList = ExceptionList
            CookieCheckFunction(result)
            return result
    
    var_300_3 = "C:\x\ax2017\Engine\IBLImport.cpp"
    break

sub_63b870(eax_3, &data_801800, ecx_9, var_300_3, var_2fc_3, var_2f8_3)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
