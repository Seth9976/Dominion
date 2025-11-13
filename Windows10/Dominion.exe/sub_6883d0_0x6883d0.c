// 函数: sub_6883d0
// 地址: 0x6883d0
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
int32_t* esi = arg1
arg2[4] = esi
*(arg2 + 0x15) = 0
arg2[5].b = 0
arg2[3] = 0
arg2[2] = 0x3f800000
*(arg2 + 0x18) = 0
arg2[8] = 0
arg2[9] = 0x40a00000
arg2[0xa] = 0x42480000
*(arg2 + 0x17) = 0
arg2[0xb] = 0

if (esi[1] != 0x15)
    sub_63b870(0, &data_801800, "assetPtr->assetType == ASSET_TYPE_SOUND", 
        "C:\x\ax2017\Engine\Sound.cpp", 0x356, "SoundGetDef")
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t* ebx = sub_5af880(arg1)

if (ebx[0xc] != 0 && ebx[6] == 0)
    int32_t eax_3 = ebx[0xe]
    int32_t var_10c[0x41]
    
    if (eax_3 != 0)
        var_10c[1] = 1
        var_10c[0] = esi
    
    int32_t esi_1 = ebx[0xc]
    int32_t edx
    edx.b = eax_3 != 0
    int32_t ecx = 0
    
    if (esi_1 s> 0)
        do
            if (edx s>= 0x20)
                sub_63b870(eax_3, &data_801800, "pickCount < MAX_PERMUTATIONS", 
                    "C:\x\ax2017\Engine\Sound.cpp", 0xb6, "SoundInitParams")
                
                if (sub_63bc30() != 0)
                    breakpoint
                
                sub_63bb00()
                noreturn
            
            int32_t eax_4 = ebx[8]
            var_108
            *(&var_108 + (edx << 3)) = 1
            eax_3 = *(eax_4 + (ecx << 3))
            ecx += 1
            var_10c[edx * 2] = eax_3
            edx += 1
        while (ecx s< esi_1)
    
    esi = *sub_6fe780(&var_10c, edx)

*arg2 = esi
float xmm1 = *ebx
xmm1 f- 0
int32_t* eax_2
eax_2:1.b =
    (xmm1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1, 0f) ? 1 : 0) << 2 | (xmm1 < 0f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (not(p_1))
    arg2[1] = 0
    CookieCheckFunction(eax_2)
    return eax_2

float eax_7 = (sub_63eb70() & 0x7fffff) | 0x3f800000
arg2[1] = (eax_7 - 1f) * (xmm1 - 0f) + 0f
CookieCheckFunction(eax_7)
return eax_7
