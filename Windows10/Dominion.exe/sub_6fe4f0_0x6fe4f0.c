// 函数: sub_6fe4f0
// 地址: 0x6fe4f0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

int32_t* esi = *(arg1 + 0x2d0)
char const* const var_10
int32_t var_c
char const* const var_8
int32_t result
char* ecx_2

if (esi == 0)
    result = *(arg1 + 0x2d4)
label_6fe542:
    
    if (result != 0)
        return result
    
    var_8 = "SoundOggReaderGetSoundData"
    var_c = 0x104
    var_10 = "C:\x\ax2017\Engine\SoundOgg.cpp"
    ecx_2 = "pSoundData"
else
    if (esi[1] == 0x15)
        if (*esi == 0)
            sub_69f4a0(result, 0, esi, 1)
        
        int32_t ecx_1 = esi[7]
        esi[7] = ecx_1 + 1
        result = *(**esi + 0x38)
        esi[7] = ecx_1
        goto label_6fe542
    
    var_8 = "DefAutoLock::DefAutoLock"
    var_c = 0x19
    var_10 = "C:\x\ax2017\Engine\DefLoad.h"
    ecx_2 = "assetPtr && assetPtr->assetType == assetType"

sub_63b870(result, &data_801800, ecx_2, var_10, var_c, var_8)

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
