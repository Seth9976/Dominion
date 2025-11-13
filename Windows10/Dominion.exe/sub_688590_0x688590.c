// 函数: sub_688590
// 地址: 0x688590
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

void* eax = data_147abf0
float var_8 = *(eax + 0x1c)

if (*(arg1 + 0x5b) != 0)
    var_8 = *(eax + 0x20)

int32_t* ecx = *arg1

if (ecx[1] == 0x15)
    eax = sub_5af880(ecx)
    int32_t* ecx_1 = arg1[1]
    
    if (ecx_1[1] == 0x15)
        void* eax_1 = sub_5af880(ecx_1)
        float xmm1 = *(eax + 4)
        
        if (eax_1 != eax)
            xmm1 = xmm1 f* *(eax_1 + 4)
        
        void* result = data_147abf0
        float xmm3 = *(result + 0x24)
        
        if (*(arg1 + 0x5d) != 0)
            xmm3 = 1f
        
        float xmm0_6 = var_8 f* arg1[0x11] * xmm1 * xmm3 f* arg1[0xf]
        
        if (not(0 f> xmm0_6))
            _mm_min_ss(0x3f800000, xmm0_6)
        
        return result

sub_63b870(eax, &data_801800, "assetPtr->assetType == ASSET_TYPE_SOUND", 
    "C:\x\ax2017\Engine\Sound.cpp", 0x356, "SoundGetDef")

if (sub_63bc30() != 0)
    breakpoint

sub_63bb00()
noreturn
