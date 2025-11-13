// 函数: sub_6a0ae0
// 地址: 0x6a0ae0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(struct EHRegistrationNode* arg1) = sub_76f3a5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** eax_3 = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** var_1c
struct _EXCEPTION_REGISTRATION_RECORD** var_18
struct _EXCEPTION_REGISTRATION_RECORD** esi
struct _EXCEPTION_REGISTRATION_RECORD** edi

if (arg1 != 0)
    if (*(arg1 + 4) != 3)
        sub_63b870(eax_3, &data_801800, "assetPtr && assetPtr->assetType == assetType", 
            "C:\x\ax2017\Engine\DefLoad.h", 0x19, "DefAutoLock::DefAutoLock")
        
        if (sub_63bc30() != 0)
            breakpoint
        
        sub_63bb00()
        noreturn
    
    esi = arg1
    edi = arg1
    var_1c = esi
else
    sub_69fd50(eax_3, "!Null\Null", &var_18, 3)
    int32_t var_8_1 = arg1
    char* eax_4 = var_18
    char* const ecx_1 = &data_801800
    
    if (eax_4 != 0)
        ecx_1 = eax_4
    
    eax_3 = sub_69f030(ecx_1, arg1 + 3)
    esi = eax_3
    var_1c = esi
    int32_t var_8_2 = 1
    
    if (data_cf65bc != arg1)
        eax_3 = var_18
        
        if (eax_3 != 0 && *eax_3 != arg1.b)
            eax_3 = sub_63d4e0(&var_18)
            int32_t temp2_1 = eax_3[1]
            eax_3[1] -= 1
            
            if (temp2_1 == 1)
                eax_3 = sub_64c080(eax_3, &eax_3[3][2])
                var_18 = &data_801800
    
    int32_t var_8_3 = 0xffffffff
    edi = esi

struct _EXCEPTION_REGISTRATION_RECORD** var_28 = esi

if (*edi == 0)
    sub_69f4a0(eax_3, 0, edi, 1)

int32_t ecx_5 = edi[7]
edi[7] = ecx_5 + 1
int32_t var_8_4 = 2
struct _EXCEPTION_REGISTRATION_RECORD* Next = (*edi)->Next->Next
int32_t temp0 = divs.dp.d(sx.q(Next->__offset(0x3c).d), Next->__offset(0x10).d)
int32_t edx_5 = temp0
int32_t var_14 = temp0
int32_t eax_11 = Next->__offset(0x1c).d

if (eax_11 == 3 || eax_11 == 5 || eax_11 == 4 || eax_11 == 6)
    edx_5 = 1
    var_14 = 1
label_6a0c2e:
    struct _EXCEPTION_REGISTRATION_RECORD** ecx_9 = (*(*data_147b070 + 0x10))(arg1, Next->Next, 
        Next->Handler, edx_5, Next->__offset(0x10).d, Next->__offset(0x18).d, 
        Next->__offset(0x1c).d)
    var_18 = ecx_9
    
    if (ecx_9 != 0)
        int32_t eax_16 = Next->__offset(0x1c).d
        int32_t var_40_2
        char* ecx_12
        char* const edx_6
        int32_t ebx_1
        
        if (eax_16 == 0)
            if (var_14 == 1)
                eax_16 = Next->__offset(0x10).d
            
            if (var_14 == 1 && eax_16 == Next->__offset(0x3c).d)
            label_6a0cd5:
                ebx_1 = 0
                
                if (var_14 s> 0)
                    goto label_6a0cdc
                
            label_6a0d22:
                
                if (Next->__offset(0x20).d == 0 && Next->__offset(0x14).d != 8)
                    char* const ecx_14 = &data_801800
                    char* eax_19 = *(arg1 + 0x20)
                    
                    if (eax_19 != 0)
                        ecx_14 = eax_19
                    
                    char* const var_3c_5 = ecx_14
                    sub_63b5f0("Autogeneration of mipmaps is not implemented on load for %s")
                
                if (esi != 0)
                    esi[7] -= 1
                
                fsbase->NtTib.ExceptionList = ExceptionList
                return var_18
            
            char const* const var_3c_2 = "TextureCreateTextureBuffer"
            var_40_2 = 0x20f
            edx_6 = &data_801800
            ecx_12 = "depthCount == 1 && pTextureData->mipLevelCount == pTextureData->imageCount"
            goto label_6a0dbf
        
        if (eax_16 != 1)
            if (eax_16 != 2)
                if (eax_16 == 3 || eax_16 == 5 || eax_16 == 4 || eax_16 == 6)
                    if (esi != 0)
                        esi[7] -= 1
                    
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return ecx_9
                
                goto label_6a0cd5
            
            char const* const var_3c_6 = "TextureCreateTextureBuffer"
            var_40_2 = 0x217
            edx_6 = "Yeah, this doesn't work yet. The depth changes for each mip level so this needs "
            "a special loader."
            ecx_12 = "HaltMsg"
        label_6a0dbf:
            sub_63b870(eax_16, edx_6, ecx_12, "C:\x\ax2017\Engine\Texture.cpp", var_40_2, 
                "TextureCreateTextureBuffer")
            
            if (sub_63bc30() != 0)
                breakpoint
            
            sub_63bb00()
            noreturn
        
        if (var_14 != 6)
            char const* const var_3c_3 = "TextureCreateTextureBuffer"
            var_40_2 = 0x213
            edx_6 = &data_801800
            ecx_12 = "depthCount == 6"
            goto label_6a0dbf
        
        ebx_1 = 0
    label_6a0cdc:
        int32_t eax_17 = Next->__offset(0x10).d
        int32_t edx_7 = var_14
        
        do
            int32_t edi_1 = 0
            
            if (eax_17 s> 0)
                do
                    sub_6a0670(eax_17, ecx_9, arg1, ebx_1, edi_1)
                    eax_17 = Next->__offset(0x10).d
                    edi_1 += 1
                    ecx_9 = var_18
                while (edi_1 s< eax_17)
                
                edx_7 = var_14
            
            ebx_1 += 1
        while (ebx_1 s< edx_7)
        
        esi = var_1c
        goto label_6a0d22
    
    if (esi != 0)
        esi[7] -= 1
else
    if (Next->__offset(0x3c).d s>= 1)
        goto label_6a0c2e
    
    if (esi != 0)
        esi[7] = ecx_5
        fsbase->NtTib.ExceptionList = ExceptionList
        return 0

fsbase->NtTib.ExceptionList = ExceptionList
return 0
