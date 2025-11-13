// 函数: sub_6af590
// 地址: 0x6af590
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76fc95
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_12c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = arg3
int32_t var_48 = eax_3
int32_t var_38
int32_t esi
int32_t edi

if (arg2 != 0)
    if (*(arg2 + 4) != 4)
        sub_63b870(eax_3, &data_801800, "assetPtr && assetPtr->assetType == assetType", 
            "C:\x\ax2017\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    esi = arg2
    edi = arg2
else
    sub_69fd50(eax_3, "!Null\Null", &var_38, 4)
    int32_t var_8_1 = arg2
    int32_t eax_4 = var_38
    char* const ecx_1 = &data_801800
    
    if (eax_4 != 0)
        ecx_1 = eax_4
    
    eax_3 = sub_69f030(ecx_1, arg2 + 4)
    esi = eax_3
    int32_t var_8_2 = 1
    
    if (data_cf65bc != arg2)
        eax_3 = var_38
        
        if (eax_3 != 0 && *eax_3 != arg2.b)
            eax_3 = sub_63d4e0(&var_38)
            int32_t temp2_1 = *(eax_3 + 4)
            *(eax_3 + 4) -= 1
            
            if (temp2_1 == 1)
                eax_3 = sub_64c080(eax_3, *(eax_3 + 0xc) + 0x10)
                var_38 = &data_801800
    
    int32_t var_8_3 = 0xffffffff
    edi = esi

int32_t var_5c = esi

if (*edi == 0)
    sub_69f4a0(eax_3, 0, edi, 1)

int32_t eax_5 = *(edi + 0x1c)
*(edi + 0x1c) = eax_5 + 1
int32_t ecx_5 = **edi
int32_t var_8_4 = 2
int32_t eax_9 = var_48 * 5
void* edx_4 = ecx_5 + (eax_9 << 3)
void* eax_10 = *(ecx_5 + (eax_9 << 3) + 8)
uint32_t result

if (eax_10 != 0)
    int32_t pSrcData = *(eax_10 + 0x28)
    uint32_t SrcDataSize = *(eax_10 + 0x20)
    int32_t eax_12 = sub_6b2e00(arg1 + 0x38)
    var_38 = eax_12
    int32_t var_134_1
    char const* const var_134_2
    HRESULT eax_15
    char const* const ecx_12
    
    if (var_48 != 0)
        eax_15 = var_48 - 1
        
        if (var_48 != 1)
            char const* const var_130_1 = "Dx11GraphicsInterface::CreateShaderBuffer"
            var_134_1 = 0x37a
            ecx_12 = "Halt"
        label_6afb00:
            sub_63b870(eax_15, &data_801800, ecx_12, "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp", 
                var_134_1, "Dx11GraphicsInterface::CreateShaderBuffer")
            
            if (sub_63bc30() == 0)
                sub_63bb00()
                noreturn
            
            breakpoint
        
        *eax_12 = 4
        int32_t* ecx_13 = *(arg1 + 4)
        
        if ((*(*ecx_13 + 0x3c))(ecx_13, pSrcData, SrcDataSize, 0, var_38 + 0x2c) s>= 0)
            goto label_6af780
        
        char* eax_20 = *(arg2 + 0x20)
        char* const ecx_14 = &data_801800
        
        if (eax_20 != 0)
            ecx_14 = eax_20
        
        char* const var_130_3 = ecx_14
        var_134_2 = "failed to load pixel shader %s"
        goto label_6af75c
    
    *eax_12 = 3
    int32_t* ecx_15 = *(arg1 + 4)
    
    if ((*(*ecx_15 + 0x30))(ecx_15, pSrcData, SrcDataSize, 0, var_38 + 0x28) s>= 0)
    label_6af780:
        int32_t* ppReflector = nullptr
        eax_15 = D3DReflect(pSrcData, SrcDataSize, &data_77e8c4, &ppReflector)
        
        if (eax_15 s< 0)
            char const* const var_130_20 = "Dx11GraphicsInterface::CreateShaderBuffer"
            var_134_1 = 0x37f
            ecx_12 = "SUCCEEDED(hr)"
            goto label_6afb00
        
        int32_t* ppReflector_1 = ppReflector
        void var_11c
        (*(*ppReflector_1 + 0xc))(ppReflector_1, &var_11c)
        int32_t var_110
        int32_t eax_27 = var_110
        int32_t var_10c
        int32_t ebx_1 = var_10c
        int32_t var_44_2 = ebx_1
        int32_t var_28
        int32_t var_20
        
        if (eax_27 != 0)
            int32_t var_134_4
            char const* const ecx_18
            
            if (eax_27 != 1)
                char const* const var_130_8 = "Dx11GraphicsInterface::CreateShaderBuffer"
                var_134_4 = 0x388
                ecx_18 = "shaderDesc.ConstantBuffers == 1"
            label_6afb30:
                sub_63b870(eax_27, &data_801800, ecx_18, 
                    "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp", var_134_4, 
                    "Dx11GraphicsInterface::CreateShaderBuffer")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            int32_t* ppReflector_2 = ppReflector
            int32_t* eax_28 = (*(*ppReflector_2 + 0x10))(ppReflector_2, 0)
            eax_27 = (**eax_28)(eax_28, &var_28)
            
            if (eax_27 s< 0)
                char const* const var_130_21 = "Dx11GraphicsInterface::CreateShaderBuffer"
                var_134_4 = 0x38e
                ecx_18 = "SUCCEEDED(hr)"
                goto label_6afb30
            
            ebx_1 += var_20
            var_44_2 = ebx_1
        
        int32_t count = ebx_1 * 0xc
        int32_t eax_29
        
        if (count != 0)
            int32_t eax_30 = sub_687730(count)
            memset(eax_30, 0, count)
            eax_29 = eax_30
        else
            eax_29 = 0
        
        void* ebx_2 = edx_4
        int32_t var_48_1 = 0
        *(ebx_2 + 0x20) = eax_29
        *(ebx_2 + 0x18) = 0
        int32_t eax_31 = var_110
        
        if (eax_31 != 0)
            int32_t var_134_7
            char const* const ecx_22
            
            if (eax_31 != 1)
                char const* const var_130_11 = "Dx11GraphicsInterface::CreateShaderBuffer"
                var_134_7 = 0x39c
                ecx_22 = "shaderDesc.ConstantBuffers == 1"
            label_6afb60:
                sub_63b870(eax_31, &data_801800, ecx_22, 
                    "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp", var_134_7, 
                    "Dx11GraphicsInterface::CreateShaderBuffer")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            int32_t* ppReflector_3 = ppReflector
            int32_t* edi_2 = (*(*ppReflector_3 + 0x10))(ppReflector_3, 0)
            int32_t* var_54_1 = edi_2
            eax_31 = (**edi_2)(edi_2, &var_28)
            
            if (eax_31 s< 0)
                char const* const var_130_22 = "Dx11GraphicsInterface::CreateShaderBuffer"
                var_134_7 = 0x3a2
                ecx_22 = "SUCCEEDED(hr)"
                goto label_6afb60
            
            int32_t ecx_25 = 0
            int32_t var_3c_2 = 0
            
            if (var_20 u> 0)
                while (true)
                    int32_t* eax_34 = (*(*edi_2 + 4))(edi_2, ecx_25)
                    char* _Str2_2
                    (**eax_34)(eax_34, &_Str2_2)
                    char* _Str2 = _Str2_2
                    int32_t i = 0
                    char* _Str2_3 = _Str2
                    
                    if (data_8ce7c4 s> 0)
                        int32_t ebx_3 = 0
                        
                        do
                            void* eax_36 = data_8ce7c0 + ebx_3
                            
                            if (_stricmp(*(eax_36 + 4), _Str2) == 0)
                                int32_t edi_3 = *eax_36
                                
                                if (edi_3 == 0xffffffff)
                                    goto label_6af8dc
                                
                                ebx_2 = edx_4
                                int32_t eax_39 = *(ebx_2 + 0x18)
                                
                                if (eax_39 s>= var_44_2)
                                    sub_63b870(eax_39, &data_801800, 
                                        "constantTable->constantCount < maxConstants", 
                                        "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp", 0x3b2, 
                                        "Dx11GraphicsInterface::CreateShaderBuffer")
                                    
                                    if (sub_63bc30() != 0)
                                        breakpoint
                                    
                                    sub_63bb00()
                                    noreturn
                                
                                int32_t ecx_28 = eax_39 * 3
                                int32_t eax_40 = *(ebx_2 + 0x20)
                                *(eax_40 + (ecx_28 << 2) + 8) = edi_3
                                int32_t* edx_7 = eax_40 + (ecx_28 << 2)
                                int32_t var_80
                                *edx_7 = var_80
                                int32_t var_7c
                                edx_7[1] = var_7c
                                *(ebx_2 + 0x18) += 1
                                int32_t eax_44 = edx_7[1] + *edx_7
                                
                                if (var_48_1 s<= eax_44)
                                    var_48_1 = eax_44
                                
                                goto label_6af8f2
                            
                            _Str2 = _Str2_3
                            i += 1
                            ebx_3 += 0x3c
                        while (i s< data_8ce7c4)
                        
                    label_6af8dc:
                        ebx_2 = edx_4
                    
                    char* _Str2_6 = _Str2_2
                    sub_63b5f0("Dx11 Unknown shader constant '%s'")
                label_6af8f2:
                    ecx_25 = var_3c_2 + 1
                    var_3c_2 = ecx_25
                    
                    if (ecx_25 u>= var_20)
                        break
                    
                    edi_2 = var_54_1
        
        int32_t edx_8 = 0
        int32_t var_3c_3 = 0
        int32_t var_2c
        
        if (var_10c s> 0)
            while (true)
                int32_t* ppReflector_4 = ppReflector
                char* _Str2_5
                int32_t eax_45 = (*(*ppReflector_4 + 0x18))(ppReflector_4, edx_8, &_Str2_5)
                int32_t var_134_16
                char const* const ecx_37
                
                if (eax_45 s< 0)
                    char const* const var_130_24 = "Dx11GraphicsInterface::CreateShaderBuffer"
                    var_134_16 = 0x3c3
                    ecx_37 = "SUCCEEDED(hr)"
                else
                    int32_t var_30
                    
                    if (var_30 != 2)
                        goto label_6af9c6
                    
                    char* _Str2_1 = _Str2_5
                    int32_t edi_4 = 0
                    char* _Str2_4 = _Str2_1
                    int32_t edi_5
                    
                    if (data_8ce7c4 s> 0)
                        int32_t ebx_4 = 0
                        void* eax_47
                        
                        while (true)
                            eax_47 = data_8ce7c0 + ebx_4
                            
                            if (_stricmp(*(eax_47 + 4), _Str2_1) == 0)
                                break
                            
                            _Str2_1 = _Str2_4
                            edi_4 += 1
                            ebx_4 += 0x3c
                            
                            if (edi_4 s>= data_8ce7c4)
                                goto label_6af9b0
                        
                        edi_5 = *eax_47
                    
                    char const* const var_134_15
                    
                    if (data_8ce7c4 s<= 0 || edi_5 == 0xffffffff)
                    label_6af9b0:
                        char* _Str2_7 = _Str2_5
                        var_134_15 = "Dx11 Unknown texture '%s'"
                    label_6af9b8:
                        sub_63b5f0(var_134_15)
                        ebx_2 = edx_4
                    label_6af9c6:
                        edx_8 = var_3c_3 + 1
                        var_3c_3 = edx_8
                        
                        if (edx_8 s>= var_10c)
                            break
                        
                        continue
                    else
                        if (*(sub_6dd320(&data_8ce7bc, edi_5) + 0x10) != 0xf)
                            char* _Str2_8 = _Str2_5
                            var_134_15 = "Dx11 shader variable '%s' isn't a texture"
                            goto label_6af9b8
                        
                        ebx_2 = edx_4
                        eax_45 = *(ebx_2 + 0x18)
                        
                        if (eax_45 s< var_44_2)
                            int32_t ecx_35 = eax_45 * 3
                            int32_t eax_57 = *(ebx_2 + 0x20)
                            *(eax_57 + (ecx_35 << 2) + 8) = edi_5
                            int32_t* ecx_36 = eax_57 + (ecx_35 << 2)
                            *ecx_36 = var_2c
                            ecx_36[1] = 0
                            *(ebx_2 + 0x18) += 1
                            goto label_6af9c6
                        
                        char const* const var_130_23 = "Dx11GraphicsInterface::CreateShaderBuffer"
                        var_134_16 = 0x3d5
                        ecx_37 = "constantTable->constantCount < maxConstants"
                
                sub_63b870(eax_45, &data_801800, ecx_37, 
                    "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp", var_134_16, 
                    "Dx11GraphicsInterface::CreateShaderBuffer")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
        
        if (*(ebx_2 + 0x18) == 0)
            int32_t eax_49 = *(ebx_2 + 0x20)
            
            if (eax_49 != 0)
                _aligned_free(eax_49)
            
            *(ebx_2 + 0x20) = 0
        
        int32_t edx_10 = var_48_1
        
        if (edx_10 s> 0)
            int32_t ecx_31 = edx_10 & 0x8000000f
            bool cond:1_1 = ecx_31 == 0
            
            if (ecx_31 s< 0)
                int32_t ecx_33 = (ecx_31 - 1) | 0xfffffff0
                ecx_31 = ecx_33 + 1
                cond:1_1 = ecx_33 == 0xffffffff
            
            if (not(cond:1_1))
                edx_10 += 0x10 - ecx_31
            
            int64_t var_1c_1 = 0
            var_28 = 2
            var_2c = edx_10
            int32_t* ecx_34 = *(arg1 + 4)
            int32_t var_24_1 = 4
            int32_t var_20_1 = 0x10000
            int32_t eax_54 = (*(*ecx_34 + 0xc))(ecx_34, &var_2c, 0, var_38 + 0x18)
            
            if (eax_54 s< 0)
                sub_63b870(eax_54, &data_801800, "SUCCEEDED(hr)", 
                    "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp", 0x3f7, 
                    "Dx11GraphicsInterface::CreateShaderBuffer")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
        
        goto label_6af767
    
    char* eax_25 = *(arg2 + 0x20)
    char* const ecx_16 = &data_801800
    
    if (eax_25 != 0)
        ecx_16 = eax_25
    
    char* const var_130_5 = ecx_16
    var_134_2 = "failed to load vertex shader %s"
label_6af75c:
    sub_63b5f0(var_134_2)
label_6af767:
    result = *(var_38 + 0x248)
    
    if (esi != 0)
        *(esi + 0x1c) -= 1
else
    *(edi + 0x1c) = eax_5
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
CookieCheckFunction(result)
return result
