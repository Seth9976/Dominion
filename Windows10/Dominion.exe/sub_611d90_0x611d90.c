// 函数: sub_611d90
// 地址: 0x611d90
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* var_4 = arg1
int32_t edx = 0
int32_t eax = *(arg1 + 0x34)
uint32_t temp1 = modu.dp.d(edx:eax, 0xa)
uint32_t eax_1 = divu.dp.d(edx:eax, 0xa)
char const* const var_18
int32_t var_14
char const* const var_10
char* ecx

if (temp1 s>= 0)
    char edx_2
    edx_2:eax_1 = sx.q(*(arg2 + (temp1 << 2) + 0xd4c))
    int32_t esi_2 = (zx.d(edx_2) + eax_1) s>> 8
    
    if (esi_2 u>= 0x17)
        var_10 = "GetBackground"
        var_14 = 0xbc2c
        var_18 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
        ecx = "exp < ARRAYSIZE(EXPANSION_STATES)"
    else if (esi_2 != 2 || *(arg1 + 0x14) != 0)
    label_611e65:
        int32_t ecx_2 = *(arg1 + 0x1c)
        
        if (ecx_2 - 0x6d u<= 0xf)
            *(ecx_2 + 0x611eb3)
            esi_2 = ecx_2 - 0x6a
        
        int32_t edx_6 = data_19e39f0
        
        if (edx_6 == esi_2)
            return &(&data_be6300)[esi_2 * 6]
        
        int32_t* ecx_3 = (&data_be630c)[edx_6 * 6]
        
        if (ecx_3 != 0)
            sub_69ec60(*ecx_3)
            edx_6 = data_19e39f0
        
        eax_1 = edx_6 * 3
        int32_t* edi_1 = (&data_be6310)[eax_1].d
        
        if (edi_1 == 0)
            data_19e39f0 = esi_2
            return &(&data_be6300)[esi_2 * 6]
        
        int32_t* edi_2 = *edi_1
        
        if (edi_2[1] == 3)
            int32_t* ecx_6 = *(*sub_5af880(edi_2) + 0x28)
            
            if (ecx_6 != 0)
                sub_69ec60(ecx_6)
            
            sub_69ec60(edi_2)
            data_19e39f0 = esi_2
            return &(&data_be6300)[esi_2 * 6]
        
        var_10 = "TextureGetDef"
        var_14 = 0x89
        var_18 = "C:\x\ax2017\Engine\Texture.h"
        ecx = "assetPtr->assetType == ASSET_TYPE_TEXTURE"
    else
        eax_1 = data_cc8d5c
        
        if (eax_1 != 0)
            if (*(eax_1 + 0x5068) != 0)
                int32_t ecx_1 = data_be0528
                
                if (ecx_1 == 0)
                    esi_2 = modu.dp.d(0:(*(arg1 + 0x34)), 0xf) + 2
                else if (ecx_1 == 2 && data_be0538 == 0)
                    esi_2 = modu.dp.d(0:(*(arg1 + 0x34)), 0xf) + 2
                
                goto label_611e65
            
            var_10 = "GetActiveConfig"
            var_14 = 0x33b6
            var_18 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
            ecx = "c.activeGame.gameType != GAME_NONE"
        else
            var_10 = "GetClient"
            var_14 = 0x7b
            var_18 = "C:\x\ax2017\Jams\Shared\TggGame\code\GameApp.cpp"
            ecx = "gClient"
else
    var_10 = "GetBackground"
    var_14 = 0xbc28
    var_18 = "C:\x\ax2017\Jams\Dominion\code\DomClient.cpp"
    ecx = "kingdomIdx >= 0"

sub_63b870(eax_1, &data_801800, ecx, var_18, var_14, var_10)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
