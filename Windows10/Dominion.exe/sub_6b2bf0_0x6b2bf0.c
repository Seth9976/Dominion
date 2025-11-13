// 函数: sub_6b2bf0
// 地址: 0x6b2bf0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_8 = eax_1
char const* const var_70
int32_t var_6c
char const* const var_68
char* ecx

if (arg1[1] == 3)
    int32_t* eax_2 = sub_5af880(arg1)
    int32_t var_14_1 = 0
    int32_t var_34 = **eax_2
    int32_t var_30_1 = *(*eax_2 + 4)
    int32_t var_2c_1 = 1
    int32_t var_28_1 = 1
    int32_t var_24_1 = sub_6aea20(*(*eax_2 + 0x18))
    int32_t var_20_1 = 1
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 3
    int32_t var_10_1 = 0x20000
    int32_t var_c_1 = 0
    int32_t* eax_5 = *(data_147b078 + 4)
    int32_t* var_38
    eax_1 = (*(*eax_5 + 0x14))(eax_5, &var_34, 0, &var_38)
    
    if (eax_1 s>= 0)
        struct _EXCEPTION_REGISTRATION_RECORD** eax_6 = sub_6a0f60(arg1)
        void* ecx_9 = data_147b078
        void* const edx
        
        if (eax_6 != 0)
            uint32_t edx_1 = zx.d(eax_6.w)
            
            if (edx_1 u< *(ecx_9 + 0x3c))
                edx = edx_1 * 0x24c + *(ecx_9 + 0x38)
                
                if (*(edx + 0x248) != eax_6)
                    edx = nullptr
            else
                edx = nullptr
        else
            edx = nullptr
        
        int32_t* eax_7 = *(ecx_9 + 8)
        (*(*eax_7 + 0xbc))(eax_7, var_38, *(edx + 0x1c))
        void* eax_8 = data_147b078
        int32_t var_3c_1 = 0
        int64_t var_44 = 0
        int32_t* eax_9 = *(eax_8 + 8)
        eax_1 = (*(*eax_9 + 0x38))(eax_9, var_38, 0, 1, 0, &var_44)
        
        if (eax_1 s>= 0)
            bool cond:0_1 = *arg2 != 0
            int32_t* ecx_12 = *eax_2
            int32_t var_58 = var_44.d
            int32_t edi_1 = *ecx_12
            int32_t edx_3 = ecx_12[1]
            int32_t var_4c_1 = var_44:4.d
            eax_1 = ecx_12[6]
            int32_t var_54_1 = edi_1
            int32_t var_50_1 = edx_3
            int32_t var_48_1 = eax_1
            
            if (not(cond:0_1))
                var_68 = "Dx11GetTextureBits"
                var_6c = 0xad5
                ecx = "destSpec->pImage"
            else if (arg2[1] == edi_1)
                if (arg2[2] == edx_3)
                    sub_6a9de0(&var_58, arg2)
                    int32_t* eax_13 = *(data_147b078 + 8)
                    (*(*eax_13 + 0x3c))(eax_13, var_38, 0)
                    int32_t* eax_14 = var_38
                    uint32_t result = (*(*eax_14 + 8))(eax_14)
                    CookieCheckFunction(result)
                    return result
                
                var_68 = "Dx11GetTextureBits"
                var_6c = 0xad7
                ecx = "destSpec->height == sourceSpec.height"
            else
                var_68 = "Dx11GetTextureBits"
                var_6c = 0xad6
                ecx = "destSpec->width == sourceSpec.width"
        else
            var_68 = "Dx11GetTextureBits"
            var_6c = 0xacc
            ecx = "SUCCEEDED(hr)"
    else
        var_68 = "Dx11GetTextureBits"
        var_6c = 0xac3
        ecx = "SUCCEEDED(hr)"
    
    var_70 = "C:\x\ax2017\Engine\Windows\WindowsDx11.cpp"
else
    var_68 = "TextureGetDef"
    var_6c = 0x89
    var_70 = "C:\x\ax2017\Engine\Texture.h"
    ecx = "assetPtr->assetType == ASSET_TYPE_TEXTURE"

sub_63b870(eax_1, &data_801800, ecx, var_70, var_6c, var_68)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
