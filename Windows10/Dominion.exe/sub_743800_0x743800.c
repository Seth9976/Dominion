// 函数: sub_743800
// 地址: 0x743800
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(struct EHRegistrationNode* arg1) = sub_7731e9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t esi
int32_t var_d4 = esi
int32_t edi
int32_t var_d8 = edi
fsbase->NtTib.ExceptionList = &ExceptionList
float* result_2 = arg1
int32_t xmm0 = sub_4acb60(&__saved_ebp, 0.785398185f)
void* eax_3 = data_cf65b8
int32_t result_21 = 0
int32_t var_cc = xmm0
int32_t var_c4 = data_cf660c.d
int32_t var_c8 = 0x3f800000
int32_t var_c0 = data_cf660c:4
char var_9c = 0
int32_t var_98 = 0x3f800000
int32_t* _Size = nullptr
int32_t result_15
int32_t result_5

if (*(eax_3 + 0x1c) s<= 0)
    result_5 = sub_6a1230(eax_3, 0x800, 0x800, 0x50, 4, _Size)
    result_15 = result_5
else
    int32_t result_25 = sub_6a1230(eax_3, 0x800, 0x800, 0x50, 6, _Size)
    result_15 = result_25
    _Size = nullptr
    result_5 = sub_6a1230(result_25, 0x800, 0x800, 1, 5, _Size)
    result_21 = result_5

int32_t esi_1 = 0
char const* const var_e8
int32_t var_e4_4
char* ecx_13

while (true)
    if (esi_1 u> 5)
        _Size = "RenderEnvironmentMap"
        var_e4_4 = 0x806
        var_e8 = "C:\x\ax2017\Engine\Editor\FabEditor.cpp"
        ecx_13 = "Halt"
        break
    
    int32_t var_48
    int32_t var_40_2
    int32_t eax_4
    int64_t xmm0_3
    float xmm1_1
    float xmm2_1
    float xmm3_1
    
    switch (esi_1)
        case 0
            xmm1_1 = (zx.o(0)).d
            xmm2_1 = (zx.o(0)).d
            xmm3_1 = 1f
            var_48 = 0x80000000
            int32_t var_44_1 = 0xbf800000
            int32_t var_40_1 = 0x80000000
        case 1
            xmm1_1 = -1f
            xmm3_1 = -0f
            xmm0_3 = 0
            eax_4 = 0x3f800000
        label_7439aa:
            xmm2_1 = -0f
            var_48.q = xmm0_3
            var_40_2 = eax_4
        case 2
            xmm2_1 = 1f
            xmm1_1 = (zx.o(0)).d
        label_74394c:
            xmm3_1 = (zx.o(0)).d
            var_48.q = 0
            var_40_2 = 0x3f800000
        case 3
            xmm1_1 = 1f
            xmm2_1 = (zx.o(0)).d
            goto label_74394c
        case 4
            xmm1_1 = -0f
            xmm2_1 = -1f
            xmm3_1 = -0f
            var_48.q = 0
            var_40_2 = 0x3f800000
        case 5
            xmm1_1 = -0f
            xmm3_1 = -1f
            xmm0_3 = 0x3f80000000000000
            eax_4 = 0
            goto label_7439aa
    
    float* result_6 = result_2
    _Size = &var_48
    float var_7c_1 = xmm1_1 + *result_6
    float var_78_1 = xmm2_1 + result_6[1]
    float var_74_1 = xmm3_1 + result_6[2]
    void var_bc
    int128_t var_80
    sub_6fde90(result_6, &var_80:4, &var_bc, result_6, _Size)
    result_5 = sub_649ab0()
    
    if (data_147aba1 == 0)
        _Size = "Draw3DAmbientLight"
        var_e4_4 = 0x336
        var_e8 = "C:\x\ax2017\Engine\Draw3d.cpp"
        ecx_13 = "gDraw3DData.submittingRenderItems"
        break
    
    int128_t xmm0_4 = data_7fefb0
    _Size = nullptr
    __builtin_strncpy(&data_cf6aa0, "333?", 4)
    data_cf6a90 = xmm0_4
    int32_t var_68_1 = 0x80000000
    int32_t var_64_1 = 0x80000000
    int32_t var_60_1 = 0xbf800000
    int128_t var_6c
    sub_645840(result_5, &data_7fefb0, &var_6c:4, _Size)
    sub_646220(&var_cc)
    uint32_t eax_5 = sub_6cf680(data_14ff3dc, 1)
    sub_649c00()
    _Size = nullptr
    int32_t _Size_1 = sub_6a1230(eax_5, 0x800, 0x800, 1, 3, _Size)
    void* ecx_4 = data_cf65b8
    void* edx_2 = data_147b06c
    void var_3c
    *(&var_3c + (esi_1 << 2)) = _Size_1
    int32_t result_3
    int32_t eax_6
    int32_t result_12
    
    if (*(ecx_4 + 0x1c) s<= 0)
        *(edx_2 + 0x2cc) += 1
        int32_t eax_7 = *(edx_2 + 0x2cc)
        result_3 = _Size_1
        eax_6 = eax_7 * 5
        *(edx_2 + (eax_6 << 2) + 0x194) = _Size_1
        *(edx_2 + (eax_6 << 2) + 0x198) = result_15
        result_12 = result_3
    else
        *(edx_2 + 0x2cc) += 1
        eax_6 = *(edx_2 + 0x2cc) * 5
        *(edx_2 + (eax_6 << 2) + 0x198) = result_15
        result_12 = result_21
        *(edx_2 + (eax_6 << 2) + 0x194) = result_21
    
    *(edx_2 + (eax_6 << 2) + 0x19c) = 0
    *(edx_2 + (eax_6 << 2) + 0x18c) = 2
    _Size = nullptr
    sub_6ad5d0(eax_6, result_15, result_12, _Size.b)
    int32_t eax_8 = *data_147b070
    _Size = nullptr
    (*(eax_8 + 0x90))(data_cf65f8, _Size)
    sub_645e30()
    sub_649120()
    sub_6494f0(2)
    sub_649c60()
    
    if (*(data_cf65b8 + 0x1c) s> 0)
        int32_t* ecx_10 = data_147b070
        _Size = _Size_1
        (*(*ecx_10 + 0x94))(result_21, _Size)
    
    result_5 = sub_6adb80()
    esi_1 += 1
    
    if (esi_1 s>= 6)
        if (*(data_cf65b8 + 0x1c) s> 0)
            sub_69ec60(result_21)
        
        int32_t eax_12 = sub_69ec60(result_15)
        _Size = 1
        uint32_t _Count = sub_6a9660(eax_12, 0x1800, 0x2000, _Size)
        result_5 = sub_6a9450(1) << 0xd
        float* result_13
        
        if (result_5 s>= 4)
            result_5 = sub_6a9450(1)
            result_13 = result_5 << 0xd
        else
            result_13 = 4
        
        result_2 = result_13
        
        if (_Count s<= 0)
            _Size = "XMalloc"
            var_e4_4 = 0x3d
            var_e8 = "C:\x\ax2017\Engine\xMemory.cpp"
            ecx_13 = "size > 0"
        else if (_Count s< 0x77359400)
            _Size = 0x10
            result_5 = _aligned_malloc(_Count, _Size)
            result_3 = result_5
            
            if (result_5 != 0)
                int32_t var_90 = 0x800
                int32_t var_8c = 0x800
                float* result_14 = result_13
                int32_t ecx_17
                int32_t edi_3
                edi_3, ecx_17 = __memfill_u32(result_5, 0xff000000, ((_Count - 1) u>> 2) + 1)
                int32_t var_84 = 1
                int32_t eax_15 = sub_6a9450(1) << 0xb
                int32_t ecx_18
                
                if (eax_15 s>= 4)
                    eax_15 = sub_6a9450(1)
                    ecx_18 = eax_15 << 0xb
                else
                    ecx_18 = 4
                
                int32_t var_4c = ecx_18
                
                for (int32_t i = 0; i s< 6; )
                    if (i u> 5)
                        _Size = "RenderEnvironmentMap"
                        sub_63b870(eax_15, &data_801800, "Halt", 
                            "C:\x\ax2017\Engine\Editor\FabEditor.cpp", 0x85a, _Size)
                        
                        if (sub_63bc30() != 0)
                            breakpoint
                        
                        sub_63bb00()
                        noreturn
                    
                    int32_t eax_16
                    int32_t edx_5
                    
                    switch (i)
                        case 0
                            edx_5 = 0
                            eax_16 = 1
                        case 1
                            eax_16 = 0
                            edx_5 = 0x800
                        case 2
                            edx_5 = 0x800
                            eax_16 = 1
                        case 3
                            eax_16 = 2
                            edx_5 = 0x800
                        case 4
                            eax_16 = 3
                            edx_5 = 0x800
                        case 5
                            edx_5 = 0x1000
                            eax_16 = 1
                    
                    int32_t var_94
                    _Size = &var_94
                    int32_t* ecx_22 = data_147b070
                    var_94 = result_13 * edx_5 + ecx_18 * eax_16 + result_3
                    int32_t* esi_5 = *(&var_3c + (i << 2))
                    (*(*ecx_22 + 0x84))(esi_5, _Size)
                    eax_15 = sub_69ec60(esi_5)
                    result_13 = result_2
                    i += 1
                    ecx_18 = var_4c
                
                _Size = &data_147cf90
                char* result_1
                sub_63df30(&result_1, "%s/cubemap_probe.png")
                int32_t var_14_1 = 0
                char* const result_20 = &data_801800
                char* eax_18 = result_1
                char* const _Size_3 = &data_801800
                
                if (eax_18 != 0)
                    _Size_3 = eax_18
                
                _Size = _Size_3
                sub_63b5f0("Saving environment probe %s")
                char* eax_19 = result_1
                int32_t _Size_7 = result_3
                char* const _Size_4 = &data_801800
                int32_t var_34 = 0x2000
                
                if (eax_19 != 0)
                    _Size_4 = eax_19
                
                int32_t var_30 = 0x1800
                int32_t var_28 = 4
                float* result_4 = result_2
                int32_t var_38 = _Size_7
                
                if (sub_72ea50(&var_38, _Size_4) == 0)
                    _Size = _Size_4
                    sub_63b5f0("PNGExportTexture: Failed to write %s")
                    _aligned_free(_Size_7)
                    char* eax_22 = result_1
                    char* const _Size_5 = &data_801800
                    
                    if (eax_22 != 0)
                        _Size_5 = eax_22
                    
                    _Size = _Size_5
                    sub_63b5f0("PNGExportTexture failed to png write %s")
                
                _Size = _Size_7
                _aligned_free(_Size)
                uint8_t* result_7 = result_1
                uint8_t* result_19 = &data_801800
                
                if (result_7 != 0)
                    result_19 = result_7
                
                sub_6c85b0(&result_2, result_19)
                var_14_1.b = 1
                float* result_16 = &data_801800
                float* result_8 = result_2
                
                if (result_8 != 0)
                    result_16 = result_8
                
                int32_t _Size_2 = sub_69f030(result_16, 3)
                sub_69ec60(_Size_2)
                _Size = _Size_2
                float* _Size_6 = result_2
                _Size = _Size_6
                
                if (_Size_6 != 0 && *_Size_6 != 0)
                    char* eax_23 = sub_63d4e0(&_Size)
                    *(eax_23 + 4) += 1
                
                char* eax_24 = sub_69faf0(3, 0)
                _Size = nullptr
                int32_t eax_25 = sub_6a1230(eax_24, 0x800, 0x1000, 1, 3, _Size)
                void* edx_7 = data_147b06c
                *(edx_7 + 0x2cc) += 1
                int32_t ecx_28 = *(edx_7 + 0x2cc)
                _Size = nullptr
                int32_t ecx_29 = ecx_28 * 5
                *(edx_7 + (ecx_29 << 2) + 0x18c) = 2
                *(edx_7 + (ecx_29 << 2) + 0x194) = eax_25
                *(edx_7 + (ecx_29 << 2) + 0x198) = 0
                *(edx_7 + (ecx_29 << 2) + 0x19c) = 0
                sub_6ad5d0(eax_25, 0, eax_25, _Size.b)
                int32_t eax_26 = *data_147b070
                _Size = nullptr
                (*(eax_26 + 0x90))(data_cf65f8, _Size, eax_2)
                void* ThreadLocalStoragePointer = fsbase->ThreadLocalStoragePointer
                var_6c = data_893580
                void* ecx_32 = *ThreadLocalStoragePointer
                int32_t eax_27 = data_1a9a470
                var_80 = data_893740
                
                if (eax_27 s> *(ecx_32 + 8))
                    sub_75970e(&data_1a9a470)
                    
                    if (data_1a9a470 == 0xffffffff)
                        var_14_1.b = 2
                        data_1a9a474 = sub_69f030("sys/editor/equirectangular.material", 5)
                        var_14_1.b = 1
                        __Init_thread_footer(&data_1a9a470)
                
                sub_682a60(&var_6c, &var_80, _Size_2, &var_6c, &data_bf23ac, data_1a9a474)
                int32_t _Count_2 = sub_6a9660(sub_6adb80(), 0x800, 0x1000, 1)
                int32_t edi_4
                
                if (sub_6a9450(1) << 0xc s>= 4)
                    edi_4 = sub_6a9450(1) << 0xc
                else
                    edi_4 = 4
                
                int32_t _Count_1 = _Count_2
                int32_t var_34_1 = 0x1000
                int32_t var_30_1 = 0x800
                int32_t var_2c = edi_4
                int32_t var_28_1 = 1
                int32_t var_ec
                char* ecx_34
                
                if (_Count_1 s<= 0)
                    char const* const var_e8_4 = "XMalloc"
                    var_ec = 0x3d
                    ecx_34 = "size > 0"
                else if (_Count_1 s< 0x77359400)
                    _Count_1 = _aligned_malloc(_Count_1, 0x10)
                    
                    if (_Count_1 != 0)
                        int32_t* ecx_35 = data_147b070
                        var_38 = _Count_1
                        (*(*ecx_35 + 0x84))(eax_25, &var_38)
                        sub_69ec60(eax_25)
                        char* var_f0_1 = &data_147cf90
                        sub_63df30(&result_3, "%s/equirectangular_probe.png")
                        var_14_1.b = 3
                        char* const result_17 = &data_801800
                        int32_t result_9 = result_3
                        
                        if (result_9 != 0)
                            result_17 = result_9
                        
                        char* const result_22 = result_17
                        sub_63b5f0("Saving equirectangular probe %s")
                        char* result_10 = result_3
                        int32_t var_64_2 = edi_4
                        int32_t edi_6 = var_38
                        char* result_18 = &data_801800
                        
                        if (result_10 != 0)
                            result_18 = result_10
                        
                        var_6c.d = 0x1000
                        int32_t var_68_2 = 0x800
                        int32_t var_60_2 = 4
                        int32_t var_70 = edi_6
                        
                        if (sub_72ea50(&var_70, result_18) == 0)
                            char* result_23 = result_18
                            sub_63b5f0("PNGExportTexture: Failed to write %s")
                            
                            if (edi_6 != 0)
                                _aligned_free(edi_6)
                            
                            char* result_11 = result_3
                            
                            if (result_11 != 0)
                                result_20 = result_11
                            
                            char* const result_24 = result_20
                            sub_63b5f0("PNGExportTexture failed to png write %s")
                        
                        char* result = var_38
                        
                        if (result != 0)
                            result = _aligned_free(result)
                        
                        var_14_1.b = 4
                        
                        if (data_cf65bc != 0)
                            result = result_3
                            
                            if (result != 0 && *result != 0)
                                result = sub_63d4e0(&result_3)
                                int32_t temp0_1 = *(result + 4)
                                *(result + 4) -= 1
                                
                                if (temp0_1 == 1)
                                    result = sub_64c080(result, *(result + 0xc) + 0x10)
                                    result_3 = &data_801800
                        
                        var_14_1.b = 5
                        
                        if (data_cf65bc != 0)
                            result = result_2
                            
                            if (result != 0 && *result != 0)
                                result = sub_63d4e0(&result_2)
                                int32_t temp1_1 = *(result + 4)
                                *(result + 4) -= 1
                                
                                if (temp1_1 == 1)
                                    result = sub_64c080(result, *(result + 0xc) + 0x10)
                        
                        int32_t var_14_2 = 6
                        
                        if (data_cf65bc != 0)
                            result = result_1
                            
                            if (result != 0 && *result != 0)
                                result = sub_63d4e0(&result_1)
                                int32_t temp2_1 = *(result + 4)
                                *(result + 4) -= 1
                                
                                if (temp2_1 == 1)
                                    result = sub_64c080(result, *(result + 0xc) + 0x10)
                        
                        fsbase->NtTib.ExceptionList = ExceptionList
                        CookieCheckFunction(result)
                        return result
                    
                    char const* const var_e8_7 = "XMalloc"
                    var_ec = 0x57
                    ecx_34 = "pBuffer"
                else
                    char const* const var_e8_5 = "XMalloc"
                    var_ec = 0x3e
                    ecx_34 = "size < 2000000000"
                
                sub_63b870(_Count_1, &data_801800, ecx_34, "C:\x\ax2017\Engine\xMemory.cpp", 
                    var_ec, "XMalloc")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            _Size = "XMalloc"
            var_e4_4 = 0x57
            var_e8 = "C:\x\ax2017\Engine\xMemory.cpp"
            ecx_13 = "pBuffer"
        else
            _Size = "XMalloc"
            var_e4_4 = 0x3e
            var_e8 = "C:\x\ax2017\Engine\xMemory.cpp"
            ecx_13 = "size < 2000000000"
        
        break

sub_63b870(result_5, &data_801800, ecx_13, var_e8, var_e4_4, _Size)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
