// 函数: sub_69b330
// 地址: 0x69b330
// 来自: E:/Dominion/steamapps/common/Dominion/Dominion.exe.bndb

__security_cookie
void* var_1d0 = arg3
int128_t var_80
int128_t* eax_4 = sub_697d80(&var_80, arg2, *(arg3 + 4), arg4, &var_80, arg5)
int32_t* ecx_1 = *(arg3 + 4)
int128_t xmm0 = *eax_4
bool cond:0 = ecx_1[1] == 0x1e
int128_t var_e0 = xmm0
int128_t xmm0_1 = eax_4[1]
int128_t var_d0 = xmm0_1
int128_t xmm0_2 = eax_4[2]
int128_t var_c0 = xmm0_2
int128_t xmm0_3 = eax_4[3]
int128_t var_b0 = xmm0_3
int128_t xmm0_4 = eax_4[4]
int128_t var_100 = xmm0_4
int128_t var_a0 = xmm0_4
int128_t xmm0_5 = eax_4[5]
int128_t var_1b0 = xmm0_5
int128_t var_90 = xmm0_5
char const* const var_1fc_1
int32_t var_1f8_1
char const* const var_1f4_1
char* ecx_2

if (not(cond:0))
    var_1f4_1 = "UIDefGet"
    var_1f8_1 = 0x127
    ecx_2 = "ptr->assetType == ASSET_TYPE_UI"
label_69b971:
    var_1fc_1 = "C:\x\ax2017\Engine\UIDef.cpp"
label_69b97b:
    sub_63b870(eax_4, &data_801800, ecx_2, var_1fc_1, var_1f8_1, var_1f4_1)
    
    if (sub_63bc30() != 0)
        breakpoint
    
    sub_63bb00()
    noreturn

int32_t eax_5 = sub_5af880(ecx_1)
float edi_2 = arg2 * 0x178 + *eax_5
eax_4 = sub_698630(eax_5, arg2, var_1d0, &data_801800)
int32_t* ecx_5 = *(edi_2 i+ 4) - 1
int32_t* esi_1 = eax_4
void* var_1f8_3
void** var_1f4_4
void* var_1d8

switch (ecx_5)
    case nullptr
        int32_t var_1f4_3 = 0
        int32_t eax_10 = sub_697fa0(&var_e0, esi_1, edi_2, &var_e0, nullptr, ecx_5, nullptr)
        CookieCheckFunction(eax_10)
        return eax_10
    case 1
        if (*(edi_2 i+ 0xc8) == 0)
            CookieCheckFunction(eax_4)
            return eax_4
        
        if (*(edi_2 i+ 0xda) != 0)
            var_1f4_1 = "UIStateDrawElementInt"
            var_1f8_1 = 0xa7e
            ecx_2 = "el.tableClips == false"
            goto label_69b971
        
        void* var_1dc_2
        int32_t var_1d4_1
        void* var_1cc
        int32_t var_1c4_1
        void* var_1c0_1
        void* var_1bc_1
        void* eax_23
        void* ecx_22
        
        if (esi_1[0x48] s<= *esi_1)
            void* ecx_23 = *(edi_2 i+ 0xac)
            eax_23 = edi_2 i+ 0xac
            void* edx_9 = *(edi_2 i+ 0xb0)
            var_1d0 = ecx_23
            var_1bc_1 = ecx_23
            var_1d8 = ecx_23
            var_1cc = edx_9
            var_1dc_2 = edx_9
            var_1d4_1 = *(edi_2 i+ 0xb0)
            var_1c0_1 = edi_2 i+ 0xb0
            ecx_22 = var_1cc
            var_1c4_1 = *eax_23
        else
            void* eax_22 = esi_1[0x4c]
            void* edx_8 = esi_1[0x4b]
            var_1c0_1 = edi_2 i+ 0xb0
            var_1d4_1 = esi_1[0x49]
            int32_t ecx_21 = esi_1[0x4a]
            var_1d0 = eax_22
            var_1c4_1 = ecx_21
            ecx_22 = edx_8
            var_1bc_1 = eax_22
            var_1d8 = eax_22
            eax_23 = edi_2 i+ 0xac
            var_1dc_2 = edx_8
        
        int32_t eax_24 = *eax_23
        int32_t var_1b8 = var_1d4_1
        int32_t var_1b4_1 = var_1c4_1
        eax_4 = eax_24 * *var_1c0_1
        void* edx_15 = var_1dc_2
        
        if (eax_4 s> 0x1e)
            var_1f4_1 = "UIStateDrawElementInt"
            var_1f8_1 = 0xa93
            ecx_2 = "el.rows * el.cols <= 30"
            goto label_69b971
        
        if (ecx_22 * var_1bc_1 s> 0x1e)
            var_1f4_1 = "UIStateDrawElementInt"
            var_1f8_1 = 0xa94
            ecx_2 = "dimsUpdate.x * dimsUpdate.y <= 30"
            goto label_69b971
        
        int32_t ecx_26 = 0
        var_e0 = xmm0
        int128_t var_d0_1 = xmm0_1
        int128_t var_c0_1 = xmm0_2
        var_e0.d = xmm0 f+ esi_1[0x55]
        int128_t var_b0_1 = xmm0_3
        int128_t var_a0_1 = var_100
        int128_t var_90_1 = var_1b0
        var_e0:4.d = var_e0:4.d f+ esi_1[0x56]
        int32_t var_1d4_2 = 0
        
        if (var_1d8 s<= 0)
            CookieCheckFunction(eax_4)
            return eax_4
        
        void* eax_25
        
        do
            eax_25 = nullptr
            var_1d8 = nullptr
            
            if (edx_15 s> 0)
                do
                    var_1cc = eax_25
                    int32_t var_1f4_6 = ecx_26
                    int32_t var_1c8_1 = ecx_26
                    void var_160
                    int128_t* eax_27 =
                        sub_6978b0(&var_160, esi_1, edi_2, &var_160, &var_e0, &var_1cc, &var_1b8)
                    var_80 = *eax_27
                    int128_t var_70_1 = eax_27[1]
                    int128_t var_60_1 = eax_27[2]
                    int128_t var_50_1 = eax_27[3]
                    int128_t var_40_1 = eax_27[4]
                    int128_t var_30_1 = eax_27[5]
                    *(sub_6990b0(&var_1cc, esi_1, edi_2, &var_1cc) + 0x434)
                    sub_69b9c0(0x3f800000)
                    edx_15 = var_1dc_2
                    eax_25 = var_1d8 + 1
                    ecx_26 = var_1d4_2
                    var_1d8 = eax_25
                while (eax_25 s< edx_15)
            
            ecx_26 += 1
            var_1d4_2 = ecx_26
        while (ecx_26 s< var_1d0)
        
        CookieCheckFunction(eax_25)
        return eax_25
    case 2
        var_1f4_4 = nullptr
        var_1f8_3 = nullptr
    label_69b5b5:
        void* eax_12 = sub_69ad00(&var_e0, esi_1, edi_2, &var_e0, var_1f8_3, var_1f4_4)
        CookieCheckFunction(eax_12)
        return eax_12
    case 3, 5
        CookieCheckFunction(eax_4)
        return eax_4
    case 4
        if (*(esi_1 + 0x21) != 0)
            CookieCheckFunction(eax_4)
            return eax_4
        
        int32_t edx_6 = *esi_1
        int32_t* eax_13
        
        if (esi_1[0xd] s> edx_6)
            eax_13 = esi_1[0xe]
        else if (*(esi_1 + 0x23) != 0 || esi_1[9].b != 0)
            eax_13 = 3
        else if (*(esi_1 + 0x29) == 0)
            eax_13 = nullptr
        else if (*(esi_1 + 0x2b) == 0)
            eax_13 = 1
        else if (esi_1[0xb].b == 0)
            eax_13 = nullptr
        else
            eax_13 = 2
        
        int32_t* var_1dc_1 = eax_13
        int32_t* eax_14
        
        if (esi_1[0x53] s> edx_6 && esi_1[0x54].b != 0 && eax_13 == 0)
            var_1dc_1 = 1
        label_69b666:
            eax_14 = *(edi_2 i+ 0x128)
            goto label_69b66c
        
        ecx_5 = eax_13
        
        if (eax_13 != 3)
            var_1dc_1 = ecx_5
            
            if (ecx_5 == 2)
                eax_14 = *(edi_2 i+ 0x130)
                var_1dc_1 = ecx_5
                goto label_69b66c
            
            if (ecx_5 == 1)
                goto label_69b666
            
        label_69b670:
            
            if (esi_1[0x25] s<= edx_6)
                eax_14 = *(edi_2 i+ 0x88)
            else
                eax_14 = esi_1[0x26]
        else
            eax_14 = *(edi_2 i+ 0x138)
        label_69b66c:
            
            if (eax_14 == 0)
                goto label_69b670
        
        int32_t var_1f4_5 = 0
        sub_697fa0(&var_e0, esi_1, edi_2, &var_e0, eax_14, ecx_5, nullptr)
        void** eax_17 = 0x140
        
        if (var_1dc_1 != 3)
            eax_17 = 0xf0
        
        var_1d8 = *(eax_17 i+ edi_2)
        void* eax_19 = edi_2 i+ 0x144
        
        if (var_1dc_1 != 3)
            eax_19 = edi_2 i+ 0xf4
        
        var_1d0 = *eax_19
        var_1f4_4 = &var_1d0
        var_1f8_3 = &var_1d8
        goto label_69b5b5
    case 8
        void* ecx_6 = data_147abe8
        eax_4 = esi_1[0x28]
        
        if (ecx_6 == 0)
            var_1f4_1 = "GetGameData"
            var_1f8_1 = 0x45
            var_1fc_1 = "C:\x\ax2017\Engine\Game.h"
            ecx_2 = "gpGameData"
            goto label_69b97b
        
        void* ecx_7 = *(ecx_6 + 0x10)
        void* const esi_2
        
        if (eax_4 != 0)
            uint32_t edx_1 = zx.d(eax_4.w)
            
            if (edx_1 u< *(ecx_7 + 4))
                esi_2 = edx_1 * 0x7c + *ecx_7
                
                if (*(esi_2 + 0x78) != eax_4)
                    esi_2 = nullptr
            else
                esi_2 = nullptr
        else
            esi_2 = nullptr
        
        if (esi_2 != 0)
            float xmm1_1[0x4] =
                *sub_697400(&var_1b0, edi_2 i+ 0x10, &var_e0, &var_1b0, edi_2 i+ 0x20)
            float xmm0_8 = _mm_shuffle_ps(xmm1_1, xmm1_1, 0xaa) f- xmm1_1
            float xmm4_2 = _mm_shuffle_ps(xmm1_1, xmm1_1, 0xff)
            float xmm2_2 = _mm_shuffle_ps(xmm1_1, xmm1_1, 0x55)
            float xmm4_3 = xmm4_2 - xmm2_2
            float xmm1_4 = xmm4_3 f* *(edi_2 i+ 0xa4) + xmm2_2
            float xmm3_3 =
                xmm0_8 f* *(edi_2 i+ 0xa0) f+ xmm1_1 + xmm0_8 f* *(edi_2 i+ 0x98) f+ xmm1_1
            float xmm4_5 = xmm4_3 f* *(edi_2 i+ 0x9c) + xmm2_2
            var_100 = data_bf21e8
            int128_t var_f0_1 = data_bf21f8
            var_f0_1:0xc.d = 0
            var_f0_1:4.d = xmm3_3 * 0.5f
            var_100.d = var_e0:0xc.d
            var_f0_1:8.d = (xmm1_4 + xmm4_5) * 0.5f
            eax_4 = sub_6c24d0(esi_2, &var_100)
        
        CookieCheckFunction(eax_4)
        return eax_4
    default
        var_1f4_1 = "UIStateDrawElementInt"
        var_1f8_1 = 0xaa8
        ecx_2 = "Halt"
        goto label_69b971
