// 函数: sub_6b1c60
// 地址: 0x6b1c60
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

struct _EXCEPTION_REGISTRATION_RECORD** eax = sub_6a0f60(arg1)
void* edx = data_147b078
void* const esi

if (eax != 0)
    uint32_t ecx_1 = zx.d(eax.w)
    
    if (ecx_1 u< *(edx + 0x3c))
        esi = ecx_1 * 0x24c + *(edx + 0x38)
        
        if (*(esi + 0x248) != eax)
            esi = nullptr
    else
        esi = nullptr
else
    esi = nullptr

struct _EXCEPTION_REGISTRATION_RECORD** eax_1 = sub_6a0f60(arg2)
void* edx_1 = data_147b078
void* const edi

if (eax_1 != 0)
    uint32_t ecx_3 = zx.d(eax_1.w)
    
    if (ecx_3 u< *(edx_1 + 0x3c))
        edi = ecx_3 * 0x24c + *(edx_1 + 0x38)
        
        if (*(edi + 0x248) != eax_1)
            edi = nullptr
    else
        edi = nullptr
else
    edi = nullptr

if (arg2[1] == 3)
    int32_t eax_3 = sub_6aea20(*(*sub_5af880(arg2) + 0x18))
    int32_t* ecx_8 = *(data_147b078 + 8)
    return (*(*ecx_8 + 0xe4))(ecx_8, *(edi + 0x1c), 0, *(esi + 0x1c), 0, eax_3)

sub_63b870(eax_1, &data_801800, "assetPtr->assetType == ASSET_TYPE_TEXTURE", 
    "C:\x\ax2017\Engine\Texture.h", 0x89, "TextureGetDef")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
