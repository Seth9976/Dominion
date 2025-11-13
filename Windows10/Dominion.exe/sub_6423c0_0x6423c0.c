// 函数: sub_6423c0
// 地址: 0x6423c0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* var_4 = arg1
int32_t* esi = arg1
char const* const var_18
int32_t var_14
char const* const var_10
void* eax
char* ecx_4

if (esi[1] != 0x25)
label_64241c:
    var_10 = "TTFontGet"
    var_14 = 0x1ef
    var_18 = "C:\x\ax2017\Engine\TTFont.cpp"
    ecx_4 = "ttf->assetType == ASSET_TYPE_TRUETYPE"
else
    while (true)
        eax = sub_5af880(esi)
        void* edi_1 = eax
        int32_t* ecx_1 = *(edi_1 + 0x20)
        
        if (ecx_1[1] != 3)
            var_10 = "TextureGetDef"
            var_14 = 0x89
            var_18 = "C:\x\ax2017\Engine\Texture.h"
            ecx_4 = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
            break
        
        eax = sub_5af880(ecx_1)
        int32_t* ecx_2 = *(eax + 0x20)
        
        if (ecx_2 == 0)
            *(eax + 0x20) = esi
            return *(edi_1 + 0x38)
        
        if (ecx_2 == esi)
            return *(edi_1 + 0x38)
        
        esi = ecx_2
        
        if (ecx_2[1] != 0x25)
            goto label_64241c

sub_63b870(eax, &data_801800, ecx_4, var_18, var_14, var_10)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
